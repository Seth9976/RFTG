// 函数名称: sub_5260a0
// 虚拟地址: 0x5260a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_5260a0(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10, float arg11, float arg12)
{
    // 第一条实际指令: float var_c = fconvert.s(fconvert.t(arg3) - fconvert.t(arg1))
    float var_c = fconvert.s(fconvert.t(arg3) - fconvert.t(arg1))
    long double x87_r7_4 = float.t(0)
    long double x87_r6 = fconvert.t(arg7)
    x87_r6 - x87_r7_4
    long double x87_r5 = fconvert.t(arg8)
    
    if ((((x87_r6 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000):1.b & 1) != 0)
        x87_r5 - x87_r7_4
        
        if ((((x87_r5 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r5 == x87_r7_4 ? 1 : 0) << 0xe | 0x2800):1.b & 1) != 0)
            sub_4c5870("minSpacing.x >= 0 || minSpacing.y >= 0", &data_83f3d3, "UI2.cpp", 0xa16, 
                "UI2CalcSpacing")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    long double x87_r4 = fconvert.t(arg9)
    x87_r4 - x87_r7_4
    
    if ((((x87_r4 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r4, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r4 == x87_r7_4 ? 1 : 0) << 0xe | 0x2000):1.b & 1) != 0)
        x87_r5 = x87_r4
    else
        x87_r4 - x87_r6
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            arg9 = fconvert.s(x87_r6)
    
    long double x87_r4_1 = fconvert.t(arg10)
    x87_r4_1 - x87_r7_4
    
    if ((((x87_r4_1 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, x87_r7_4) ? 1 : 0) << 0xa
            | (x87_r4_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x2000):1.b & 1) != 0)
        x87_r5 = x87_r4_1
    else
        x87_r4_1 - x87_r5
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            arg10 = fconvert.s(x87_r5)
    
    long double x87_r3 = fconvert.t(arg11)
    long double x87_r4_4 = x87_r3
    long double x87_r2_1 = fconvert.t(arg12)
    long double x87_r3_4 = x87_r2_1
    long double x87_r1_1 = float.t(1)
    long double x87_r2_6 = x87_r3_4 - x87_r1_1
    long double x87_r2_13 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r4_4 - x87_r1_1)) * x87_r6))
        + fconvert.t(fconvert.s(fconvert.t(arg5) * x87_r3))))
    x87_r7_4 - x87_r2_13
    bool p_3 = unimplemented  {test ah, 0x44}
    long double x87_r2_14
    
    if (p_3)
        x87_r2_14 = fconvert.t(var_c) / x87_r2_13
    else
        x87_r3_4 = x87_r2_13
        x87_r2_14 = float.t(0)
    
    long double x87_r2_15 = fconvert.t(fconvert.s(
        fconvert.t(fconvert.s(x87_r5 * fconvert.t(fconvert.s(x87_r2_6))))
        + fconvert.t(fconvert.s(fconvert.t(arg6) * x87_r2_1))))
    x87_r7_4 - x87_r2_15
    long double x87_r1_9 = fconvert.t(fconvert.s(fconvert.t(arg4) - fconvert.t(arg2)))
    bool p_4 = unimplemented  {test ah, 0x44}
    long double x87_r1_10
    
    if (p_4)
        x87_r1_10 = x87_r1_9 / x87_r1_9
        x87_r2_15 = x87_r1_9
    else
        x87_r3_4 = x87_r1_9
        x87_r1_10 = float.t(0)
    
    arg4 = fconvert.s(x87_r1_10)
    x87_r6 - x87_r7_4
    bool p_5 = unimplemented  {test ah, 0x5}
    
    if (p_5)
        long double x87_r3_5 = x87_r7_4
        long double temp1_1 = fconvert.t(arg8)
        x87_r3_5 - temp1_1
        long double x87_r2_19 = fconvert.t(fconvert.s(x87_r2_14))
        
        if ((((x87_r3_5 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r3_5, temp1_1) ? 1 : 0) << 0xa
                | (x87_r3_5 == temp1_1 ? 1 : 0) << 0xe | 0x1800):1.b & 0x41) != 0)
            long double x87_r1_11 = fconvert.t(arg4)
            x87_r1_11 - x87_r2_19
            
            if ((((x87_r1_11 < x87_r2_19 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r1_11, x87_r2_19) ? 1 : 0) << 0xa
                    | (x87_r1_11 == x87_r2_19 ? 1 : 0) << 0xe | 0x1000):1.b & 0x41) != 0)
                x87_r3_5 = x87_r2_19
                x87_r2_19 = fconvert.t(arg4)
        
        arg8 = fconvert.s(x87_r2_19)
        x87_r7_4 = x87_r3_5
    else
        arg8 = fconvert.s(fconvert.t(arg4))
    
    fconvert.t(arg8) - x87_r7_4
    bool p_6 = unimplemented  {test ah, 0x44}
    
    if (not(p_6))
        return 0
    
    long double x87_r6_4 = x87_r3_4
    long double x87_r3_7 = float.t(1)
    x87_r3_7 - x87_r4_4
    bool p_7 = unimplemented  {test ah, 0x5}
    long double x87_r5_6
    
    if (p_7)
        x87_r6_4 = x87_r4_4
        x87_r4_4 = x87_r3_7
        x87_r5_6 = float.t(0)
    else
        long double x87_r3_8 = fconvert.t(fconvert.s(fconvert.t(var_c)
            - fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg5) * x87_r7_4)) * x87_r4_4))))
        x87_r5_6 = x87_r3_8 / x87_r3_8
    
    x87_r4_4 - x87_r6_4
    bool p_8 = unimplemented  {test ah, 0x5}
    long double x87_r6_6
    
    if (p_8)
        x87_r6_6 = float.t(0)
    else
        x87_r6_6 = fconvert.t(fconvert.s(x87_r2_15
            - fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg6) * x87_r7_4)) * x87_r3_4))))
            / fconvert.t(fconvert.d(x87_r2_6))
    
    long double x87_r6_11 = fconvert.t(fconvert.s(x87_r5_6))
    long double x87_r5_8 = fconvert.t(fconvert.s(x87_r7_4 * fconvert.t(arg9)))
    x87_r5_8 - x87_r6_11
    
    if ((((x87_r5_8 < x87_r6_11 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_8, x87_r6_11) ? 1 : 0) << 0xa
            | (x87_r5_8 == x87_r6_11 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0)
        x87_r6_11 = x87_r5_8
    
    long double x87_r6_12 = fconvert.t(fconvert.s(x87_r6_6))
    long double x87_r5_9 = fconvert.t(fconvert.s(x87_r7_4 * fconvert.t(arg10)))
    x87_r5_9 - x87_r6_12
    
    if ((((x87_r5_9 < x87_r6_12 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_9, x87_r6_12) ? 1 : 0) << 0xa
            | (x87_r5_9 == x87_r6_12 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0)
        x87_r6_12 = x87_r5_9
    
    long double x87_r6_13 = float.t(1)
    long double x87_r7_10 = fconvert.t(fconvert.s(x87_r6_13 / x87_r6_13))
    arg8 = fconvert.s(x87_r7_10 * fconvert.t(fconvert.s(x87_r6_12)))
    return fconvert.s(x87_r7_10 * fconvert.t(fconvert.s(x87_r6_11)))
}
