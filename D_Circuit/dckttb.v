`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:45:48 08/02/2019
// Design Name:   dckt
// Module Name:   C:/Users/USER/Desktop/Ankit VLSI/dckt/dckttb.v
// Project Name:  dckt
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dckt
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dckttb;
	reg [7:0] a;
	reg [7:0] b;
	reg [7:0] c;
	reg [7:0] d;
	reg [7:0] e;
	reg [7:0] f;
	reg [7:0] g;
	wire [7:0] y;
	dckt uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g), 
		.y(y)
	);

	initial begin
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		e = 0;
		f = 0;
		g = 0;
		#100;
        
		
		a=8'b01010010;
      b=8'b01101001;
c=8'b10111100;
d=8'b11010001;
e=8'b11111111;
f=8'b10011111;
g=8'b00101101;
#100;		
	end
      
endmodule

