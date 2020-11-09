`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:40:09 10/25/2019 
// Design Name: 
// Module Name:    coffee_vend 
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
module coffee_vend(x,y,reset,change,clk,ps1,ns1);
input [2:0]x;
input reset,clk;
output reg y,change;
output reg [2:0]ps1,ns1;
parameter s0=3'b000,s1=3'b001,s2=3'b010,s3=3'b011,s4=3'b100,s5=3'b101;
always@(posedge clk)
begin
	if(reset==1)
	ps1=s0;
	else
	ps1=ns1;
end

always@(*)
begin
	case(ps1)
		s0:begin
			if(x==1)
			begin
         ns1=s1;
			y=0;
			change=0;
			end
			else if(x==2)
			begin
			ns1=s2;
			y=0;
			change=0;
			end
			else if(x==5)
			begin
			ns1=s5;
			y=1;
			change=0;
			end
			end
			
	   s1:begin
			if(x==1)
			begin
         ns1=s2;
			y=0;
			change=0;
			end
			else if(x==2)
			begin
			ns1=s3;
			y=0;
			change=0;
			end
			end
		
		s2:begin
			if(x==1)
			begin
         ns1=s3;
			y=0;
			change=0;
			end
			else if(x==2)
			begin
			ns1=s4;
			y=0;
			change=0;
			end
			end
			
		s3:begin
			if(x==1)
			begin
         ns1=s4;
			y=0;
			change=0;
			end
			else if(x==2)
			begin
			ns1=s5;
			y=1;
			change=0;
			end
			end
			
		s4:begin
			if(x==1)
			begin
         ns1=s5;
			y=1;
			change=0;
			end
			else if(x==2)
			begin
			ns1=s5;
			y=1;
			change=1;
			end
			end
			
		s5:begin
			y=1;
			change=0;
			end
			
	endcase
end	
endmodule
