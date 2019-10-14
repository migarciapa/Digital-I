`timescale 1ns / 1ps

module FlipFlop_D(D,clk,Q);
	
	input D;
	input clk;
	output reg Q = 0;
	
	always@(posedge clk)
		Q=D;
	
endmodule
