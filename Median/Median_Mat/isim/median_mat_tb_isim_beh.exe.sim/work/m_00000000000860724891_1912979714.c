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
static const char *ng0 = "C:/Users/USER/Desktop/Ankit VLSI/median_mat/median_mat.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {4, 0};
static unsigned int ng6[] = {0U, 0U};



static void Always_26_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t37[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    int t39;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    xsi_set_current_line(28, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);

LAB9:    xsi_set_current_line(30, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2888);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 4);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB13;

LAB10:    if (t23 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t16) = 1;

LAB13:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB21;

LAB18:    if (t23 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t16) = 1;

LAB21:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB29;

LAB26:    if (t23 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t16) = 1;

LAB29:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB37;

LAB34:    if (t23 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t16) = 1;

LAB37:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1648U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB45;

LAB42:    if (t23 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t16) = 1;

LAB45:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1808U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB53;

LAB50:    if (t23 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t16) = 1;

LAB53:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 1968U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB61;

LAB58:    if (t23 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t16) = 1;

LAB61:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB62;

LAB63:
LAB64:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2128U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB69;

LAB66:    if (t23 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t16) = 1;

LAB69:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB70;

LAB71:
LAB72:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 3048);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t15 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t17 = (t6 + 4);
    t18 = (t15 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t19 = (t11 ^ t12);
    t20 = (t10 | t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB77;

LAB74:    if (t23 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t16) = 1;

LAB77:    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t16);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB78;

LAB79:
LAB80:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB83;

LAB82:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB83;

LAB86:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB84;

LAB85:    t15 = (t6 + 4);
    t8 = *((unsigned int *)t15);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(72, ng0);

LAB93:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    t4 = (t0 + 2728);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = (t0 + 3048);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t15, 32, 1);
    t17 = (t6 + 4);
    t8 = *((unsigned int *)t17);
    t39 = (!(t8));
    if (t39 == 1)
        goto LAB94;

LAB95:
LAB89:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB12:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(32, ng0);

LAB17:    xsi_set_current_line(33, ng0);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 4, t36, 32);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB16;

LAB20:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(36, ng0);

LAB25:    xsi_set_current_line(37, ng0);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 4, t36, 32);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB24;

LAB28:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(40, ng0);

LAB33:    xsi_set_current_line(41, ng0);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 4, t36, 32);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB32;

LAB36:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(44, ng0);

LAB41:    xsi_set_current_line(45, ng0);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 4, t36, 32);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB40;

LAB44:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(48, ng0);

LAB49:    xsi_set_current_line(49, ng0);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 4, t36, 32);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB48;

LAB52:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(52, ng0);

LAB57:    xsi_set_current_line(53, ng0);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 4, t36, 32);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB56;

LAB60:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(56, ng0);

LAB65:    xsi_set_current_line(57, ng0);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 4, t36, 32);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB64;

LAB68:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(60, ng0);

LAB73:    xsi_set_current_line(61, ng0);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 4, t36, 32);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB72;

LAB76:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(64, ng0);

LAB81:    xsi_set_current_line(65, ng0);
    t33 = (t0 + 2888);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t35, 4, t36, 32);
    t38 = (t0 + 2888);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 4);
    goto LAB80;

LAB83:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB85;

LAB84:    *((unsigned int *)t6) = 1;
    goto LAB85;

LAB87:    xsi_set_current_line(68, ng0);

LAB90:    xsi_set_current_line(69, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 2728);
    t26 = (t0 + 2728);
    t27 = (t26 + 72U);
    t33 = *((char **)t27);
    t34 = (t0 + 3048);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_bit_index(t16, t33, 2, t36, 32, 1);
    t38 = (t16 + 4);
    t19 = *((unsigned int *)t38);
    t39 = (!(t19));
    if (t39 == 1)
        goto LAB91;

LAB92:    goto LAB89;

LAB91:    xsi_vlogvar_assign_value(t18, t17, 0, *((unsigned int *)t16), 1);
    goto LAB92;

LAB94:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB95;

}


extern void work_m_00000000000860724891_1912979714_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000000860724891_1912979714", "isim/median_mat_tb_isim_beh.exe.sim/work/m_00000000000860724891_1912979714.didat");
	xsi_register_executes(pe);
}
