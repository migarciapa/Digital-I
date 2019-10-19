`timescale 1ns / 1ps

module Contador_2B(clk, O);
	
	input clk;
	output reg [1:0] O = 0;
	
	always@(posedge clk) begin
		O=O+1;
	end
	
endmodule
