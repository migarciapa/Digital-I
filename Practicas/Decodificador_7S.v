`timescale 1ns / 1ps
module Decodificador_7S(X,D);
	
	input [3:0] X;
	output [6:0] D;
	
	wire [15:0] N;
	
	and(N[0] ,~X[3],~X[2],~X[1],~X[0]);
	and(N[1] ,~X[3],~X[2],~X[1], X[0]);
	and(N[2] ,~X[3],~X[2], X[1],~X[0]);
	and(N[3] ,~X[3],~X[2], X[1], X[0]);
	and(N[4] ,~X[3], X[2],~X[1],~X[0]);
	and(N[5] ,~X[3], X[2],~X[1], X[0]);
	and(N[6] ,~X[3], X[2], X[1],~X[0]);
	and(N[7] ,~X[3], X[2], X[1], X[0]);
	and(N[8] , X[3],~X[2],~X[1],~X[0]);
	and(N[9] , X[3],~X[2],~X[1], X[0]);
	and(N[10], X[3],~X[2], X[1],~X[0]);
	and(N[11], X[3],~X[2], X[1], X[0]);
	and(N[12], X[3], X[2],~X[1],~X[0]);
	and(N[13], X[3], X[2],~X[1], X[0]);
	and(N[14], X[3], X[2], X[1],~X[0]);
	and(N[15], X[3], X[2], X[1], X[0]);
	
	or(D[0],N[0],N[2],N[3],N[5],N[6],N[7],N[8],N[9],N[10],N[12],N[14],N[15]);
	or(D[1],N[0],N[1],N[2],N[3],N[4],N[7],N[8],N[9],N[10],N[13]);
	or(D[2],N[0],N[1],N[3],N[4],N[5],N[6],N[7],N[8],N[9],N[10],N[11],N[13]);
	or(D[3],N[0],N[2],N[3],N[5],N[6],N[8],N[11],N[12],N[13],N[14]);
	or(D[4],N[0],N[2],N[6],N[8],N[10],N[11],N[12],N[13],N[14],N[15]);
	or(D[5],N[0],N[4],N[5],N[6],N[8],N[9],N[10],N[11],N[12],N[14],N[15]);
	or(D[6],N[2],N[3],N[4],N[5],N[6],N[8],N[9],N[10],N[11],N[13],N[14],N[15]);
	
endmodule
