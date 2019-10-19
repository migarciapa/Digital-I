`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:26:38 10/19/2019
// Design Name:   Sumador_4B
// Module Name:   C:/Users/USER PC/Trabajo/David/Repositorios/Electronica-Digital/Practicas/Practica_02_Sumador4B/Testbench.v
// Project Name:  Practica_02_Sumador4B
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Sumador_4B
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
	reg [3:0] Y;

	// Outputs
	wire [3:0] S;
	wire Co;

	// Instantiate the Unit Under Test (UUT)
	Sumador_4B uut (
		.X(X), 
		.Y(Y), 
		.S(S), 
		.Co(Co)
	);

	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;

		while(1)begin
			#3;
			X=X+1;
			if(X==0)
				Y=Y+1;
		end
		
	end
      
endmodule

