`timescale 1ns / 1ps

module Main(A,B,clk,D,An);
	//Este modulo se usara como principal para cargar y probar los proyectos. Este debe ser el modulo para la creacion del testbench.
	//Los modulos creados deben ser almacenados en nuevos archivos de Module Verilog.
	//Este es el unico modulo relacionado a la conexion con la UCF.
	
	input [3:0] A;
	input [3:0] B;
	input clk;
	output [6:0] D;
	output [3:0] An;
	
	Suma_Display sum (.A(A),.B(B),.clk(clk),.D(D),.An(An));
	
endmodule
