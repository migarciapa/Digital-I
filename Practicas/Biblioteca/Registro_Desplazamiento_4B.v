`timescale 1ns / 1ps

module Registro_Desplazamiento_4B(D,R,Q,clk);
	
	input D;
	input clk;
	input R;
	output [3:0] Q;
	
	FlipFlop_D ff1 (.D(D   ),.R(R),.clk(clk),.Q(Q[3]));
	FlipFlop_D ff2 (.D(Q[3]),.R(R),.clk(clk),.Q(Q[2]));
	FlipFlop_D ff3 (.D(Q[2]),.R(R),.clk(clk),.Q(Q[1]));
	FlipFlop_D ff4 (.D(Q[1]),.R(R),.clk(clk),.Q(Q[0]));
	
endmodule
