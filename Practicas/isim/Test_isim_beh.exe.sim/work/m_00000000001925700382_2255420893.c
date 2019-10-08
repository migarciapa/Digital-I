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
static const char *ng0 = "C:/Users/USER PC/Trabajo/David/Repositorios/Electronica-Digital/Practicas/Contador_2B.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};



static void Always_10_0(char *t0)
{
    char t6[8];
    char t13[8];
    char t17[8];
    char t42[8];
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    int t51;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    xsi_set_current_line(11, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 1448);
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

LAB7:    xsi_set_current_line(11, ng0);

LAB9:    xsi_set_current_line(12, ng0);
    t14 = (t0 + 1608);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t0 + 1608);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1448);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_get_index_select_value(t17, 1, t16, t20, 2, t23, 32, 1);
    memset(t13, 0, 8);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t24) == 0)
        goto LAB10;

LAB12:    t30 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t30) = 1;

LAB13:    t31 = (t13 + 4);
    t32 = (t17 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    *((unsigned int *)t13) = t34;
    *((unsigned int *)t31) = 0;
    if (*((unsigned int *)t32) != 0)
        goto LAB15;

LAB14:    t39 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t39 & 1U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 1U);
    t41 = (t0 + 1608);
    t43 = (t0 + 1608);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t0 + 1448);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    xsi_vlog_generic_convert_bit_index(t42, t45, 2, t48, 32, 1);
    t49 = (t42 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    if (t51 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    t7 = (t5 + 72U);
    t14 = *((char **)t7);
    t15 = (t0 + 1448);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    xsi_vlog_generic_get_index_select_value(t6, 1, t4, t14, 2, t18, 32, 1);
    t19 = (t6 + 4);
    t8 = *((unsigned int *)t19);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1448);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t32);
    *((unsigned int *)t13) = (t35 | t36);
    t37 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t32);
    *((unsigned int *)t31) = (t37 | t38);
    goto LAB14;

LAB16:    xsi_vlogvar_assign_value(t41, t13, 0, *((unsigned int *)t42), 1);
    goto LAB17;

LAB18:    xsi_set_current_line(13, ng0);

LAB21:    xsi_set_current_line(14, ng0);
    t20 = ((char*)((ng2)));
    t21 = (t0 + 1448);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 32);
    goto LAB20;

}


extern void work_m_00000000001925700382_2255420893_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000001925700382_2255420893", "isim/Test_isim_beh.exe.sim/work/m_00000000001925700382_2255420893.didat");
	xsi_register_executes(pe);
}
