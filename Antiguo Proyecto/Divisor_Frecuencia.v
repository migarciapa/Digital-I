`timescale 1ns / 1ps

module Divisor_Frecuencia(clk, relacion, Oclk);
	
	input clk;
	output reg Oclk = 0;
	input [31:0] relacion;
	
	integer i = 0;
	
	always @(posedge clk) begin
		i=i+1;
		if(i==relacion) begin
			i=0;
			Oclk=~Oclk;
		end
	end
	
endmodule
