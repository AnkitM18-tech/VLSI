`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:36:32 09/20/2019
// Design Name:   seqdet
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/SEQUENCEdetect/seqdet_tb.v
// Project Name:  SEQUENCEdetect
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: seqdet
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module seqdet_tb;

	// Inputs
	reg x;
	reg clk;
	reg rst;

	// Outputs
	wire y;
	wire [1:0] ps1;
	wire [1:0] ns1;

	// Instantiate the Unit Under Test (UUT)
	seqdet uut (
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
		x = 1;
		clk = 0;
		rst = 1;
		#40;
		x=0;
      rst=0;
      #40;
		x=1;
		#40;
		x=0;
		#40;
		x=1;
		#40;
		x=0;
		#40;
		x=0;
		#40;
		x=1;
		#40;
		x=0;
		#40;
		x=1;
		#40;
		x=1;
		#40;
		x=0;
		#40;
		x=1;
		#40;
		// Add stimulus here

	end
      
endmodule

