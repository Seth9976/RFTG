// 函数名称: sub_4d5cb0
// 虚拟地址: 0x4d5cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4d5cb0(float* arg1, float* arg2, float* arg3)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg3[3])
    long double x87_r7 = fconvert.t(arg3[3])
    float var_10 = fconvert.s(x87_r7 * x87_r7)
    long double x87_r7_2 = fconvert.t(*arg3)
    float var_18 = fconvert.s(x87_r7_2 * x87_r7_2)
    long double x87_r7_4 = fconvert.t(arg3[1])
    float var_8 = fconvert.s(x87_r7_4 * x87_r7_4)
    long double x87_r7_6 = fconvert.t(arg3[2])
    float var_c = fconvert.s(x87_r7_6 * x87_r7_6)
    long double x87_r7_9 = fconvert.t(*arg3) * fconvert.t(arg3[2])
    long double x87_r6_1 = fconvert.t(arg3[1]) * fconvert.t(arg3[3])
    long double x87_r4 = fconvert.t(2.0)
    long double x87_r5_1 = fconvert.t(arg2[2]) * x87_r4
    long double x87_r3_1 = fconvert.t(arg3[2]) * fconvert.t(arg3[3])
    double var_24 = fconvert.d(fconvert.t(arg3[1]) * fconvert.t(*arg3))
    long double x87_r2_3 = fconvert.t(arg2[1]) * x87_r4
    *arg1 = fconvert.s((fconvert.t(var_18) + fconvert.t(var_10) - fconvert.t(var_8) - fconvert.t(var_c))
        * fconvert.t(*arg2) + (fconvert.t(var_24) + x87_r3_1) * x87_r2_3
        + (x87_r7_9 - x87_r6_1) * x87_r5_1)
    long double x87_r4_1 = x87_r4 * fconvert.t(*arg2)
    double var_14 = fconvert.d(fconvert.t(var_10) - fconvert.t(var_18))
    double var_1c = fconvert.d(fconvert.t(*arg3) * fconvert.t(arg3[3]))
    long double x87_r0_7 = fconvert.t(fconvert.d(fconvert.t(arg3[1]) * fconvert.t(arg3[2])))
    arg1[1] = fconvert.s(x87_r5_1 * (fconvert.t(var_1c) + x87_r0_7)
        + (fconvert.t(var_8) + fconvert.t(var_14) - fconvert.t(var_c)) * fconvert.t(arg2[1])
        + (fconvert.t(var_24) - x87_r3_1) * x87_r4_1)
    arg1[2] = fconvert.s(x87_r2_3 * (x87_r0_7 - fconvert.t(var_1c)) + x87_r4_1 * (x87_r7_9 + x87_r6_1)
        + (fconvert.t(var_14) - fconvert.t(var_8) + fconvert.t(var_c)) * fconvert.t(arg2[2]))
}
