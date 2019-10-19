`timescale 1ns / 1ps

module Comparador_4B(A,B,Eo,Go);
	
	input [3:0] A;
	input [3:0] B;
	output Eo;
	output Go;
	
	wire E1,G1,E2,G2,E3,G3;
	
	Comparador C0(.A(A[0]),.B(B[0]),.Ei(1),.Gi(0),.Eo(E1),.Go(G1));
	Comparador C1(.A(A[1]),.B(B[1]),.Ei(E1),.Gi(G1),.Eo(E2),.Go(G2));
	Comparador C2(.A(A[2]),.B(B[2]),.Ei(E2),.Gi(G2),.Eo(E3),.Go(G3));
	Comparador C3(.A(A[3]),.B(B[3]),.Ei(E3),.Gi(G3),.Eo(Eo),.Go(Go));
	
endmodule
