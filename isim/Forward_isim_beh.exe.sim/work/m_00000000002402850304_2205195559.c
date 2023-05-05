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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/User/Documents/FPGA/FPA/Floating_Point_Exponent.v";
static unsigned int ng1[] = {1065353216U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1056964608U, 0U};
static unsigned int ng5[] = {1042983595U, 0U};
static unsigned int ng6[] = {1026206379U, 0U};
static unsigned int ng7[] = {1007192201U, 0U};



static void Always_40_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 5176);
    *((int *)t2) = 1;
    t3 = (t0 + 4640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3688);
    t8 = (t0 + 3688);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3688);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t7 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    t15 = (t0 + 2728);
    t18 = (t15 + 72U);
    t27 = *((char **)t18);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t7 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t33 = (t26 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 2728);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB6:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t7), t25);
    goto LAB7;

LAB8:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t26), t25);
    goto LAB9;

LAB10:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), t25);
    goto LAB11;

LAB12:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 3688);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB13:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB14;

LAB15:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 2888);
    t5 = (t0 + 2888);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2888);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2888);
    t4 = (t0 + 2888);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB16:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB17;

LAB18:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB19;

LAB20:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3688);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    t15 = (t0 + 2728);
    t18 = (t15 + 72U);
    t27 = *((char **)t18);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t7 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t33 = (t26 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    t15 = (t0 + 2728);
    t18 = (t15 + 72U);
    t27 = *((char **)t18);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t7 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t33 = (t26 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB22;

LAB23:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t26), t25);
    goto LAB24;

LAB25:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t26), t25);
    goto LAB26;

LAB27:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 3688);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB28:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB29;

LAB30:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2888);
    t5 = (t0 + 2888);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2888);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    t4 = (t0 + 2888);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB31:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB32;

LAB33:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB34;

LAB35:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3688);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    t15 = (t0 + 2728);
    t18 = (t15 + 72U);
    t27 = *((char **)t18);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t7 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t33 = (t26 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    t15 = (t0 + 2728);
    t18 = (t15 + 72U);
    t27 = *((char **)t18);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t7 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t33 = (t26 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB36:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB37;

LAB38:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t26), t25);
    goto LAB39;

LAB40:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t26), t25);
    goto LAB41;

LAB42:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 3688);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB43:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB44;

LAB45:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 2888);
    t5 = (t0 + 2888);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2888);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2888);
    t4 = (t0 + 2888);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB46:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB47;

LAB48:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB49;

LAB50:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3688);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    t15 = (t0 + 2728);
    t18 = (t15 + 72U);
    t27 = *((char **)t18);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t7 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t33 = (t26 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    t15 = (t0 + 2728);
    t18 = (t15 + 72U);
    t27 = *((char **)t18);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t7 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t33 = (t26 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB51:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB52;

LAB53:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t26), t25);
    goto LAB54;

LAB55:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t26), t25);
    goto LAB56;

LAB57:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    t3 = (t0 + 3688);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB58:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB59;

LAB60:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = (t0 + 2888);
    t5 = (t0 + 2888);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2888);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2888);
    t4 = (t0 + 2888);
    t5 = (t4 + 72U);
    t8 = *((char **)t5);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t6 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t14 = (t7 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4416);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB61:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB62;

LAB63:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t7), t25);
    goto LAB64;

LAB65:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    t3 = (t0 + 3688);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t6, t7, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t6 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (!(t16));
    t15 = (t7 + 4);
    t19 = *((unsigned int *)t15);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    t15 = (t0 + 2728);
    t18 = (t15 + 72U);
    t27 = *((char **)t18);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t7 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t33 = (t26 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    t8 = (t5 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 3688);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2728);
    t15 = (t0 + 2728);
    t18 = (t15 + 72U);
    t27 = *((char **)t18);
    t28 = (t0 + 2728);
    t29 = (t28 + 64U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t7 + 4);
    t16 = *((unsigned int *)t32);
    t17 = (!(t16));
    t33 = (t26 + 4);
    t19 = *((unsigned int *)t33);
    t20 = (!(t19));
    t21 = (t17 && t20);
    if (t21 == 1)
        goto LAB70;

LAB71:    goto LAB2;

LAB66:    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t7);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t3, t4, 0, *((unsigned int *)t7), t25);
    goto LAB67;

LAB68:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t26), t25);
    goto LAB69;

LAB70:    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t26);
    t24 = (t22 - t23);
    t25 = (t24 + 1);
    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t26), t25);
    goto LAB71;

}

static void Cont_85_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 5272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 5192);
    *((int *)t8) = 1;

LAB1:    return;
}


extern void work_m_00000000002402850304_2205195559_init()
{
	static char *pe[] = {(void *)Always_40_0,(void *)Cont_85_1};
	xsi_register_didat("work_m_00000000002402850304_2205195559", "isim/Forward_isim_beh.exe.sim/work/m_00000000002402850304_2205195559.didat");
	xsi_register_executes(pe);
}
