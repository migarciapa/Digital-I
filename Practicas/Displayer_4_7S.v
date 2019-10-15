`timescale 1ns / 1ps

module Displayer_4_7S(D,An,clk,X,n);
	
	output [6:0] D;
	output [3:0] An;
	input clk;
	input [15:0] X;
	
	wire cont;
	output [1:0] n;
	wire [3:0] a;
	wire [3:0] y;
	
	Divisor_Frecuencia div (.clk(clk),.relacion(25000),.Oclk(cont));
	Contador_2B con (.clk(cont),.O(n));
	Demultiplexor_1X4 dem (.I(1),.S(n),.O(a));
	not(An[0],a[0]);
	not(An[1],a[1]);
	not(An[2],a[2]);
	not(An[3],a[3]);
	
	Multiplexor_4X1 mu0 (.I({X[12],X[8] ,X[4],X[0]}),.S(n),.Q(y[0]));
	Multiplexor_4X1 mu1 (.I({X[13],X[9] ,X[5],X[1]}),.S(n),.Q(y[1]));
	Multiplexor_4X1 mu2 (.I({X[14],X[10],X[6],X[2]}),.S(n),.Q(y[2]));
	Multiplexor_4X1 mu3 (.I({X[15],X[11],X[7],X[3]}),.S(n),.Q(y[3]));
	Decodificador_7S dec (.X(y),.D(D));
	
endmodule
