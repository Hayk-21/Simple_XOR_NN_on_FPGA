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
static const char *ng0 = "C:/Users/LamerX/Documents/FPGA/Simple_XOR_NN_on_FPGA/FPA.v";
static unsigned int ng1[] = {126U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {79U, 0U};
static unsigned int ng5[] = {127U, 0U};
static unsigned int ng6[] = {14U, 0U};



static void Always_44_0(char *t0)
{
    char t6[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4872);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1456U);
    t5 = *((char **)t4);
    t4 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    t2 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 23);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 23);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 255U);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t14 = (t6 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB7;

LAB6:    t15 = (t5 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) > *((unsigned int *)t5))
        goto LAB8;

LAB9:    t17 = (t13 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 23);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 23);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 255U);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t14 = (t6 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB16;

LAB15:    t15 = (t5 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t6) < *((unsigned int *)t5))
        goto LAB17;

LAB18:    t17 = (t13 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(52, ng0);

LAB24:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 8388607U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 8388607U);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t6 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB26;

LAB25:    t15 = (t5 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t6) > *((unsigned int *)t5))
        goto LAB27;

LAB28:    t17 = (t13 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 8388607U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 8388607U);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t6 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB35;

LAB34:    t15 = (t5 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t6) < *((unsigned int *)t5))
        goto LAB36;

LAB37:    t17 = (t13 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t13);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(58, ng0);

LAB43:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB41:
LAB32:
LAB22:
LAB13:    goto LAB2;

LAB7:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(48, ng0);

LAB14:    xsi_set_current_line(49, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    goto LAB13;

LAB16:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(50, ng0);

LAB23:    xsi_set_current_line(51, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    goto LAB22;

LAB26:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t13) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(54, ng0);

LAB33:    xsi_set_current_line(55, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    goto LAB32;

LAB35:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(56, ng0);

LAB42:    xsi_set_current_line(57, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 1, 0LL);
    goto LAB41;

}

static void Cont_65_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1456U);
    t3 = *((char **)t2);
    t2 = (t0 + 1616U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t18 = (t0 + 4984);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 1U;
    t24 = t23;
    t25 = (t5 + 4);
    t26 = *((unsigned int *)t5);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t31 = (t0 + 4888);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    goto LAB6;

}

static void Always_67_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 4904);
    *((int *)t2) = 1;
    t3 = (t0 + 4584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2096U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB13:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(69, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 7, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 7, 0LL);
    goto LAB13;

}


extern void work_m_00000000000597888028_3442566009_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Cont_65_1,(void *)Always_67_2};
	xsi_register_didat("work_m_00000000000597888028_3442566009", "isim/FPA_isim_beh.exe.sim/work/m_00000000000597888028_3442566009.didat");
	xsi_register_executes(pe);
}
