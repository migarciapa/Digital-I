`timescale 1ns / 1ps

module Divisor_Frecuencia(clk, relation, Oclk);
	
	input [31:0] relation;
	input clk;
	output reg Oclk = 0;
	
	integer i = 0;
	
	always@(posedge clk or negedge clk)
		if(i<relation)
			i=i+1;
		else begin
			i=1;
			Oclk=~Oclk;
		end
		
	
endmodule
