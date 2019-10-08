`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:58:39 10/07/2019
// Design Name:   Suma_Display
// Module Name:   C:/Users/USER PC/Trabajo/David/Repositorios/Electronica-Digital/Practicas/Test.v
// Project Name:  Practicas
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Suma_Display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg clk;

	// Outputs
	wire [6:0] D;
	wire [3:0] An;

	// Instantiate the Unit Under Test (UUT)
	Suma_Display uut (
		.A(A), 
		.B(B), 
		.clk(clk), 
		.D(D), 
		.An(An)
	);

	initial begin
		// Initialize Inputs
		A = 15;
		B = 14;
		clk = 0;

		// Wait 100 ns for global reset to finish
		while(1)begin
			#1;
			clk=~clk;
		end
        
		// Add stimulus here

	end
      
endmodule

