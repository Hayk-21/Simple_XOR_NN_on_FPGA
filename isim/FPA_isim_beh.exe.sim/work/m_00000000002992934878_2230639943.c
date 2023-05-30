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
static const char *ng0 = "C:/Users/LamerX/Documents/FPGA/Simple_XOR_NN_on_FPGA/Floating_Point_Adder.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {24, 0};



static void Always_31_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t38[8];
    char t39[8];
    char t68[8];
    char t92[8];
    char t104[8];
    char t136[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
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
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 5976);
    *((int *)t2) = 1;
    t3 = (t0 + 5440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 23);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 23);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 8388607U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 8388607U);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 24, 24, 2U, t5, 1, t15, 23);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 8388607U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 8388607U);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 24, 24, 2U, t5, 1, t15, 23);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t14);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t17);
    t13 = (t11 ^ t12);
    t18 = (t10 | t13);
    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t17);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t25 = (t6 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t16 = (t4 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB15;

LAB14:    t17 = (t14 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t4) > *((unsigned int *)t14))
        goto LAB16;

LAB17:    t25 = (t6 + 4);
    t8 = *((unsigned int *)t25);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(59, ng0);

LAB23:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t4, 8, t14, 8);
    t16 = (t0 + 4488);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 8);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4488);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 24, t4, 24, t14, 8);
    t16 = (t0 + 4008);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 24);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB21:
LAB12:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t14);
    t10 = (t8 ^ t9);
    *((unsigned int *)t6) = t10;
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t24 = (t6 + 4);
    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t17);
    t13 = (t11 | t12);
    *((unsigned int *)t24) = t13;
    t18 = *((unsigned int *)t24);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB24;

LAB25:
LAB26:    t25 = (t6 + 4);
    t22 = *((unsigned int *)t25);
    t23 = (~(t22));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t23);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 25, t4, 24, t14, 24);
    t16 = (t0 + 4168);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 25);

LAB29:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t14);
    t10 = (t8 ^ t9);
    *((unsigned int *)t6) = t10;
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t24 = (t6 + 4);
    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t17);
    t13 = (t11 | t12);
    *((unsigned int *)t24) = t13;
    t18 = *((unsigned int *)t24);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB30;

LAB31:
LAB32:    t25 = (t0 + 3208);
    xsi_vlogvar_assign_value(t25, t6, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t5) != 0)
        goto LAB35;

LAB36:    t14 = (t15 + 4);
    t13 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t14);
    t19 = (t13 || t18);
    if (t19 > 0)
        goto LAB37;

LAB38:    t82 = *((unsigned int *)t15);
    t83 = (~(t82));
    t84 = *((unsigned int *)t14);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t14) > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t15) > 0)
        goto LAB43;

LAB44:    memcpy(t6, t136, 8);

LAB45:    t150 = (t0 + 2888);
    xsi_vlogvar_assign_value(t150, t6, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t38, 0, 8);
    t5 = (t38 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 24);
    t10 = (t9 & 1);
    *((unsigned int *)t38) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 24);
    t13 = (t12 & 1);
    *((unsigned int *)t5) = t13;
    t14 = (t0 + 3208);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = *((unsigned int *)t38);
    t19 = *((unsigned int *)t17);
    t20 = (t18 & t19);
    *((unsigned int *)t39) = t20;
    t24 = (t38 + 4);
    t25 = (t17 + 4);
    t31 = (t39 + 4);
    t21 = *((unsigned int *)t24);
    t22 = *((unsigned int *)t25);
    t23 = (t21 | t22);
    *((unsigned int *)t31) = t23;
    t26 = *((unsigned int *)t31);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB58;

LAB59:
LAB60:    memset(t15, 0, 8);
    t34 = (t39 + 4);
    t58 = *((unsigned int *)t34);
    t59 = (~(t58));
    t62 = *((unsigned int *)t39);
    t63 = (t62 & t59);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t34) != 0)
        goto LAB63;

LAB64:    t36 = (t15 + 4);
    t65 = *((unsigned int *)t15);
    t66 = *((unsigned int *)t36);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB65;

LAB66:    t80 = *((unsigned int *)t15);
    t81 = (~(t80));
    t82 = *((unsigned int *)t36);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t36) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t15) > 0)
        goto LAB71;

LAB72:    memcpy(t6, t74, 8);

LAB73:    t86 = (t0 + 4328);
    xsi_vlogvar_assign_value(t86, t6, 0, 0, 25);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 16777215U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 16777215U);
    t14 = (t0 + 3688);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 24);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t60 = (t10 & t9);
    t4 = (t0 + 8004);
    *((int *)t4) = t60;

LAB76:    t5 = (t0 + 8004);
    if (*((int *)t5) > 0)
        goto LAB77;

LAB78:    goto LAB2;

LAB8:    t24 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t31 = (t0 + 1928);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 8, t33, 8, t34, 8);
    t35 = (t0 + 2248);
    xsi_vlogvar_assign_value(t35, t15, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB15:    t24 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(50, ng0);

LAB22:    xsi_set_current_line(51, ng0);
    t31 = (t0 + 1928);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 2088);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 8, t33, 8, t36, 8);
    t37 = (t0 + 4488);
    xsi_vlogvar_assign_value(t37, t15, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 8, t4, 8, t5, 8);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4488);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 24, t4, 24, t14, 8);
    t16 = (t0 + 4008);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 24);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB24:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t24);
    *((unsigned int *)t6) = (t20 | t21);
    goto LAB26;

LAB27:    xsi_set_current_line(69, ng0);
    t31 = (t0 + 3848);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 4008);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 25, t33, 24, t36, 24);
    t37 = (t0 + 4168);
    xsi_vlogvar_assign_value(t37, t15, 0, 0, 25);
    goto LAB29;

LAB30:    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t24);
    *((unsigned int *)t6) = (t20 | t21);
    goto LAB32;

LAB33:    *((unsigned int *)t15) = 1;
    goto LAB36;

LAB35:    t7 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB37:    t16 = (t0 + 2568);
    t17 = (t16 + 56U);
    t24 = *((char **)t17);
    t25 = (t0 + 4168);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    memset(t38, 0, 8);
    t33 = (t38 + 4);
    t34 = (t32 + 4);
    t20 = *((unsigned int *)t32);
    t21 = (t20 >> 24);
    t22 = (t21 & 1);
    *((unsigned int *)t38) = t22;
    t23 = *((unsigned int *)t34);
    t26 = (t23 >> 24);
    t27 = (t26 & 1);
    *((unsigned int *)t33) = t27;
    t35 = (t0 + 3208);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t28 = *((unsigned int *)t38);
    t29 = *((unsigned int *)t37);
    t30 = (t28 & t29);
    *((unsigned int *)t39) = t30;
    t40 = (t38 + 4);
    t41 = (t37 + 4);
    t42 = (t39 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB46;

LAB47:
LAB48:    t69 = *((unsigned int *)t24);
    t70 = *((unsigned int *)t39);
    t71 = (t69 ^ t70);
    *((unsigned int *)t68) = t71;
    t72 = (t24 + 4);
    t73 = (t39 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB38;

LAB39:    t86 = (t0 + 2728);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t0 + 4168);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    memset(t92, 0, 8);
    t93 = (t92 + 4);
    t94 = (t91 + 4);
    t95 = *((unsigned int *)t91);
    t96 = (t95 >> 24);
    t97 = (t96 & 1);
    *((unsigned int *)t92) = t97;
    t98 = *((unsigned int *)t94);
    t99 = (t98 >> 24);
    t100 = (t99 & 1);
    *((unsigned int *)t93) = t100;
    t101 = (t0 + 3208);
    t102 = (t101 + 56U);
    t103 = *((char **)t102);
    t105 = *((unsigned int *)t92);
    t106 = *((unsigned int *)t103);
    t107 = (t105 & t106);
    *((unsigned int *)t104) = t107;
    t108 = (t92 + 4);
    t109 = (t103 + 4);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t108);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB52;

LAB53:
LAB54:    t137 = *((unsigned int *)t88);
    t138 = *((unsigned int *)t104);
    t139 = (t137 ^ t138);
    *((unsigned int *)t136) = t139;
    t140 = (t88 + 4);
    t141 = (t104 + 4);
    t142 = (t136 + 4);
    t143 = *((unsigned int *)t140);
    t144 = *((unsigned int *)t141);
    t145 = (t143 | t144);
    *((unsigned int *)t142) = t145;
    t146 = *((unsigned int *)t142);
    t147 = (t146 != 0);
    if (t147 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB40;

LAB41:    xsi_vlog_unsigned_bit_combine(t6, 1, t68, 1, t136, 1);
    goto LAB45;

LAB43:    memcpy(t6, t68, 8);
    goto LAB45;

LAB46:    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t39) = (t48 | t49);
    t50 = (t38 + 4);
    t51 = (t37 + 4);
    t52 = *((unsigned int *)t38);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t66 & t62);
    t67 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t67 & t63);
    goto LAB48;

LAB49:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    goto LAB51;

LAB52:    t116 = *((unsigned int *)t104);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t104) = (t116 | t117);
    t118 = (t92 + 4);
    t119 = (t103 + 4);
    t120 = *((unsigned int *)t92);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (~(t122));
    t124 = *((unsigned int *)t103);
    t125 = (~(t124));
    t126 = *((unsigned int *)t119);
    t127 = (~(t126));
    t128 = (t121 & t123);
    t129 = (t125 & t127);
    t130 = (~(t128));
    t131 = (~(t129));
    t132 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t132 & t130);
    t133 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t133 & t131);
    t134 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t134 & t130);
    t135 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t135 & t131);
    goto LAB54;

LAB55:    t148 = *((unsigned int *)t136);
    t149 = *((unsigned int *)t142);
    *((unsigned int *)t136) = (t148 | t149);
    goto LAB57;

LAB58:    t28 = *((unsigned int *)t39);
    t29 = *((unsigned int *)t31);
    *((unsigned int *)t39) = (t28 | t29);
    t32 = (t38 + 4);
    t33 = (t17 + 4);
    t30 = *((unsigned int *)t38);
    t43 = (~(t30));
    t44 = *((unsigned int *)t32);
    t45 = (~(t44));
    t46 = *((unsigned int *)t17);
    t47 = (~(t46));
    t48 = *((unsigned int *)t33);
    t49 = (~(t48));
    t60 = (t43 & t45);
    t61 = (t47 & t49);
    t52 = (~(t60));
    t53 = (~(t61));
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t55 & t53);
    t56 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t56 & t52);
    t57 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t57 & t53);
    goto LAB60;

LAB61:    *((unsigned int *)t15) = 1;
    goto LAB64;

LAB63:    t35 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB64;

LAB65:    t37 = (t0 + 4168);
    t40 = (t37 + 56U);
    t41 = *((char **)t40);
    memset(t68, 0, 8);
    t42 = (t68 + 4);
    t50 = (t41 + 4);
    t69 = *((unsigned int *)t41);
    t70 = (~(t69));
    *((unsigned int *)t68) = t70;
    *((unsigned int *)t42) = 0;
    if (*((unsigned int *)t50) != 0)
        goto LAB75;

LAB74:    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 33554431U);
    t79 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t79 & 33554431U);
    t51 = ((char*)((ng1)));
    memset(t92, 0, 8);
    xsi_vlog_unsigned_add(t92, 25, t68, 25, t51, 25);
    goto LAB66;

LAB67:    t72 = (t0 + 4168);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t6, 25, t92, 25, t74, 25);
    goto LAB73;

LAB71:    memcpy(t6, t92, 8);
    goto LAB73;

LAB75:    t71 = *((unsigned int *)t68);
    t75 = *((unsigned int *)t50);
    *((unsigned int *)t68) = (t71 | t75);
    t76 = *((unsigned int *)t42);
    t77 = *((unsigned int *)t50);
    *((unsigned int *)t42) = (t76 | t77);
    goto LAB74;

LAB77:    xsi_set_current_line(79, ng0);

LAB79:    xsi_set_current_line(80, ng0);
    t7 = (t0 + 3688);
    t14 = (t7 + 56U);
    t16 = *((char **)t14);
    memset(t6, 0, 8);
    t17 = (t6 + 4);
    t24 = (t16 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (t11 >> 23);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t18 = *((unsigned int *)t24);
    t19 = (t18 >> 23);
    t20 = (t19 & 1);
    *((unsigned int *)t17) = t20;
    t25 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t31 = (t6 + 4);
    t32 = (t25 + 4);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t25);
    t23 = (t21 ^ t22);
    t26 = *((unsigned int *)t31);
    t27 = *((unsigned int *)t32);
    t28 = (t26 ^ t27);
    t29 = (t23 | t28);
    t30 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t32);
    t44 = (t30 | t43);
    t45 = (~(t44));
    t46 = (t29 & t45);
    if (t46 != 0)
        goto LAB83;

LAB80:    if (t44 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t15) = 1;

LAB83:    t34 = (t15 + 4);
    t47 = *((unsigned int *)t34);
    t48 = (~(t47));
    t49 = *((unsigned int *)t15);
    t52 = (t49 & t48);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB84;

LAB85:
LAB86:    t2 = (t0 + 8004);
    t60 = *((int *)t2);
    *((int *)t2) = (t60 - 1);
    goto LAB76;

LAB82:    t33 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(81, ng0);

LAB87:    xsi_set_current_line(82, ng0);
    t35 = (t0 + 3688);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t40 = ((char*)((ng1)));
    memset(t38, 0, 8);
    xsi_vlog_unsigned_lshift(t38, 24, t37, 24, t40, 1);
    t41 = (t0 + 3688);
    xsi_vlogvar_assign_value(t41, t38, 0, 0, 24);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t4, 8, t5, 8);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB86;

}

static void Cont_87_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3688);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 8388607U);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 & 8388607U);
    t15 = (t0 + 1768);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 2888);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t20, 1, t17, 8, t4, 23);
    t21 = (t0 + 6072);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t3, 8);
    xsi_driver_vfirst_trans(t21, 0, 31);
    t26 = (t0 + 5992);
    *((int *)t26) = 1;

LAB1:    return;
}


extern void work_m_00000000002992934878_2230639943_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Cont_87_1};
	xsi_register_didat("work_m_00000000002992934878_2230639943", "isim/FPA_isim_beh.exe.sim/work/m_00000000002992934878_2230639943.didat");
	xsi_register_executes(pe);
}
