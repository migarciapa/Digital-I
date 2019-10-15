`timescale 1ns / 1ps

module Suma_Display(A,B,clk,D,An,e);
	
	input [3:0] A;
	input [3:0] B;
	input clk;
	output [6:0] D;
	output [3:0] An;
	output [1:0] e;
	
	wire [3:0] S;
	wire Co;
	
	
	Sumador_4B sum (.X(A),.Y(B),.S(S),.Co(Co));
	Displayer_4_7S dis (.D(D),.An(An),.clk(clk),.X({A,B,3'b000,Co,S}),.n(e));
	
endmodule
