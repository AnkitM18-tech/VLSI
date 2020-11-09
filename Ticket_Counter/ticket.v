`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:11:47 11/01/2019 
// Design Name: 
// Module Name:    ticket 
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
module ticket(x,se1,se2,se3,clk,rst,y,re,ps1,ns1);
input [2:0]x;
input se1,se2,se3,clk,rst;
output reg y;
output reg [2:0]re;

output reg [4:0]ps1,ns1;

parameter s0=5'b00000,
          s1=5'b00001,    
          s2=5'b00010,
          s3=5'b00011,
			 s4=5'b00100,
          s5=5'b00101,
          s6=5'b00110,
          s7=5'b00111,    
          s8=5'b01000,
          s9=5'b01001,
			 s10=5'b01010,
			 s11=5'b01011,
          s12=5'b01100,    
          s13=5'b01101,
          s14=5'b01110,
			 s15=5'b01111,
          s16=5'b10000,
          s17=5'b10001,
          s18=5'b10010,    
          s19=5'b10011,
          s20=5'b10100,
			 s21=5'b10101;
          
always@(posedge clk)
begin
if(rst==1)
begin
ps1=s0;
y=0;
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
   if(se1==1)
	ns1=s1;
	else if(se2==1)
	ns1=s7;
	else if(se3==1)
	ns1=s14;
	end
s1:begin
   if(x==3'b001)
	ns1=s2;
	else if(x==3'b010)
	ns1=s3;
	else if(x==3'b101)
	ns1=s6;
	y=0;
	re=0;
	end
s2:begin
   if(x==3'b001)
	ns1=s3;
	else if(x==3'b010)
	ns1=s4;
	y=0;
	re=0;
	end
s3:begin
   if(x==3'b001)
	ns1=s4;
	else if(x==3'b010)
	ns1=s5;
	y=0;
	re=0;
	end
 s4:begin
   if(x==3'b001)
	ns1=s5;
	else if(x==3'b010)
	ns1=s6;
	y=0;
	re=0;
	end
s5:begin
   if(x==3'b001)
	ns1=s6;
	else if(x==3'b010)
	ns1=s6;
	y=0;
	re=3'b001;
	end
s6:begin
   y=1;
   re=0;
   end
s7:begin
   if(x==3'b001)
	ns1=s8;
	else if(x==3'b010)
	ns1=s9;
	else if(x==3'b101)
	ns1=s12;
	y=0;
	re=0;
	end
s8:begin
   if(x==3'b001)
	ns1=s9;
	else if(x==3'b010)
	ns1=s10;
	else if(x==3'b101)
	ns1=s13;
	y=0;
	re=0;
	end
s9:begin
   if(x==3'b001)
	ns1=s10;
	else if(x==3'b010)
	ns1=s11;
	y=0;
	re=0;
	end
s10:begin
   if(x==3'b001)
	ns1=s11;
	else if(x==3'b010)
	ns1=s12;
	y=0;
	re=0;
	end
s11:begin
   if(x==3'b001)
	ns1=s12;
	else if(x==3'b010)
	ns1=s13;
	y=0;
	re=0;
	end
s12:begin
   if(x==3'b001)
	ns1=s13;
	else if(x==3'b010)
	begin
	ns1=s13;
	re=3'b001;
	end
	else if(x==3'b101)
	begin
	ns1=s13;
	re=3'b100;
	end
	end
s13:begin
   y=1;
	re=0;
	end
s14:begin
   if(x==3'b001)
	ns1=s15;
	else if(x==3'b010)
	ns1=s16;
	else if(x==3'b101)
	ns1=s19;
	y=0;
	re=0;
	end
s15:begin
   if(x==3'b001)
	ns1=s16;
	else if(x==3'b010)
	ns1=s17;
	else if(x==3'b101)
	ns1=s20;
	y=0;
	re=0;
	end
s16:begin
   if(x==3'b001)
	ns1=s17;
	else if(x==3'b010)
	ns1=s18;
	else if(x==3'b101)
	ns1=s21;
	y=0;
	re=0;
	end
s17:begin
   if(x==3'b001)
	ns1=s18;
	else if(x==3'b010)
	ns1=s19;
	y=0;
	re=0;
	end
s18:begin
   if(x==3'b001)
	ns1=s19;
	else if(x==3'b010)
	ns1=s20;
	y=0;
	re=0;
	end
s19:begin
   if(x==3'b001)
	ns1=s20;
	else if(x==3'b010)
	ns1=s21;
	else if(x==3'b101)
	ns1=s21;
	y=0;
	re=3'b011;
	end
s20:begin
   if(x==3'b001)
	ns1=s21;
	else if(x==3'b010)
	ns1=s21;
	y=0;
	re=3'b001;
	end
s21:begin
    y=1;
	 re=0;
	 end
	 
endcase
end
endmodule
