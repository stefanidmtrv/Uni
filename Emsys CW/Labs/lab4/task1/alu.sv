// emsys_alu : a simple ALU-like unit for the lab4 of the EmSys course 
//

module alu (
        // Inputs
	input logic [7:0] a,
	input logic [7:0] b,

	input logic [2:0] op,

        // Outputs
	output logic [7:0] q
);
// -------------------------------

always_comb begin
	case (op)
		3'b000: q = a + b;
		3'b001: q = a - b;
		3'b010: q = (a >> 1);
		3'b100: q = a & b;
		3'b011: q = (a << 1);
		3'b101: q = a | b;

		default: q = 0;

	endcase

end

endmodule

