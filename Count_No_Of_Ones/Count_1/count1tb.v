`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:10:05 08/09/2019
// Design Name:   count1
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/count1/count1tb.v
// Project Name:  count1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: count1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module count1tb;

	// Inputs
	reg [15:0] a;

	// Outputs
	wire [4:0] one;

	// Instantiate the Unit Under Test (UUT)
	count1 uut (
		.a(a), 
		.one(one)
	);

	initial begin
		// Initialize Inputs
		a = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
      a=16'b1111111111111111;
		#100;
		a=16'b0011001100111111;
		#100;
		a=16'b1010101010101010;
		#100;
	end
      
endmodule

