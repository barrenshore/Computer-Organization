module decode #(parameter DWIDTH = 32)
(
    input [DWIDTH-1:0]  instr,   // Input instruction.

    output reg [3 : 0]      op,      // Operation code for the ALU (if used).
    output reg [1 : 0]      ssel,    // Select the signal (if used) for either the immediate value / rs2 / $ra. 00/01/10

    output reg [DWIDTH-1:0] imm,     // The immediate value (if used).
    output reg [4 : 0]      rs1_id,  // register ID for rs (if used).
    output reg [4 : 0]      rs2_id,  // register ID for rt (if used).
    output reg [4 : 0]      rdst_id, // register ID for rd or rt (if used).

    output reg [1 : 0]      jump_type, // Select the signal for either the nop / beq / jal / jr/ j. 000/001/010/011/100
    output reg [DWIDTH-1:0] jump_addr, // jump address (if used)
    output reg              we_dmem, // write-enable
    output reg              we_regfile, // regfile-enable
    output reg              en_rdata // Select the signal (if used) for either the rdst <- rd / rdst <- rdata. 0/1
);

/***************************************************************************************
    ---------------------------------------------------------------------------------
    | R_type |    |   opcode   |   rs   |   rt   |   rd   |   shamt   |    funct    |
    ---------------------------------------------------------------------------------
    | I_type |    |   opcode   |   rs   |   rt   |             immediate            |
    ---------------------------------------------------------------------------------
    | J_type |    |   opcode   |                     address                        |
    ---------------------------------------------------------------------------------
                   31        26 25    21 20    16 15    11 10        6 5           0
 ***************************************************************************************/

    localparam [3:0] OP_AND = 4'b0000,
                     OP_OR  = 4'b0001,
                     OP_ADD = 4'b0010,
                     OP_SUB = 4'b0110,
                     OP_NOR = 4'b1100,
                     OP_SLT = 4'b0111,
                     OP_NOT_DEFINED = 4'b1111;

    // Jump type
    localparam [2:0] J_TYPE_NOP = 3'b000,
                     J_TYPE_BEQ = 3'b001,
                     J_TYPE_JAL = 3'b010,
                     J_TYPE_JR  = 3'b011,
                     J_TYPE_J   = 3'b100;

    always @ * begin
        case(instr[DWIDTH-1:26]) // opcode's value

            6'b000000: begin // R_type

                case(instr[5:0]) // funct's value

                    6'b100100: begin
                        op = OP_AND;
                        ssel = 2'b01;
                        imm = 0;
                        rs1_id = instr[25:21]; // rs
                        rs2_id = instr[20:16]; // rt
                        rdst_id = instr[15:11]; // rd
                        jump_type = J_TYPE_NOP;
                        jump_addr = 0;
                        we_dmem = 0;
                        we_regfile = 1;
                        en_rdata = 0;
                    end

                    6'b100101: begin
                        op = OP_OR;
                        ssel = 2'b01;
                        imm = 0;
                        rs1_id = instr[25:21]; // rs
                        rs2_id = instr[20:16]; // rt
                        rdst_id = instr[15:11]; // rd
                        jump_type = J_TYPE_NOP;
                        jump_addr = 0;
                        we_dmem = 0;
                        we_regfile = 1;
                        en_rdata = 0;
                    end

                    6'b100000: begin
                        op = OP_ADD;
                        ssel = 2'b01;
                        imm = 0;
                        rs1_id = instr[25:21]; // rs
                        rs2_id = instr[20:16]; // rt
                        rdst_id = instr[15:11]; // rd
                        jump_type = J_TYPE_NOP;
                        jump_addr = 0;
                        we_dmem = 0;
                        we_regfile = 1;
                        en_rdata = 0;
                    end
                    
                    6'b100010: begin
                        op = OP_SUB;
                        ssel = 2'b01;
                        imm = 0;
                        rs1_id = instr[25:21]; // rs
                        rs2_id = instr[20:16]; // rt
                        rdst_id = instr[15:11]; // rd
                        jump_type = J_TYPE_NOP;
                        jump_addr = 0;
                        we_dmem = 0;
                        we_regfile = 1;
                        en_rdata = 0;
                    end

                    6'b100111: begin
                        op = OP_NOR;
                        ssel = 2'b01;
                        imm = 0;
                        rs1_id = instr[25:21]; // rs
                        rs2_id = instr[20:16]; // rt
                        rdst_id = instr[15:11]; // rd
                        jump_type = J_TYPE_NOP;
                        jump_addr = 0;
                        we_dmem = 0;
                        we_regfile = 1;
                        en_rdata = 0;
                    end
                    
                    6'b101010: begin
                        op = OP_SLT;
                        ssel = 2'b01;
                        imm = 0;
                        rs1_id = instr[25:21]; // rs
                        rs2_id = instr[20:16]; // rt
                        rdst_id = instr[15:11]; // rd
                        jump_type = J_TYPE_NOP;
                        jump_addr = 0;
                        we_dmem = 0;
                        we_regfile = 1;
                        en_rdata = 0;
                    end

                    6'b001000: begin // jr
                        op = OP_NOT_DEFINED;
                        ssel = 2'b01;
                        imm = 0;
                        rs1_id = instr[25:21]; // rs
                        rs2_id = instr[20:16]; // rt
                        rdst_id = instr[15:11]; // rd
                        jump_type = J_TYPE_JR;
                        jump_addr = 0;
                        we_dmem = 0;
                        we_regfile = 1;
                        en_rdata = 0;
                    end

                    default: begin
                        op = OP_NOT_DEFINED;
                        ssel = 0;
                        imm = 0;
                        rs1_id = instr[25:21]; // rs
                        rs2_id = instr[20:16]; // rt
                        rdst_id = instr[15:11]; // rd
                        jump_type = J_TYPE_NOP;
                        jump_addr = 0;
                        we_dmem = 0;
                        we_regfile = 0;
                        en_rdata = 0;
                    end
                endcase
            end

            6'b001000: begin // I_type addi
                op = OP_ADD;
                ssel = 2'b00;
                imm = {{16{instr[15]}}, instr[15:0]}; // immediate(32-signed)
                rs1_id = instr[25:21]; // rs
                rs2_id = instr[20:16]; // rt
                rdst_id = instr[20:16]; // rt
                jump_type = J_TYPE_NOP;
                jump_addr = 0;
                we_dmem = 0;
                we_regfile = 1;
                en_rdata = 0;
            end

            6'b001010: begin //I_type slti
                op = OP_SLT;
                ssel = 2'b00;
                imm = {{16{instr[15]}}, instr[15:0]}; // immediate(32-signed)
                rs1_id = instr[25:21]; // rs
                rs2_id = instr[20:16]; // rt
                rdst_id = instr[20:16]; // rt
                jump_type = J_TYPE_NOP;
                jump_addr = 0;
                we_dmem = 0;
                we_regfile = 1;
                en_rdata = 0;
            end

            6'b100011: begin // I_type lw
                op = OP_ADD;
                ssel = 2'b00;
                imm = {{16{instr[15]}}, instr[15:0]}; // immediate(32-signed)
                rs1_id = instr[25:21]; // rs
                rs2_id = instr[20:16]; // rt
                rdst_id = instr[20:16]; // rt
                jump_type = J_TYPE_NOP;
                jump_addr = 0;
                we_dmem = 0;
                we_regfile = 1;
                en_rdata = 1;
            end
            
            6'b101011: begin // I_type sw
                op = OP_ADD;
                ssel = 2'b00;
                imm = {{16{instr[15]}}, instr[15:0]}; // immediate(32-signed)
                rs1_id = instr[25:21]; // rs
                rs2_id = instr[20:16]; // rt
                rdst_id = instr[20:16]; // rt
                jump_type = J_TYPE_NOP;
                jump_addr = 0;
                we_dmem = 1;
                we_regfile = 0;
                en_rdata = 0;
            end
            
            6'b000100: begin // I_type beq
                op = OP_NOT_DEFINED;
                ssel = 2'b00;
                imm = {{16{instr[15]}}, instr[15:0]}; // immediate(32-signed)
                rs1_id = instr[25:21]; // rs
                rs2_id = instr[20:16]; // rt
                rdst_id = instr[20:16]; // rt
                jump_type = J_TYPE_BEQ;
                jump_addr = 0;
                we_dmem = 0;
                we_regfile = 0;
                en_rdata = 0;
            end

            6'b000011: begin // J_type jal
                op = OP_NOT_DEFINED;
                ssel = 0;
                imm = 0;
                rs1_id = 0; // rs
                rs2_id = 0; // rt
                rdst_id = 0; // rd
                jump_type = J_TYPE_JAL;
                jump_addr = {{6{instr[25]}}, instr[25:0]}; // address(32-signed) *
                we_dmem = 0;
                we_regfile = 0;
                en_rdata = 0;
            end

            6'b000010: begin // J_type j
                op = OP_NOT_DEFINED;
                ssel = 0;
                imm = 0;
                rs1_id = 0; // rs
                rs2_id = 0; // rt
                rdst_id = 0; // rd
                jump_type = J_TYPE_J;
                jump_addr = {{6{instr[25]}}, instr[25:0]}; // address(32-signed) *
                we_dmem = 0;
                we_regfile = 0;
                en_rdata = 0;
            end

            default: begin
                op = OP_NOT_DEFINED;
                ssel = 0;
                imm = 0;
                rs1_id = 0; // rs
                rs2_id = 0; // rt
                rdst_id = 0; // rd
                jump_type = J_TYPE_NOP;
                jump_addr = 0;
                we_dmem = 0;
                we_regfile = 0;
                en_rdata = 0;
            end

        endcase
    end

endmodule