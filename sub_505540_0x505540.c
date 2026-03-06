// 函数名称: sub_505540
// 虚拟地址: 0x505540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_505540(int32_t arg1, float* arg2, float* arg3, float* arg4 @ esi, float* arg5 @ edi, float arg6)
{
    // 第一条实际指令: float* result = arg6
    float* result = arg6
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
    long double x87_r5_2 = float.t(0)
    long double x87_r6_7 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s((fconvert.t(arg2[2]) - x87_r6) * fconvert.t(*arg5) + x87_r6))
        - fconvert.t(fconvert.s((fconvert.t(*arg3) - x87_r5_2) * fconvert.t(*arg4) + x87_r5_2))))
    *result = fconvert.s(x87_r6_7)
    long double x87_r4_1 = fconvert.t(fconvert.s(fconvert.t(arg2[1])))
    long double x87_r6_9 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s((fconvert.t(arg2[3]) - x87_r4_1) * fconvert.t(arg5[1]) + x87_r4_1))
        - fconvert.t(fconvert.s(x87_r5_2 + (fconvert.t(arg3[1]) - x87_r5_2) * fconvert.t(arg4[1])))))
    result[1] = fconvert.s(x87_r6_9)
    result[2] = fconvert.s(x87_r6_7 + fconvert.t(*arg3))
    result[3] = fconvert.s(x87_r6_9 + fconvert.t(arg3[1]))
    return result
}
