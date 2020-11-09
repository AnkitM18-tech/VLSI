`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:48:43 09/13/2019
// Design Name:   FSM
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/FSM/FSM_tb.v
// Project Name:  FSM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FSM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FSM_tb;

	// Inputs
	reg x;
	reg clk;
	reg rst;

	// Outputs
	wire y;
	wire [3:0] ps1;
	wire [3:0] ns1;

	// Instantiate the Unit Under Test (UUT)
	FSM uut (
		.x(x), 
		.clk(clk), 
		.rst(rst), 
		.y(y), 
		.ps1(ps1), 
		.ns1(ns1)
	);
   always #20 clk=~clk;
	initial begin
		// Initialize Inputs
		rst = 1;
		clk=0;
		x=0;

		// Wait 100 ns for global reset to finish
		#100;
      rst =0;
#100;		
		// Add stimulus here

	end
      
endmodule

