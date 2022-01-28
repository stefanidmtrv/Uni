// emsys_alu : a simple ALU-like unit for the lab4 of the EmSys course 
//

module alu (
    input clk,
    input rst,

    // Inputs
	input logic [7:0] a,
	input logic [7:0] b,	
	input logic [2:0] op,

    // Outputs
	output logic [7:0] q
);
// -------------------------------

logic [7:0] w;
logic [7:0] w_new;
logic [7:0] add;
logic [7:0] sub;
logic [7:0] sr1;
logic [7:0] sl1;
logic [7:0] and1;
logic [7:0] or1;
logic [7:0] set;
logic [7:0] unchanged; 

assign add = w + a;
assign sub  = w - a;
assign sr1  = (w>>1);
assign sl1  = (w<<1);
assign and1  = w & a;
assign or1  = w | a;
assign set = a;
assign unchanged  = w;

always_ff @(posedge clk) begin
    w <= w_new;

    if(rst) begin
	    w <= 8'b0;
    end

end


	
always_comb begin
	case(op)
	       3'b000: w_new = add; 
	       3'b001: w_new = sub;
	       3'b010: w_new = sr1;
	       3'b011: w_new = sl1;
	       3'b100: w_new = and1;
	       3'b101: w_new = or1;
	       3'b110: w_new = set;
	       3'b111: w_new = unchanged;
	       
      endcase
	
end

always_comb begin
    if(op == 3'b110) begin
	    q = 8'd0;
    end
	else if (op == 3'b111) begin
		    q = 8'd0;
	    end 
	    else begin
	    q = w_new;
    end 
  
    
	
end

endmodule

