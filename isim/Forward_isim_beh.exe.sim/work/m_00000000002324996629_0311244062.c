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
static const char *ng0 = "C:/Users/User/Documents/FPGA/FPA/Floating_Point_Multiplier.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {0U, 0U, 0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {127U, 0U};



static void Always_32_0(char *t0)
{
    char t6[8];
    char t20[8];
    char t35[8];
    char t51[8];
    char t59[8];
    char t95[16];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 48);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 48);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 48);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 23);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t20, 0, 8);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t6);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) != 0)
        goto LAB12;

LAB13:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (!(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    memcpy(t59, t20, 8);

LAB16:    t87 = (t59 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t59);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(42, ng0);

LAB31:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 31);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = (t0 + 1208U);
    t19 = *((char **)t5);
    memset(t20, 0, 8);
    t5 = (t20 + 4);
    t21 = (t19 + 4);
    t13 = *((unsigned int *)t19);
    t14 = (t13 >> 31);
    t15 = (t14 & 1);
    *((unsigned int *)t20) = t15;
    t16 = *((unsigned int *)t21);
    t17 = (t16 >> 31);
    t18 = (t17 & 1);
    *((unsigned int *)t5) = t18;
    t22 = *((unsigned int *)t6);
    t23 = *((unsigned int *)t20);
    t24 = (t22 ^ t23);
    *((unsigned int *)t35) = t24;
    t27 = (t6 + 4);
    t28 = (t20 + 4);
    t33 = (t35 + 4);
    t25 = *((unsigned int *)t27);
    t26 = *((unsigned int *)t28);
    t29 = (t25 | t26);
    *((unsigned int *)t33) = t29;
    t30 = *((unsigned int *)t33);
    t31 = (t30 != 0);
    if (t31 == 1)
        goto LAB32;

LAB33:
LAB34:    t34 = (t0 + 1768);
    xsi_vlogvar_assign_value(t34, t35, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
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
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1208U);
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
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
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
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t95, 48, 48, 3U, t19, 24, t5, 1, t6, 23);
    t21 = (t0 + 2888);
    xsi_vlogvar_assign_value(t21, t95, 0, 0, 48);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1208U);
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
    t19 = ((char*)((ng1)));
    xsi_vlogtype_concat(t95, 48, 48, 3U, t19, 24, t5, 1, t6, 23);
    t21 = (t0 + 2728);
    xsi_vlogvar_assign_value(t21, t95, 0, 0, 48);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t4, 8, t5, 8);
    t19 = (t0 + 2088);
    t21 = (t19 + 56U);
    t27 = *((char **)t21);
    t28 = ((char*)((ng4)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 8, t27, 8, t28, 8);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 8, t6, 8, t20, 8);
    t33 = ((char*)((ng4)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 8, t35, 8, t33, 8);
    t34 = (t0 + 2248);
    xsi_vlogvar_assign_value(t34, t51, 0, 0, 8);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t19 = (t5 + 56U);
    t21 = *((char **)t19);
    xsi_vlog_unsigned_multiply(t95, 48, t4, 48, t21, 48);
    t27 = (t0 + 2568);
    xsi_vlogvar_assign_value(t27, t95, 0, 0, 48);
    xsi_set_current_line(51, ng0);

LAB35:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t19 = (t4 + 8);
    t21 = (t4 + 12);
    t7 = *((unsigned int *)t19);
    t8 = (t7 >> 15);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t21);
    t11 = (t10 >> 15);
    t12 = (t11 & 1);
    *((unsigned int *)t5) = t12;
    t27 = ((char*)((ng3)));
    memset(t20, 0, 8);
    t28 = (t6 + 4);
    t33 = (t27 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t27);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t28);
    t17 = *((unsigned int *)t33);
    t18 = (t16 ^ t17);
    t22 = (t15 | t18);
    t23 = *((unsigned int *)t28);
    t24 = *((unsigned int *)t33);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t29 = (t22 & t26);
    if (t29 != 0)
        goto LAB39;

LAB36:    if (t25 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t20) = 1;

LAB39:    t36 = (t20 + 4);
    t30 = *((unsigned int *)t36);
    t31 = (~(t30));
    t32 = *((unsigned int *)t20);
    t38 = (t32 & t31);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(58, ng0);

LAB44:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t20, 0, 8);
    t5 = (t20 + 4);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 23);
    *((unsigned int *)t20) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 23);
    *((unsigned int *)t5) = t10;
    t21 = (t4 + 8);
    t27 = (t4 + 12);
    t11 = *((unsigned int *)t21);
    t12 = (t11 << 9);
    t13 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t13 | t12);
    t14 = *((unsigned int *)t27);
    t15 = (t14 << 9);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 | t15);
    t17 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t17 & 8388607U);
    t18 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t18 & 8388607U);
    xsi_vlogtype_concat(t6, 23, 23, 1U, t20, 23);
    t28 = (t0 + 3048);
    xsi_vlogvar_assign_value(t28, t6, 0, 0, 23);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB42:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t19 = (t5 + 56U);
    t21 = *((char **)t19);
    t27 = (t0 + 1768);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t33, 1, t21, 8, t4, 23);
    t34 = (t0 + 1608);
    xsi_vlogvar_assign_value(t34, t6, 0, 0, 32);

LAB30:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB12:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB13;

LAB14:    t33 = (t0 + 1208U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng1)));
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB20;

LAB17:    if (t47 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t35) = 1;

LAB20:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t52) != 0)
        goto LAB23;

LAB24:    t60 = *((unsigned int *)t20);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t20 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t51) = 1;
    goto LAB24;

LAB23:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB24;

LAB25:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t20 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t20);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB27;

LAB28:    xsi_set_current_line(40, ng0);
    t93 = ((char*)((ng1)));
    t94 = (t0 + 1608);
    xsi_vlogvar_assign_value(t94, t93, 0, 0, 32);
    goto LAB30;

LAB32:    t32 = *((unsigned int *)t35);
    t38 = *((unsigned int *)t33);
    *((unsigned int *)t35) = (t32 | t38);
    goto LAB34;

LAB38:    t34 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(53, ng0);

LAB43:    xsi_set_current_line(54, ng0);
    t37 = (t0 + 2568);
    t50 = (t37 + 56U);
    t52 = *((char **)t50);
    memset(t51, 0, 8);
    t58 = (t51 + 4);
    t63 = (t52 + 4);
    t40 = *((unsigned int *)t52);
    t41 = (t40 >> 24);
    *((unsigned int *)t51) = t41;
    t42 = *((unsigned int *)t63);
    t43 = (t42 >> 24);
    *((unsigned int *)t58) = t43;
    t64 = (t52 + 8);
    t65 = (t52 + 12);
    t44 = *((unsigned int *)t64);
    t45 = (t44 << 8);
    t46 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t46 | t45);
    t47 = *((unsigned int *)t65);
    t48 = (t47 << 8);
    t49 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t49 | t48);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 & 8388607U);
    t54 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t54 & 8388607U);
    xsi_vlogtype_concat(t35, 23, 23, 1U, t51, 23);
    t73 = (t0 + 3048);
    xsi_vlogvar_assign_value(t73, t35, 0, 0, 23);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t19 = (t0 + 2408);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 8);
    goto LAB42;

}


extern void work_m_00000000002324996629_0311244062_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_00000000002324996629_0311244062", "isim/Forward_isim_beh.exe.sim/work/m_00000000002324996629_0311244062.didat");
	xsi_register_executes(pe);
}
