`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:59:40 03/29/2016 
// Design Name: 
// Module Name:    top_modul 
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
//////////
//////////////////////////////////////////////////////////////////////////////////
module top_modul(add, inn, clr, clk, red_wr,outt,err_in,tmpo1,tmpo2);
/*
integer i=0,j=8,k=0;
initial begin
while(i<=j) begin
i=(2**k)-1-k;
k=k+1;
end
end
reg s;
assign s =j+k;*/
//parameter n1=s,d=j,a=k;

parameter n1=12,d=8,a=4;//16-21,8-12,32-3864
output [n1-1:0] outt;
input [a-1:0] add;
input [d-1:0] inn;
input clk,clr,red_wr;
input [n1-1:0] err_in;
wire [d-1:0] op;
wire [n1-1:0] op1;
wire [n1-1:0] op2;
output [n1-1:0] tmpo1;
output [n1-1:0] tmpo2;

   rmm #(.n(a),.w(d))rm(clk, add, red_wr,inn, op);
	enc #(.n(n1),.k(d))en(op1[n1-1:0], op[d-1:0],clr);
	assign tmpo1=op1;
	err #(.n(n1)) er(err_in[n1-1:0],op1[n1-1:0],op2[n1-1:0]);
	assign tmpo2=op2;
	decod #(.n(n1),.k(d)) de(op2[n1-1:0],outt);
	
//endmodule
endmodule
