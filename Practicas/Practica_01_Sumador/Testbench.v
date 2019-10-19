`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:19:34 10/19/2019
// Design Name:   Sumador
// Module Name:   C:/Users/USER PC/Trabajo/David/Repositorios/Electronica-Digital/Practicas/Practica_01_Sumador/Testbench.v
// Project Name:  Practica_01_Sumador
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sumador
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Testbench;

	// Inputs
	reg A;
	reg B;
	reg Ci;

	// Outputs
	wire S;
	wire Co;

	// Instantiate the Unit Under Test (UUT)
	Sumador uut (
		.A(A), 
		.B(B), 
		.Ci(Ci), 
		.S(S), 
		.Co(Co)
	);

	initial begin
		A = 0;
		B = 0;
		Ci = 0;
		#100;
		A = 1;
		B = 0;
		Ci = 0;
		#100;
		A = 0;
		B = 1;
		Ci = 0;
		#100;
		A = 1;
		B = 1;
		Ci = 0;
		#100;
		A = 0;
		B = 0;
		Ci = 1;
		#100;
		A = 1;
		B = 0;
		Ci = 1;
		#100;
		A = 0;
		B = 1;
		Ci = 1;
		#100;
		A = 1;
		B = 1;
		Ci = 1;
		#100;
	end
      
endmodule

