module core_top #(
    parameter DWIDTH = 32
)(
    input                 clk,
    input                 rst
);

    // Jump type
    localparam [2:0] J_TYPE_NOP = 3'b000,
                     J_TYPE_BEQ = 3'b001,
                     J_TYPE_JAL = 3'b010,
                     J_TYPE_JR  = 3'b011,
                     J_TYPE_J   = 3'b100;

    // Program Counter signals
    reg  [DWIDTH-1:0]   pc;

    // pc + 4
    reg  [DWIDTH-1:0]   ra;

    // beq's address
    reg  [DWIDTH-1:0]   beq_addr;

    // Variables of Decoder
    reg  [DWIDTH-1:0]   instr; // input
    reg  [2:0]          jump_type;
    reg  [DWIDTH-1:0]   jump_addr;
    reg                 we_regfile;
    reg                 we_dmem;
    reg                 en_rdata;
    reg  [3:0]          op;
    reg  [1:0]          ssel;
    reg  [DWIDTH-1:0]   imm;
    reg  [4:0]          rs1_id;
    reg  [4:0]          rs2_id;
    reg  [4:0]          rdst_id;

    // Variables of Reg file
    reg  [DWIDTH-1:0]   rdst; // input
    reg  [DWIDTH-1:0]   rs1_reg_file_out;
    reg  [DWIDTH-1:0]   rs2_reg_file_out;

    // Variables of ALU
    reg  [DWIDTH-1:0]   rs1; // input
    reg  [DWIDTH-1:0]   rs2_tmp; // for mux
    reg  [DWIDTH-1:0]   rs2; // input
    reg  [DWIDTH-1:0]   rd;
    reg                 zero;
    reg                 overflow;

    // Variables of Dmem
    reg  [DWIDTH-1:0]   rdata;

    // Register of IF stage
    reg  [DWIDTH-1:0]   R1_pc;
    reg  [DWIDTH-1:0]   R1_instr; 

    // Register of ID stage
    reg  [DWIDTH-1:0]   R2_pc;
    reg                 R2_we_dmem;
    reg                 R2_we_regfile;
    reg  [3:0]          R2_op;
    reg  [1:0]          R2_ssel;
    reg  [DWIDTH-1:0]   R2_imm;
    reg  [4:0]          R2_rs1_id;
    reg  [4:0]          R2_rs2_id;
    reg  [4:0]          R2_rdst_id;
    reg                 R2_en_rdata;
    reg  [DWIDTH-1:0]   R2_rs1_reg_file_out;
    reg  [DWIDTH-1:0]   R2_rs2_reg_file_out;

    // Register of EX stage
    reg                 R3_we_dmem;
    reg  [DWIDTH-1:0]   R3_rd;
    reg  [4:0]          R3_rdst_id;
    reg  [DWIDTH-1:0]   R3_rs2_reg_file_out;
    reg                 R3_we_regfile;
    reg                 R3_en_rdata;

    // Register of MEM stage
    reg  [4:0]          R4_rdst_id;
    reg  [DWIDTH-1:0]   R4_rdst;
    reg                 R4_we_regfile;

    // Hazard Control
    reg                 data_harzard;
    reg                 branch_harzard;
    
    // Forward
    reg [1:0]           Forward_A;
    reg [1:0]           Forward_B;
    reg [1:0]           Forward_rs1;
    reg [1:0]           Forward_rs2;

    // Branch Predict   
    reg [DWIDTH-1:0]    index;
    reg [DWIDTH-1:0]    R1_index;
    reg [33:0]          BHT [1:0]; // n = 2
    // | Valid bit | Taken / Not taken | Target address |
    // --------------------------------------------------
    //       33             32          31             0

    initial begin
        BHT[0] = 34'b0100000000000000000000000000000000;
        BHT[1] = 34'b0100000000000000000000000000000000;
    end

    // Debug
    reg                 debug;
    
    imem imem_inst(
        .addr(pc),
        .rdata(instr)
    );

    decode decode_inst (
        // input
        .instr(R1_instr),

        // output  
        .jump_type(jump_type),
        .jump_addr(jump_addr),
        .we_regfile(we_regfile),
        .we_dmem(we_dmem),
        .en_rdata(en_rdata),

        .op(op),
        .ssel(ssel),
        .imm(imm),
        .rs1_id(rs1_id),
        .rs2_id(rs2_id),
        .rdst_id(rdst_id)
    );

    reg_file reg_file_inst (
        // input
        .clk(clk),
        .rst(rst),

        .rs1_id(rs1_id),
        .rs2_id(rs2_id),

        .we(R4_we_regfile),
        .rdst_id(R4_rdst_id),
        .rdst(R4_rdst),

        // output 
        .rs1(rs1_reg_file_out), // rs
        .rs2(rs2_reg_file_out)  // rt
    );

    alu alu_inst (
        // input
        .op(R2_op),
        .rs1(rs1),
        .rs2(rs2),

        // output
        .rd(rd),
        .zero(zero),
        .overflow(overflow)
    );

    dmem dmem_inst (
        .clk(clk),
        .addr(R3_rd),
        .we(R3_we_dmem),
        .wdata(R3_rs2_reg_file_out),
        .rdata(rdata)
    );

    // pc
    always @(posedge clk) begin

        if (rst)
            pc <= 0;
        else begin
            case(jump_type) // jump_type's value
                J_TYPE_NOP: pc <= ra;
                J_TYPE_BEQ: pc <= (rs1_reg_file_out == rs2_reg_file_out)? beq_addr : ra;
                J_TYPE_JAL: pc <= {R1_pc[31:28],jump_addr<<2};
                J_TYPE_JR: pc <= rs1_reg_file_out;
                J_TYPE_J: pc <= {R1_pc[31:28],jump_addr<<2};
                default: pc <= ra;
            endcase
        end
    end

    // IF
    always @(posedge clk) begin

        /*imem imem_inst(
            .addr(pc),
            .rdata(instr)
        );
        */

        if(rst) begin
            R1_instr <= 0;
            R1_pc <= 0;
        end
        else if(jump_type == J_TYPE_BEQ && rs1_reg_file_out == rs2_reg_file_out) begin
            R1_instr <= 0;
            R1_pc <= R1_pc;
        end
        else begin
            R1_instr <= instr;
            R1_pc <= ra;
        end

    end

    // ID
    always @(posedge clk) begin
        
        /*decode decode_inst (
            // input
            .instr(R1_instr),

            // output  
            .jump_type(jump_type),
            .jump_addr(jump_addr),
            .we_regfile(we_regfile),
            .we_dmem(we_dmem),
            .en_rdata(en_rdata),

            .op(op),
            .ssel(ssel),
            .imm(imm),
            .rs1_id(rs1_id),
            .rs2_id(rs2_id),
            .rdst_id(rdst_id)
        );
        reg_file reg_file_inst (
            // input
            .clk(clk),
            .rst(rst),

            .rs1_id(rs1_id),
            .rs2_id(rs2_id),

            .we(R4_we_regfile),
            .rdst_id(R4_rdst_id),
            .rdst(R4_rdst),

            // output 
            .rs1(rs1_reg_file_out), // rs
            .rs2(rs2_reg_file_out)  // rt
        );
        */

        // BHT
        if (jump_type == J_TYPE_BEQ) begin
            if (BHT[R1_index][33] == 0) begin
                BHT[R1_index] <= {1'b1, (rs1 == rs2), R1_pc};
            end
        end

        if (rst) begin
            R2_we_regfile <= 0;
            R2_we_dmem <= 0;
            R2_en_rdata <= 0;
            R2_op <= 0;
            R2_ssel <= 0;
            R2_imm <= 0;
            R2_rs1_id <= 0;
            R2_rs2_id <= 0;
            R2_rdst_id <= 0;
            R2_rs1_reg_file_out <= 0;
            R2_rs2_reg_file_out <= 0;
        end
        else begin
            R2_we_regfile <= we_regfile;
            R2_we_dmem <= we_dmem;
            R2_en_rdata <= en_rdata;
            R2_op <= op;
            R2_ssel <= ssel;
            R2_imm <= imm;
            R2_rs1_id <= rs1_id;
            R2_rs2_id <= rs2_id;
            R2_rdst_id <= rdst_id;
            R2_rs1_reg_file_out <= rs1_reg_file_out;
            R2_rs2_reg_file_out <= rs2_reg_file_out;
        end

    end
    
    // EX
    always @(posedge clk) begin
        
        /*
        alu alu_inst (
            // input
            .op(R2_op),
            .rs1(rs1),
            .rs2(rs2),

            // output
            .rd(rd),
            .zero(zero),
            .overflow(overflow)
        );
        */

        if (rst) begin
            R3_we_regfile <= 0;
            R3_we_dmem <= 0;
            R3_en_rdata <= 0;
            R3_rd <= 0;
            R3_rdst_id <= 0;
            R3_rs2_reg_file_out <= 0;
        end
        else begin
            R3_we_regfile <= R2_we_regfile;
            R3_we_dmem <= R2_we_dmem;
            R3_en_rdata <= R2_en_rdata;
            R3_rd <= rd;
            R3_rdst_id <= R2_rdst_id;
            R3_rs2_reg_file_out <= R2_rs2_reg_file_out;
        end

    end
    
    // MEM
    always @(posedge clk) begin

        /*dmem dmem_inst (
            .clk(clk),
            .addr(R3_rd),
            .we(R3_we_dmem),
            .wdata(R3_rs2_reg_file_out),
            .rdata(rdata)
        );
        */

        if (rst) begin
            R4_we_regfile <= 0;
            R4_rdst <= 0;
            R4_rdst_id <= 0;
        end
        else begin
            R4_we_regfile <= R3_we_regfile;
            R4_rdst <= rdst;
            R4_rdst_id <= R3_rdst_id;
        end

    end
    
    // WB
    always @(posedge clk) begin

        /*reg_file reg_file_inst (
            // input
            .clk(clk),
            .rst(rst),

            .rs1_id(rs1_id),
            .rs2_id(rs2_id),

            .we(R4_we_regfile),
            .rdst_id(R4_rdst_id),
            .rdst(R4_rdst),

            // output 
            .rs1(rs1_reg_file_out), // rs
            .rs2(rs2_reg_file_out)  // rt
        );
        */

    end

    // MUX
    always @(*) begin

        // ID
        beq_addr = R1_pc + (imm << 2);
        R1_index = R1_pc % 2; // BHT

        // IF
        ra = pc + 4;
        index = pc % 2; // BHT

        // EX
        case(R2_ssel) // ssel's value
            2'b00: rs2_tmp = R2_imm;
            2'b01: rs2_tmp = R2_rs2_reg_file_out;
            2'b10: rs2_tmp = R2_pc;
            default: rs2_tmp = R2_rs2_reg_file_out;
        endcase

        // MEM
        rdst = (R3_en_rdata)? rdata : R3_rd;

        // Forward Unit (data hazard)
        if (R3_we_regfile && (R3_rdst_id != 0) && (R3_rdst_id == R2_rs1_id)) begin // EX
            Forward_A = 2'b10;
        end
        else if (R4_we_regfile && (R4_rdst_id != 0) && (R4_rdst_id == R2_rs1_id)) begin // MEM
            Forward_A = 2'b01;
        end
        else begin
            Forward_A = 2'b00;
        end

        if (R3_we_regfile && (R3_rdst_id != 0) && (R3_rdst_id == R2_rs2_id)) begin// EX
            Forward_B = 2'b10;
        end
        else if (R4_we_regfile && (R4_rdst_id != 0) && (R4_rdst_id == R2_rs2_id)) begin // MEM
            Forward_B = 2'b01;
        end
        else begin
            Forward_B = 2'b00;
        end

        case(Forward_A)
            2'b00: rs1 = R2_rs1_reg_file_out;
            2'b01: rs1 = R4_rdst;
            2'b10: rs1 = R3_rd;
            default: rs1 = R2_rs1_reg_file_out;
        endcase

        case(Forward_B)
            2'b00: rs2 = rs2_tmp;
            2'b01: rs2 = R4_rdst;
            2'b10: rs2 = R3_rd;
            default: rs2 = rs2_tmp;
        endcase

        // Forward Unit (data hazard caused by branch)
        if (jump_type == J_TYPE_BEQ) begin
            if (R3_we_regfile && (R3_rdst_id != 0) && (R3_rdst_id == rs1_id)) begin // EX
                Forward_rs1 = 2'b10;
            end
            else if (R4_we_regfile && (R4_rdst_id != 0) && (R4_rdst_id == rs1_id)) begin // MEM
                Forward_rs1 = 2'b01;
            end
            else begin
                Forward_rs1 = 2'b00;
            end

            if (R3_we_regfile && (R3_rdst_id != 0) && (R3_rdst_id == rs2_id)) begin// EX
                Forward_rs2 = 2'b10;
            end
            else if (R4_we_regfile && (R4_rdst_id != 0) && (R4_rdst_id == rs2_id)) begin // MEM
                Forward_rs2 = 2'b01;
            end
            else begin
                Forward_rs2 = 2'b00;
            end
        end
        else begin
            Forward_rs1 = 2'b00;
            Forward_rs2 = 2'b00;
        end

        case(Forward_rs1)
            2'b00: rs1_reg_file_out = rs1_reg_file_out;
            2'b01: rs1_reg_file_out = R4_rdst;
            2'b10: rs1_reg_file_out = R3_rd;
            default: rs1_reg_file_out = rs1_reg_file_out;
        endcase

        case(Forward_rs2)
            2'b00: rs2_reg_file_out = rs2_reg_file_out;
            2'b01: rs2_reg_file_out = R4_rdst;
            2'b10: rs2_reg_file_out = R3_rd;
            default: rs2_reg_file_out = rs2_reg_file_out;
        endcase

    end

endmodule