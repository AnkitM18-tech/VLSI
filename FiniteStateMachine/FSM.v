`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:31 09/13/2019 
// Design Name: 
// Module Name:    FSM 
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
module FSM(x,clk,rst,y,ps1,ns1);
input x,clk,rst;
output reg y;
output reg [3:0]ps1,ns1;
parameter s0=4'b0000,s1=4'b0001,s2=4'b0010,s3=4'b0011,s4=4'b0100,s5=4'b0101,s6=4'b0110,s7=4'b0111,s8=4'b1000,s9=4'b1001;
always@ (posedge clk)
begin
if(rst==1)
begin
assign ps1=s0;
end
else
begin
assign ps1=ns1;
end
end

always@(*)
begin
case(ps1)
s0: begin
	 if(x==0)
	 begin
	 assign ns1=s1;
	 assign y=0;
	 end
	 else
	 begin
	 assign ns1=s9;
	 assign y=0;
	 end
	 end
s1: begin
	 if(x==0)
	 begin
	 assign ns1=s2;
	 assign y=0;
	 end
	 else
	 begin
	 assign ns1=s8;
	 assign y=0;
	 end
	 end
s2: begin
	 if(x==0)
	 begin
	 assign ns1=s3;
	 assign y=0;
	 end
	 else
	 begin
	 assign ns1=s7;
	 assign y=0;
	 end
	 end	 
s3: begin
	 if(x==0)
	 begin
	 assign ns1=s4;
	 assign y=0;
	 end
	 else
	 begin
	 assign ns1=s6;
	 assign y=0;
	 end
	 end
s4: begin
	 if(x==0)
	 begin
	 assign ns1=s5;
	 assign y=0;
	 end
	 else
	 begin
	 assign ns1=s5;
	 assign y=0;
	 end
	 end
s5: begin
	 if(x==0)
	 begin
	 assign ns1=s6;
	 assign y=0;
	 end
	 else
	 begin
	 assign ns1=s4;
	 assign y=0;
	 end
	 end
s6: begin
	 if(x==0)
	 begin
	 assign ns1=s7;
	 assign y=0;
	 end
	 else
	 begin
	 assign ns1=s3;
	 assign y=0;
	 end
	 end
s7: begin
	 if(x==0)
	 begin
	 assign ns1=s8;
	 assign y=0;
	 end
	 else
	 begin
	 assign ns1=s2;
	 assign y=0;
	 end
	 end
s8: begin
	 if(x==0)
	 begin
	 assign ns1=s9;
	 assign y=0;
	 end
	 else
	 begin
	 assign ns1=s1;
	 assign y=0;
	 end
	 end
s9: begin
	 if(x==0)
	 begin
	 assign ns1=s0;
	 assign y=1;
	 end
	 else
	 begin
	 assign ns1=s0;
	 assign y=1;
	 end
	 end
endcase
end
endmodule
