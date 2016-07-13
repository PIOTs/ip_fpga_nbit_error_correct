/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Xilinx/ip_hamm/enc.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};



static void Always_30_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t25[8];
    char t26[8];
    char t33[8];
    char t71[8];
    char t76[8];
    char t77[8];
    char t79[8];
    char t88[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4080);
    *((int *)t2) = 1;
    t3 = (t0 + 3792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(41, ng0);

LAB10:    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    memset(t14, 0, 8);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t5) != 0)
        goto LAB13;

LAB14:    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB15;

LAB16:    memcpy(t33, t14, 8);

LAB17:    t61 = (t33 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (~(t62));
    t64 = *((unsigned int *)t33);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(61, ng0);

LAB36:    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB37;

LAB38:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1880);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 12);
    goto LAB8;

LAB11:    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB15:    t20 = (t0 + 2200);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 608);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_signed_less(t25, 32, t22, 32, t24, 32);
    memset(t26, 0, 8);
    t23 = (t25 + 4);
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t25);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t23) != 0)
        goto LAB20;

LAB21:    t34 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t14 + 4);
    t38 = (t26 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB17;

LAB18:    *((unsigned int *)t26) = 1;
    goto LAB21;

LAB20:    t32 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB21;

LAB22:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t14 + 4);
    t48 = (t26 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t14);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t26);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB24;

LAB25:    xsi_set_current_line(42, ng0);

LAB27:    xsi_set_current_line(43, ng0);

LAB28:    t67 = (t0 + 2040);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    t70 = ((char*)((ng2)));
    memset(t71, 0, 8);
    xsi_vlog_signed_add(t71, 32, t69, 32, t70, 32);
    t72 = ((char*)((ng3)));
    t73 = (t0 + 2520);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memset(t76, 0, 8);
    xsi_vlog_signed_power(t76, 32, t72, 32, t75, 32, 1);
    memset(t77, 0, 8);
    xsi_vlog_signed_mod(t77, 32, t71, 32, t76, 32);
    t78 = ((char*)((ng1)));
    memset(t79, 0, 8);
    xsi_vlog_signed_equal(t79, 32, t77, 32, t78, 32);
    t80 = (t79 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = (t0 + 1280U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = (t0 + 2200);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t13, 1, t3, t5, 2, t15, 32, 1);
    t20 = (t0 + 1880);
    t21 = (t0 + 1880);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2040);
    t32 = (t24 + 56U);
    t37 = *((char **)t32);
    xsi_vlog_generic_convert_bit_index(t14, t23, 2, t37, 32, 1);
    t38 = (t14 + 4);
    t6 = *((unsigned int *)t38);
    t52 = (!(t6));
    if (t52 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2040);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2200);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB29:    xsi_set_current_line(44, ng0);

LAB31:    xsi_set_current_line(45, ng0);
    t86 = ((char*)((ng1)));
    t87 = (t0 + 1880);
    t89 = (t0 + 1880);
    t90 = (t89 + 72U);
    t91 = *((char **)t90);
    t92 = (t0 + 2040);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    xsi_vlog_generic_convert_bit_index(t88, t91, 2, t94, 32, 1);
    t95 = (t88 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (!(t96));
    if (t97 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2040);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2520);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB28;

LAB32:    xsi_vlogvar_assign_value(t87, t86, 0, *((unsigned int *)t88), 1);
    goto LAB33;

LAB34:    xsi_vlogvar_assign_value(t20, t13, 0, *((unsigned int *)t14), 1);
    goto LAB35;

LAB37:    xsi_set_current_line(61, ng0);

LAB39:    xsi_set_current_line(62, ng0);

LAB40:    t12 = (t0 + 2680);
    t15 = (t12 + 56U);
    t20 = *((char **)t15);
    t21 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t20, 32, t21, 32);
    t22 = ((char*)((ng3)));
    t23 = (t0 + 2520);
    t24 = (t23 + 56U);
    t32 = *((char **)t24);
    memset(t25, 0, 8);
    xsi_vlog_signed_power(t25, 32, t22, 32, t32, 32, 1);
    memset(t26, 0, 8);
    xsi_vlog_signed_mod(t26, 32, t14, 32, t25, 32);
    t37 = ((char*)((ng1)));
    memset(t33, 0, 8);
    xsi_vlog_signed_equal(t33, 32, t26, 32, t37, 32);
    t38 = (t33 + 4);
    t16 = *((unsigned int *)t38);
    t17 = (~(t16));
    t18 = *((unsigned int *)t33);
    t19 = (t18 & t17);
    t27 = (t19 != 0);
    if (t27 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB36;

LAB41:    xsi_set_current_line(62, ng0);

LAB43:    xsi_set_current_line(63, ng0);
    t39 = ((char*)((ng3)));
    t47 = (t0 + 2520);
    t48 = (t47 + 56U);
    t61 = *((char **)t48);
    memset(t71, 0, 8);
    xsi_vlog_signed_power(t71, 32, t39, 32, t61, 32, 1);
    t67 = (t0 + 2360);
    xsi_vlogvar_assign_value(t67, t71, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(66, ng0);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    xsi_vlog_signed_power(t13, 32, t2, 32, t5, 32, 1);
    t11 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_signed_minus(t14, 32, t13, 32, t11, 32);
    t12 = (t0 + 2040);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);

LAB44:    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t11, 32);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2840);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t20 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t20);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 4095U);
    t16 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t16 & 4095U);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    t19 = (t17 & t18);
    *((unsigned int *)t25) = t19;
    t21 = (t4 + 4);
    t22 = (t14 + 4);
    t23 = (t25 + 4);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    t29 = (t27 | t28);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t23);
    t31 = (t30 != 0);
    if (t31 == 1)
        goto LAB57;

LAB58:
LAB59:    memset(t13, 0, 8);
    t37 = (t25 + 4);
    t57 = *((unsigned int *)t25);
    t58 = *((unsigned int *)t25);
    t58 = (t58 & 1);
    if (*((unsigned int *)t37) != 0)
        goto LAB60;

LAB61:    t59 = 1;

LAB63:    t60 = (t59 <= 11);
    if (t60 == 1)
        goto LAB64;

LAB65:    *((unsigned int *)t13) = t58;

LAB62:    t39 = (t13 + 4);
    t63 = *((unsigned int *)t39);
    t64 = (~(t63));
    t65 = *((unsigned int *)t13);
    t66 = (t65 & t64);
    t81 = (t66 != 0);
    if (t81 > 0)
        goto LAB67;

LAB68:
LAB69:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2520);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB40;

LAB45:    xsi_set_current_line(66, ng0);

LAB47:    xsi_set_current_line(67, ng0);
    t12 = ((char*)((ng3)));
    t15 = (t0 + 2520);
    t20 = (t15 + 56U);
    t21 = *((char **)t20);
    memset(t14, 0, 8);
    xsi_vlog_signed_power(t14, 32, t12, 32, t21, 32, 1);
    t22 = (t0 + 2360);
    xsi_vlogvar_assign_value(t22, t14, 0, 0, 32);
    xsi_set_current_line(68, ng0);

LAB48:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_signed_greater(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2040);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    t20 = (t0 + 472);
    t21 = *((char **)t20);
    memset(t14, 0, 8);
    xsi_vlog_signed_less(t14, 32, t15, 32, t21, 32);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t14);
    t8 = (t6 & t7);
    *((unsigned int *)t25) = t8;
    t20 = (t13 + 4);
    t22 = (t14 + 4);
    t23 = (t25 + 4);
    t9 = *((unsigned int *)t20);
    t10 = *((unsigned int *)t22);
    t16 = (t9 | t10);
    *((unsigned int *)t23) = t16;
    t17 = *((unsigned int *)t23);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB49;

LAB50:
LAB51:    t37 = (t25 + 4);
    t49 = *((unsigned int *)t37);
    t50 = (~(t49));
    t51 = *((unsigned int *)t25);
    t53 = (t51 & t50);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 2520);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memset(t13, 0, 8);
    xsi_vlog_signed_power(t13, 32, t5, 32, t15, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t4, 32, t13, 32);
    t20 = (t0 + 2040);
    xsi_vlogvar_assign_value(t20, t14, 0, 0, 32);
    goto LAB44;

LAB49:    t19 = *((unsigned int *)t25);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t25) = (t19 | t27);
    t24 = (t13 + 4);
    t32 = (t14 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t24);
    t31 = (~(t30));
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t40 = (~(t36));
    t52 = (t29 & t31);
    t56 = (t35 & t40);
    t41 = (~(t52));
    t42 = (~(t56));
    t43 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t43 & t41);
    t44 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t44 & t42);
    t45 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t45 & t41);
    t46 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t46 & t42);
    goto LAB51;

LAB52:    xsi_set_current_line(68, ng0);

LAB54:    xsi_set_current_line(69, ng0);
    t38 = ((char*)((ng2)));
    t39 = (t0 + 2840);
    t47 = (t0 + 2840);
    t48 = (t47 + 72U);
    t61 = *((char **)t48);
    t67 = (t0 + 2040);
    t68 = (t67 + 56U);
    t69 = *((char **)t68);
    xsi_vlog_generic_convert_bit_index(t26, t61, 2, t69, 32, 1);
    t70 = (t26 + 4);
    t55 = *((unsigned int *)t70);
    t97 = (!(t55));
    if (t97 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2040);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2360);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB48;

LAB55:    xsi_vlogvar_assign_value(t39, t38, 0, *((unsigned int *)t26), 1);
    goto LAB56;

LAB57:    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t23);
    *((unsigned int *)t25) = (t34 | t35);
    t24 = (t4 + 4);
    t32 = (t14 + 4);
    t36 = *((unsigned int *)t4);
    t40 = (~(t36));
    t41 = *((unsigned int *)t24);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (~(t43));
    t45 = *((unsigned int *)t32);
    t46 = (~(t45));
    t52 = (t40 & t42);
    t56 = (t44 & t46);
    t49 = (~(t52));
    t50 = (~(t56));
    t51 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t51 & t49);
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & t50);
    t54 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t54 & t49);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t50);
    goto LAB59;

LAB60:    t38 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB62;

LAB64:    t57 = (t57 >> 1);
    t62 = (t57 & 1);
    t58 = (t58 ^ t62);

LAB66:    t59 = (t59 + 1);
    goto LAB63;

LAB67:    xsi_set_current_line(76, ng0);

LAB70:    xsi_set_current_line(77, ng0);
    t47 = (t0 + 1880);
    t48 = (t47 + 56U);
    t61 = *((char **)t48);
    t67 = (t0 + 1880);
    t68 = (t67 + 72U);
    t69 = *((char **)t68);
    t70 = ((char*)((ng3)));
    t72 = (t0 + 2520);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t71, 0, 8);
    xsi_vlog_signed_power(t71, 32, t70, 32, t74, 32, 1);
    t75 = ((char*)((ng2)));
    memset(t76, 0, 8);
    xsi_vlog_signed_minus(t76, 32, t71, 32, t75, 32);
    xsi_vlog_generic_get_index_select_value(t33, 1, t61, t69, 2, t76, 32, 1);
    memset(t26, 0, 8);
    t78 = (t33 + 4);
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t33);
    t85 = (t84 & t83);
    t96 = (t85 & 1U);
    if (t96 != 0)
        goto LAB74;

LAB72:    if (*((unsigned int *)t78) == 0)
        goto LAB71;

LAB73:    t80 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t80) = 1;

LAB74:    t86 = (t26 + 4);
    t87 = (t33 + 4);
    t98 = *((unsigned int *)t33);
    t99 = (~(t98));
    *((unsigned int *)t26) = t99;
    *((unsigned int *)t86) = 0;
    if (*((unsigned int *)t87) != 0)
        goto LAB76;

LAB75:    t104 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t104 & 1U);
    t105 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t105 & 1U);
    t89 = (t0 + 1880);
    t90 = (t0 + 1880);
    t91 = (t90 + 72U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng3)));
    t94 = (t0 + 2520);
    t95 = (t94 + 56U);
    t106 = *((char **)t95);
    memset(t79, 0, 8);
    xsi_vlog_signed_power(t79, 32, t93, 32, t106, 32, 1);
    t107 = ((char*)((ng2)));
    memset(t88, 0, 8);
    xsi_vlog_signed_minus(t88, 32, t79, 32, t107, 32);
    xsi_vlog_generic_convert_bit_index(t77, t92, 2, t88, 32, 1);
    t108 = (t77 + 4);
    t109 = *((unsigned int *)t108);
    t97 = (!(t109));
    if (t97 == 1)
        goto LAB77;

LAB78:    goto LAB69;

LAB71:    *((unsigned int *)t26) = 1;
    goto LAB74;

LAB76:    t100 = *((unsigned int *)t26);
    t101 = *((unsigned int *)t87);
    *((unsigned int *)t26) = (t100 | t101);
    t102 = *((unsigned int *)t86);
    t103 = *((unsigned int *)t87);
    *((unsigned int *)t86) = (t102 | t103);
    goto LAB75;

LAB77:    xsi_vlogvar_assign_value(t89, t26, 0, *((unsigned int *)t77), 1);
    goto LAB78;

}


extern void work_m_00000000004110827743_1550381489_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000004110827743_1550381489", "isim/tst1_isim_beh.exe.sim/work/m_00000000004110827743_1550381489.didat");
	xsi_register_executes(pe);
}
