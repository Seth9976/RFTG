// 函数名称: sub_4d82a0
// 虚拟地址: 0x4d82a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4d82a0(int32_t arg1, float* arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: long double x87_r7_9 = fconvert.t(fconvert.s(fconvert.t(arg2[5]) * fconvert.t(arg3[3]) - fconvert.t(arg2[3]) * fconvert.t(arg3[5])))
    long double x87_r7_9 = fconvert.t(fconvert.s(fconvert.t(arg2[5]) * fconvert.t(arg3[3])
        - fconvert.t(arg2[3]) * fconvert.t(arg3[5])))
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(arg2[4]) * fconvert.t(arg3[5])
        - fconvert.t(arg2[5]) * fconvert.t(arg3[4])))
    long double x87_r3 = fconvert.t(fconvert.s(fconvert.t(arg2[3]) * fconvert.t(arg3[4])
        - fconvert.t(arg2[4]) * fconvert.t(arg3[3])))
    float var_8 = fconvert.s(x87_r3 * x87_r3 + x87_r7_9 * x87_r7_9 + x87_r5 * x87_r5)
    long double x87_r4_5 = fconvert.t(var_8)
    long double temp1 = fconvert.t(9.9999994396249292e-11)
    x87_r4_5 - temp1
    arg1.w = (x87_r4_5 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_5, temp1) ? 1 : 0) << 0xa
        | (x87_r4_5 == temp1 ? 1 : 0) << 0xe | 0x2800
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        arg1.b = 0
        return arg1
    
    float var_10_1 = fconvert.s(fconvert.t(arg3[2]) - fconvert.t(arg2[2]))
    long double x87_r4_15 = fconvert.t(fconvert.s(fconvert.t(arg3[4])))
    long double x87_r2_3 = fconvert.t(fconvert.s(fconvert.t(*arg3) - fconvert.t(*arg2)))
    long double x87_r1_4 = fconvert.t(fconvert.s(fconvert.t(arg3[5])))
    long double x87_r1_6 = fconvert.t(fconvert.s(fconvert.t(arg3[3])))
    long double x87_r1_8 = fconvert.t(fconvert.s(fconvert.t(arg3[1]) - fconvert.t(arg2[1])))
    long double x87_r7_17 = x87_r1_8 * x87_r5 * x87_r1_4 + x87_r7_9 * x87_r1_6 * fconvert.t(var_10_1)
        + x87_r4_15 * x87_r2_3 * x87_r3 - x87_r2_3 * x87_r7_9 * x87_r1_4 - x87_r3 * x87_r1_6 * x87_r1_8
        - x87_r4_15 * x87_r5 * fconvert.t(var_10_1)
    *arg4 = fconvert.s(fconvert.t(fconvert.s(x87_r7_17)) / fconvert.t(var_8))
    float* eax
    eax.b = 1
    return eax
}
