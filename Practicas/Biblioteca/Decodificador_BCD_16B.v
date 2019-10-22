`timescale 1ns / 1ps

module Decodificador_BCD_16B(I,clk,O);
	
	input [15:0] I;
	input clk;
	output reg [15:0] O = 0;
	
	reg [31:0] x = 0;
	
	reg [3:0] s0 = 0;
	reg [3:0] s1 = 0;
	reg [3:0] s2 = 0;
	reg [3:0] s3 = 0;
	
	integer n = 0;
	
	always@(posedge clk) begin
		x=I;
		for(n=0;n<16;n=n+1) begin
			s3 = x [31:28];
			s2 = x [27:24];
			s1 = x [23:20];
			s0 = x [19:16];
			
			if(s0>=5)
				x=x+('b00000000000000110000000000000000);
			if(s1>=5)
				x=x+('b00000000001100000000000000000000);
			if(s2>=5)
				x=x+('b00000011000000000000000000000000);
			if(s3>=5)
				x=x+('b00110000000000000000000000000000);	
			x=x*2;
		end
		O = x [31:16];
	end

endmodule
