`timescale 1ns / 1ps

module Suma_Display(A,B,D,Co);
	
	input [3:0] A;
	input [3:0] B;
	output [3:0] D;
	output Co;
	
	wire [3:0] S;
	
	Sumador_4B S1 (.X(A),.Y(B),.S(S),.Co(Co));
	Decodificador_7S D7_1 (.X(S),.D(D));
	
endmodule
