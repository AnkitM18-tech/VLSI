`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:28:50 08/16/2019 
// Design Name: 
// Module Name:    median2 
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
module median2(a,b,c,d,e,x,temp,y);
input [7:0]a,b,c,d,e;
output reg [7:0]y;
output reg [7:0]x[4];
output reg [7:0]temp;
always @(a,b,c,d,e)
begin
assign x[0]=a;
assign x[1]=b;
assign x[2]=c;
assign x[3]=d;
assign x[4]=e;
if(x[0]>x[1] && x[0]>x[2] && x[0]>x[3] && x[0]>x[4])
begin
temp=x[0];
end
endmodule
