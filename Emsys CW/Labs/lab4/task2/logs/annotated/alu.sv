	// verilator_coverage annotation
	// emsys_alu : a simple ALU-like unit for the lab4 of the EmSys course 
	//
	
	module alu (
 000022	    input clk,
%000003	    input rst,
	
	    // Inputs
%000019		input logic [7:0] a,
%000006		input logic [7:0] b,	
%000011		input logic [2:0] op,
	
	    // Outputs
%000040		output logic [7:0] q
	);
	// -------------------------------
	
%000025	logic [7:0] w;
%000042	logic [7:0] w_new;
 000048	logic [7:0] add;
 000050	logic [7:0] sub;
%000019	logic [7:0] sr1;
%000026	logic [7:0] sl1;
%000015	logic [7:0] and1;
%000027	logic [7:0] or1;
%000019	logic [7:0] set;
%000025	logic [7:0] unchanged; 
	
	assign add = w + a;
	assign sub  = w - a;
	assign sr1  = (w>>1);
	assign sl1  = (w<<1);
	assign and1  = w & a;
	assign or1  = w | a;
	assign set = a;
	assign unchanged  = w;
	
 000022	always_ff @(posedge clk) begin
 000011	    w <= w_new;
	
%000008	    if(rst) begin
%000007	    verilator_coverage: (next point on previous line)

%000004		    w <= 8'b0;
	    end
	
	end
	
	
		
 000050	always_comb begin
 000025		case(op)
%000008		       3'b000: w_new = add; 
%000004		       3'b001: w_new = sub;
%000004		       3'b010: w_new = sr1;
 000030		       3'b011: w_new = sl1;
%000000		       3'b100: w_new = and1;
%000000		       3'b101: w_new = or1;
%000004		       3'b110: w_new = set;
%000000		       3'b111: w_new = unchanged;
		       
	      endcase
		
	end
	
 000050	always_comb begin
%000004	    if(op == 3'b110) begin
%000002		    q = 8'd0;
	    end
%000000		else if (op == 3'b111) begin
 000023		verilator_coverage: (next point on previous line)

%000000			    q = 8'd0;
		    end 
 000023		    else begin
 000023		    q = w_new;
	    end 
	  
	    
		
	end
	
	endmodule
	
	
