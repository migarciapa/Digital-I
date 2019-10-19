`timescale 1ns / 1ps

module Sumador_4B(X,Y,S,Co);
	
	input [3:0] X;
	input [3:0] Y;
	output [3:0] S;
	output Co;
	
	wire C1,C2,C3;
	
	Sumador S0(.A(X[0]),.B(Y[0]),.Ci(1'b0),.S(S[0]),.Co(C1));
	Sumador S1(.A(X[1]),.B(Y[1]),.Ci(C1),.S(S[1]),.Co(C2));
	Sumador S2(.A(X[2]),.B(Y[2]),.Ci(C2),.S(S[2]),.Co(C3));
	Sumador S3(.A(X[3]),.B(Y[3]),.Ci(C3),.S(S[3]),.Co(Co));

endmodule