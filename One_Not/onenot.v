`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:29:17 09/09/2019 
// Design Name: 
// Module Name:    onenot 
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
module onenot(A,B,C,D,E,F,G,H,I,y
    );
input [15:0] A,B,C,D,E,F,G,H,I;	 
reg [15:0]z[0:8];
output reg [15:0]y;
reg[3:0]x;
integer i,j;
always @(A,B,C,D,E,F,G,H,I,x,i,j)
begin
z[0]=A;
z[1]=B;
z[2]=C;
z[3]=D;
z[4]=E;
z[5]=F;
z[6]=G;
z[7]=H;
z[8]=I;

for(i=0;i<16;i=i+1)
begin
x=0;
for(j=0;j<9;j=j+1)
begin
if(z[i][j]==1)
begin
x=x+1;
end
end
if(x>=5)
begin
y[i]=1;
end
else
begin
y[i]=0;
end
end
end
endmodule
