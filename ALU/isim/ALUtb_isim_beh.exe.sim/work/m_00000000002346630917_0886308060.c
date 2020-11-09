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
static const char *ng0 = "C:/Users/USER/Desktop/Ankit VLSI/ALU_8/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {32767U, 32767U};

static void NetReassign_29_1(char *);
static void NetReassign_32_2(char *);
static void NetReassign_35_3(char *);
static void NetReassign_38_4(char *);
static void NetReassign_41_5(char *);
static void NetReassign_44_6(char *);
static void NetReassign_47_7(char *);
static void NetReassign_50_8(char *);
static void NetReassign_52_9(char *);


static void Always_25_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 5240);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1768);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 7008);
    *((int *)t3) = 1;
    NetReassign_52_9(t0);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng0);

LAB26:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 1768);
    xsi_set_assignedflag(t7);
    t8 = (t0 + 6976);
    *((int *)t8) = 1;
    NetReassign_29_1(t0);
    goto LAB25;

LAB9:    xsi_set_current_line(31, ng0);

LAB27:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 6980);
    *((int *)t4) = 1;
    NetReassign_32_2(t0);
    goto LAB25;

LAB11:    xsi_set_current_line(34, ng0);

LAB28:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 6984);
    *((int *)t4) = 1;
    NetReassign_35_3(t0);
    goto LAB25;

LAB13:    xsi_set_current_line(37, ng0);

LAB29:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 6988);
    *((int *)t4) = 1;
    NetReassign_38_4(t0);
    goto LAB25;

LAB15:    xsi_set_current_line(40, ng0);

LAB30:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 6992);
    *((int *)t4) = 1;
    NetReassign_41_5(t0);
    goto LAB25;

LAB17:    xsi_set_current_line(43, ng0);

LAB31:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 6996);
    *((int *)t4) = 1;
    NetReassign_44_6(t0);
    goto LAB25;

LAB19:    xsi_set_current_line(46, ng0);

LAB32:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7000);
    *((int *)t4) = 1;
    NetReassign_47_7(t0);
    goto LAB25;

LAB21:    xsi_set_current_line(49, ng0);

LAB33:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1768);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7004);
    *((int *)t4) = 1;
    NetReassign_50_8(t0);
    goto LAB25;

}

static void NetReassign_29_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 15, t4, 8, t5, 8);
    t2 = (t0 + 6976);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 5256);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 15, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 5256);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_32_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 3184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 15, t4, 8, t5, 8);
    t2 = (t0 + 6980);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 5272);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 15, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 5272);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_35_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t37 = (t0 + 6984);
    if (*((int *)t37) > 0)
        goto LAB7;

LAB8:    if (t3 > 0)
        goto LAB9;

LAB10:    t40 = (t0 + 5288);
    *((int *)t40) = 0;

LAB11:
LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t20);
    t28 = (~(t27));
    t29 = (t22 & t24);
    t30 = (t26 & t28);
    t31 = (~(t29));
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t33 & t31);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t34 & t32);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t31);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    goto LAB6;

LAB7:    t38 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t38, t6, 0, 0, 0, 15, ((int*)(t37)));
    t3 = 1;
    goto LAB8;

LAB9:    t39 = (t0 + 5288);
    *((int *)t39) = 1;
    goto LAB11;

}

static void NetReassign_38_4(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 32767U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 32767U);
    t15 = (t0 + 6988);
    if (*((int *)t15) > 0)
        goto LAB6;

LAB7:    if (t3 > 0)
        goto LAB8;

LAB9:    t18 = (t0 + 5304);
    *((int *)t18) = 0;

LAB10:
LAB1:    return;
LAB5:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t2) = (t11 | t12);
    goto LAB4;

LAB6:    t16 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t16, t4, 0, 0, 0, 15, ((int*)(t15)));
    t3 = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 5304);
    *((int *)t17) = 1;
    goto LAB10;

}

static void NetReassign_41_5(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 | t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t33 = (t0 + 6992);
    if (*((int *)t33) > 0)
        goto LAB7;

LAB8:    if (t3 > 0)
        goto LAB9;

LAB10:    t36 = (t0 + 5320);
    *((int *)t36) = 0;

LAB11:
LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = (~(t24));
    t30 = (~(t28));
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t31 & t29);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t32 & t30);
    goto LAB6;

LAB7:    t34 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t34, t6, 0, 0, 0, 15, ((int*)(t33)));
    t3 = 1;
    goto LAB8;

LAB9:    t35 = (t0 + 5320);
    *((int *)t35) = 1;
    goto LAB11;

}

static void NetReassign_44_6(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 4176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    *((unsigned int *)t6) = t9;
    t2 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t10);
    t14 = (t12 | t13);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB4;

LAB5:
LAB6:    t19 = (t0 + 6996);
    if (*((int *)t19) > 0)
        goto LAB7;

LAB8:    if (t3 > 0)
        goto LAB9;

LAB10:    t22 = (t0 + 5336);
    *((int *)t22) = 0;

LAB11:
LAB1:    return;
LAB4:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t6) = (t17 | t18);
    goto LAB6;

LAB7:    t20 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t20, t6, 0, 0, 0, 15, ((int*)(t19)));
    t3 = 1;
    goto LAB8;

LAB9:    t21 = (t0 + 5336);
    *((int *)t21) = 1;
    goto LAB11;

}

static void NetReassign_47_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 4424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 15, t4, 8, t5, 8);
    t2 = (t0 + 7000);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 5352);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 15, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 5352);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_50_8(char *t0)
{
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 4672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    *((unsigned int *)t7) = t10;
    t2 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    memset(t4, 0, 8);
    t20 = (t4 + 4);
    t21 = (t7 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    *((unsigned int *)t4) = t23;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB8;

LAB7:    t28 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t28 & 32767U);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t29 & 32767U);
    t30 = (t0 + 7004);
    if (*((int *)t30) > 0)
        goto LAB9;

LAB10:    if (t3 > 0)
        goto LAB11;

LAB12:    t33 = (t0 + 5368);
    *((int *)t33) = 0;

LAB13:
LAB1:    return;
LAB4:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    goto LAB6;

LAB8:    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t21);
    *((unsigned int *)t4) = (t24 | t25);
    t26 = *((unsigned int *)t20);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t20) = (t26 | t27);
    goto LAB7;

LAB9:    t31 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t31, t4, 0, 0, 0, 15, ((int*)(t30)));
    t3 = 1;
    goto LAB10;

LAB11:    t32 = (t0 + 5368);
    *((int *)t32) = 1;
    goto LAB13;

}

static void NetReassign_52_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t3 = 0;
    t2 = ((char*)((ng9)));
    t4 = (t0 + 7008);
    if (*((int *)t4) > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    t5 = (t0 + 1768);
    xsi_vlogvar_assignassignvalue(t5, t2, 0, 0, 0, 15, ((int*)(t4)));
    t3 = 1;
    goto LAB5;

}


extern void work_m_00000000002346630917_0886308060_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)NetReassign_29_1,(void *)NetReassign_32_2,(void *)NetReassign_35_3,(void *)NetReassign_38_4,(void *)NetReassign_41_5,(void *)NetReassign_44_6,(void *)NetReassign_47_7,(void *)NetReassign_50_8,(void *)NetReassign_52_9};
	xsi_register_didat("work_m_00000000002346630917_0886308060", "isim/ALUtb_isim_beh.exe.sim/work/m_00000000002346630917_0886308060.didat");
	xsi_register_executes(pe);
}
