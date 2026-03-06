// 函数名称: sub_406370
// 虚拟地址: 0x406370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_406370(int32_t arg1, int32_t, float* arg3)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(2.0)
    long double x87_r6 = fconvert.t(2.0)
    long double x87_r7_1 = fconvert.t(arg3[2]) * x87_r6
    long double x87_r5_1 = fconvert.t(arg3[2]) * x87_r7_1
    long double x87_r4_2 = fconvert.t(arg3[3]) * x87_r6 * fconvert.t(arg3[3])
    float var_5c = fconvert.s((float.t(1) - x87_r5_1 - x87_r4_2) * fconvert.t(*arg3))
    long double x87_r3_5 = fconvert.t(arg3[1]) * x87_r6
    long double x87_r2_1 = fconvert.t(arg3[2]) * x87_r3_5
    long double x87_r6_1 = x87_r6 * fconvert.t(arg3[4])
    long double x87_r1_2 = fconvert.t(arg3[3]) * x87_r6_1
    float var_58 = fconvert.s((x87_r2_1 - x87_r1_2) * fconvert.t(*arg3))
    long double x87_r1_6 = fconvert.t(arg3[2]) * x87_r6_1
    long double x87_r0_1 = fconvert.t(arg3[3]) * x87_r3_5
    float var_54 = fconvert.s((x87_r1_6 + x87_r0_1) * fconvert.t(*arg3))
    float var_50 = fconvert.s(fconvert.t(arg3[5]))
    float var_4c = fconvert.s((x87_r2_1 + fconvert.t(fconvert.d(x87_r1_2))) * fconvert.t(*arg3))
    long double x87_r3_7 = float.t(1) - x87_r3_5 * fconvert.t(arg3[1])
    float var_48 = fconvert.s((x87_r3_7 - x87_r4_2) * fconvert.t(*arg3))
    long double x87_r7_2 = x87_r7_1 * fconvert.t(arg3[3])
    long double x87_r6_2 = x87_r6_1 * fconvert.t(arg3[1])
    float var_44 = fconvert.s((x87_r7_2 - x87_r6_2) * fconvert.t(*arg3))
    float var_40 = fconvert.s(fconvert.t(arg3[6]))
    float var_3c = fconvert.s((fconvert.t(fconvert.d(x87_r0_1)) - fconvert.t(fconvert.d(x87_r1_6)))
        * fconvert.t(*arg3))
    float var_38 = fconvert.s((x87_r7_2 + x87_r6_2) * fconvert.t(*arg3))
    float var_34 = fconvert.s((x87_r3_7 - x87_r5_1) * fconvert.t(*arg3))
    float var_30 = fconvert.s(fconvert.t(arg3[7]))
    long double x87_r7_9 = float.t(0)
    float var_2c = fconvert.s(x87_r7_9)
    float var_28 = fconvert.s(x87_r7_9)
    float var_24 = fconvert.s(x87_r7_9)
    float var_20 = fconvert.s(float.t(1))
    __builtin_memcpy(arg1, &var_5c, 0x40)
}
