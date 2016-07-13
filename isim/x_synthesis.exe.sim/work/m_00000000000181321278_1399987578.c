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
static const char *ng0 = "C:/Xilinx/ip_hamm/rmm.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};



static void Initial_30_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2680);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t4, 32, t6, 32, 1);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t3, 32, t7, 32);
    t5 = (t8 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB6:    xsi_set_current_line(32, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 2520);
    t18 = (t0 + 2520);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2520);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 2680);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2680);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t3, 32, t4, 32);
    t5 = (t0 + 2680);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, *((unsigned int *)t17), t37, 0LL);
    goto LAB8;

}

static void Always_36_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;

LAB0:    t1 = (t0 + 3848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4168);
    *((int *)t2) = 1;
    t3 = (t0 + 3880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;

LAB18:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2520);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 2520);
    t22 = (t21 + 64U);
    t28 = *((char **)t22);
    t29 = (t0 + 1800U);
    t32 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t6, 8, t4, t8, t28, 2, 1, t32, 4, 2);
    t29 = (t0 + 2360);
    xsi_vlogvar_assign_value(t29, t6, 0, 0, 8);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);
    t28 = (t0 + 1960U);
    t29 = *((char **)t28);
    t28 = (t0 + 2520);
    t32 = (t0 + 2520);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2520);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1800U);
    t39 = *((char **)t38);
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t39, 4, 2);
    t38 = (t30 + 4);
    t40 = *((unsigned int *)t38);
    t41 = (!(t40));
    t42 = (t31 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t31);
    t48 = (t46 - t47);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, *((unsigned int *)t31), t49, 0LL);
    goto LAB14;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(39, ng0);

LAB22:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 2680);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 32);

LAB23:    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_signed_power(t6, 32, t5, 32, t8, 32, 1);
    memset(t30, 0, 8);
    xsi_vlog_signed_less(t30, 32, t4, 32, t6, 32);
    t7 = (t30 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t30);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB24;

LAB25:    goto LAB21;

LAB24:    xsi_set_current_line(40, ng0);

LAB26:    xsi_set_current_line(41, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 2520);
    t28 = (t0 + 2520);
    t29 = (t28 + 72U);
    t32 = *((char **)t29);
    t33 = (t0 + 2520);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 2680);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    xsi_vlog_generic_convert_array_indices(t31, t50, t32, t35, 2, 1, t38, 32, 1);
    t39 = (t31 + 4);
    t14 = *((unsigned int *)t39);
    t41 = (!(t14));
    t42 = (t50 + 4);
    t15 = *((unsigned int *)t42);
    t44 = (!(t15));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB23;

LAB27:    t16 = *((unsigned int *)t31);
    t17 = *((unsigned int *)t50);
    t48 = (t16 - t17);
    t49 = (t48 + 1);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, *((unsigned int *)t50), t49, 0LL);
    goto LAB28;

}


extern void work_m_00000000000181321278_1399987578_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_36_1};
	xsi_register_didat("work_m_00000000000181321278_1399987578", "isim/x_synthesis.exe.sim/work/m_00000000000181321278_1399987578.didat");
	xsi_register_executes(pe);
}
