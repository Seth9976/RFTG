// 函数名称: sub_465ec0
// 虚拟地址: 0x465ec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_465ec0(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1[3])
    long double x87_r7 = fconvert.t(arg1[3])
    int32_t ecx
    int32_t var_20 = ecx
    long double x87_r6 = fconvert.t(*arg1)
    long double x87_r5 = fconvert.t(arg1[1])
    long double x87_r4 = fconvert.t(arg1[2])
    long double x87_r6_4 = fconvert.t(fconvert.s(sub_413560(fconvert.s(fconvert.t(fconvert.s(
        x87_r7 * x87_r7 + x87_r6 * x87_r6 + x87_r5 * x87_r5 + x87_r4 * x87_r4))))))
    float var_c = fconvert.s(fconvert.t(arg1[3]) / x87_r6_4)
    long double x87_r6_9 = fconvert.t(arg1[1]) / x87_r6_4
    *arg2 = fconvert.s(fconvert.t(*arg1) / x87_r6_4)
    arg2[1] = fconvert.s(x87_r6_9)
    arg2[2] = fconvert.s(fconvert.t(arg1[2]) / x87_r6_4)
    arg2[3] = var_c
    return arg2
}
