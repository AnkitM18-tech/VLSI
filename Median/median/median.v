`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:42:04 08/16/2019 
// Design Name: 
// Module Name:    median 
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
module median(a,b,c,d,e,x1,x2,x3,x4,x5,y);
input [7:0]a,b,c,d,e;
output reg [7:0]y;
output reg [7:0]x1,x2,x3,x4,x5;
always @(a,b,c,d,e)
begin
if(a>b && a>c && a>d && a>e)
begin
assign x1=a;
end
else if(b>a && b>c && b>d && b>e)
begin
assign x1=b;
end
else if(c>a && c>b && c>d && c>e)
begin
assign x1=c;
end
else if(d>a && d>b && d>c && d>e)
begin
assign x1=d;
end
else
begin
assign x1=e;
end

if(a<b && a<c && a<d && a<e )
begin
assign x5=a;
end
else if(b<a && b<c && b<d && b<e)
begin
assign x5=b;
end
else if(c<a && c<b && c<d && c<e)
begin
assign x5=c;
end
else if(d<a && d<b && d<c && d<e)
begin
assign x5=d;
end
else
begin
assign x5=e;
end

if(a!=x1 && a!=x5 && a<x1 && a>x5 && a>d)
begin
assign x2=a;
end
else if(b!=x1 && b!=x5 && b<x1 && b>x5 && b>a && b>)
begin
assign x2=b;
end
else if(c!=x1 && c!=x5 && c<x1 && c>x5 &&)
begin
assign x2=c;
end
else if(d!=x1 && d!=x5 && d<x1 && d>x5 &&)
begin
assign x2=d;
end
else
begin
assign x2=e;
end

if(a>b && a>c && a>d && a>e && a<x3)
begin
assign x4=a;
end
else if(b>a && b>c && b>d && b>e && b<x3)
begin
assign x4=b;
end
else if(c>a && c>b && c>d && c>e && c<x3)
begin
assign x4=c;
end
else if(d>a && d>b && d>c && d>e && d<x3)
begin
assign x4=d;
end
else
begin
assign x4=e;
end

if(a>b && a>c && a>d && a>e && a<x4)
begin
assign x5=a;
end
else if(b>a && b>c && b>d && b>e && b<x4)
begin
assign x5=b;
end
else if(c>a && c>b && c>d && c>e && c<x4)
begin
assign x5=c;
end
else if(d>a && d>b && d>c && d>e && d<x4)
begin
assign x5=d;
end
else
begin
assign x5=e;
end
assign y=x3;
end
endmodule
