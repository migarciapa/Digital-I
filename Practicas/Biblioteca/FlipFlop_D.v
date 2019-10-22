`timescale 1ns / 1ps

module FlipFlop_D(D,Q,R,clk);
	
	input D;
	input R;
	input clk;
	output reg Q;
	
	always@(posedge clk or posedge R)
		if(R)
			Q=0;
		else
			Q=D;
	
endmodule
