// 函数名称: sub_466a10
// 虚拟地址: 0x466a10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_466a10(float* arg1 @ edi, int32_t arg2, int32_t arg3, float* arg4, char arg5, float arg6, float arg7, float arg8, float arg9)
{
    // 第一条实际指令: void* eax = sub_4f4890(data_307c1dc)
    void* eax = sub_4f4890(data_307c1dc)
    float var_34 = fconvert.s(fconvert.t(*(eax + 0x10)) - fconvert.t(*(eax + 8)))
    float var_30 = fconvert.s(fconvert.t(*(eax + 0x14)) - fconvert.t(*(eax + 0xc)))
    void* eax_1 = sub_4f4890(data_307c1d8)
    long double x87_r7_8 = fconvert.t(arg8)
    long double x87_r5 = fconvert.t(arg6)
    long double x87_r5_2 = fconvert.t(fconvert.s(x87_r7_8 - x87_r5))
    long double x87_r3 = fconvert.t(var_34)
    long double x87_r3_2 =
        fconvert.t(fconvert.s(fconvert.t(*(eax_1 + 0x10)) - fconvert.t(*(eax_1 + 8))))
    long double x87_r3_4 = fconvert.t(fconvert.s(x87_r5_2 / x87_r3))
    long double x87_r4_5 = x87_r3_4
    float var_24_2 = fconvert.s(x87_r3 * x87_r3_4)
    float var_1c = var_24_2
    float var_20_2 = fconvert.s(fconvert.t(var_30) * x87_r4_5)
    long double x87_r3_8 = fconvert.t(fconvert.s(x87_r5_2 / x87_r3_2))
    float var_18 = var_20_2
    long double x87_r5_6 = x87_r3_8
    float var_34_1 = fconvert.s(x87_r3_2 * x87_r3_8)
    float var_14_1 = var_34_1
    float var_30_1 = fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(*(eax_1 + 0x14)) - fconvert.t(*(eax_1 + 0xc)))) * x87_r5_6)
    long double x87_r3_12 = fconvert.t(arg9)
    float var_10_1 = var_30_1
    
    if (arg5 != 0)
        long double x87_r2_4 = fconvert.t(var_30_1)
        arg5.d = fconvert.s(x87_r3_12 - fconvert.t(arg7))
        long double x87_r2_9 =
            fconvert.t(fconvert.s(x87_r2_4 + x87_r2_4 + fconvert.t(var_20_2) * fconvert.t(4.0)))
        long double x87_r1_3 = fconvert.t(arg5.d)
        x87_r1_3 - x87_r2_9
        float eax_3
        eax_3.w = (x87_r1_3 < x87_r2_9 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_3, x87_r2_9) ? 1 : 0) << 0xa
            | (x87_r1_3 == x87_r2_9 ? 1 : 0) << 0xe | 0x1000
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            x87_r3_12 = x87_r2_9
        else
            arg5.d = fconvert.s(fconvert.t(arg5.d) / x87_r2_9)
            long double x87_r2_11 = fconvert.t(arg5.d)
            var_1c = fconvert.s(fconvert.t(var_24_2) * x87_r2_11)
            var_18 = fconvert.s(x87_r2_11 * fconvert.t(var_18))
            var_14_1 = fconvert.s(fconvert.t(var_34_1) * x87_r2_11)
            var_10_1 = fconvert.s(x87_r2_11 * fconvert.t(var_10_1))
            x87_r4_5 = fconvert.t(fconvert.s(x87_r4_5 * x87_r2_11))
            x87_r5_6 = fconvert.t(fconvert.s(x87_r5_6 * x87_r2_11))
    
    if (arg2 s>= arg3)
        arg5.d = arg2 - arg3 + 1
        long double x87_r4_21 = fconvert.t(var_1c)
        long double x87_r3_26 = fconvert.t(var_18)
        arg5.d = fconvert.s(float.t(arg5.d) * x87_r3_26 + float.t(arg3) * fconvert.t(var_10_1)
            + float.t(arg2))
        *arg4 = fconvert.s(x87_r4_5)
        long double x87_r5_17 =
            fconvert.t(fconvert.s((x87_r7_8 + x87_r3_12 - x87_r4_21) * fconvert.t(0.5)))
        long double x87_r5_19 = fconvert.t(fconvert.s(x87_r5_6 - fconvert.t(arg5.d)))
        *arg1 = fconvert.s(x87_r5_17)
        arg1[1] = fconvert.s(x87_r5_19)
        arg1[2] = fconvert.s(fconvert.t(fconvert.s(x87_r4_21 + x87_r5_17)))
        arg1[3] = fconvert.s(fconvert.t(fconvert.s(x87_r3_26 + x87_r5_19)))
        return arg1
    
    arg5.d = arg2 + 1
    long double x87_r4_10 = fconvert.t(var_14_1)
    long double x87_r3_22 = fconvert.t(var_10_1)
    arg5.d = fconvert.s(float.t(arg5.d) * x87_r3_22 + float.t(arg2))
    *arg4 = fconvert.s(x87_r3_12)
    long double x87_r5_10 = fconvert.t(fconvert.s((x87_r7_8 + x87_r5 - x87_r4_10) * fconvert.t(0.5)))
    long double x87_r5_12 = fconvert.t(fconvert.s(x87_r4_5 - fconvert.t(arg5.d)))
    *arg1 = fconvert.s(x87_r5_10)
    arg1[1] = fconvert.s(x87_r5_12)
    arg1[2] = fconvert.s(fconvert.t(fconvert.s(x87_r4_10 + x87_r5_10)))
    arg1[3] = fconvert.s(fconvert.t(fconvert.s(x87_r3_22 + x87_r5_12)))
    return arg1
}
