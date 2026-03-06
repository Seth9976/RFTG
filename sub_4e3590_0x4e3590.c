// 函数名称: sub_4e3590
// 虚拟地址: 0x4e3590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4e3590(float* arg1, int32_t, float* arg3)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(2.0)
    long double x87_r6 = fconvert.t(2.0)
    long double x87_r7_1 = fconvert.t(arg1[1]) * x87_r6
    long double x87_r5_1 = fconvert.t(arg1[1]) * x87_r7_1
    long double x87_r4_2 = fconvert.t(arg1[2]) * x87_r6 * fconvert.t(arg1[2])
    *arg3 = fconvert.s(float.t(1) - x87_r5_1 - x87_r4_2)
    long double x87_r3_4 = fconvert.t(*arg1) * x87_r6
    long double x87_r2_1 = fconvert.t(arg1[1]) * x87_r3_4
    long double x87_r6_1 = x87_r6 * fconvert.t(arg1[3])
    long double x87_r1_2 = fconvert.t(arg1[2]) * x87_r6_1
    arg3[1] = fconvert.s(x87_r2_1 - x87_r1_2)
    long double x87_r1_5 = fconvert.t(arg1[1]) * x87_r6_1
    long double x87_r0_1 = fconvert.t(arg1[2]) * x87_r3_4
    arg3[2] = fconvert.s(x87_r0_1 + x87_r1_5)
    arg3[3] = fconvert.s(x87_r2_1 + fconvert.t(fconvert.d(x87_r1_2)))
    long double x87_r3_6 = float.t(1) - x87_r3_4 * fconvert.t(*arg1)
    arg3[4] = fconvert.s(x87_r3_6 - x87_r4_2)
    long double x87_r7_2 = x87_r7_1 * fconvert.t(arg1[2])
    long double x87_r6_2 = x87_r6_1 * fconvert.t(*arg1)
    arg3[5] = fconvert.s(x87_r7_2 - x87_r6_2)
    arg3[6] = fconvert.s(fconvert.t(fconvert.d(x87_r0_1)) - x87_r1_5)
    arg3[7] = fconvert.s(x87_r7_2 + x87_r6_2)
    arg3[8] = fconvert.s(x87_r3_6 - x87_r5_1)
}
