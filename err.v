`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:01:03 03/29/2016 
// Design Name: 
// Module Name:    err 
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

module err #(parameter n=1)(err_in,in,out);
input [n-1:0] err_in;
input [n-1:0] in;
output reg [n-1:0] out;

always @(in or err_in) begin
out=((err_in) | (in)); 
end

endmodule

