`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:27:16 03/29/2016
// Design Name:   top_modul
// Module Name:   C:/Xilinx/ip_hamm/tst1.v
// Project Name:  ip_hamm
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_modul
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tst1;

	// Inputs
	reg [3:0] add;
	reg [7:0] inn;
	reg clr;
	reg clk;
	reg red_wr;
	reg [11:0] err_in;

	// Outputs
	wire [11:0] outt;
	wire [11:0] tmpo1;
	wire [11:0] tmpo2;

	// Instantiate the Unit Under Test (UUT)
	top_modul uut (
		.add(add), 
		.inn(inn), 
		.clr(clr), 
		.clk(clk), 
		.red_wr(red_wr), 
		.outt(outt), 
		.err_in(err_in), 
		.tmpo1(tmpo1), 
		.tmpo2(tmpo2)
	);

	initial begin
		// Initialize Inputs
		add = 0;
		inn = 0;
		clr = 0;
		clk = 0;
		red_wr = 0;
		err_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
		
	always #1 clk = ~clk;
	   initial begin
		$timeformat(-9,3,"ns",12);
		end

		initial begin
		add= 4'b0000;
		inn= 8'b0100_0100;
		err_in= 8'b0000_0000;
		red_wr=1;
		clk=1;
    	#100;
		add= 4'b0001;
		inn= 8'b0100_0100;
		err_in= 8'b0000_0010;
		//read_write=1;
		//clk=1;
		#100;
		add= 4'b0010;
		inn= 8'b0100_0100;
		err_in= 8'b0000_0100;
		//read_write=1;
		//clk=1;
		#100;
		add= 4'b0011;
		inn= 8'b0100_0100;
		err_in= 8'b0000_1000;
		//read_write=1;
		//clk=1;
		//Add stimulus here
   	end
      
endmodule

