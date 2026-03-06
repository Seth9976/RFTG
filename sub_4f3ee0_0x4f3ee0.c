// 函数名称: sub_4f3ee0
// 虚拟地址: 0x4f3ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4f3ee0(int16_t arg1, int32_t, float* arg3, float arg4, float arg5, float arg6)
{
    // 第一条实际指令: float* var_8 = arg3
    float* var_8 = arg3
    long double x87_r7 = fconvert.t(arg4)
    long double x87_r6 = fconvert.t(arg5)
    x87_r6 - x87_r7
    float var_8_1
    long double x87_r7_1
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
        var_8_1 = fconvert.s(x87_r6)
        x87_r7_1 = x87_r6
    else
        x87_r7_1 = x87_r6
        var_8_1 = fconvert.s(x87_r7)
    
    long double x87_r5 = fconvert.t(var_8_1)
    long double x87_r4 = fconvert.t(arg6)
    x87_r4 - x87_r5
    
    if ((((x87_r4 < x87_r5 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r5) ? 1 : 0) << 0xa
            | (x87_r4 == x87_r5 ? 1 : 0) << 0xe | 0x2000):1.b & 0x41) != 0)
        var_8_1 = fconvert.s(x87_r5)
    
    long double x87_r5_1 = x87_r4
    x87_r5_1 - x87_r7_1
    float arg_10
    
    if ((((x87_r5_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) != 0)
        arg_10 = fconvert.s(x87_r7_1)
    else
        arg_10 = fconvert.s(x87_r5_1)
    
    long double x87_r4_1 = fconvert.t(arg_10)
    x87_r4_1 - x87_r5
    
    if ((((x87_r4_1 < x87_r5 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, x87_r5) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r5 ? 1 : 0) << 0xe | 0x2000):1.b & 0x41) != 0)
        long double temp0_8 = x87_r4_1
        x87_r4_1 = fconvert.t(fconvert.s(x87_r5))
        x87_r5_1 = temp0_8
    
    arg3[2] = fconvert.s(x87_r4_1)
    long double x87_r3_2 = float.t(0)
    long double x87_r2 = fconvert.t(fconvert.s(x87_r4_1 - fconvert.t(var_8_1)))
    x87_r2 - x87_r3_2
    bool p = unimplemented  {test ah, 0x41}
    
    if (not(p))
        *arg3 = fconvert.s(x87_r4_1)
        arg3[1] = fconvert.s(x87_r4_1)
        return x87_r3_2
    
    arg3[1] = fconvert.s(x87_r2 / x87_r4_1)
    x87_r5_1 - x87_r4_1
    long double x87_r6_8
    
    if ((((x87_r5_1 < x87_r4_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r4_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r4_1 ? 1 : 0) << 0xe | 0x1000):1.b & 1) != 0)
        x87_r4_1 - x87_r7_1
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (p_1)
            x87_r7_1 = x87_r5
            x87_r6_8 = (x87_r5_1 - x87_r3_2) / x87_r2 + fconvert.t(4.0)
        else
            x87_r6_8 = (x87_r5 - x87_r5_1) / x87_r2 + fconvert.t(2.0)
    else
        long double x87_r4_5 = x87_r7_1
        x87_r7_1 = x87_r4_1
        x87_r6_8 = (x87_r4_5 - x87_r5) / x87_r3_2
    
    *arg3 = fconvert.s(x87_r6_8)
    long double x87_r6_14 = fconvert.t(fconvert.s(fconvert.t(*arg3) * fconvert.t(60.0)))
    *arg3 = fconvert.s(x87_r6_14)
    x87_r6_14 - x87_r7_1
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (p_2)
        return x87_r7_1
    
    *arg3 = fconvert.s(x87_r7_1 + fconvert.t(360.0))
    return x87_r6_14
}
