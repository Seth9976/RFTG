// 函数名称: sub_4e41f0
// 虚拟地址: 0x4e41f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4e41f0(int32_t arg1, int32_t arg2, float* arg3, int32_t* arg4, float arg5, float arg6, float arg7, float arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_4 = *sub_466320(arg4)
    long double x87_r7 = float.t(*eax_4)
    
    if (*eax_4 s< 0)
        x87_r7 = x87_r7 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_1 = float.t(eax_4[1])
    
    if (eax_4[1] s< 0)
        x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_3 = fconvert.t(fconvert.s(fconvert.t(eax_4[2])))
    float var_78_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7)))
    float var_74_1 = fconvert.s(x87_r7_3 * fconvert.t(fconvert.s(x87_r7_1)))
    long double x87_r6_2 = fconvert.t(0.5)
    float var_68 = fconvert.s(fconvert.t(var_78_1) * x87_r6_2)
    float var_5c = var_68
    float var_64 = fconvert.s(x87_r6_2 * fconvert.t(var_74_1))
    float var_c0 = var_64
    var_c0.q = fconvert.d(fconvert.t(var_68))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686950(mxcsr, x87control, var_c0)
    float var_5c_1 = fconvert.s(fconvert.t(fconvert.s(st0)))
    var_c0.q = fconvert.d(fconvert.t(var_64))
    int16_t x87control_2
    long double st0_1
    st0_1, x87control_2 = sub_686950(mxcsr, x87control_1, var_c0)
    float var_58_1 = fconvert.s(fconvert.t(fconvert.s(st0_1)))
    long double x87_r7_15 = fconvert.t(var_5c_1)
    long double x87_r5 = float.t(1)
    float var_68_1 = fconvert.s(x87_r7_15 - x87_r5)
    float var_64_1 = fconvert.s(fconvert.t(var_58_1) - x87_r5)
    long double x87_r5_5 = x87_r7_15 + x87_r7_15
    long double x87_r4_1 = fconvert.t(arg7)
    x87_r4_1 - x87_r5_5
    float eax_6
    eax_6.w = (x87_r4_1 < x87_r5_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_1, x87_r5_5) ? 1 : 0) << 0xa
        | (x87_r4_1 == x87_r5_5 ? 1 : 0) << 0xe | 0x2000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_10
    
    if (p)
        x87_r6_10 = x87_r5_5
    else
        var_c0.q = fconvert.d(fconvert.t(fconvert.s(x87_r4_1 * fconvert.t(0.5))))
        long double st0_2
        st0_2, eax_6, x87control_2 = sub_686950(mxcsr, x87control_2, var_c0)
        var_5c_1 = fconvert.s(fconvert.t(fconvert.s(st0_2)))
        x87_r7_15 = fconvert.t(var_5c_1)
        var_68_1 = fconvert.s(x87_r7_15)
        x87_r6_10 = fconvert.t(var_58_1)
    
    long double x87_r5_7 = x87_r6_10 + x87_r6_10
    long double x87_r4_2 = fconvert.t(arg8)
    x87_r4_2 - x87_r5_7
    eax_6.w = (x87_r4_2 < x87_r5_7 ? 1 : 0) << 8 | (is_unordered.t(x87_r4_2, x87_r5_7) ? 1 : 0) << 0xa
        | (x87_r4_2 == x87_r5_7 ? 1 : 0) << 0xe | 0x2000
    long double x87_r6_11 = x87_r4_2
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1))
        var_c0.q = fconvert.d(fconvert.t(fconvert.s(x87_r6_11 * fconvert.t(0.5))))
        long double st0_3
        st0_3, eax_6 = sub_686950(mxcsr, x87control_2, var_c0)
        long double x87_r7_26 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0_3))))
        var_64_1 = fconvert.s(x87_r7_26)
        x87_r7_15 = fconvert.t(var_5c_1)
        x87_r5_7 = fconvert.t(arg8)
        x87_r6_11 = x87_r7_26
    
    long double x87_r4_3 = fconvert.t(arg5)
    int32_t i = 0
    float var_2c = fconvert.s(x87_r4_3)
    float var_28 = fconvert.s(x87_r7_15 + x87_r4_3)
    long double x87_r4_4 = x87_r4_3 + fconvert.t(arg7)
    long double x87_r3_2 = fconvert.t(var_68_1)
    float var_24 = fconvert.s(x87_r4_4 - x87_r3_2)
    float var_20 = fconvert.s(x87_r4_4)
    long double x87_r3_4 = fconvert.t(arg6)
    float var_1c = fconvert.s(x87_r3_4)
    float var_18 = fconvert.s(x87_r6_11 + x87_r3_4)
    long double x87_r5_10 = x87_r5_7 + x87_r3_4
    long double x87_r3_5 = fconvert.t(var_64_1)
    float var_14 = fconvert.s(x87_r5_10 - x87_r3_5)
    float var_10 = fconvert.s(x87_r5_10)
    long double x87_r3_7 = float.t(0)
    float var_4c = fconvert.s(x87_r3_7)
    float var_48 = fconvert.s(x87_r7_15)
    long double x87_r3_9 = fconvert.t(var_78_1)
    float var_44 = fconvert.s(x87_r3_9 - x87_r3_2)
    float var_40 = fconvert.s(x87_r3_9)
    float var_3c = fconvert.s(x87_r3_7)
    float var_38 = fconvert.s(x87_r6_11)
    long double x87_r6_13 = fconvert.t(var_74_1)
    float var_34 = fconvert.s(x87_r6_13 - x87_r3_5)
    float var_30 = fconvert.s(x87_r6_13)
    
    do
        for (int32_t j = 0; j s< 3; j += 1)
            long double x87_r7_31 = fconvert.t((&var_2c)[i])
            long double x87_r6_15 = fconvert.t((&var_28)[i])
            x87_r6_15 - x87_r7_31
            eax_6.w = (x87_r6_15 < x87_r7_31 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_15, x87_r7_31) ? 1 : 0) << 0xa
                | (x87_r6_15 == x87_r7_31 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x41}
            
            if (p_2)
                long double x87_r7_32 = fconvert.t((&var_1c)[j])
                long double x87_r6_16 = fconvert.t((&var_18)[j])
                x87_r6_16 - x87_r7_32
                eax_6.w = (x87_r6_16 < x87_r7_32 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_16, x87_r7_32) ? 1 : 0) << 0xa
                    | (x87_r6_16 == x87_r7_32 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x41}
                
                if (p_3)
                    float var_70_1 = fconvert.s(fconvert.t((&var_2c)[i]))
                    long double x87_r7_34 = fconvert.t((&var_1c)[j])
                    float var_ac = var_70_1
                    float var_6c_1 = fconvert.s(x87_r7_34)
                    float var_a8_1 = var_6c_1
                    float var_68_2 = fconvert.s(fconvert.t((&var_28)[i]))
                    float var_a4_1 = var_68_2
                    float var_64_2 = fconvert.s(fconvert.t((&var_18)[j]))
                    float var_a0_1 = var_64_2
                    float var_80_1 = fconvert.s(fconvert.t((&var_4c)[i]))
                    long double x87_r7_38 = fconvert.t((&var_3c)[j])
                    float var_90 = var_80_1
                    float var_78_2 = fconvert.s(fconvert.t((&var_48)[i]))
                    float var_88_1 = var_78_2
                    float eax_8
                    
                    if (i == 1)
                        long double x87_r6_19 =
                            fconvert.t(fconvert.s(fconvert.t(var_78_2) - fconvert.t(var_80_1)))
                        long double x87_r5_15 =
                            fconvert.t(fconvert.s(fconvert.t(var_68_2) - fconvert.t(var_70_1)))
                        x87_r5_15 - x87_r6_19
                        eax_8.w = (x87_r5_15 < x87_r6_19 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_15, x87_r6_19) ? 1 : 0) << 0xa
                            | (x87_r5_15 == x87_r6_19 ? 1 : 0) << 0xe | 0x2800
                        bool p_4 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_4))
                            float var_88_2 = fconvert.s(x87_r5_15 + x87_r6_19)
                    
                    if (j == 1)
                        long double x87_r6_22 = fconvert.t(fconvert.s(
                            fconvert.t(fconvert.s(fconvert.t((&var_38)[j])))
                            - fconvert.t(fconvert.s(x87_r7_38))))
                        long double x87_r5_17 =
                            fconvert.t(fconvert.s(fconvert.t(var_64_2) - fconvert.t(var_6c_1)))
                        x87_r5_17 - x87_r6_22
                        eax_8.w = (x87_r5_17 < x87_r6_22 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_17, x87_r6_22) ? 1 : 0) << 0xa
                            | (x87_r5_17 == x87_r6_22 ? 1 : 0) << 0xe | 0x2800
                        bool p_5 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_5))
                            float var_84_2 = fconvert.s(x87_r5_17 + x87_r6_22)
                    
                    int32_t var_bc_1 = arg2
                    float* var_c0_1 = &var_ac
                    sub_4da090(arg4, &var_90, arg3, var_78_2, arg3)
        
        i += 1
    while (i s< 3)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
