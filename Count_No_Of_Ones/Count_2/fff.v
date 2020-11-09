`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:26:08 09/13/2019
// Design Name:   count1
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/count11/fff.v
// Project Name:  count11
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

module fff;

	// Inputs
	reg [15:0] a;

	// Outputs
	wire [4:0] ones;

	// Instantiate the Unit Under Test (UUT)
	count1 uut (
		.a(a), 
		.ones(ones)
	);

	initial begin
		// Initialize Inputs
		a = 250;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

