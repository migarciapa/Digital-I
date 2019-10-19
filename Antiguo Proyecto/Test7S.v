`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:17:30 09/23/2019
// Design Name:   Decodificador_7S
// Module Name:   C:/Users/USER PC/Trabajo/David/Repositorios/Electronica-Digital/Practicas/Test7S.v
// Project Name:  Practicas
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

module Test7S;

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

		while(X<15)begin
			#10;
			X=X+1;
		end

	end
      
endmodule

