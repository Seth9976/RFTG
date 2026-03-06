// 函数名称: sub_4d7d80
// 虚拟地址: 0x4d7d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d7d80(float* arg1 @ esi, float* arg2 @ edi, float* arg3)
{
    // 第一条实际指令: float* ecx = arg1
    float* ecx = arg1
    float* ebx = sub_4d7ba0(ecx, arg2)
    
    if (ebx == 0)
        *arg3 = fconvert.s(float.t(0))
        float* eax_1
        eax_1.b = 1
        return 
    
    char var_5 = 0
    float* eax
    
    if ((ebx.b & 3) != 0)
        float* var_24_1 = ecx
        long double st0_1 = sub_4064d0(fconvert.s(fconvert.t(arg1[3])))
        long double temp1_1 = fconvert.t(9.99999975e-06f)
        st0_1 - temp1_1
        eax.w = (st0_1 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(st0_1, temp1_1) ? 1 : 0) << 0xa
            | (st0_1 == temp1_1 ? 1 : 0) << 0xe
        
        if ((eax:1.b & 0x41) == 0)
            long double x87_r7_4
            
            if ((ebx.b & 1) == 0)
                x87_r7_4 = fconvert.t(*arg2)
            else
                x87_r7_4 = fconvert.t(arg2[3])
            
            long double x87_r6_1 =
                fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_4)) - fconvert.t(*arg1)))
            long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(arg1[3])))
            long double x87_r5_4 =
                fconvert.t(fconvert.s(fconvert.t(arg1[4]) * x87_r6_1 / x87_r5_2 + fconvert.t(arg1[1])))
            long double x87_r4_3 = fconvert.t(arg2[4])
            x87_r4_3 - x87_r5_4
            eax.w = (x87_r4_3 < x87_r5_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_3, x87_r5_4) ? 1 : 0) << 0xa
                | (x87_r4_3 == x87_r5_4 ? 1 : 0) << 0xe | 0x2800
            
            if ((eax:1.b & 1) == 0)
                long double x87_r4_4 = fconvert.t(arg2[1])
                x87_r4_4 - x87_r5_4
                eax.w = (x87_r4_4 < x87_r5_4 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_4, x87_r5_4) ? 1 : 0) << 0xa
                    | (x87_r4_4 == x87_r5_4 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(arg1[5]) * x87_r6_1 / x87_r5_2
                        + fconvert.t(arg1[2])))
                    long double x87_r4_5 = fconvert.t(arg2[5])
                    x87_r4_5 - x87_r5_4
                    eax.w = (x87_r4_5 < x87_r5_4 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_5, x87_r5_4) ? 1 : 0) << 0xa
                        | (x87_r4_5 == x87_r5_4 ? 1 : 0) << 0xe | 0x2800
                    
                    if ((eax:1.b & 1) == 0)
                        long double x87_r4_6 = fconvert.t(arg2[2])
                        x87_r4_6 - x87_r5_4
                        eax.w = (x87_r4_6 < x87_r5_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_6, x87_r5_4) ? 1 : 0) << 0xa
                            | (x87_r4_6 == x87_r5_4 ? 1 : 0) << 0xe | 0x3000
                        bool p_2 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_2))
                            long double x87_r7_14 = float.t(0)
                            long double x87_r6_2 = fconvert.t(fconvert.s(x87_r6_1 / x87_r6_1))
                            x87_r6_2 - x87_r7_14
                            eax.w = (x87_r6_2 < x87_r7_14 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_2, x87_r7_14) ? 1 : 0) << 0xa
                                | (x87_r6_2 == x87_r7_14 ? 1 : 0) << 0xe | 0x3000
                            
                            if ((eax:1.b & 1) == 0)
                                ecx = arg3
                                *ecx = fconvert.s(x87_r7_14)
                                var_5 = 1
    
    if ((ebx.b & 0xc) != 0)
        float* var_24_3 = ecx
        long double st0_2 = sub_4064d0(fconvert.s(fconvert.t(arg1[4])))
        long double temp2_1 = fconvert.t(9.99999975e-06f)
        st0_2 - temp2_1
        eax.w = (st0_2 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(st0_2, temp2_1) ? 1 : 0) << 0xa
            | (st0_2 == temp2_1 ? 1 : 0) << 0xe
        
        if ((eax:1.b & 0x41) == 0)
            long double x87_r7_17
            
            if ((ebx.b & 4) == 0)
                x87_r7_17 = fconvert.t(arg2[1])
            else
                x87_r7_17 = fconvert.t(arg2[4])
            
            long double x87_r6_3 =
                fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_17)) - fconvert.t(arg1[1])))
            long double x87_r5_10 = fconvert.t(fconvert.s(fconvert.t(arg1[4])))
            long double x87_r5_12 =
                fconvert.t(fconvert.s(fconvert.t(arg1[3]) * x87_r6_3 / x87_r5_10 + fconvert.t(*arg1)))
            long double x87_r4_9 = fconvert.t(arg2[3])
            x87_r4_9 - x87_r5_12
            eax.w = (x87_r4_9 < x87_r5_12 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_9, x87_r5_12) ? 1 : 0) << 0xa
                | (x87_r4_9 == x87_r5_12 ? 1 : 0) << 0xe | 0x2800
            
            if ((eax:1.b & 1) == 0)
                long double x87_r4_10 = fconvert.t(*arg2)
                x87_r4_10 - x87_r5_12
                eax.w = (x87_r4_10 < x87_r5_12 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_10, x87_r5_12) ? 1 : 0) << 0xa
                    | (x87_r4_10 == x87_r5_12 ? 1 : 0) << 0xe | 0x3000
                bool p_3 = unimplemented  {test ah, 0x41}
                
                if (not(p_3))
                    x87_r5_12 = fconvert.t(fconvert.s(fconvert.t(arg1[5]) * x87_r6_3 / x87_r5_10
                        + fconvert.t(arg1[2])))
                    long double x87_r4_11 = fconvert.t(arg2[5])
                    x87_r4_11 - x87_r5_12
                    eax.w = (x87_r4_11 < x87_r5_12 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_11, x87_r5_12) ? 1 : 0) << 0xa
                        | (x87_r4_11 == x87_r5_12 ? 1 : 0) << 0xe | 0x2800
                    
                    if ((eax:1.b & 1) == 0)
                        long double x87_r4_12 = fconvert.t(arg2[2])
                        x87_r4_12 - x87_r5_12
                        eax.w = (x87_r4_12 < x87_r5_12 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_12, x87_r5_12) ? 1 : 0) << 0xa
                            | (x87_r4_12 == x87_r5_12 ? 1 : 0) << 0xe | 0x3000
                        bool p_4 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_4))
                            long double x87_r7_27 = float.t(0)
                            long double x87_r6_4 = fconvert.t(fconvert.s(x87_r6_3 / x87_r6_3))
                            x87_r6_4 - x87_r7_27
                            eax.w = (x87_r6_4 < x87_r7_27 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_4, x87_r7_27) ? 1 : 0) << 0xa
                                | (x87_r6_4 == x87_r7_27 ? 1 : 0) << 0xe | 0x3000
                            
                            if ((eax:1.b & 1) == 0)
                                if (var_5 != 0)
                                    long double x87_r6_5 = fconvert.t(*arg3)
                                    x87_r6_5 - x87_r7_27
                                    eax.w = (x87_r6_5 < x87_r7_27 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r6_5, x87_r7_27) ? 1 : 0) << 0xa
                                        | (x87_r6_5 == x87_r7_27 ? 1 : 0) << 0xe | 0x3800
                                
                                if (var_5 == 0 || (eax:1.b & 0x41) == 0)
                                    *arg3 = fconvert.s(x87_r7_27)
                                    var_5 = 1
    
    if ((ebx.b & 0x30) != 0)
        float* var_24_5 = ecx
        long double st0_3 = sub_4064d0(fconvert.s(fconvert.t(arg1[5])))
        long double temp3_1 = fconvert.t(9.99999975e-06f)
        st0_3 - temp3_1
        eax.w = (st0_3 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(st0_3, temp3_1) ? 1 : 0) << 0xa
            | (st0_3 == temp3_1 ? 1 : 0) << 0xe
        
        if ((eax:1.b & 0x41) == 0)
            long double x87_r7_30
            
            if ((ebx.b & 0x20) == 0)
                x87_r7_30 = fconvert.t(arg2[2])
            else
                x87_r7_30 = fconvert.t(arg2[5])
            
            long double x87_r6_6 =
                fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r7_30)) - fconvert.t(arg1[2])))
            long double x87_r5_18 = fconvert.t(fconvert.s(fconvert.t(arg1[5])))
            long double x87_r5_20 =
                fconvert.t(fconvert.s(fconvert.t(arg1[3]) * x87_r6_6 / x87_r5_18 + fconvert.t(*arg1)))
            long double x87_r4_15 = fconvert.t(arg2[3])
            x87_r4_15 - x87_r5_20
            eax.w = (x87_r4_15 < x87_r5_20 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_15, x87_r5_20) ? 1 : 0) << 0xa
                | (x87_r4_15 == x87_r5_20 ? 1 : 0) << 0xe | 0x2800
            
            if ((eax:1.b & 1) != 0)
                eax.b = var_5
                return 
            
            long double x87_r4_16 = fconvert.t(*arg2)
            x87_r4_16 - x87_r5_20
            eax.w = (x87_r4_16 < x87_r5_20 ? 1 : 0) << 8
                | (is_unordered.t(x87_r4_16, x87_r5_20) ? 1 : 0) << 0xa
                | (x87_r4_16 == x87_r5_20 ? 1 : 0) << 0xe | 0x3000
            bool p_5 = unimplemented  {test ah, 0x41}
            
            if (not(p_5))
                x87_r5_20 = fconvert.t(fconvert.s(fconvert.t(arg1[4]) * x87_r6_6 / x87_r5_18
                    + fconvert.t(arg1[1])))
                long double x87_r4_17 = fconvert.t(arg2[4])
                x87_r4_17 - x87_r5_20
                eax.w = (x87_r4_17 < x87_r5_20 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_17, x87_r5_20) ? 1 : 0) << 0xa
                    | (x87_r4_17 == x87_r5_20 ? 1 : 0) << 0xe | 0x2800
                
                if ((eax:1.b & 1) != 0)
                    eax.b = var_5
                    return 
                
                long double x87_r4_18 = fconvert.t(arg2[1])
                x87_r4_18 - x87_r5_20
                eax.w = (x87_r4_18 < x87_r5_20 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r4_18, x87_r5_20) ? 1 : 0) << 0xa
                    | (x87_r4_18 == x87_r5_20 ? 1 : 0) << 0xe | 0x3000
                bool p_6 = unimplemented  {test ah, 0x41}
                
                if (not(p_6))
                    long double x87_r7_40 = float.t(0)
                    long double x87_r6_7 = fconvert.t(fconvert.s(x87_r6_6 / x87_r6_6))
                    x87_r6_7 - x87_r7_40
                    eax.w = (x87_r6_7 < x87_r7_40 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_7, x87_r7_40) ? 1 : 0) << 0xa
                        | (x87_r6_7 == x87_r7_40 ? 1 : 0) << 0xe | 0x3000
                    
                    if ((eax:1.b & 1) == 0)
                        if (var_5 != 0)
                            long double x87_r6_8 = fconvert.t(*arg3)
                            x87_r6_8 - x87_r7_40
                            eax.w = (x87_r6_8 < x87_r7_40 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_8, x87_r7_40) ? 1 : 0) << 0xa
                                | (x87_r6_8 == x87_r7_40 ? 1 : 0) << 0xe | 0x3800
                        
                        if (var_5 == 0 || (eax:1.b & 0x41) == 0)
                            *arg3 = fconvert.s(x87_r7_40)
                            eax.b = 1
                            return 
    
    eax.b = var_5
}
