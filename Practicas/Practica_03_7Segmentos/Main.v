`timescale 1ns / 1ps

module Main(A,B,D,An,Co);
	
	input [3:0] A;
	input [3:0] B;
	output [6:0] D;
	output Co;
	output [3:0] An;
	
	wire [3:0] x;
	
	assign An = 4'b1110;
	
	Sumador_4B sum (.X(A),.Y(B),.S(x),.Co(Co));
	Decodificador_7S d7 (.X(x),.D(D));
	
endmodule
