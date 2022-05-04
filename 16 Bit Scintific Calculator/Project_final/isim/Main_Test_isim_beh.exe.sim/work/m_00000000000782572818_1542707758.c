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
static const char *ng0 = "E:/Xilinx_XIE/Project_final/Cos.v";
static int ng1[] = {10000, 0};
static int ng2[] = {22, 0};
static int ng3[] = {7, 0};
static int ng4[] = {180, 0};
static int ng5[] = {2, 0};
static int ng6[] = {4, 0};
static int ng7[] = {24, 0, 0, 0};
static int ng8[] = {10000000, 0, 0, 0};
static int ng9[] = {100000, 0, 0, 0};
static int ng10[] = {6, 0};
static int ng11[] = {720, 0, 0, 0, 0, 0, 0, 0};
static int ng12[] = {10000000, 0, 0, 0, 0, 0, 0, 0};
static int ng13[] = {100000, 0, 0, 0, 0, 0, 0, 0};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t13[8];
    char t15[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t12 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 32, t3, 32, t12, 32);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t13, 32, t14, 32);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 32, t16, 32, t17, 32);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_divide(t19, 32, t15, 32, t18, 32);
    t20 = (t0 + 5312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 65535U;
    t26 = t25;
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 15);
    t33 = (t0 + 5136);
    *((int *)t33) = 1;

LAB1:    return;
}

static void Cont_31_1(char *t0)
{
    char t4[8];
    char t6[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_power(t4, 32, t3, 16, t2, 32, 1);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_divide(t6, 32, t4, 32, t5, 32);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 5376);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 8);
    xsi_driver_vfirst_trans(t9, 0, 31);
    t14 = (t0 + 5152);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Cont_32_2(char *t0)
{
    char t4[16];
    char t6[16];
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    xsi_vlog_unsigned_power(t4, 64, t3, 16, t2, 32, 1);
    t5 = ((char*)((ng7)));
    xsi_vlog_unsigned_divide(t6, 64, t4, 64, t5, 32);
    t7 = ((char*)((ng8)));
    xsi_vlog_unsigned_divide(t8, 64, t6, 64, t7, 32);
    t9 = (t0 + 5440);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t13, 0, t8, 0, 64);
    xsi_driver_vfirst_trans(t9, 0, 63);
    t14 = (t0 + 5168);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Cont_33_3(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    xsi_vlog_unsigned_divide(t4, 64, t3, 64, t2, 32);
    t5 = (t0 + 5504);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 32);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5184);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_34_4(char *t0)
{
    char t4[32];
    char t6[32];
    char t8[32];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    xsi_vlog_unsigned_power(t4, 128, t3, 16, t2, 32, 1);
    t5 = ((char*)((ng11)));
    xsi_vlog_unsigned_divide(t6, 128, t4, 128, t5, 32);
    t7 = ((char*)((ng12)));
    xsi_vlog_unsigned_divide(t8, 128, t6, 128, t7, 32);
    t9 = (t0 + 5568);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t13, 0, t8, 0, 128);
    xsi_driver_vfirst_trans(t9, 0, 127);
    t14 = (t0 + 5200);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Cont_35_5(char *t0)
{
    char t4[32];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng13)));
    xsi_vlog_unsigned_divide(t4, 128, t3, 128, t2, 32);
    t5 = (t0 + 5632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 32);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5216);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_36_6(char *t0)
{
    char t5[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 4816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_minus(t5, 32, t2, 32, t4, 32);
    t3 = (t0 + 1848U);
    t6 = *((char **)t3);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 32, t6, 32);
    t3 = (t0 + 5696);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 65535U;
    t13 = t12;
    t14 = (t7 + 4);
    t15 = *((unsigned int *)t7);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t3, 0, 15);
    t20 = (t0 + 5232);
    *((int *)t20) = 1;

LAB1:    return;
}


extern void work_m_00000000000782572818_1542707758_init()
{
	static char *pe[] = {(void *)Cont_28_0,(void *)Cont_31_1,(void *)Cont_32_2,(void *)Cont_33_3,(void *)Cont_34_4,(void *)Cont_35_5,(void *)Cont_36_6};
	xsi_register_didat("work_m_00000000000782572818_1542707758", "isim/Main_Test_isim_beh.exe.sim/work/m_00000000000782572818_1542707758.didat");
	xsi_register_executes(pe);
}
