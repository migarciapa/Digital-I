`timescale 1ns / 1ps
module JK_Flip_Flop(J,K,Clk,Q,q);
	
	input J;
	input K;
	input Clk;
	output Q;
	output q;
	
	wire N1, N2;
	
	and(N1,J,Clk,q);
	and(N2,K,Clk,Q);
	nor(Q,N1,q);
	nor(q,N2,Q);

endmodule
