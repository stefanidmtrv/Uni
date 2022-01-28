	// verilator_coverage annotation
	// emsys_alu : a simple ALU-like unit for the lab4 of the EmSys course 
	//
	
	module alu (
	        // Inputs
%000036		input logic [7:0] a,
%000013		input logic [7:0] b,
	
%000011		input logic [2:0] op,
	
	        // Outputs
%000024		output logic [7:0] q
	);
	// -------------------------------
	
 000034	always_comb begin
 000017		case (op)
%000004			3'b000: q = a + b;
%000004			3'b001: q = a - b;
%000004			3'b010: q = (a >> 1);
%000004			3'b100: q = a & b;
%000010			3'b011: q = (a << 1);
%000008			3'b101: q = a | b;
	
%000000			default: q = 0;
	
		endcase
	
	end
	
	endmodule
	
	
