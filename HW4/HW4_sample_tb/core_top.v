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
    reg  [DWIDTH-1:0]    instr; //input
    reg  [2:0]           jump_type;
    reg  [DWIDTH-1:0]    jump_addr;
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
    reg  [DWIDTH-1:0]   rdst; //input
    reg  [DWIDTH-1:0]   rs1_reg_file_out;
    reg  [DWIDTH-1:0]   rs2_reg_file_out;

    // Variables of ALU
    reg  [DWIDTH-1:0]   rs2; //input
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
    reg  [2:0]          R2_jump_type;
    reg  [DWIDTH-1:0]   R2_jump_addr;
    reg                 R2_we_dmem;
    reg                 R2_we_regfile;
    reg  [3:0]          R2_op;
    reg  [1:0]          R2_ssel;
    reg  [DWIDTH-1:0]   R2_imm;
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
        .rs1(R2_rs1_reg_file_out),
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

    // IF
    always @(posedge clk) begin

        /*imem imem_inst(
            .addr(pc),
            .rdata(instr)
        );
        */
        
        if(data_harzard) begin // stall
        end
        else if(branch_harzard) begin // fetch instruction
            R1_instr <= instr;
            R1_pc <= pc;
        end
        else begin
            R1_instr <= instr;
            R1_pc <= pc;
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
        
        if(data_harzard || branch_harzard) begin // add bubble
            R2_pc <= 0;
            R2_jump_type <= 0;
            R2_jump_addr <= 0;
            R2_we_dmem <= 0;
            R2_we_regfile <= 0;
            R2_op <= 0;
            R2_ssel <= 0;
            R2_imm <= 0;
            R2_rdst_id <= 0;
            R2_en_rdata <= 0;
            R2_rs1_reg_file_out <= 0;
            R2_rs2_reg_file_out <= 0;
        end
        else begin
            R2_pc <= R1_pc;
            R2_jump_type <= jump_type;
            R2_jump_addr <= jump_addr;
            R2_we_dmem <= we_dmem;
            R2_we_regfile <= we_regfile;
            R2_op <= op;
            R2_ssel <= ssel;
            R2_imm <= imm;
            R2_rdst_id <= rdst_id;
            R2_en_rdata <= en_rdata;
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
            .rs1(R2_rs1_reg_file_out),
            .rs2(rs2),

            // output
            .rd(rd),
            .zero(zero),
            .overflow(overflow)
        );
        */

        R3_we_dmem = R2_we_dmem;
        R3_rd = rd; // through ALU
        R3_rdst_id = R2_rdst_id;
        R3_rs2_reg_file_out = R2_rs2_reg_file_out;
        R3_we_regfile = R2_we_regfile;
        R3_en_rdata = R2_en_rdata;

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

        R4_rdst_id = R3_rdst_id;
        R4_rdst = rdst; // through dmem
        R4_we_regfile = R3_we_regfile;

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

    // Hazard Control (data)
    always @(posedge clk) begin

        if (R2_we_regfile) begin
            if ((R2_op == 0) && (R2_rdst_id == rs1_id || R2_rdst_id == rs2_id)) begin // R-type
                data_harzard = 1;
            end
            else if ((R2_op != 0) && (R2_rdst_id == rs1_id)) begin // I-type
                data_harzard = 1;
                debug = 1;
            end
            else begin
                data_harzard = 0;
            end
        end
        else if (R2_we_dmem) begin // load-use
            if (R2_rdst_id == rs1_id || R2_rdst_id == rs2_id) begin 
                data_harzard = 1;
            end
            else begin
                data_harzard = 0;
            end
        end
        else
            data_harzard = 0;
    end

    /*always @(posedge clk) begin
        debug <= (R2_rdst_id == rs1_id) ? 1 : 0;
    end*/

    // Hazard Control (branch)
    always @(posedge clk) begin
        if (R2_jump_type == J_TYPE_BEQ) 
            branch_harzard = (R2_rs1_reg_file_out == R2_rs2_reg_file_out)? 1 : 0;
        else
            branch_harzard = 0;
    end

    // EX + MEM mux
    always @(*) begin
        // ra <= R2_pc + 4;
        beq_addr = R2_pc + 4 + (R2_imm << 2);

        if (rst)
            pc = 0;
        else if (data_harzard) begin
        end
        else begin
            case(R2_jump_type) // jump_type's value
                J_TYPE_NOP: pc = R2_pc + 4;
                J_TYPE_BEQ: pc = (R2_rs1_reg_file_out == R2_rs2_reg_file_out)? beq_addr : R2_pc + 4;
                J_TYPE_JAL: pc = {R2_pc[31:28],R2_jump_addr<<2};
                J_TYPE_JR: pc = R2_rs1_reg_file_out;
                J_TYPE_J: pc = {R2_pc[31:28],R2_jump_addr<<2};
                default: pc = R2_pc + 4;
            endcase
        end

        case(R2_ssel) // ssel's value
            2'b00: rs2 = R2_imm;
            2'b01: rs2 = R2_rs2_reg_file_out;
            2'b10: rs2 = R2_pc + 4;
            default: rs2 = R2_rs2_reg_file_out;
        endcase

        rdst = (R3_en_rdata)? rdata : R3_rd;

    end

endmodule