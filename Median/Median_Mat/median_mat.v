`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:14:57 11/08/2019 
// Design Name: 
// Module Name:    median_mat 
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
module median_mat(a,b,c,d,e,f,g,h,k,y);
input [15:0]a,b,c,d,e,f,g,h,k;
output reg [15:0]y;
reg [3:0]x;
integer i;
always@(*)
begin
for(i=0;i<16;i=i+1)
begin
x=0;
if(a[i]==1'b1)
begin
x=x+1;
end
if(b[i]==1'b1)
begin
x=x+1;
end
if(c[i]==1'b1)
begin
x=x+1;
end
if(d[i]==1'b1)
begin
x=x+1;
end
if(e[i]==1'b1)
begin
x=x+1;
end
if(f[i]==1'b1)
begin
x=x+1;
end
if(g[i]==1'b1)
begin
x=x+1;
end
if(h[i]==1'b1)
begin
x=x+1;
end
if(k[i]==1'b1)
begin
x=x+1;
end
if(x>4)
begin
y[i]=1'b1;
end 
else
begin
y[i]=1'b0;
end
end
end
endmodule
