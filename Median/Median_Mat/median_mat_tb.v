`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:24:04 11/08/2019
// Design Name:   median_mat
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/median_mat/median_mat_tb.v
// Project Name:  median_mat
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: median_mat
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module median_mat_tb;

	// Inputs
	reg [15:0] a;
	reg [15:0] b;
	reg [15:0] c;
	reg [15:0] d;
	reg [15:0] e;
	reg [15:0] f;
	reg [15:0] g;
	reg [15:0] h;
	reg [15:0] k;

	// Outputs
	wire [15:0] y;

	// Instantiate the Unit Under Test (UUT)
	median_mat uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g), 
		.h(h), 
		.k(k), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 16'b0000000000011111;
		b = 16'b0000000011111111;
		c = 16'b0000000000001111;
		d = 16'b0000001111111111;
		e = 16'b0011111111111111;
		f = 16'b0000000111111111;
		g = 16'b0000000000111111;
		h = 16'b0001111111111111;
		k = 16'b0000000000000011;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

