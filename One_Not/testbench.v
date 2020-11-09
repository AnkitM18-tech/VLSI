`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:58:08 09/09/2019
// Design Name:   onenot
// Module Name:   C:/Users/OCAC/Desktop/Xillinx Programs/onenot/testbench.v
// Project Name:  onenot
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: onenot
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg [15:0] A;
	reg [15:0] B;
	reg [15:0] C;
	reg [15:0] D;
	reg [15:0] E;
	reg [15:0] F;
	reg [15:0] G;
	reg [15:0] H;
	reg [15:0] I;

	// Outputs
	wire [15:0] y;

	// Instantiate the Unit Under Test (UUT)
	onenot uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E(E), 
		.F(F), 
		.G(G), 
		.H(H), 
		.I(I), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		A = 16'b 0000000000011111;
		B = 16'b 0000000011111111;
		C = 16'b 0000000000001111;
		D = 16'b 0000001111111111;
		E = 16'b 0011111111111111;
		F = 16'b 0000000111111111;
		G = 16'b 0000000000111111;
		H = 16'b 0001111111111111;
		I = 16'b 0000000000000011;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

