`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:03:52 11/08/2019 
// Design Name: 
// Module Name:    memorry 
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
module memorry(rst,rd,wr,Din,addr,Dout);
input rst,rd,wr;
input [7:0]addr,Din;
reg [7:0]memory[255:0];
output reg[7:0]Dout;
always@(*)
begin
if(rst==0)
begin
if(wr==1)
begin
memory[addr]=Din;
end
if(rd==1)
begin
Dout=memory[addr];
end
end
else
begin
Dout=8'b00000000;
end
end
endmodule
