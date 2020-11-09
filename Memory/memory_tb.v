`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:09:23 11/08/2019
// Design Name:   memorry
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/memory/memory_tb.v
// Project Name:  memory
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memorry
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module memory_tb;

	// Inputs
	reg rst;
	reg rd;
	reg wr;
	reg [7:0] Din;
	reg [7:0] addr;

	// Outputs
	wire [7:0] Dout;

	// Instantiate the Unit Under Test (UUT)
	memorry uut (
		.rst(rst), 
		.rd(rd), 
		.wr(wr), 
		.Din(Din), 
		.addr(addr), 
		.Dout(Dout)
	);

	initial begin
		// Initialize Inputs
		rst = 0;
		rd = 1;
		wr = 1;
		Din = 8;
		addr = 8'b01001110;

		// Wait 100 ns for global reset to finish
		#200;
        Din=15;
		  addr=8'b01100010;
		  #200;
		  Din=27;
		  addr=8'b11110000;
		  #200;
		  rst=1;
		  addr=8'b10101010;
		  #200;
		// Add stimulus here

	end
      
endmodule

