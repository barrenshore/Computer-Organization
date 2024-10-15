module alu #(parameter DWIDTH = 32)
(
    input  [3 : 0]        op,   // Operation to perform.
    input  [DWIDTH-1 : 0] rs1,  // Input data #1.
    input  [DWIDTH-1 : 0] rs2,  // Input data #2.
    output reg [DWIDTH-1 : 0] rd,   // Result of computation.
    output reg zero,                // zero = 1 if rd is 0, 0 otherwise.
    output reg overflow             // overflow = 1 if overflow happens.
);

    always @ * begin
        case(op)
            4'b0000: begin
                rd = rs1 & rs2;
                zero = (rd == 0);
                overflow = 0;
            end
            4'b0001: begin
                rd = rs1 | rs2;
                zero = (rd == 0);
                overflow = 0;
            end
            4'b0010: begin
                rd = rs1 + rs2;
                zero = (rd == 0);
                overflow = (($signed(rs1) >= 0) & ($signed(rs2) >= 0) & ($signed(rd) < 0)) | (($signed(rs1) < 0) & ($signed(rs2) < 0) & ($signed(rd) >= 0));
            end
            4'b0110: begin
                rd = rs1 - rs2;
                zero = (rd == 0);
                overflow = (($signed(rs1) >= 0) & ($signed(rs2) < 0) & ($signed(rd) < 0)) | (($signed(rs1) < 0) & ($signed(rs2) >= 0) & ($signed(rd) >= 0));
            end
            4'b1100: begin
                rd = ~(rs1 | rs2);
                zero = (rd == 0);
                overflow = 0;
            end
            4'b0111: begin
                if(rs1[31]==1&&rs2[31]==0)
                    rd = 1;
                else if(rs1[31]==0&&rs2[31]==1)
                    rd = 0;
                else
                    rd = rs1 < rs2;
                zero = (rd == 0);
                overflow = rd;
            end
            default: begin
                rd = 0;
                zero = 0;
                overflow = 0;
            end
        endcase
    end
endmodule
