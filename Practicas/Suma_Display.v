`timescale 1ns / 1ps

module Suma_Display(A,B,clk,D,An);
	
	input [3:0] A;
	input [3:0] B;
	input clk;
	output [6:0] D;
	output [3:0] An;
	
	wire [3:0] S;
	wire Co;
	wire cont;
	wire [15:0] So;
	
	
	Sumador_4B sum (.X(A),.Y(B),.S(S),.Co(Co));
	Decodificador_BCD_12B dd (.I({Co,S}),.clk(cont),.O(So));
	Displayer_4_7S dis (.D(D),.An(An),.clk(clk),.X(So),.cont(cont));
	
endmodule
