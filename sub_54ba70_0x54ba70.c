// 函数名称: sub_54ba70
// 虚拟地址: 0x54ba70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_54ba70(float* arg1, float* arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8, float arg9, float arg10)
{
    // 第一条实际指令: float esi = arg3
    float esi = arg3
    int32_t eax_1
    int80_t st0
    st0, eax_1 = sub_54ba10(esi, arg4, arg5, arg6, arg7, arg8)
    int32_t var_8 = eax_1
    int32_t eax_3
    int80_t st0_1
    st0_1, eax_3 = sub_54ba10(esi, arg4, arg5, arg6, arg9, arg10)
    long double x87_r7 = fconvert.t(arg6)
    long double x87_r6 = fconvert.t(arg5)
    long double x87_r5 = fconvert.t(arg10)
    int32_t ecx_2 = eax_3
    long double x87_r4 = fconvert.t(arg9)
    long double x87_r3 = fconvert.t(arg8)
    long double x87_r2 = fconvert.t(arg7)
    
    while (true)
        if ((ecx_2 | var_8) == 0)
            *arg1 = arg7
            arg1[1] = arg8
            *arg2 = arg9
            arg2[1] = arg10
            float* eax_9
            eax_9.b = 1
            return eax_9
        
        if ((var_8 & ecx_2) != 0)
            break
        
        int32_t eax_6 = var_8
        
        if (var_8 == 0)
            eax_6 = ecx_2
        
        float var_10_1
        float var_c_1
        long double x87_r3_3
        long double x87_r7_2
        
        if ((eax_6.b & 1) == 0)
            if ((eax_6.b & 2) == 0)
                long double x87_r2_20
                
                if ((eax_6.b & 4) == 0)
                    x87_r7 = x87_r2
                    var_c_1 = fconvert.s(
                        (x87_r5 - x87_r3) * (fconvert.t(arg3) - x87_r6) / (x87_r4 - x87_r6) + x87_r3)
                    x87_r2_20 = fconvert.t(arg3)
                else
                    long double x87_r6_4 =
                        (x87_r6 - x87_r2) * (x87_r5 - x87_r3) / (x87_r4 - x87_r2) + x87_r3
                    x87_r6 = x87_r2
                    var_c_1 = fconvert.s(x87_r6_4)
                    x87_r2_20 = fconvert.t(arg5)
                
                var_10_1 = fconvert.s(x87_r2_20)
            else
                x87_r7 = x87_r2
                var_10_1 = fconvert.s(
                    (fconvert.t(arg4) - x87_r3) * (x87_r4 - x87_r6) / (x87_r5 - x87_r3) + x87_r6)
                var_c_1 = fconvert.s(fconvert.t(arg4))
            
            x87_r3_3 = x87_r7
            x87_r7_2 = x87_r3
        else
            var_10_1 = fconvert.s((x87_r2 - x87_r3) * (x87_r4 - x87_r6) / (x87_r5 - x87_r3) + x87_r6)
            x87_r3_3 = x87_r2
            x87_r7_2 = x87_r3
            var_c_1 = fconvert.s(x87_r3_3)
        
        if (eax_6 != var_8)
            long double x87_r4_6 = fconvert.t(var_c_1)
            arg9 = var_10_1
            x87_r4_6 - x87_r4
            ecx_2 = 0
            arg10 = var_c_1
            eax_6.w = (x87_r4_6 < x87_r4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_6, x87_r4) ? 1 : 0) << 0xa
                | (x87_r4_6 == x87_r4 ? 1 : 0) << 0xe | 0x2000
            
            if ((eax_6:1.b & 0x41) != 0)
                long double x87_r3_6 = fconvert.t(arg4)
                x87_r3_6 - x87_r4_6
                eax_6.w = (x87_r3_6 < x87_r4_6 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_6, x87_r4_6) ? 1 : 0) << 0xa
                    | (x87_r3_6 == x87_r4_6 ? 1 : 0) << 0xe | 0x2800
                
                if ((eax_6:1.b & 0x41) == 0)
                    ecx_2 = 2
            else
                ecx_2 = 1
            
            long double x87_r4_7 = fconvert.t(var_10_1)
            long double x87_r3_7 = fconvert.t(arg5)
            x87_r3_7 - x87_r4_7
            eax_6.w = (x87_r3_7 < x87_r4_7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_7, x87_r4_7) ? 1 : 0) << 0xa
                | (x87_r3_7 == x87_r4_7 ? 1 : 0) << 0xe | 0x1800
            bool p_2 = unimplemented  {test ah, 0x5}
            long double x87_r2_33
            long double x87_r3_1
            long double x87_r5_5
            
            if (p_2)
                long double x87_r2_34 = fconvert.t(arg3)
                x87_r2_34 - x87_r4_7
                eax_6.w = (x87_r2_34 < x87_r4_7 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_34, x87_r4_7) ? 1 : 0) << 0xa
                    | (x87_r2_34 == x87_r4_7 ? 1 : 0) << 0xe | 0x1800
                x87_r5_5 = x87_r3_7
                
                if ((eax_6:1.b & 0x41) == 0)
                    ecx_2 |= 8
                
                x87_r3_1 = fconvert.t(arg10)
                x87_r2_33 = fconvert.t(arg9)
            else
                x87_r5_5 = x87_r3_7
                ecx_2 |= 4
                x87_r3_1 = fconvert.t(arg10)
                x87_r2_33 = fconvert.t(arg9)
            
            x87_r7 = x87_r5_5
            x87_r6 = x87_r4_7
            x87_r5 = x87_r3_1
            x87_r4 = x87_r2_33
            x87_r2 = x87_r3_3
            x87_r3 = x87_r7_2
        else
            x87_r7 = x87_r4
            long double x87_r4_2 = fconvert.t(var_c_1)
            arg8 = var_c_1
            x87_r4_2 - x87_r7
            arg7 = var_10_1
            int32_t edx_3 = 0
            float eax_7
            eax_7.w = (x87_r4_2 < x87_r7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_2, x87_r7) ? 1 : 0) << 0xa
                | (x87_r4_2 == x87_r7 ? 1 : 0) << 0xe | 0x2000
            
            if ((eax_7:1.b & 0x41) != 0)
                long double x87_r3_4 = fconvert.t(arg4)
                x87_r3_4 - x87_r4_2
                eax_7.w = (x87_r3_4 < x87_r4_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r3_4, x87_r4_2) ? 1 : 0) << 0xa
                    | (x87_r3_4 == x87_r4_2 ? 1 : 0) << 0xe | 0x2800
                
                if ((eax_7:1.b & 0x41) == 0)
                    edx_3 = 2
            else
                edx_3 = 1
            
            long double x87_r4_3 = fconvert.t(var_10_1)
            long double x87_r3_5 = fconvert.t(arg5)
            x87_r3_5 - x87_r4_3
            eax_7.w = (x87_r3_5 < x87_r4_3 ? 1 : 0) << 8
                | (is_unordered.t(x87_r3_5, x87_r4_3) ? 1 : 0) << 0xa
                | (x87_r3_5 == x87_r4_3 ? 1 : 0) << 0xe | 0x1800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                long double x87_r2_29 = fconvert.t(arg3)
                x87_r2_29 - x87_r4_3
                eax_7.w = (x87_r2_29 < x87_r4_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_29, x87_r4_3) ? 1 : 0) << 0xa
                    | (x87_r2_29 == x87_r4_3 ? 1 : 0) << 0xe | 0x1800
                x87_r5 = x87_r3_5
                
                if ((eax_7:1.b & 0x41) == 0)
                    edx_3 |= 8
                
                x87_r3 = fconvert.t(arg8)
                var_8 = edx_3
                long double x87_r2_32 = x87_r6
                x87_r6 = x87_r4_3
                x87_r2 = fconvert.t(arg7)
                x87_r4 = x87_r2_32
            else
                x87_r5 = x87_r3_5
                x87_r3 = fconvert.t(arg8)
                var_8 = edx_3 | 4
                long double x87_r2_28 = x87_r6
                x87_r6 = x87_r4_3
                x87_r2 = fconvert.t(arg7)
                x87_r4 = x87_r2_28
    
    float eax_10
    int32_t edx_8
    eax_10, edx_8 = sub_4fc8c0(&arg3)
    float var_10_2 = fconvert.s(fconvert.t(arg3))
    *arg1 = eax_10
    arg1[1] = edx_8
    *arg2 = var_10_2
    arg2[1] = fconvert.s(fconvert.t(arg6))
    float* eax_11
    eax_11.b = 1
    return eax_11
}
