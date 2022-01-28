	// verilator_coverage annotation
	// Busses and Muxes Testbench
	//
	// author: stf
	
	module top_tb(
 000022	    input clk,
%000003	    input rst,
	
%000019	    input logic [7:0] a_in,
%000006	    input logic [7:0] b_in,
%000011	    input logic [2:0] op_in,
	
%000040	    output logic [7:0] q_out
	);
	
	   alu alu_inst(
	        .clk(clk),
	        .rst(rst),
		// inputs
	        .a(a_in),
	        .b(b_in),
	        .op(op_in),
		
		// outputs
	        .q(q_out)
	   );
	
 000022	   always_ff @(posedge clk) begin 
%000014	        if(!rst) begin
%000004	        verilator_coverage: (next point on previous line)

%000007	                $display("opcode=%b, a=%d, b=%d, q=%d ", op_in, a_in, b_in, q_out);
	        end
	   end
	
	
	   // Print some stuff as an example
%000002	   initial begin
%000002	      if ($test$plusargs("trace") != 0) begin
%000000	      verilator_coverage: (next point on previous line)

%000001	         $display("[%0t] Tracing to logs/vlt_dump.vcd...\n", $time);
%000001	         $dumpfile("logs/vlt_dump.vcd");
%000001	         $dumpvars();
	      end
%000001	      $display("[%0t] Model running...\n", $time);
	   end
	
	endmodule
	
