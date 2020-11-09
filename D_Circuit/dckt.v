`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:37:01 08/02/2019 
// Design Name: 
// Module Name:    dckt 
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
module dckt(a,b,c,d,e,f,g,y);
input [7:0]a,b,c,d,e,f,g;
output reg [7:0]y;
always @(a,b,c,d,e,f,g)
begin
if(a>b && a>c && a>d && a>e && a>f && a>g)
begin
y<=a;
end
else if(b>a && b>c && b>d && b>e && b>f && b>g)
begin
y<=b;
end
else if(c>a && c>b && c>d && c>e && c>f && c>g)
begin
y<=c;
end
else if(d>a && d>b && d>c && d>e && d>f && d>g)
begin
y<=d;
end
else if(e>a && e>b && e>c && e>d && e>f && e>g)
begin
y<=e;
end
else if(f>a && f>b && f>c && f>d && f>e && f>g)
begin
y<=f;
end
else 
begin
y<=g;
end
end
endmodule
