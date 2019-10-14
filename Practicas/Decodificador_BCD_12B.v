`timescale 1ns / 1ps

module Decodificador_BCD_12B(I,clk,O);
	
	input [11:0] I;
	input clk;
	output reg [15:0] O = 0;
	
	reg [27:0] x = 0;
	reg [3:0] s0 = 0;
	reg [3:0] s1 = 0;
	reg [3:0] s2 = 0;
	reg [3:0] s3 = 0;
	
	integer n = 0;
	
	always@(posedge clk) begin
		x=I;
		for(n=0;n<12;n=n+1) begin
			s3 = x [27:24];
			s2 = x [23:20];
			s1 = x [19:16];
			s0 = x [15:12];
			
			if(s0>=5)
				x=x+12288;
			if(s1>=5)
				x=x+196608;
			if(s2>=5)
				x=x+3145728;
			if(s3>=5)
				x=x+50331648;
				
			x=x*2;
		end
		O = x [27:12];
	end
	
endmodule
