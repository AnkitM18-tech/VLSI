`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:05:33 08/30/2019
// Design Name:   ALU
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/ALU_8/ALUtb.v
// Project Name:  ALU_8
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALUtb;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;
	reg [2:0] s;

	// Outputs
	wire [14:0] y;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.a(a), 
		.b(b), 
		.y(y), 
		.s(s)
	);

	initial begin
		// Initialize Inputs
		a = 8'b11011001;
		b = 8'b10010111;
		s = 0;

		// Wait 100 ns for global reset to finish
		#100;
		s=3'b000;
		#100;
        s=3'b001;
		#100;
		s=3'b010;
		#100;
		s=3'b011;
		#100;
		s=3'b100;
		#100;
		s=3'b101;
		#100;
		s=3'b110;
		#100;
		s=3'b111;
		#100;
		// Add stimulus here

	end
      
endmodule

