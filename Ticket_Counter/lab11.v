`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:58:58 11/01/2019
// Design Name:   ticket
// Module Name:   E:/Aparna/trainticket/lab11.v
// Project Name:  trainticket
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ticket
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab11;

	// Inputs
	reg [2:0] x;
	reg se1;
	reg se2;
	reg se3;
	reg clk;
	reg rst;

	// Outputs
	wire y;
	wire [2:0] re;
	wire [4:0] ps1;
	wire [4:0] ns1;

	// Instantiate the Unit Under Test (UUT)
	ticket uut (
		.x(x), 
		.se1(se1), 
		.se2(se2), 
		.se3(se3), 
		.clk(clk), 
		.rst(rst), 
		.y(y), 
		.re(re), 
		.ps1(ps1), 
		.ns1(ns1)
	);
always#20 clk=~clk;
	initial begin
		// Initialize Inputs
		x = 0;
		se1 = 0;
		se2 = 0;
		se3 = 0;
		clk = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#40;
       x = 0;
		se1 = 1;
		se2 = 0;
		se3 = 0;
      rst=0;
		#40;
       x = 2;
		#40;
       x = 2;
      #40;
       x = 2;
		#40;
       x = 2;
		 rst=1;
		#40;
       x = 0;
		 se1=0;
		 se2=1;
		 rst=0;
		 #40;
       x = 5;
		#40;
       x = 5;
      #40;
       x = 2;
		 rst=1;
		#40;
       x = 0;
		 se1=0;
		 se2=0;
		 se3=1;
		 rst=0;
       
		#40;
       x = 5;
		#40;
       x = 5;
      #40;
       x = 2;
		 rst=1;
		#40;
       x = 0;
		 rst=0;
		 se1=1;

		// Add stimulus here

	end
      
endmodule

