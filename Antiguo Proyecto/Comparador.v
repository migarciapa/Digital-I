`timescale 1ns / 1ps
module Comparador(A,B,Ei,Gi,Eo,Go);
	
	input A;
	input B;
	input Ei;
	input Gi;
	output Eo;
	output Go;
	
	wire N1,N2,N3;
	
	xor(N1,A,B);
	and(Eo,~N1,Ei);
	and(N2,A,Ei,~B);
	and(N3,Gi,~Ei);
	or(Go,N2,N3);

endmodule
