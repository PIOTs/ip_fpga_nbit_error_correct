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
static const char *ng0 = "C:/Xilinx/ip_hamm/decod.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};



static void Always_32_0(char *t0)
{
    char t7[8];
    char t15[8];
    char t22[8];
    char t32[8];
    char t33[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    unsigned int t90;
    char *t91;

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4560);
    *((int *)t2) = 1;
    t3 = (t0 + 4272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1720);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2680);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(38, ng0);

LAB6:    t2 = (t0 + 1720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(48, ng0);

LAB12:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(75, ng0);

LAB56:    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = (t0 + 608);
    t13 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t13, 32);
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t4, 32, t7, 32);
    t5 = (t15 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_not_equal(t7, 32, t4, 32, t5, 32);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB2;

LAB7:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t13 = (t0 + 1320U);
    t14 = *((char **)t13);
    t13 = (t0 + 1280U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 1720);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t17, 2, t20, 32, 1);
    t21 = (t0 + 3000);
    t23 = (t0 + 3000);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 1720);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_bit_index(t22, t25, 2, t28, 32, 1);
    t29 = (t22 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1720);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB10:    xsi_vlogvar_assign_value(t21, t15, 0, *((unsigned int *)t22), 1);
    goto LAB11;

LAB13:    xsi_set_current_line(48, ng0);

LAB15:    xsi_set_current_line(49, ng0);

LAB16:    t13 = (t0 + 2200);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t16, 32, t17, 32);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 2520);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    xsi_vlog_signed_power(t22, 32, t18, 32, t21, 32, 1);
    memset(t32, 0, 8);
    xsi_vlog_signed_mod(t32, 32, t15, 32, t22, 32);
    t23 = ((char*)((ng1)));
    memset(t33, 0, 8);
    xsi_vlog_signed_equal(t33, 32, t32, 32, t23, 32);
    t24 = (t33 + 4);
    t30 = *((unsigned int *)t24);
    t34 = (~(t30));
    t35 = *((unsigned int *)t33);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB12;

LAB17:    xsi_set_current_line(49, ng0);

LAB19:    xsi_set_current_line(50, ng0);
    t25 = ((char*)((ng3)));
    t26 = (t0 + 2520);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t38, 0, 8);
    xsi_vlog_signed_power(t38, 32, t25, 32, t28, 32, 1);
    t29 = (t0 + 2040);
    xsi_vlogvar_assign_value(t29, t38, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t2, 32, t5, 32, 1);
    t6 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_signed_minus(t15, 32, t7, 32, t6, 32);
    t13 = (t0 + 1720);
    xsi_vlogvar_assign_value(t13, t15, 0, 0, 32);

LAB20:    t2 = (t0 + 1720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t6, 32);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = (t0 + 2840);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 4095U);
    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 4095U);
    t34 = *((unsigned int *)t3);
    t35 = *((unsigned int *)t15);
    t36 = (t34 & t35);
    *((unsigned int *)t22) = t36;
    t14 = (t3 + 4);
    t16 = (t15 + 4);
    t17 = (t22 + 4);
    t37 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t16);
    t40 = (t37 | t39);
    *((unsigned int *)t17) = t40;
    t41 = *((unsigned int *)t17);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB33;

LAB34:
LAB35:    memset(t7, 0, 8);
    t20 = (t22 + 4);
    t64 = *((unsigned int *)t22);
    t65 = *((unsigned int *)t22);
    t65 = (t65 & 1);
    if (*((unsigned int *)t20) != 0)
        goto LAB36;

LAB37:    t66 = 1;

LAB39:    t67 = (t66 <= 11);
    if (t67 == 1)
        goto LAB40;

LAB41:    *((unsigned int *)t7) = t65;

LAB38:    t23 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t24 = (t7 + 4);
    t25 = (t23 + 4);
    t69 = *((unsigned int *)t7);
    t70 = *((unsigned int *)t23);
    t71 = (t69 ^ t70);
    t72 = *((unsigned int *)t24);
    t73 = *((unsigned int *)t25);
    t74 = (t72 ^ t73);
    t75 = (t71 | t74);
    t76 = *((unsigned int *)t24);
    t77 = *((unsigned int *)t25);
    t78 = (t76 | t77);
    t79 = (~(t78));
    t80 = (t75 & t79);
    if (t80 != 0)
        goto LAB46;

LAB43:    if (t78 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t32) = 1;

LAB46:    t27 = (t32 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t32);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(65, ng0);

LAB53:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3160);
    t4 = (t0 + 3160);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t13 = (t0 + 1880);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    xsi_vlog_generic_convert_bit_index(t7, t6, 2, t16, 32, 1);
    t17 = (t7 + 4);
    t8 = *((unsigned int *)t17);
    t31 = (!(t8));
    if (t31 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1880);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);

LAB49:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2520);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB16;

LAB21:    xsi_set_current_line(52, ng0);

LAB23:    xsi_set_current_line(53, ng0);
    t13 = ((char*)((ng3)));
    t14 = (t0 + 2520);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    xsi_vlog_signed_power(t15, 32, t13, 32, t17, 32, 1);
    t18 = (t0 + 2040);
    xsi_vlogvar_assign_value(t18, t15, 0, 0, 32);
    xsi_set_current_line(54, ng0);

LAB24:    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t7, 0, 8);
    xsi_vlog_signed_greater(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1720);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 472);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    xsi_vlog_signed_less(t15, 32, t14, 32, t17, 32);
    t8 = *((unsigned int *)t7);
    t9 = *((unsigned int *)t15);
    t10 = (t8 & t9);
    *((unsigned int *)t22) = t10;
    t16 = (t7 + 4);
    t18 = (t15 + 4);
    t19 = (t22 + 4);
    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t18);
    t30 = (t11 | t12);
    *((unsigned int *)t19) = t30;
    t34 = *((unsigned int *)t19);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB25;

LAB26:
LAB27:    t23 = (t22 + 4);
    t54 = *((unsigned int *)t23);
    t55 = (~(t54));
    t56 = *((unsigned int *)t22);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 2520);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t5, 32, t14, 32, 1);
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t7, 32);
    t16 = (t0 + 1720);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);
    goto LAB20;

LAB25:    t36 = *((unsigned int *)t22);
    t37 = *((unsigned int *)t19);
    *((unsigned int *)t22) = (t36 | t37);
    t20 = (t7 + 4);
    t21 = (t15 + 4);
    t39 = *((unsigned int *)t7);
    t40 = (~(t39));
    t41 = *((unsigned int *)t20);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (~(t43));
    t45 = *((unsigned int *)t21);
    t46 = (~(t45));
    t31 = (t40 & t42);
    t47 = (t44 & t46);
    t48 = (~(t31));
    t49 = (~(t47));
    t50 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t50 & t48);
    t51 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB27;

LAB28:    xsi_set_current_line(54, ng0);

LAB30:    xsi_set_current_line(55, ng0);
    t24 = ((char*)((ng2)));
    t25 = (t0 + 2840);
    t26 = (t0 + 2840);
    t27 = (t26 + 72U);
    t28 = *((char **)t27);
    t29 = (t0 + 1720);
    t59 = (t29 + 56U);
    t60 = *((char **)t59);
    xsi_vlog_generic_convert_bit_index(t32, t28, 2, t60, 32, 1);
    t61 = (t32 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (!(t62));
    if (t63 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1720);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2040);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB24;

LAB31:    xsi_vlogvar_assign_value(t25, t24, 0, *((unsigned int *)t32), 1);
    goto LAB32;

LAB33:    t43 = *((unsigned int *)t22);
    t44 = *((unsigned int *)t17);
    *((unsigned int *)t22) = (t43 | t44);
    t18 = (t3 + 4);
    t19 = (t15 + 4);
    t45 = *((unsigned int *)t3);
    t46 = (~(t45));
    t48 = *((unsigned int *)t18);
    t49 = (~(t48));
    t50 = *((unsigned int *)t15);
    t51 = (~(t50));
    t52 = *((unsigned int *)t19);
    t53 = (~(t52));
    t31 = (t46 & t49);
    t47 = (t51 & t53);
    t54 = (~(t31));
    t55 = (~(t47));
    t56 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t56 & t54);
    t57 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t57 & t55);
    t58 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t58 & t54);
    t62 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t62 & t55);
    goto LAB35;

LAB36:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB38;

LAB40:    t64 = (t64 >> 1);
    t68 = (t64 & 1);
    t65 = (t65 ^ t68);

LAB42:    t66 = (t66 + 1);
    goto LAB39;

LAB45:    t26 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(61, ng0);

LAB50:    xsi_set_current_line(62, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3160);
    t59 = (t0 + 3160);
    t60 = (t59 + 72U);
    t61 = *((char **)t60);
    t86 = (t0 + 1880);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    xsi_vlog_generic_convert_bit_index(t33, t61, 2, t88, 32, 1);
    t89 = (t33 + 4);
    t90 = *((unsigned int *)t89);
    t63 = (!(t90));
    if (t63 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1880);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB49;

LAB51:    xsi_vlogvar_assign_value(t29, t28, 0, *((unsigned int *)t33), 1);
    goto LAB52;

LAB54:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), 1);
    goto LAB55;

LAB57:    xsi_set_current_line(75, ng0);

LAB59:    xsi_set_current_line(76, ng0);
    t14 = (t0 + 2360);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3160);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 3160);
    t23 = (t21 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 2680);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_index_select_value(t22, 32, t20, t24, 2, t27, 32, 1);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 2680);
    t59 = (t29 + 56U);
    t60 = *((char **)t59);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_power(t32, 32, t28, 32, t60, 32, 1);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_multiply(t33, 32, t22, 32, t32, 32);
    memset(t38, 0, 8);
    xsi_vlog_unsigned_add(t38, 32, t17, 32, t33, 32);
    t61 = (t0 + 2360);
    xsi_vlogvar_assign_value(t61, t38, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2680);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB56;

LAB60:    xsi_set_current_line(80, ng0);

LAB63:    xsi_set_current_line(81, ng0);
    t13 = (t0 + 3000);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t0 + 3000);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2360);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    t24 = ((char*)((ng2)));
    memset(t32, 0, 8);
    xsi_vlog_signed_minus(t32, 32, t23, 32, t24, 32);
    xsi_vlog_generic_get_index_select_value(t22, 1, t16, t19, 2, t32, 32, 1);
    memset(t15, 0, 8);
    t25 = (t22 + 4);
    t30 = *((unsigned int *)t25);
    t34 = (~(t30));
    t35 = *((unsigned int *)t22);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t25) == 0)
        goto LAB64;

LAB66:    t26 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t26) = 1;

LAB67:    t27 = (t15 + 4);
    t28 = (t22 + 4);
    t39 = *((unsigned int *)t22);
    t40 = (~(t39));
    *((unsigned int *)t15) = t40;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB69;

LAB68:    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & 1U);
    t46 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t46 & 1U);
    t29 = (t0 + 3000);
    t59 = (t0 + 3000);
    t60 = (t59 + 72U);
    t61 = *((char **)t60);
    t86 = (t0 + 2360);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng2)));
    memset(t38, 0, 8);
    xsi_vlog_signed_minus(t38, 32, t88, 32, t89, 32);
    xsi_vlog_generic_convert_bit_index(t33, t61, 2, t38, 32, 1);
    t91 = (t33 + 4);
    t48 = *((unsigned int *)t91);
    t31 = (!(t48));
    if (t31 == 1)
        goto LAB70;

LAB71:    goto LAB62;

LAB64:    *((unsigned int *)t15) = 1;
    goto LAB67;

LAB69:    t41 = *((unsigned int *)t15);
    t42 = *((unsigned int *)t28);
    *((unsigned int *)t15) = (t41 | t42);
    t43 = *((unsigned int *)t27);
    t44 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t43 | t44);
    goto LAB68;

LAB70:    xsi_vlogvar_assign_value(t29, t15, 0, *((unsigned int *)t33), 1);
    goto LAB71;

}


extern void work_m_00000000002367239053_2643137959_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002367239053_2643137959", "isim/x_synthesis.exe.sim/work/m_00000000002367239053_2643137959.didat");
	xsi_register_executes(pe);
}
