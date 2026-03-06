// 函数名称: sub_4132a0
// 虚拟地址: 0x4132a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4132a0(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1[1])
    long double x87_r7 = fconvert.t(arg1[1])
    int32_t ecx
    int32_t var_20 = ecx
    long double x87_r6 = fconvert.t(*arg1)
    long double x87_r5 = fconvert.t(arg1[2])
    float var_8_1 = fconvert.s(sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7 * x87_r7
        + x87_r6 * x87_r6 + x87_r5 * x87_r5)))) + fconvert.t(9.9999997473787516e-06))
    long double x87_r6_4 = float.t(1)
    long double x87_r6_5 = fconvert.t(fconvert.s(x87_r6_4 / x87_r6_4))
    *arg2 = fconvert.s(fconvert.t(*arg1) * x87_r6_5)
    arg2[1] = fconvert.s(x87_r6_5 * fconvert.t(arg1[1]))
    arg2[2] = fconvert.s(x87_r6_5 * fconvert.t(arg1[2]))
    return arg2
}
