`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:20:25 08/16/2019
// Design Name:   median
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/Median/MedianTb.v
// Project Name:  Median
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: median
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MedianTb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg [7:0] c;
	reg [7:0] d;
	reg [7:0] e;

	// Outputs
	wire [7:0] x1;
	wire [7:0] x2;
	wire [7:0] x3;
	wire [7:0] x4;
	wire [7:0] x5;
	wire [7:0] y;

	// Instantiate the Unit Under Test (UUT)
	median uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.x1(x1), 
		.x2(x2), 
		.x3(x3), 
		.x4(x4), 
		.x5(x5), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		e = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 8;
		b = 12;
		c = 10;
		d = 5;
      e = 14;
		#100;
		// Add stimulus here

	end
      
endmodule

