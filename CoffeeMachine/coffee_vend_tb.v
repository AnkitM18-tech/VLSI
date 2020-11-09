`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:22:48 10/25/2019
// Design Name:   coffee_vend
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/coffee_machine/coffee_vend_tb.v
// Project Name:  coffee_machine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: coffee_vend
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module coffee_vend_tb;
	reg [2:0] x;
	reg reset;
	reg clk;
	wire y;
	wire change;
	wire [2:0] ps1;
	wire [2:0] ns1;
	coffee_vend uut (
		.x(x), 
		.y(y), 
		.reset(reset), 
		.change(change), 
		.clk(clk), 
		.ps1(ps1), 
		.ns1(ns1)
	);
always #20 clk=~clk;
	initial begin
		x = 1;
		reset = 1;
		clk = 0;
		#40;
      x=1;
		reset=0;
      #40;
      x=1;
      reset=0;
		#40;
		x=2;
		reset=0;
		#40;
		reset=0;
		x=2;
		#40;
	end    
endmodule

