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
static const char *ng0 = "C:/Users/USER PC/Trabajo/David/Repositorios/Electronica-Digital/Practicas/Biblioteca/Decodificador_BCD_16B.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static int ng3[] = {5, 0};
static unsigned int ng4[] = {196608U, 0U};
static unsigned int ng5[] = {3145728U, 0U};
static unsigned int ng6[] = {50331648U, 0U};
static unsigned int ng7[] = {805306368U, 0U};
static int ng8[] = {2, 0};
static int ng9[] = {1, 0};



static void Always_13_0(char *t0)
{
    char t6[8];
    char t13[8];
    char t26[8];
    char t40[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memcpy(t6, t5, 8);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 32);
    xsi_set_current_line(15, ng0);
    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1928);
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

LAB8:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 65535U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 65535U);
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 16);
    goto LAB2;

LAB7:    xsi_set_current_line(15, ng0);

LAB9:    xsi_set_current_line(16, ng0);
    t14 = (t0 + 1768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 16);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 16);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 15U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 15U);
    t25 = ((char*)((ng3)));
    memset(t26, 0, 8);
    t27 = (t13 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB11;

LAB10:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t13) < *((unsigned int *)t25))
        goto LAB13;

LAB12:    *((unsigned int *)t26) = 1;

LAB13:    t30 = (t26 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t26);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 20);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 20);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t14 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB19;

LAB18:    t16 = (t14 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t6) < *((unsigned int *)t14))
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB21:    t18 = (t13 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 24);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 24);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t14 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB27;

LAB26:    t16 = (t14 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t6) < *((unsigned int *)t14))
        goto LAB29;

LAB28:    *((unsigned int *)t13) = 1;

LAB29:    t18 = (t13 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 28);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 28);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 15U);
    t19 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t19 & 15U);
    t14 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB35;

LAB34:    t16 = (t14 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t6) < *((unsigned int *)t14))
        goto LAB37;

LAB36:    *((unsigned int *)t13) = 1;

LAB37:    t18 = (t13 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB11:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(17, ng0);
    t36 = (t0 + 1768);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng4)));
    memset(t40, 0, 8);
    xsi_vlog_unsigned_add(t40, 32, t38, 32, t39, 32);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t40, 0, 0, 32);
    goto LAB17;

LAB19:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(19, ng0);
    t25 = (t0 + 1768);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng5)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t28, 32, t29, 32);
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t26, 0, 0, 32);
    goto LAB25;

LAB27:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(21, ng0);
    t25 = (t0 + 1768);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng6)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t28, 32, t29, 32);
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t26, 0, 0, 32);
    goto LAB33;

LAB35:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(23, ng0);
    t25 = (t0 + 1768);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng7)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t28, 32, t29, 32);
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t26, 0, 0, 32);
    goto LAB41;

}


extern void work_m_00000000001270137232_2583264196_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_00000000001270137232_2583264196", "isim/Testbench_isim_beh.exe.sim/work/m_00000000001270137232_2583264196.didat");
	xsi_register_executes(pe);
}
