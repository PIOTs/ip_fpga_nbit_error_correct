`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:00:36 03/29/2016 
// Design Name: 
// Module Name:    rmm 
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
module rmm #(parameter n=1,w=1)(clk, addr, read_write, data_in, data_out);

input clk, read_write;//one bits
input [n-1:0] addr;//n bits address
input [w-1:0] data_in;//w bits datainput

output reg [w-1:0] data_out;//w bits
reg [w-1:0] reg_array [2**n-1:0];//Ram of Wbits x 2^bits size

/*integer i;

	initial begin
        for( i = 0; i < 2**n; i = i + 1 ) begin
            reg_array[i] <= 0;
        end
	end*/

   always @(negedge(clk)) begin
        if( read_write == 1 )
            reg_array[addr] <= data_in;
/*        if( clear == 1 ) begin
            for( i = 0; i < 2**n; i = i + 1 ) begin
                reg_array[i] <= 0;
            end
        end*/
        data_out = reg_array[addr];
        end



endmodule


