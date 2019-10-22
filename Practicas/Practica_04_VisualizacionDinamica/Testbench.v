`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:53:31 10/19/2019
// Design Name:   Main
// Module Name:   C:/Users/USER PC/Trabajo/David/Repositorios/Electronica-Digital/Practicas/Biblioteca/Testbench.v
// Project Name:  Practica_04_VisualizacionDinamica
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
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
	reg [3:0] A;
	reg [3:0] B;
	reg clk;

	// Outputs
	wire [6:0] D;
	wire [3:0] An;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.A(A), 
		.B(B), 
		.clk(clk), 
		.D(D), 
		.An(An)
	);

	initial begin
		// Initialize Inputs
		A = 10;
		B = 15;
		clk = 0;

		// Wait 100 ns for global reset to finish
		while(1)begin
			#5;
			clk=~clk;
		end
        
		// Add stimulus here

	end
      
endmodule

