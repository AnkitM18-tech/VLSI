`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:54:20 09/20/2019 
// Design Name: 
// Module Name:    seqdet 
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
module seqdet(x,clk,rst,y,ps1,ns1);
input x,clk,rst;
output reg y;
output reg[1:0]ps1,ns1;
parameter s0=2'b00,s1=2'b01,s2=2'b10,s3=2'b11;
always@(posedge clk)
begin
	if(rst==1)
		begin
		ps1=s0;
		end
	else
		begin
		ps1=ns1;
		end
end

always@(*)
begin
	case(ps1)
	s0:begin
		if(x==0)
		ns1=s0;
		else
		ns1=s1;
		y=0;
		end
	s1:begin
		if(x==0)
		ns1=s2;
		else
		ns1=s1;
		y=0;
		end
	s2:begin
		if(x==0)
		ns1=s0;
		else
		ns1=s3;
		y=0;
		end
   s3:begin
		if(x==0)
		ns1=s2;
		else
		ns1=s1;
		y=1;
		end		
	endcase
end
endmodule
