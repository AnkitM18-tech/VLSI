`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:52:22 08/30/2019 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(a,b,y,s);
input [7:0]a,b;
input [2:0]s;
output reg [14:0]y;
always@(*)
begin
case(s)
3'b000: begin
		  assign y=a+b;
		  end
3'b001: begin
		  assign y=a-b;
		  end
3'b010: begin
		  assign y=a&b;
		  end
3'b011: begin
		  assign y=~a;
		  end
3'b100: begin
		  assign y=a|b;
		  end
3'b101: begin
		  assign y=a^b;
		  end
3'b110: begin
		  assign y=a*b;
		  end
3'b111: begin
		  assign y=~(a^b);
		  end		
default : assign y=15'bXXXXXXXXXXXXXXXX;
endcase
end			
endmodule
