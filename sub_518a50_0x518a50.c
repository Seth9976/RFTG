// 函数名称: sub_518a50
// 虚拟地址: 0x518a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_518a50(float* arg1)
{
    // 第一条实际指令: float var_18 = fconvert.s(fconvert.t(arg1[0xd]))
    float var_18 = fconvert.s(fconvert.t(arg1[0xd]))
    float var_1c = fconvert.s(fconvert.t(arg1[0xd]))
    float var_20 = fconvert.s(fconvert.t(arg1[9]))
    long double x87_r7_36 = fconvert.t(fconvert.s(fconvert.t(arg1[5])))
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(arg1[0xa])))
    long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(arg1[0xf])))
    long double x87_r3_1 = fconvert.t(fconvert.s(fconvert.t(arg1[0xb])))
    long double x87_r2_1 = fconvert.t(fconvert.s(fconvert.t(arg1[0xe])))
    long double x87_r2_3 = fconvert.t(fconvert.s(fconvert.t(arg1[6])))
    long double x87_r1_2 = fconvert.t(fconvert.s(fconvert.t(arg1[0xd])))
    long double x87_r1_4 = fconvert.t(fconvert.s(fconvert.t(arg1[9])))
    long double x87_r2_7 = fconvert.t(fconvert.s(fconvert.t(arg1[7])))
    long double x87_r7_42 = x87_r2_1 * x87_r1_4 * x87_r2_7 + x87_r3_1 * x87_r2_3 * x87_r1_2
        + x87_r7_36 * x87_r5 * x87_r4_1 - x87_r7_36 * x87_r3_1 * x87_r2_1
        - x87_r4_1 * x87_r2_3 * x87_r1_4 - x87_r1_2 * x87_r5 * x87_r2_7
    long double x87_r6_6 = fconvert.t(fconvert.s(fconvert.t(arg1[1])))
    long double x87_r4_5 = fconvert.t(fconvert.s(fconvert.t(arg1[0xa])))
    long double x87_r3_10 = fconvert.t(fconvert.s(fconvert.t(arg1[0xf])))
    long double x87_r2_10 = fconvert.t(fconvert.s(fconvert.t(arg1[0xb])))
    long double x87_r1_8 = fconvert.t(fconvert.s(fconvert.t(arg1[0xe])))
    long double x87_r1_10 = fconvert.t(fconvert.s(fconvert.t(arg1[2])))
    long double x87_r1_12 = fconvert.t(fconvert.s(fconvert.t(arg1[9])))
    long double x87_r2_14 = fconvert.t(fconvert.s(fconvert.t(arg1[3])))
    long double x87_r6_17 = x87_r1_8 * x87_r1_12 * x87_r2_14
        + x87_r2_10 * x87_r1_10 * fconvert.t(var_18) + x87_r6_6 * x87_r4_5 * x87_r3_10
        - x87_r6_6 * x87_r2_10 * x87_r1_8 - x87_r3_10 * x87_r1_10 * x87_r1_12
        - x87_r2_14 * x87_r4_5 * fconvert.t(var_18)
    long double x87_r6_20 = fconvert.t(fconvert.s(fconvert.t(arg1[1])))
    long double x87_r4_7 = fconvert.t(fconvert.s(fconvert.t(arg1[6])))
    long double x87_r3_14 = fconvert.t(fconvert.s(fconvert.t(arg1[0xf])))
    long double x87_r2_17 = fconvert.t(fconvert.s(fconvert.t(arg1[7])))
    long double x87_r1_16 = fconvert.t(fconvert.s(fconvert.t(arg1[0xe])))
    long double x87_r1_18 = fconvert.t(fconvert.s(fconvert.t(arg1[2])))
    long double x87_r1_20 = fconvert.t(fconvert.s(fconvert.t(arg1[5])))
    long double x87_r2_21 = fconvert.t(fconvert.s(fconvert.t(arg1[3])))
    long double x87_r6_31 = x87_r1_16 * x87_r1_20 * x87_r2_21
        + x87_r2_17 * x87_r1_18 * fconvert.t(var_1c) + x87_r6_20 * x87_r4_7 * x87_r3_14
        - x87_r6_20 * x87_r2_17 * x87_r1_16 - x87_r3_14 * x87_r1_18 * x87_r1_20
        - x87_r2_21 * x87_r4_7 * fconvert.t(var_1c)
    long double x87_r6_34 = fconvert.t(fconvert.s(fconvert.t(arg1[1])))
    long double x87_r4_9 = fconvert.t(fconvert.s(fconvert.t(arg1[6])))
    long double x87_r3_18 = fconvert.t(fconvert.s(fconvert.t(arg1[0xb])))
    long double x87_r2_24 = fconvert.t(fconvert.s(fconvert.t(arg1[7])))
    long double x87_r1_24 = fconvert.t(fconvert.s(fconvert.t(arg1[0xa])))
    long double x87_r1_26 = fconvert.t(fconvert.s(fconvert.t(arg1[2])))
    long double x87_r1_28 = fconvert.t(fconvert.s(fconvert.t(arg1[5])))
    long double x87_r2_28 = fconvert.t(fconvert.s(fconvert.t(arg1[3])))
    long double x87_r6_45 = x87_r1_24 * x87_r1_28 * x87_r2_28
        + x87_r2_24 * x87_r1_26 * fconvert.t(var_20) + x87_r6_34 * x87_r4_9 * x87_r3_18
        - x87_r6_34 * x87_r2_24 * x87_r1_24 - x87_r3_18 * x87_r1_26 * x87_r1_28
        - x87_r2_28 * x87_r4_9 * fconvert.t(var_20)
    long double x87_r7_47 = fconvert.t(fconvert.s(x87_r7_42)) * fconvert.t(*arg1)
        - fconvert.t(fconvert.s(x87_r6_17)) * fconvert.t(arg1[4])
        + fconvert.t(fconvert.s(x87_r6_31)) * fconvert.t(arg1[8])
        - fconvert.t(fconvert.s(x87_r6_45)) * fconvert.t(arg1[0xc])
    return fconvert.t(fconvert.s(x87_r7_47))
}
