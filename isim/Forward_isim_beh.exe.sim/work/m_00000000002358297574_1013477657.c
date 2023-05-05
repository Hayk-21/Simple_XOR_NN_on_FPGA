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
static const char *ng0 = "C:/Users/User/Documents/FPGA/FPA/Floating_Point_Power.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};



static void Always_32_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t19[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    int t30;
    char *t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3712);
    *((int *)t2) = 1;
    t3 = (t0 + 3176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);
    t4 = (t0 + 1904);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);

LAB9:    xsi_set_current_line(35, ng0);
    t15 = (t0 + 1904);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 2064);
    t21 = (t0 + 2064);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 2064);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t19, t20, t23, t26, 2, 1, t27, 32, 1);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t20 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (!(t32));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1184U);
    t3 = *((char **)t2);
    t2 = (t0 + 2064);
    t4 = (t0 + 2064);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t9 = (t0 + 2064);
    t15 = (t9 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t6, t16, 2, 1, t17, 32, 1);
    t18 = (t7 + 4);
    t10 = *((unsigned int *)t18);
    t30 = (!(t10));
    t21 = (t8 + 4);
    t11 = *((unsigned int *)t21);
    t33 = (!(t11));
    t34 = (t30 && t33);
    if (t34 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2952);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB10:    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t20);
    t37 = (t35 - t36);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t18, t17, 0, *((unsigned int *)t20), t38);
    goto LAB11;

LAB12:    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t37 = (t12 - t13);
    t38 = (t37 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t8), t38);
    goto LAB13;

LAB14:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1504U);
    t4 = *((char **)t3);
    t3 = (t0 + 1904);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2224);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

}

static void Cont_41_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 3728);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002358297574_1013477657_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Cont_41_1};
	xsi_register_didat("work_m_00000000002358297574_1013477657", "isim/Forward_isim_beh.exe.sim/work/m_00000000002358297574_1013477657.didat");
	xsi_register_executes(pe);
}
