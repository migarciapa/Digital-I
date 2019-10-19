`timescale 1ns / 1ps

module Multiplexor_4X1(I,S,Q);

	input [3:0] I;
	input [1:0] S;
	output Q;
	
	wire [3:0] W;
	
	and(W[0],I[0],~S[0],~S[1]);
	and(W[1],I[1], S[0],~S[1]);
	and(W[2],I[2],~S[0], S[1]);
	and(W[3],I[3], S[0], S[1]);
	or(Q,W[0],W[1],W[2],W[3]);

endmodule
