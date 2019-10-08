`timescale 1ns / 1ps

module Contador_2B(clk, O);
	
	integer i=0;
	
	input clk;
	output reg [1:0] O = 0;
	
	always@(posedge clk) begin
		for(i=0;i<2;i=i+1)begin
			O[i]=~O[i];
			if(O[i])begin
				i=2;
			end
		end
	end
	
endmodule
