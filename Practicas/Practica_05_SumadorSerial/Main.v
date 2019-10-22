`timescale 1ns / 1ps
module Main(A,B,Rbtn,clk,D,An,Bclk);
	
	input A;
	input B;
	input clk;
	input Rbtn;
	output [6:0] D;
	output [3:0] An;
	output Bclk;
	
	wire Aclk;
	wire Ci, Co, S;
	wire [3:0] I;
	
	Divisor_Frecuencia df2 (.clk(clk),.relacion(125000000),.Oclk(Bclk));
	Sumador sum (.A(A),.B(B),.Ci(Ci),.Co(Co),.S(S));
	FlipFlop_D cmem (.D(Co),.Q(Ci),.R(Rbtn),.clk(Bclk));
	Registro_Desplazamiento_4B rd (.D(S),.clk(Bclk),.R(Rbtn),.Q(I));
	
	Divisor_Frecuencia df (.clk(clk),.relacion(25000),.Oclk(Aclk));
	Displayer_4_7S dis (.X({12'b0,I}),.clk(Aclk),.D(D),.An(An));
	
endmodule
