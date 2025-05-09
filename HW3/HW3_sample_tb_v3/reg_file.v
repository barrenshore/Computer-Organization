module reg_file #(parameter DWIDTH = 32)
(
    input                 clk,      // system clock
    input                 rst,      // system reset

    input  [4 : 0]        rs1_id,   // register ID of data #1
    input  [4 : 0]        rs2_id,   // register ID of data #2 (if any)

    input                 we,       // if (we) R[rdst_id] <= rdst
    input  [4 : 0]        rdst_id,  // destination register ID
    input  [DWIDTH-1 : 0] rdst,     // input to destination register

    output [DWIDTH-1 : 0] rs1,      // register operand #1
    output [DWIDTH-1 : 0] rs2       // register operand #2 (if any)
);

reg [DWIDTH-1:0] R[0:31];

initial begin
    for (int i = 0; i < 32; i = i + 1) begin
        R[i] = 0;
    end
end

always @(posedge clk) begin
    if (rst) begin
        for (int i = 0; i < 32; i = i + 1) begin
            R[i] = 0;
        end
    end
    else if (we) begin
        R[rdst_id] <= rdst;
    end
end

assign rs1 = R[rs1_id];
assign rs2 = R[rs2_id];

endmodule
