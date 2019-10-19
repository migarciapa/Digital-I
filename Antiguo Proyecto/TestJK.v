`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:01:50 09/24/2019
// Design Name:   JK_Flip_Flop
// Module Name:   C:/Users/USER PC/Trabajo/David/Repositorios/Electronica-Digital/Practicas/TestJK.v
// Project Name:  Practicas
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: JK_Flip_Flop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestJK;

	// Inputs
	reg J;
	reg K;
	reg Clk;

	// Outputs
	wire Q;
	wire q;

	// Instantiate the Unit Under Test (UUT)
	JK_Flip_Flop uut (
		.J(J), 
		.K(K), 
		.Clk(Clk), 
		.Q(Q), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		J = 0;
		K = 0;
		Clk = 0;

		// Wait 100 ns for global reset to finish
		integer i;
		while(1)begin
			for(K=0;K<=1;K=~K)begin
					for(i=1;i<=10;i=i+1)begin
						#10
						Clk=~Clk;
					end
					#10
				end
			J=~J;
			#10
		end
        
		// Add stimulus here

	end
      
endmodule

