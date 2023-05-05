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
static const char *ng0 = "C:/Users/User/Documents/FPGA/FPA/FPA.v";
static unsigned int ng1[] = {126U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {79U, 0U};
static unsigned int ng5[] = {14U, 0U};



static void Always_39_0(char *t0)
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

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1456U);
    t5 = *((char **)t4);
    t4 = (t0 + 2656);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    t2 = (t0 + 2816);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(43, ng0);
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

LAB12:    xsi_set_current_line(45, ng0);
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

LAB21:    xsi_set_current_line(47, ng0);

LAB24:    xsi_set_current_line(49, ng0);
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

LAB31:    xsi_set_current_line(51, ng0);
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

LAB40:    xsi_set_current_line(53, ng0);

LAB43:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2976);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB41:
LAB32:
LAB22:
LAB13:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(61, ng0);

LAB48:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB46:    goto LAB2;

LAB7:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t13) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(43, ng0);

LAB14:    xsi_set_current_line(44, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 2976);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB13;

LAB16:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(45, ng0);

LAB23:    xsi_set_current_line(46, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 2976);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB22;

LAB26:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB28;

LAB27:    *((unsigned int *)t13) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(49, ng0);

LAB33:    xsi_set_current_line(50, ng0);
    t23 = ((char*)((ng2)));
    t24 = (t0 + 2976);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB32;

LAB35:    t16 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(51, ng0);

LAB42:    xsi_set_current_line(52, ng0);
    t23 = ((char*)((ng3)));
    t24 = (t0 + 2976);
    xsi_vlogvar_assign_value(t24, t23, 0, 0, 1);
    goto LAB41;

LAB44:    xsi_set_current_line(58, ng0);

LAB47:    xsi_set_current_line(59, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 2336);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 7);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB46;

}


extern void work_m_00000000002173745582_3442566009_init()
{
	static char *pe[] = {(void *)Always_39_0};
	xsi_register_didat("work_m_00000000002173745582_3442566009", "isim/FPA_isim_beh.exe.sim/work/m_00000000002173745582_3442566009.didat");
	xsi_register_executes(pe);
}
