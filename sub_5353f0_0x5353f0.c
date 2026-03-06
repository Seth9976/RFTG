// 函数名称: sub_5353f0
// 虚拟地址: 0x5353f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5353f0(int32_t* arg1 @ esi, char arg2)
{
    // 第一条实际指令: __builtin_memset(&arg1[8], 0, 0x18)
    __builtin_memset(&arg1[8], 0, 0x18)
    char var_5 = 1
    int32_t i_1 = 0
    int32_t i
    
    if (*arg1 s> 0)
        int32_t var_14_1 = 0
        
        do
            void* ebx_2 = arg1[1] + var_14_1
            int32_t j_1 = 0
            
            if (*(ebx_2 + 0xc) s> 0)
                int32_t var_10_1 = 0
                int32_t j
                
                do
                    float var_34
                    float var_30
                    float var_2c
                    
                    if (arg2 == 0)
                        sub_5352f0(&var_34, ebx_2, j_1)
                    else
                        int32_t* eax_1 = *(ebx_2 + 0x14) + var_10_1
                        var_34 = *eax_1
                        var_30 = eax_1[1]
                        var_2c = eax_1[2]
                    
                    float ecx_3 = var_34
                    
                    if (var_5 == 0)
                        long double x87_r7_1 = fconvert.t(arg1[8])
                        long double x87_r6_1 = fconvert.t(ecx_3)
                        x87_r6_1 - x87_r7_1
                        int32_t* eax_3
                        eax_3.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                        float var_18_1
                        
                        if ((eax_3:1.b & 0x41) != 0)
                            var_18_1 = fconvert.s(x87_r7_1)
                        else
                            var_18_1 = fconvert.s(fconvert.t(arg1[8]))
                        
                        arg1[8] = fconvert.s(fconvert.t(var_18_1))
                        long double x87_r6_4 = fconvert.t(arg1[9])
                        long double x87_r5_1 = fconvert.t(var_30)
                        x87_r5_1 - x87_r6_4
                        eax_3.w = (x87_r5_1 < x87_r6_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_1, x87_r6_4) ? 1 : 0) << 0xa
                            | (x87_r5_1 == x87_r6_4 ? 1 : 0) << 0xe | 0x2800
                        long double x87_r7_2 = x87_r5_1
                        float var_18_2
                        
                        if ((eax_3:1.b & 0x41) != 0)
                            var_18_2 = fconvert.s(x87_r6_4)
                        else
                            var_18_2 = fconvert.s(fconvert.t(arg1[9]))
                        
                        arg1[9] = fconvert.s(fconvert.t(var_18_2))
                        long double x87_r5_4 = fconvert.t(arg1[0xa])
                        long double x87_r4_1 = fconvert.t(var_2c)
                        x87_r4_1 - x87_r5_4
                        eax_3.w = (x87_r4_1 < x87_r5_4 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_1, x87_r5_4) ? 1 : 0) << 0xa
                            | (x87_r4_1 == x87_r5_4 ? 1 : 0) << 0xe | 0x2000
                        long double x87_r6_5 = x87_r4_1
                        float var_18_3
                        
                        if ((eax_3:1.b & 0x41) != 0)
                            var_18_3 = fconvert.s(x87_r5_4)
                        else
                            var_18_3 = fconvert.s(fconvert.t(arg1[0xa]))
                        
                        arg1[0xa] = fconvert.s(fconvert.t(var_18_3))
                        long double x87_r4_4 = fconvert.t(arg1[0xb])
                        x87_r4_4 - x87_r7_2
                        eax_3.w = (x87_r4_4 < x87_r7_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_4, x87_r7_2) ? 1 : 0) << 0xa
                            | (x87_r4_4 == x87_r7_2 ? 1 : 0) << 0xe | 0x2800
                        long double x87_r5_5
                        
                        if ((eax_3:1.b & 0x41) != 0)
                            x87_r5_5 = x87_r7_2
                            x87_r7_2 = x87_r5_4
                        else
                            x87_r5_5 = fconvert.t(arg1[0xb])
                        
                        arg1[0xb] = fconvert.s(fconvert.t(fconvert.s(x87_r5_5)))
                        long double x87_r5_7 = fconvert.t(arg1[0xc])
                        x87_r5_7 - x87_r6_5
                        eax_3.w = (x87_r5_7 < x87_r6_5 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_7, x87_r6_5) ? 1 : 0) << 0xa
                            | (x87_r5_7 == x87_r6_5 ? 1 : 0) << 0xe | 0x3000
                        
                        if ((eax_3:1.b & 0x41) == 0)
                            x87_r7_2 = x87_r6_5
                            x87_r6_5 = fconvert.t(arg1[0xc])
                        
                        arg1[0xc] = fconvert.s(fconvert.t(fconvert.s(x87_r6_5)))
                        long double x87_r6_7 = fconvert.t(arg1[0xd])
                        x87_r6_7 - x87_r7_2
                        eax_3.w = (x87_r6_7 < x87_r7_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_7, x87_r7_2) ? 1 : 0) << 0xa
                            | (x87_r6_7 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800
                        
                        if ((eax_3:1.b & 0x41) == 0)
                            x87_r7_2 = fconvert.t(arg1[0xd])
                        
                        arg1[0xd] = fconvert.s(fconvert.t(fconvert.s(x87_r7_2)))
                    else
                        arg1[8] = ecx_3
                        arg1[0xb] = ecx_3
                        arg1[9] = var_30
                        arg1[0xc] = var_30
                        arg1[0xa] = var_2c
                        arg1[0xd] = var_2c
                        var_5 = 0
                    
                    var_10_1 += 0x2c
                    j = j_1 + 1
                    j_1 = j
                while (j s< *(ebx_2 + 0xc))
            
            var_14_1 += 0x140
            i = i_1 + 1
            i_1 = i
        while (i s< *arg1)
    
    arg1[0xe] = fconvert.s(fconvert.t(arg1[0xc]))
    
    if (arg1[2] == 0)
        int32_t __saved_ebx = 0
        long double x87_r7_11 = fconvert.t(fconvert.s(fconvert.t(arg1[0xc]) - fconvert.t(arg1[9])))
        long double x87_r6_8 = fconvert.t(fconvert.s(fconvert.t(arg1[0xb]) - fconvert.t(arg1[8])))
        long double x87_r5_8 = fconvert.t(fconvert.s(fconvert.t(arg1[0xd]) - fconvert.t(arg1[0xa])))
        arg1[0xf] = fconvert.s(sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_11 * x87_r7_11
            + x87_r6_8 * x87_r6_8 + x87_r5_8 * x87_r5_8)))) * fconvert.t(0.5))
        return 
    
    long double x87_r7_20 = fconvert.t(fconvert.s(fneg(fconvert.t(arg1[0xa]))))
    long double x87_r6_12 = fconvert.t(arg1[0xd])
    x87_r6_12 - x87_r7_20
    i.w = (x87_r6_12 < x87_r7_20 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_12, x87_r7_20) ? 1 : 0) << 0xa
        | (x87_r6_12 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        x87_r7_20 = fconvert.t(arg1[0xd])
    
    arg1[0xf] = fconvert.s(fconvert.t(fconvert.s(x87_r7_20)))
}
