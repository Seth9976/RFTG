// 函数名称: sub_4f3c40
// 虚拟地址: 0x4f3c40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4f3c40(int32_t arg1, float* arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(2.0)
    long double x87_r6 = fconvert.t(2.0)
    long double x87_r7_1 = fconvert.t(arg3[1]) * x87_r6
    long double x87_r5_1 = fconvert.t(arg3[1]) * x87_r7_1
    long double x87_r4_2 = fconvert.t(arg3[2]) * x87_r6 * fconvert.t(arg3[2])
    float var_60 = fconvert.s((float.t(1) - x87_r5_1 - x87_r4_2) * fconvert.t(*arg2))
    long double x87_r3_5 = fconvert.t(*arg3) * x87_r6
    long double x87_r2_1 = fconvert.t(arg3[1]) * x87_r3_5
    long double x87_r6_1 = x87_r6 * fconvert.t(arg3[3])
    long double x87_r1_2 = fconvert.t(arg3[2]) * x87_r6_1
    float var_5c = fconvert.s((x87_r2_1 - x87_r1_2) * fconvert.t(arg2[1]))
    long double x87_r1_6 = fconvert.t(arg3[1]) * x87_r6_1
    long double x87_r0_1 = fconvert.t(arg3[2]) * x87_r3_5
    float var_58 = fconvert.s((x87_r1_6 + x87_r0_1) * fconvert.t(arg2[2]))
    float var_54 = fconvert.s(fconvert.t(*arg4))
    float var_50 = fconvert.s((x87_r2_1 + fconvert.t(fconvert.d(x87_r1_2))) * fconvert.t(*arg2))
    long double x87_r3_7 = float.t(1) - x87_r3_5 * fconvert.t(*arg3)
    float var_4c = fconvert.s((x87_r3_7 - x87_r4_2) * fconvert.t(arg2[1]))
    long double x87_r7_2 = x87_r7_1 * fconvert.t(arg3[2])
    long double x87_r6_2 = x87_r6_1 * fconvert.t(*arg3)
    float var_48 = fconvert.s((x87_r7_2 - x87_r6_2) * fconvert.t(arg2[2]))
    float var_44 = fconvert.s(fconvert.t(arg4[1]))
    float var_40 = fconvert.s((fconvert.t(fconvert.d(x87_r0_1)) - fconvert.t(fconvert.d(x87_r1_6)))
        * fconvert.t(*arg2))
    float var_3c = fconvert.s((x87_r7_2 + x87_r6_2) * fconvert.t(arg2[1]))
    float var_38 = fconvert.s((x87_r3_7 - x87_r5_1) * fconvert.t(arg2[2]))
    float var_34 = fconvert.s(fconvert.t(arg4[2]))
    long double x87_r7_9 = float.t(0)
    float var_30 = fconvert.s(x87_r7_9)
    float var_2c = fconvert.s(x87_r7_9)
    float var_28 = fconvert.s(x87_r7_9)
    float var_24 = fconvert.s(float.t(1))
    __builtin_memcpy(arg1, &var_60, 0x40)
}
