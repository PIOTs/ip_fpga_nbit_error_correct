`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:01:30 03/29/2016 
// Design Name: 
// Module Name:    decod 
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
module decod #(parameter n=1,k=1)(in1,out1);


input [n-1:0] in1;
integer i,j,p,h,z,l,f; 
reg [n-1:0] a=0;
output reg [n-1:0] out1;
reg [(n-k)-1:0] temp;
reg [(n-k)-1:0] temp1=0;


always @(in1) begin

		//if(n>0) begin
		i=0;
		z=0;
      f=0;
		while(i<n) begin
		out1[i]=in1[i];
		i=i+1;
		end
	   		
     i=0;
	  j=0;
	  l=0;
	  p=0;
	  h=0;
	  while(h<n) begin
	  while((h+1)%(2**l)==0) begin
	  p=2**l;
	  a=0;
	     for(i=(2**l)-1;i<n;i=i+(2**l))  begin
	     p=2**l;
	     while(p>0&i<n) begin
	     a[i]=1;
	     i=i+1;
	     p=p-1;
	     end
	     end	  
		  
		  if(^(in1 & a[n-1:0])==0) begin
		  temp[j] = 0;
		  j=j+1;
		  end
		  else begin
		  temp[j]=1;
		  j=j+1;
		  end
	  h=h+1;
	  l=l+1;
	  end
	  h=h+1;  
	  end
	  
	  while(f<(n-k)) begin
	  z =z + (temp[f]*(2**f));
     f=f+1;
     end	  
	  
	  if(z != 0) begin
	  out1[z-1]= ~out1[z-1];
	  end
     
	  
	  
//end
end
endmodule
//endmodule
