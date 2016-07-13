`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:00:50 03/29/2016 
// Design Name: 
// Module Name:    enc 
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
module enc #(parameter n=1,k=1)(out,in,reset);
	 
 output [n-1:0] out;
 input [k-1:0] in; 
 input reset; 
 reg [n-1:0] out;
 integer i,j,p,l,h; 
 reg [n-1:0] a=0;
 
always @(in or reset) begin

if(reset)
out = 0;
else 
begin  
	  i=0;
	  j=0;
	  l=0;
	  p=0;
	  h=0;
	  while((i<n) || (j<k))
	  begin        
	  while((i+1)%(2**l)==0)
	  begin  
	  out[i] = 0;
	  i=i+1;
	  l=l+1;
	  end 
	  out[i] = in[j];
	  i=i+1;
	  j=j+1;
	  end
	  
	  //if(n>0) begin
	  i=0;
	  j=0;
	  l=0;
	  p=0;
	  h=0;
	  
	    while(h<n) begin
	    while((h+1)%(2**l)==0) begin
	    p=2**l;
	    a=0;
	      
	      for(i=(2**l)-1;i<n;i=i+(2**l)) begin
	      p=2**l;
	      while(p>0&i<n) begin
	      a[i]=1;
	      i=i+1;
	      p=p-1;
	      end
	      
	      end
       	  
		   if(^(out & a[n-1:0])) begin
		   out[(2**l)-1] = ~out[(2**l)-1];
		   end
	  h=h+1;
	  l=l+1;
	  end
	  h=h+1;  
	  end
	  //end
	  
end
end


endmodule
