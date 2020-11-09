`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:50:52 08/09/2019 
// Design Name: 
// Module Name:    count1 
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
module count1(a,ones);
input [15:0]a;
output reg [4:0]ones;
integer i;
always @(a)
begin
assign ones=0;
for(i=0;i<16;i=i+1)
begin
if(a[i]==1'b1)
begin
assign ones=ones+1;
end
end
end
endmodule
