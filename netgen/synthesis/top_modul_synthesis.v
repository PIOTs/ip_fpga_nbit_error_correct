////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.28xd
//  \   \         Application: netgen
//  /   /         Filename: top_modul_synthesis.v
// /___/   /\     Timestamp: Sat May 07 13:42:58 2016
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim top_modul.ngc top_modul_synthesis.v 
// Device	: xc7a100t-3-csg324
// Input file	: top_modul.ngc
// Output file	: C:\Xilinx\14.2\ISE_DS\project_fpga\netgen\synthesis\top_modul_synthesis.v
// # of Modules	: 1
// Design Name	: top_modul
// Xilinx        : C:\Xilinx\14.2\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module top_modul (
  clr, clk, red_wr, add, inn, err_in, outt, tmpo1, tmpo2
);
  input clr;
  input clk;
  input red_wr;
  input [3 : 0] add;
  input [7 : 0] inn;
  input [11 : 0] err_in;
  output [11 : 0] outt;
  output [11 : 0] tmpo1;
  output [11 : 0] tmpo2;
  wire add_3_IBUF_0;
  wire add_2_IBUF_1;
  wire add_1_IBUF_2;
  wire add_0_IBUF_3;
  wire inn_7_IBUF_4;
  wire inn_6_IBUF_5;
  wire inn_5_IBUF_6;
  wire inn_4_IBUF_7;
  wire inn_3_IBUF_8;
  wire inn_2_IBUF_9;
  wire inn_1_IBUF_10;
  wire inn_0_IBUF_11;
  wire err_in_11_IBUF_12;
  wire err_in_10_IBUF_13;
  wire err_in_9_IBUF_14;
  wire err_in_8_IBUF_15;
  wire err_in_7_IBUF_16;
  wire err_in_6_IBUF_17;
  wire err_in_5_IBUF_18;
  wire err_in_4_IBUF_19;
  wire err_in_3_IBUF_20;
  wire err_in_2_IBUF_21;
  wire err_in_1_IBUF_22;
  wire err_in_0_IBUF_23;
  wire clr_IBUF_24;
  wire clk_BUFGP_25;
  wire red_wr_IBUF_26;
  wire tmpo2_11_OBUF_35;
  wire tmpo2_10_OBUF_36;
  wire tmpo2_9_OBUF_37;
  wire tmpo2_8_OBUF_38;
  wire tmpo2_7_OBUF_39;
  wire tmpo2_6_OBUF_40;
  wire tmpo2_5_OBUF_41;
  wire tmpo2_4_OBUF_42;
  wire tmpo2_3_OBUF_43;
  wire tmpo2_2_OBUF_44;
  wire tmpo2_1_OBUF_45;
  wire tmpo2_0_OBUF_46;
  wire tmpo1_11_OBUF_47;
  wire tmpo1_10_OBUF_48;
  wire tmpo1_9_OBUF_49;
  wire tmpo1_8_OBUF_50;
  wire tmpo1_7_OBUF_51;
  wire tmpo1_6_OBUF_52;
  wire tmpo1_5_OBUF_53;
  wire tmpo1_4_OBUF_54;
  wire tmpo1_3_OBUF_55;
  wire tmpo1_2_OBUF_56;
  wire tmpo1_1_OBUF_57;
  wire tmpo1_0_OBUF_58;
  wire outt_11_OBUF_59;
  wire outt_10_OBUF_60;
  wire outt_9_OBUF_61;
  wire outt_8_OBUF_62;
  wire outt_7_OBUF_63;
  wire outt_6_OBUF_64;
  wire outt_5_OBUF_65;
  wire outt_4_OBUF_66;
  wire outt_3_OBUF_67;
  wire outt_2_OBUF_68;
  wire outt_1_OBUF_69;
  wire outt_0_OBUF_70;
  wire N0;
  wire \rm/clk_inv ;
  wire \de/Madd__n0106_lut<0>3 ;
  wire \de/Madd__n0106_lut<0>1 ;
  wire \de/Madd__n0106_lut<0>2 ;
  wire \de/Mmux_GND_5_o_X_5_o_Mux_17_o_6_85 ;
  wire \de/Mmux_GND_5_o_X_5_o_Mux_17_o_7_86 ;
  wire \de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 ;
  wire [7 : 0] \rm/data_out ;
  wire [7 : 0] \rm/_n0010 ;
  wire [0 : 0] \de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy ;
  wire [2 : 1] \de/GND_5_o_GND_5_o_sub_19_OUT ;
  GND   XST_GND (
    .G(N0)
  );
  RAM32X1S #(
    .INIT ( 32'h00000000 ))
  \rm/Mram_reg_array8  (
    .A0(add_0_IBUF_3),
    .A1(add_1_IBUF_2),
    .A2(add_2_IBUF_1),
    .A3(add_3_IBUF_0),
    .A4(N0),
    .D(inn_7_IBUF_4),
    .WCLK(\rm/clk_inv ),
    .WE(red_wr_IBUF_26),
    .O(\rm/_n0010 [7])
  );
  RAM32X1S #(
    .INIT ( 32'h00000000 ))
  \rm/Mram_reg_array7  (
    .A0(add_0_IBUF_3),
    .A1(add_1_IBUF_2),
    .A2(add_2_IBUF_1),
    .A3(add_3_IBUF_0),
    .A4(N0),
    .D(inn_6_IBUF_5),
    .WCLK(\rm/clk_inv ),
    .WE(red_wr_IBUF_26),
    .O(\rm/_n0010 [6])
  );
  RAM32X1S #(
    .INIT ( 32'h00000000 ))
  \rm/Mram_reg_array6  (
    .A0(add_0_IBUF_3),
    .A1(add_1_IBUF_2),
    .A2(add_2_IBUF_1),
    .A3(add_3_IBUF_0),
    .A4(N0),
    .D(inn_5_IBUF_6),
    .WCLK(\rm/clk_inv ),
    .WE(red_wr_IBUF_26),
    .O(\rm/_n0010 [5])
  );
  RAM32X1S #(
    .INIT ( 32'h00000000 ))
  \rm/Mram_reg_array5  (
    .A0(add_0_IBUF_3),
    .A1(add_1_IBUF_2),
    .A2(add_2_IBUF_1),
    .A3(add_3_IBUF_0),
    .A4(N0),
    .D(inn_4_IBUF_7),
    .WCLK(\rm/clk_inv ),
    .WE(red_wr_IBUF_26),
    .O(\rm/_n0010 [4])
  );
  RAM32X1S #(
    .INIT ( 32'h00000000 ))
  \rm/Mram_reg_array4  (
    .A0(add_0_IBUF_3),
    .A1(add_1_IBUF_2),
    .A2(add_2_IBUF_1),
    .A3(add_3_IBUF_0),
    .A4(N0),
    .D(inn_3_IBUF_8),
    .WCLK(\rm/clk_inv ),
    .WE(red_wr_IBUF_26),
    .O(\rm/_n0010 [3])
  );
  RAM32X1S #(
    .INIT ( 32'h00000000 ))
  \rm/Mram_reg_array3  (
    .A0(add_0_IBUF_3),
    .A1(add_1_IBUF_2),
    .A2(add_2_IBUF_1),
    .A3(add_3_IBUF_0),
    .A4(N0),
    .D(inn_2_IBUF_9),
    .WCLK(\rm/clk_inv ),
    .WE(red_wr_IBUF_26),
    .O(\rm/_n0010 [2])
  );
  RAM32X1S #(
    .INIT ( 32'h00000000 ))
  \rm/Mram_reg_array2  (
    .A0(add_0_IBUF_3),
    .A1(add_1_IBUF_2),
    .A2(add_2_IBUF_1),
    .A3(add_3_IBUF_0),
    .A4(N0),
    .D(inn_1_IBUF_10),
    .WCLK(\rm/clk_inv ),
    .WE(red_wr_IBUF_26),
    .O(\rm/_n0010 [1])
  );
  RAM32X1S #(
    .INIT ( 32'h00000000 ))
  \rm/Mram_reg_array1  (
    .A0(add_0_IBUF_3),
    .A1(add_1_IBUF_2),
    .A2(add_2_IBUF_1),
    .A3(add_3_IBUF_0),
    .A4(N0),
    .D(inn_0_IBUF_11),
    .WCLK(\rm/clk_inv ),
    .WE(red_wr_IBUF_26),
    .O(\rm/_n0010 [0])
  );
  FD_1   \rm/data_out_7  (
    .C(clk_BUFGP_25),
    .D(\rm/_n0010 [7]),
    .Q(\rm/data_out [7])
  );
  FD_1   \rm/data_out_6  (
    .C(clk_BUFGP_25),
    .D(\rm/_n0010 [6]),
    .Q(\rm/data_out [6])
  );
  FD_1   \rm/data_out_5  (
    .C(clk_BUFGP_25),
    .D(\rm/_n0010 [5]),
    .Q(\rm/data_out [5])
  );
  FD_1   \rm/data_out_4  (
    .C(clk_BUFGP_25),
    .D(\rm/_n0010 [4]),
    .Q(\rm/data_out [4])
  );
  FD_1   \rm/data_out_3  (
    .C(clk_BUFGP_25),
    .D(\rm/_n0010 [3]),
    .Q(\rm/data_out [3])
  );
  FD_1   \rm/data_out_2  (
    .C(clk_BUFGP_25),
    .D(\rm/_n0010 [2]),
    .Q(\rm/data_out [2])
  );
  FD_1   \rm/data_out_1  (
    .C(clk_BUFGP_25),
    .D(\rm/_n0010 [1]),
    .Q(\rm/data_out [1])
  );
  FD_1   \rm/data_out_0  (
    .C(clk_BUFGP_25),
    .D(\rm/_n0010 [0]),
    .Q(\rm/data_out [0])
  );
  MUXF7   \de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7  (
    .I0(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_7_86 ),
    .I1(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_6_85 ),
    .S(\de/GND_5_o_GND_5_o_sub_19_OUT [2]),
    .O(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 )
  );
  LUT5 #(
    .INIT ( 32'h14414114 ))
  \en/Mmux_out101  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [4]),
    .I2(\rm/data_out [5]),
    .I3(\rm/data_out [6]),
    .I4(\rm/data_out [7]),
    .O(tmpo1_7_OBUF_51)
  );
  LUT5 #(
    .INIT ( 32'h14414114 ))
  \en/Mmux_out61  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [1]),
    .I2(\rm/data_out [2]),
    .I3(\rm/data_out [3]),
    .I4(\rm/data_out [7]),
    .O(tmpo1_3_OBUF_55)
  );
  LUT6 #(
    .INIT ( 64'h4114144114414114 ))
  \en/Mmux_out41  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [0]),
    .I2(\rm/data_out [2]),
    .I3(\rm/data_out [3]),
    .I4(\rm/data_out [5]),
    .I5(\rm/data_out [6]),
    .O(tmpo1_1_OBUF_57)
  );
  LUT6 #(
    .INIT ( 64'h4114144114414114 ))
  \en/Mmux_out13  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [0]),
    .I2(\rm/data_out [1]),
    .I3(\rm/data_out [3]),
    .I4(\rm/data_out [4]),
    .I5(\rm/data_out [6]),
    .O(tmpo1_0_OBUF_58)
  );
  LUT2 #(
    .INIT ( 4'hE ))
  \er/out<0>1  (
    .I0(err_in_0_IBUF_23),
    .I1(tmpo1_0_OBUF_58),
    .O(tmpo2_0_OBUF_46)
  );
  LUT2 #(
    .INIT ( 4'hE ))
  \er/out<1>1  (
    .I0(err_in_1_IBUF_22),
    .I1(tmpo1_1_OBUF_57),
    .O(tmpo2_1_OBUF_45)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \en/Mmux_out121  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [5]),
    .O(tmpo1_9_OBUF_49)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \en/Mmux_out111  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [4]),
    .O(tmpo1_8_OBUF_50)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \en/Mmux_out91  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [3]),
    .O(tmpo1_6_OBUF_52)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \en/Mmux_out81  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [2]),
    .O(tmpo1_5_OBUF_53)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \en/Mmux_out71  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [1]),
    .O(tmpo1_4_OBUF_54)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \en/Mmux_out51  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [0]),
    .O(tmpo1_2_OBUF_56)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \en/Mmux_out31  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [7]),
    .O(tmpo1_11_OBUF_47)
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \en/Mmux_out21  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [6]),
    .O(tmpo1_10_OBUF_48)
  );
  LUT6 #(
    .INIT ( 64'h8AAAAAAABAAAAAAA ))
  \de/Mmux_out191  (
    .I0(tmpo2_6_OBUF_40),
    .I1(\de/Madd__n0106_lut<0>3 ),
    .I2(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I3(\de/Madd__n0106_lut<0>1 ),
    .I4(\de/Madd__n0106_lut<0>2 ),
    .I5(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 ),
    .O(outt_6_OBUF_64)
  );
  LUT6 #(
    .INIT ( 64'hA8AAAAAAABAAAAAA ))
  \de/Mmux_out171  (
    .I0(tmpo2_4_OBUF_42),
    .I1(\de/Madd__n0106_lut<0>1 ),
    .I2(\de/Madd__n0106_lut<0>3 ),
    .I3(\de/Madd__n0106_lut<0>2 ),
    .I4(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I5(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 ),
    .O(outt_4_OBUF_66)
  );
  LUT6 #(
    .INIT ( 64'hAAA8AAAAAAABAAAA ))
  \de/Mmux_out113  (
    .I0(tmpo2_0_OBUF_46),
    .I1(\de/Madd__n0106_lut<0>1 ),
    .I2(\de/Madd__n0106_lut<0>2 ),
    .I3(\de/Madd__n0106_lut<0>3 ),
    .I4(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I5(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 ),
    .O(outt_0_OBUF_70)
  );
  LUT6 #(
    .INIT ( 64'hA8AAAAAAABAAAAAA ))
  \de/Mmux_out151  (
    .I0(tmpo2_2_OBUF_44),
    .I1(\de/Madd__n0106_lut<0>2 ),
    .I2(\de/Madd__n0106_lut<0>3 ),
    .I3(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I4(\de/Madd__n0106_lut<0>1 ),
    .I5(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 ),
    .O(outt_2_OBUF_68)
  );
  LUT5 #(
    .INIT ( 32'hA9AAAAAA ))
  \de/Mmux_out1121  (
    .I0(tmpo2_9_OBUF_37),
    .I1(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I2(\de/Madd__n0106_lut<0>2 ),
    .I3(\de/Madd__n0106_lut<0>3 ),
    .I4(\de/Madd__n0106_lut<0>1 ),
    .O(outt_9_OBUF_61)
  );
  LUT6 #(
    .INIT ( 64'hAAA8AAAAAAABAAAA ))
  \de/Mmux_out141  (
    .I0(tmpo2_1_OBUF_45),
    .I1(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I2(\de/Madd__n0106_lut<0>3 ),
    .I3(\de/Madd__n0106_lut<0>2 ),
    .I4(\de/Madd__n0106_lut<0>1 ),
    .I5(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 ),
    .O(outt_1_OBUF_69)
  );
  LUT5 #(
    .INIT ( 32'hA9AAAAAA ))
  \de/Mmux_out1111  (
    .I0(tmpo2_8_OBUF_38),
    .I1(\de/Madd__n0106_lut<0>1 ),
    .I2(\de/Madd__n0106_lut<0>2 ),
    .I3(\de/Madd__n0106_lut<0>3 ),
    .I4(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .O(outt_8_OBUF_62)
  );
  LUT5 #(
    .INIT ( 32'h9AAAAAAA ))
  \de/Mmux_out121  (
    .I0(tmpo2_10_OBUF_36),
    .I1(\de/Madd__n0106_lut<0>2 ),
    .I2(\de/Madd__n0106_lut<0>1 ),
    .I3(\de/Madd__n0106_lut<0>3 ),
    .I4(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .O(outt_10_OBUF_60)
  );
  LUT5 #(
    .INIT ( 32'hA9AAAAAA ))
  \de/Mmux_out131  (
    .I0(tmpo2_11_OBUF_35),
    .I1(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I2(\de/Madd__n0106_lut<0>1 ),
    .I3(\de/Madd__n0106_lut<0>3 ),
    .I4(\de/Madd__n0106_lut<0>2 ),
    .O(outt_11_OBUF_59)
  );
  LUT6 #(
    .INIT ( 64'hAAA8AAAAAAABAAAA ))
  \de/Mmux_out161  (
    .I0(tmpo2_3_OBUF_43),
    .I1(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I2(\de/Madd__n0106_lut<0>3 ),
    .I3(\de/Madd__n0106_lut<0>1 ),
    .I4(\de/Madd__n0106_lut<0>2 ),
    .I5(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 ),
    .O(outt_3_OBUF_67)
  );
  LUT6 #(
    .INIT ( 64'hAAA8AAAAAAABAAAA ))
  \de/Mmux_out1101  (
    .I0(tmpo2_7_OBUF_39),
    .I1(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I2(\de/Madd__n0106_lut<0>2 ),
    .I3(\de/Madd__n0106_lut<0>1 ),
    .I4(\de/Madd__n0106_lut<0>3 ),
    .I5(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 ),
    .O(outt_7_OBUF_63)
  );
  LUT6 #(
    .INIT ( 64'hA8AAAAAAABAAAAAA ))
  \de/Mmux_out181  (
    .I0(tmpo2_5_OBUF_41),
    .I1(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I2(\de/Madd__n0106_lut<0>3 ),
    .I3(\de/Madd__n0106_lut<0>2 ),
    .I4(\de/Madd__n0106_lut<0>1 ),
    .I5(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_5_f7_87 ),
    .O(outt_5_OBUF_65)
  );
  LUT3 #(
    .INIT ( 8'hA9 ))
  \de/Msub_GND_5_o_GND_5_o_sub_19_OUT_xor<2>11  (
    .I0(\de/Madd__n0106_lut<0>2 ),
    .I1(\de/Madd__n0106_lut<0>1 ),
    .I2(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .O(\de/GND_5_o_GND_5_o_sub_19_OUT [2])
  );
  LUT5 #(
    .INIT ( 32'h96696996 ))
  \de/in1[11]_reduce_xor_111_xo<0>1  (
    .I0(tmpo2_10_OBUF_36),
    .I1(tmpo2_11_OBUF_35),
    .I2(tmpo2_7_OBUF_39),
    .I3(tmpo2_8_OBUF_38),
    .I4(tmpo2_9_OBUF_37),
    .O(\de/Madd__n0106_lut<0>3 )
  );
  LUT6 #(
    .INIT ( 64'h6996966996696996 ))
  \de/in1[11]_reduce_xor_51_xo<0>1  (
    .I0(tmpo2_10_OBUF_36),
    .I1(tmpo2_1_OBUF_45),
    .I2(tmpo2_2_OBUF_44),
    .I3(tmpo2_5_OBUF_41),
    .I4(tmpo2_6_OBUF_40),
    .I5(tmpo2_9_OBUF_37),
    .O(\de/Madd__n0106_lut<0>1 )
  );
  LUT2 #(
    .INIT ( 4'h9 ))
  \de/Msub_GND_5_o_GND_5_o_sub_19_OUT_xor<1>11  (
    .I0(\de/Madd__n0106_lut<0>1 ),
    .I1(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .O(\de/GND_5_o_GND_5_o_sub_19_OUT [1])
  );
  LUT6 #(
    .INIT ( 64'h6996966996696996 ))
  \de/in1[11]_reduce_xor_21_xo<0>1  (
    .I0(tmpo2_0_OBUF_46),
    .I1(tmpo2_10_OBUF_36),
    .I2(tmpo2_2_OBUF_44),
    .I3(tmpo2_4_OBUF_42),
    .I4(tmpo2_6_OBUF_40),
    .I5(tmpo2_8_OBUF_38),
    .O(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0])
  );
  LUT5 #(
    .INIT ( 32'h96696996 ))
  \de/in1[11]_reduce_xor_81_xo<0>1  (
    .I0(tmpo2_11_OBUF_35),
    .I1(tmpo2_3_OBUF_43),
    .I2(tmpo2_4_OBUF_42),
    .I3(tmpo2_5_OBUF_41),
    .I4(tmpo2_6_OBUF_40),
    .O(\de/Madd__n0106_lut<0>2 )
  );
  IBUF   add_3_IBUF (
    .I(add[3]),
    .O(add_3_IBUF_0)
  );
  IBUF   add_2_IBUF (
    .I(add[2]),
    .O(add_2_IBUF_1)
  );
  IBUF   add_1_IBUF (
    .I(add[1]),
    .O(add_1_IBUF_2)
  );
  IBUF   add_0_IBUF (
    .I(add[0]),
    .O(add_0_IBUF_3)
  );
  IBUF   inn_7_IBUF (
    .I(inn[7]),
    .O(inn_7_IBUF_4)
  );
  IBUF   inn_6_IBUF (
    .I(inn[6]),
    .O(inn_6_IBUF_5)
  );
  IBUF   inn_5_IBUF (
    .I(inn[5]),
    .O(inn_5_IBUF_6)
  );
  IBUF   inn_4_IBUF (
    .I(inn[4]),
    .O(inn_4_IBUF_7)
  );
  IBUF   inn_3_IBUF (
    .I(inn[3]),
    .O(inn_3_IBUF_8)
  );
  IBUF   inn_2_IBUF (
    .I(inn[2]),
    .O(inn_2_IBUF_9)
  );
  IBUF   inn_1_IBUF (
    .I(inn[1]),
    .O(inn_1_IBUF_10)
  );
  IBUF   inn_0_IBUF (
    .I(inn[0]),
    .O(inn_0_IBUF_11)
  );
  IBUF   err_in_11_IBUF (
    .I(err_in[11]),
    .O(err_in_11_IBUF_12)
  );
  IBUF   err_in_10_IBUF (
    .I(err_in[10]),
    .O(err_in_10_IBUF_13)
  );
  IBUF   err_in_9_IBUF (
    .I(err_in[9]),
    .O(err_in_9_IBUF_14)
  );
  IBUF   err_in_8_IBUF (
    .I(err_in[8]),
    .O(err_in_8_IBUF_15)
  );
  IBUF   err_in_7_IBUF (
    .I(err_in[7]),
    .O(err_in_7_IBUF_16)
  );
  IBUF   err_in_6_IBUF (
    .I(err_in[6]),
    .O(err_in_6_IBUF_17)
  );
  IBUF   err_in_5_IBUF (
    .I(err_in[5]),
    .O(err_in_5_IBUF_18)
  );
  IBUF   err_in_4_IBUF (
    .I(err_in[4]),
    .O(err_in_4_IBUF_19)
  );
  IBUF   err_in_3_IBUF (
    .I(err_in[3]),
    .O(err_in_3_IBUF_20)
  );
  IBUF   err_in_2_IBUF (
    .I(err_in[2]),
    .O(err_in_2_IBUF_21)
  );
  IBUF   err_in_1_IBUF (
    .I(err_in[1]),
    .O(err_in_1_IBUF_22)
  );
  IBUF   err_in_0_IBUF (
    .I(err_in[0]),
    .O(err_in_0_IBUF_23)
  );
  IBUF   clr_IBUF (
    .I(clr),
    .O(clr_IBUF_24)
  );
  IBUF   red_wr_IBUF (
    .I(red_wr),
    .O(red_wr_IBUF_26)
  );
  OBUF   outt_11_OBUF (
    .I(outt_11_OBUF_59),
    .O(outt[11])
  );
  OBUF   outt_10_OBUF (
    .I(outt_10_OBUF_60),
    .O(outt[10])
  );
  OBUF   outt_9_OBUF (
    .I(outt_9_OBUF_61),
    .O(outt[9])
  );
  OBUF   outt_8_OBUF (
    .I(outt_8_OBUF_62),
    .O(outt[8])
  );
  OBUF   outt_7_OBUF (
    .I(outt_7_OBUF_63),
    .O(outt[7])
  );
  OBUF   outt_6_OBUF (
    .I(outt_6_OBUF_64),
    .O(outt[6])
  );
  OBUF   outt_5_OBUF (
    .I(outt_5_OBUF_65),
    .O(outt[5])
  );
  OBUF   outt_4_OBUF (
    .I(outt_4_OBUF_66),
    .O(outt[4])
  );
  OBUF   outt_3_OBUF (
    .I(outt_3_OBUF_67),
    .O(outt[3])
  );
  OBUF   outt_2_OBUF (
    .I(outt_2_OBUF_68),
    .O(outt[2])
  );
  OBUF   outt_1_OBUF (
    .I(outt_1_OBUF_69),
    .O(outt[1])
  );
  OBUF   outt_0_OBUF (
    .I(outt_0_OBUF_70),
    .O(outt[0])
  );
  OBUF   tmpo1_11_OBUF (
    .I(tmpo1_11_OBUF_47),
    .O(tmpo1[11])
  );
  OBUF   tmpo1_10_OBUF (
    .I(tmpo1_10_OBUF_48),
    .O(tmpo1[10])
  );
  OBUF   tmpo1_9_OBUF (
    .I(tmpo1_9_OBUF_49),
    .O(tmpo1[9])
  );
  OBUF   tmpo1_8_OBUF (
    .I(tmpo1_8_OBUF_50),
    .O(tmpo1[8])
  );
  OBUF   tmpo1_7_OBUF (
    .I(tmpo1_7_OBUF_51),
    .O(tmpo1[7])
  );
  OBUF   tmpo1_6_OBUF (
    .I(tmpo1_6_OBUF_52),
    .O(tmpo1[6])
  );
  OBUF   tmpo1_5_OBUF (
    .I(tmpo1_5_OBUF_53),
    .O(tmpo1[5])
  );
  OBUF   tmpo1_4_OBUF (
    .I(tmpo1_4_OBUF_54),
    .O(tmpo1[4])
  );
  OBUF   tmpo1_3_OBUF (
    .I(tmpo1_3_OBUF_55),
    .O(tmpo1[3])
  );
  OBUF   tmpo1_2_OBUF (
    .I(tmpo1_2_OBUF_56),
    .O(tmpo1[2])
  );
  OBUF   tmpo1_1_OBUF (
    .I(tmpo1_1_OBUF_57),
    .O(tmpo1[1])
  );
  OBUF   tmpo1_0_OBUF (
    .I(tmpo1_0_OBUF_58),
    .O(tmpo1[0])
  );
  OBUF   tmpo2_11_OBUF (
    .I(tmpo2_11_OBUF_35),
    .O(tmpo2[11])
  );
  OBUF   tmpo2_10_OBUF (
    .I(tmpo2_10_OBUF_36),
    .O(tmpo2[10])
  );
  OBUF   tmpo2_9_OBUF (
    .I(tmpo2_9_OBUF_37),
    .O(tmpo2[9])
  );
  OBUF   tmpo2_8_OBUF (
    .I(tmpo2_8_OBUF_38),
    .O(tmpo2[8])
  );
  OBUF   tmpo2_7_OBUF (
    .I(tmpo2_7_OBUF_39),
    .O(tmpo2[7])
  );
  OBUF   tmpo2_6_OBUF (
    .I(tmpo2_6_OBUF_40),
    .O(tmpo2[6])
  );
  OBUF   tmpo2_5_OBUF (
    .I(tmpo2_5_OBUF_41),
    .O(tmpo2[5])
  );
  OBUF   tmpo2_4_OBUF (
    .I(tmpo2_4_OBUF_42),
    .O(tmpo2[4])
  );
  OBUF   tmpo2_3_OBUF (
    .I(tmpo2_3_OBUF_43),
    .O(tmpo2[3])
  );
  OBUF   tmpo2_2_OBUF (
    .I(tmpo2_2_OBUF_44),
    .O(tmpo2[2])
  );
  OBUF   tmpo2_1_OBUF (
    .I(tmpo2_1_OBUF_45),
    .O(tmpo2[1])
  );
  OBUF   tmpo2_0_OBUF (
    .I(tmpo2_0_OBUF_46),
    .O(tmpo2[0])
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \de/Mmux_GND_5_o_X_5_o_Mux_17_o_6  (
    .I0(\de/GND_5_o_GND_5_o_sub_19_OUT [1]),
    .I1(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I2(tmpo2_7_OBUF_39),
    .I3(tmpo2_6_OBUF_40),
    .I4(tmpo2_4_OBUF_42),
    .I5(tmpo2_5_OBUF_41),
    .O(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_6_85 )
  );
  LUT6 #(
    .INIT ( 64'hFD75B931EC64A820 ))
  \de/Mmux_GND_5_o_X_5_o_Mux_17_o_7  (
    .I0(\de/GND_5_o_GND_5_o_sub_19_OUT [1]),
    .I1(\de/Msub_GND_5_o_GND_5_o_sub_19_OUT_cy [0]),
    .I2(tmpo2_3_OBUF_43),
    .I3(tmpo2_2_OBUF_44),
    .I4(tmpo2_0_OBUF_46),
    .I5(tmpo2_1_OBUF_45),
    .O(\de/Mmux_GND_5_o_X_5_o_Mux_17_o_7_86 )
  );
  LUT3 #(
    .INIT ( 8'hF4 ))
  \er/out<2>1  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [0]),
    .I2(err_in_2_IBUF_21),
    .O(tmpo2_2_OBUF_44)
  );
  LUT6 #(
    .INIT ( 64'hABBABAABBAABABBA ))
  \er/out<3>1  (
    .I0(err_in_3_IBUF_20),
    .I1(clr_IBUF_24),
    .I2(\rm/data_out [1]),
    .I3(\rm/data_out [2]),
    .I4(\rm/data_out [3]),
    .I5(\rm/data_out [7]),
    .O(tmpo2_3_OBUF_43)
  );
  LUT3 #(
    .INIT ( 8'hF4 ))
  \er/out<4>1  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [1]),
    .I2(err_in_4_IBUF_19),
    .O(tmpo2_4_OBUF_42)
  );
  LUT3 #(
    .INIT ( 8'hF4 ))
  \er/out<5>1  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [2]),
    .I2(err_in_5_IBUF_18),
    .O(tmpo2_5_OBUF_41)
  );
  LUT3 #(
    .INIT ( 8'hF4 ))
  \er/out<6>1  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [3]),
    .I2(err_in_6_IBUF_17),
    .O(tmpo2_6_OBUF_40)
  );
  LUT6 #(
    .INIT ( 64'hABBABAABBAABABBA ))
  \er/out<7>1  (
    .I0(err_in_7_IBUF_16),
    .I1(clr_IBUF_24),
    .I2(\rm/data_out [4]),
    .I3(\rm/data_out [5]),
    .I4(\rm/data_out [6]),
    .I5(\rm/data_out [7]),
    .O(tmpo2_7_OBUF_39)
  );
  LUT3 #(
    .INIT ( 8'hF4 ))
  \er/out<8>1  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [4]),
    .I2(err_in_8_IBUF_15),
    .O(tmpo2_8_OBUF_38)
  );
  LUT3 #(
    .INIT ( 8'hF4 ))
  \er/out<9>1  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [5]),
    .I2(err_in_9_IBUF_14),
    .O(tmpo2_9_OBUF_37)
  );
  LUT3 #(
    .INIT ( 8'hF4 ))
  \er/out<10>1  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [6]),
    .I2(err_in_10_IBUF_13),
    .O(tmpo2_10_OBUF_36)
  );
  LUT3 #(
    .INIT ( 8'hF4 ))
  \er/out<11>1  (
    .I0(clr_IBUF_24),
    .I1(\rm/data_out [7]),
    .I2(err_in_11_IBUF_12),
    .O(tmpo2_11_OBUF_35)
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_25)
  );
  INV   \rm/clk_inv7_INV_0  (
    .I(clk_BUFGP_25),
    .O(\rm/clk_inv )
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

