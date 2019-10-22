`timescale 1ns / 1ps

module Main(A,B,clk,D,An);
	
	input clk;
	input [3:0] A;
	input [3:0] B;
	output [6:0] D;
	output [3:0] An;
	
	wire Aclk;
	wire [3:0] S;
	wire [15:0] So;
	wire Co;
	
	Divisor_Frecuencia div (.clk(clk),.relacion(25000),.Oclk(Aclk));
	Sumador_4B sum (.X(A),.Y(B),.S(S),.Co(Co));
	Decodificador_BCD_16B bcd (.I({Co,S}),.clk(Aclk),.O(So));
	Displayer_4_7S dis (.D(D),.An(An),.clk(Aclk),.X(So));
	
endmodule
