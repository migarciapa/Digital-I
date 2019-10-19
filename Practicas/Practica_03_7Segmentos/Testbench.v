`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:36:28 10/19/2019
// Design Name:   Decodificador_7S
// Module Name:   C:/Users/USER PC/Trabajo/David/Repositorios/Electronica-Digital/Practicas/Practica_03_7Segmentos/Testbench.v
// Project Name:  Practica_03_7Segmentos
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Decodificador_7S
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
	reg [3:0] X;

	// Outputs
	wire [6:0] D;

	// Instantiate the Unit Under Test (UUT)
	Decodificador_7S uut (
		.X(X), 
		.D(D)
	);

	initial begin
		// Initialize Inputs
		X = 0;

		// Wait 100 ns for global reset to finish
		while(1)begin
			#50
			X=X+1;
		end
		// Add stimulus here

	end
      
endmodule

