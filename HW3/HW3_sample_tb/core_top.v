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

    // $ra
    reg  [DWIDTH-1:0]   ra;

    // beq's address
    reg  [DWIDTH-1:0]   beq_addr;

    // Variables of Decoder
    reg [DWIDTH-1:0]    instr; //input
    reg [2:0]           jump_type;
    reg [DWIDTH-1:0]    jump_addr;
    reg                 we_regfile;
    reg                 we_dmem;
    reg                 en_rdata;
    reg  [3:0]          op;
    reg                 ssel;
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

    always @(posedge clk) begin
        if (rst)
            pc <= 0;
        else begin
            case(jump_type) // jump_type's value
                J_TYPE_NOP: pc <= pc + 4;
                J_TYPE_BEQ: begin
                    pc <= (rs1_reg_file_out == rs2_reg_file_out)? beq_addr : pc + 4;
                end
                J_TYPE_JAL: begin 
                    we_regfile = 1;
                    rdst_id = 31;
                    rdst = pc + 4;
                    pc <= {pc[31:28],jump_addr<<2};
                end
                J_TYPE_JR: pc <= rs1_reg_file_out;
                J_TYPE_J: pc <= {pc[31:28],jump_addr<<2};
                default: pc <= pc + 4;
            endcase
        end
    end
    
    imem imem_inst(
        .addr(pc),
        .rdata(instr)
    );

    decode decode_inst (
        // input
        .instr(instr),

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

        .we(we_regfile),
        .rdst_id(rdst_id),
        .rdst(rdst),

        // output 
        .rs1(rs1_reg_file_out), // rs
        .rs2(rs2_reg_file_out)  // rt
    );

    alu alu_inst (
        // input
        .op(op),
        .rs1(rs1_reg_file_out),
        .rs2(rs2),

        // output
        .rd(rd),
        .zero(zero),
        .overflow(overflow)
    );

    // Dmem
    dmem dmem_inst (
        .clk(clk),
        .addr(rd),
        .we(we_dmem),
        .wdata(rs2_reg_file_out),
        .rdata(rdata)
    );

    always @ * begin
        
        ra = pc + 4;

        beq_addr = ra + (imm << 2);
        
        rdst = (en_rdata)? rdata : rd;
        
        case(ssel) // ssel's value
            2'b00: rs2 = imm;
            2'b01: rs2 = rs2_reg_file_out;
            2'b10: rs2 = ra;
            default: begin
            end
        endcase
    end

endmodule