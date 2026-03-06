// 函数名称: sub_467730
// 虚拟地址: 0x467730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_467730(int16_t arg1, float* arg2, long double arg3 @ st0, int32_t arg4, float arg5, int32_t arg6)
{
    // 第一条实际指令: fconvert.t(-1f) - fconvert.t(*arg2)
    fconvert.t(-1f) - fconvert.t(*arg2)
    bool p = unimplemented  {test ah, 0x44}
    float var_8_4
    long double x87_r6_2
    long double x87_r7_3
    
    if (not(p))
        long double x87_r5_6 = float.t(0)
        var_8_4 = fconvert.s(float.t(arg5 i- arg6) + x87_r5_6)
        x87_r6_2 = float.t(0)
        x87_r7_3 = x87_r5_6
    else
        long double x87_r6_1 = fconvert.t(*arg2)
        long double x87_r5 = float.t(0)
        x87_r5 - x87_r6_1
        float var_8
        
        if ((((x87_r5 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r5 == x87_r6_1 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) != 0)
            var_8 = fconvert.s(fconvert.t(*arg2))
            x87_r6_2 = x87_r5
            x87_r7_3 = x87_r6_1
        else
            x87_r6_2 = x87_r5
            x87_r7_3 = x87_r6_1
            var_8 = fconvert.s(x87_r6_2)
        
        long double x87_r5_2 = fconvert.t(var_8)
        *arg2 = fconvert.s(x87_r5_2)
        long double x87_r4_2 = fconvert.t(fconvert.s(float.t(arg5 i- arg6)))
        x87_r4_2 - x87_r5_2
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            long double x87_r5_5 = fconvert.t(fconvert.s(x87_r4_2))
            *arg2 = fconvert.s(x87_r5_5)
            var_8_4 = fconvert.s(x87_r5_5)
        else
            x87_r6_2 = x87_r4_2
            long double x87_r5_3 = fconvert.t(fconvert.s(x87_r5_2))
            *arg2 = fconvert.s(x87_r5_3)
            var_8_4 = fconvert.s(x87_r5_3)
    
    long double x87_r5_10 = fconvert.t(var_8_4)
    long double x87_r4_4 = x87_r5_10 - fconvert.t(3.0)
    x87_r4_4 - x87_r7_3
    bool p_2 = unimplemented  {test ah, 0x5}
    
    if (p_2)
        arg3 = x87_r4_4
    else
        x87_r5_10 = x87_r4_4
    
    long double x87_r4_5 = float.t(1)
    long double x87_r5_13 = float.t(arg5) - x87_r4_5
    long double x87_r3_1 = fconvert.t(fconvert.s(float.t(arg6)))
    long double x87_r2_1 = x87_r3_1 + x87_r5_10
    long double x87_r1_1 = x87_r2_1 + x87_r4_5
    x87_r1_1 - x87_r5_13
    
    if ((((x87_r1_1 < x87_r5_13 ? 1 : 0) << 8 | (is_unordered.t(x87_r1_1, x87_r5_13) ? 1 : 0) << 0xa
            | (x87_r1_1 == x87_r5_13 ? 1 : 0) << 0xe | 0x800):1.b & 0x41) != 0)
        x87_r6_2 = x87_r1_1
    else
        x87_r2_1 = x87_r1_1
    
    long double x87_r3_4 = fconvert.t(2.0)
    long double x87_r3_6 = fconvert.t(fconvert.s(float.t(arg4) + x87_r7_3))
    long double x87_r2_3 = fconvert.t(fconvert.s(x87_r7_3))
    x87_r2_3 - x87_r3_6
    arg1 = (x87_r2_3 < x87_r3_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r2_3, x87_r3_6) ? 1 : 0) << 0xa
        | (x87_r2_3 == x87_r3_6 ? 1 : 0) << 0xe | 0x1000
    
    if ((arg1:1.b & 1) == 0)
        arg5 = fconvert.s(x87_r3_1)
        return arg1
    
    long double x87_r2_4 = fconvert.t(fconvert.s(x87_r5_10 + x87_r4_5))
    x87_r2_4 - x87_r3_6
    
    if ((((x87_r2_4 < x87_r3_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r2_4, x87_r3_6) ? 1 : 0) << 0xa
            | (x87_r2_4 == x87_r3_6 ? 1 : 0) << 0xe | 0x1000):1.b & 0x41) != 0)
        long double x87_r2_5 = fconvert.t(fconvert.s(x87_r2_1 - x87_r3_4))
        x87_r2_5 - x87_r3_6
        
        if ((((x87_r2_5 < x87_r3_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r2_5, x87_r3_6) ? 1 : 0) << 0xa
                | (x87_r2_5 == x87_r3_6 ? 1 : 0) << 0xe | 0x1000):1.b & 0x41) == 0)
            arg5 = fconvert.s(arg3)
            return sub_4069e0(fconvert.s(x87_r6_2), fconvert.s(x87_r4_5), fconvert.s(x87_r3_6), 
                fconvert.s(float.t(1)), fconvert.s(fconvert.t(fconvert.s(x87_r2_4 - x87_r2_5))))
        
        long double x87_r2_6 = fconvert.t(fconvert.s(x87_r5_13))
        x87_r2_6 - x87_r3_6
        arg1 = (x87_r2_6 < x87_r3_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r2_6, x87_r3_6) ? 1 : 0) << 0xa
            | (x87_r2_6 == x87_r3_6 ? 1 : 0) << 0xe | 0x1000
        
        if ((arg1:1.b & 0x41) != 0)
            arg5 = fconvert.s(x87_r3_4 - x87_r2_6)
            return arg1
        
        arg5 = fconvert.s(arg3)
        return sub_4069e0(fconvert.s(x87_r6_2), fconvert.s(x87_r2_6), fconvert.s(x87_r3_6), 
            fconvert.s(fconvert.t(fconvert.s(x87_r2_5 - x87_r3_4))), 
            fconvert.s(fconvert.t(fconvert.s(x87_r2_5 - x87_r4_5))))
    
    long double x87_r6_10 = float.t(0)
    long double x87_r5_22 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r3_4 - x87_r3_6))
        / fconvert.t(fconvert.s(x87_r2_3 - x87_r3_6))))
    x87_r5_22 - x87_r6_10
    bool p_3 = unimplemented  {test ah, 0x41}
    
    if (not(p_3))
        arg5 = fconvert.s(fconvert.t(fconvert.s(x87_r4_5)))
        return (x87_r5_22 < x87_r6_10 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_22, x87_r6_10) ? 1 : 0) << 0xa
            | (x87_r5_22 == x87_r6_10 ? 1 : 0) << 0xe | 0x2800
    
    long double x87_r5_23 = float.t(1)
    x87_r5_23 - x87_r6_10
    arg1 = (x87_r5_23 < x87_r6_10 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_23, x87_r6_10) ? 1 : 0) << 0xa
        | (x87_r5_23 == x87_r6_10 ? 1 : 0) << 0xe | 0x2800
    bool p_4 = unimplemented  {test ah, 0x41}
    
    if (not(p_4))
        arg5 = fconvert.s(fconvert.t(fconvert.s(x87_r5_23)))
        return arg1
    
    long double x87_r6_14 = float.t(0)
    arg5 = fconvert.s(fconvert.t(fconvert.s(
        (x87_r5_22 - x87_r6_14) * fconvert.t(fconvert.s(x87_r5_23 * x87_r5_23)) + x87_r6_14)))
    return arg1
}
