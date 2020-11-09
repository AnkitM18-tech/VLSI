`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:24:52 09/13/2019 
// Design Name: 
// Module Name:    count22 
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
ones=0;
for(i=0;i<16;i=i+1)
begin
if(a[i]==1'b1)
begin
ones=ones+1;
end
end
end
endmodule
