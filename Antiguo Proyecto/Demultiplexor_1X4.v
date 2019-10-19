`timescale 1ns / 1ps

module Demultiplexor_1X4(I,S,O);
	
	input I;
	input [1:0] S;
	output [3:0] O;
	
	and(O[0],I,~S[1],~S[0]);
	and(O[1],I,~S[1], S[0]);
	and(O[2],I, S[1],~S[0]);
	and(O[3],I, S[1], S[0]);
	
endmodule
