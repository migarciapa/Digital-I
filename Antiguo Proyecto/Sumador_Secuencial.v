`timescale 1ns / 1ps

module Sumador_Secuencial(A,B,clk,D);
	
	input A;
	input B;
	input clk;
	
	output [3:0] D;
	
	wire Ci, Co, S;
	
	Sumador sum (.A(A),.B(B),.Ci(Ci),.S(S),.Co(Co);
	FipFlop_D ffd (.D(Co),.clk(clk),.Q(Ci));
	
	Contador_2B
	
endmodule
