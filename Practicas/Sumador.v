`timescale 1ns / 1ps

module Sumador(A,B,Ci,S,Co);

	input	A;
	input B;
	input Ci;
	output Co;
	output S;
	
	wire N1,N2,N3;
	
	and(N1,A,B);
	xor(N2,A,B);
	xor(S,N2,Ci);
	and(N3,N2,Ci);
	or(Co,N3,N1);
	
endmodule
