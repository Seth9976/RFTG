// 函数名称: sub_465c60
// 虚拟地址: 0x465c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_465c60(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1[1])
    long double x87_r7 = fconvert.t(arg1[1])
    float var_10 = fconvert.s(x87_r7 * x87_r7)
    long double x87_r7_2 = fconvert.t(*arg1)
    fconvert.t(arg1[2]) * fconvert.t(arg1[1]) + fconvert.t(arg1[3]) * fconvert.t(*arg1)
    int32_t ecx
    int16_t x87control
    ecx, x87control = sub_68680a()
    int32_t var_1c = ecx
    *arg2 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(1)
        - fconvert.t(2.0) * (x87_r7_2 * x87_r7_2 + fconvert.t(var_10)))))) * fconvert.t(360.0)
        / fconvert.t(6.2831854820251465))
    long double x87_r6_13 =
        fconvert.t(arg1[3]) * fconvert.t(arg1[1]) - fconvert.t(arg1[2]) * fconvert.t(*arg1)
    float var_14_3 = fconvert.s(x87_r6_13 + x87_r6_13)
    long double x87_r6_17 = float.t(1)
    long double x87_r5_9 = fconvert.t(fconvert.s(sub_4064d0(fconvert.s(fconvert.t(var_14_3)))))
    x87_r5_9 - x87_r6_17
    long double x87_r6_21
    int32_t mxcsr
    
    if ((((x87_r5_9 < x87_r6_17 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_9, x87_r6_17) ? 1 : 0) << 0xa
            | (x87_r5_9 == x87_r6_17 ? 1 : 0) << 0xe | 0x2800):1.b & 1) != 0)
        x87_r6_21 = fconvert.t(fconvert.s(sub_68b830(mxcsr, x87control, fconvert.t(var_14_3))))
            * fconvert.t(360.0) / fconvert.t(6.2831854820251465)
    else
        long double x87_r5_10 = fconvert.t(9.99999975e-06f)
        long double x87_r4_2 = fconvert.t(fconvert.s(x87_r5_9))
        x87_r4_2 - x87_r5_10
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            x87_r6_21 = fconvert.t(fconvert.s(fconvert.t(var_14_3) / x87_r4_2)) * fconvert.t(90.0)
        else
            x87_r6_21 = fconvert.t(fconvert.s(x87_r5_10)) * fconvert.t(90.0)
    arg2[1] = fconvert.s(x87_r6_21)
    long double x87_r6_29 = fconvert.t(arg1[2])
    long double x87_r4_5 = fconvert.t(2.0)
    long double result = fconvert.t(fconvert.s((fconvert.t(arg1[3]) * fconvert.t(arg1[2])
        + fconvert.t(*arg1) * fconvert.t(arg1[1])) * x87_r4_5))
    sub_68680a()
    arg2[2] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(float.t(1)
        - x87_r4_5 * (x87_r6_29 * x87_r6_29 + fconvert.t(var_10)))))) * fconvert.t(360.0)
        / fconvert.t(6.2831854820251465))
    return result
}
