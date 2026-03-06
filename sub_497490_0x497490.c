// 函数名称: sub_497490
// 虚拟地址: 0x497490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_497490(int32_t arg1 @ esi, int128_t* arg2, char* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t arg13, int32_t* arg14, int32_t* arg15, double* arg16)
{
    // 第一条实际指令: __chkstk(0x2938)
    __chkstk(0x2938)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t esi = 0
    int32_t var_291c = 0
    int32_t var_292c = 0
    void var_2918
    int16_t var_28d0[0x214]
    void var_24a8
    void var_24a6
    void var_24a4
    int32_t var_a50[0x148]
    int32_t var_530[0x139]
    
    if (*(arg2 + 0x18) == 0)
        if (arg11 != arg8)
            sub_497490(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11 + 1, arg12, arg13, 
                arg14, arg15, arg16)
            sub_497490(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11 + 1, 
                1 << arg11.b | arg12, arg13, arg14, arg15, arg16)
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return 
        
        int32_t ecx_13 = 0
        int32_t edx_10 = 1
        
        if (arg10 s> 0)
            do
                if ((arg13 & edx_10) != 0)
                    var_530[esi] = *(arg9 + (ecx_13 << 2))
                    esi += 1
                
                ecx_13 += 1
                edx_10 = rol.d(edx_10, 1)
            while (ecx_13 s< arg10)
            
            var_292c = esi
        
        int32_t ecx_14 = 0
        int32_t edx_11 = 1
        
        if (arg8 s> 0)
            do
                if ((arg12 & edx_11) != 0)
                    var_a50[var_291c] = *(arg7 + (ecx_14 << 2))
                    var_291c += 1
                
                ecx_14 += 1
                edx_11 = rol.d(edx_11, 1)
            while (ecx_14 s< arg8)
        
        char* var_14_6 = arg3
        sub_48bb40(arg2, &var_2918, edx_11.b)
        char* esi_8 = arg3
        int32_t eax_22
        int32_t ecx_18
        int32_t i
        eax_22, ecx_18, i =
            sub_4a6510(arg6, esi_8, &var_2918, arg6, &var_a50, var_291c, &var_530, var_292c)
        
        if (eax_22 != 0)
            if (eax_22 == 1)
                int32_t var_14_8 = 3
                eax_22, i = sub_49cc30(&var_2918, arg4, ecx_18, arg5)
                int32_t ecx_19 = arg4 * 5
                
                if (*(&var_24a6 + (ecx_19 << 2)) != 0)
                    i = sx.d(var_28d0[esi_8 * 0x5a])
                    
                    if (i != 0xffffffff)
                        do
                            int32_t esi_11 = i * 0x14
                            eax_22 = sx.d(*(&var_24a8 + esi_11))
                            
                            if (eax_22 == arg4)
                                int32_t var_14_9 = 4
                                eax_22 = sub_49cc30(&var_2918, i, ecx_19, arg5)
                            
                            i = sx.d(*(&var_24a4 + esi_11))
                        while (i != 0xffffffff)
                        
                        esi_8 = arg3
            
            int32_t eax_25
            long double st0_2
            st0_2, eax_25 = sub_4904a0(eax_22, i.b, &var_2918, esi_8)
            long double x87_r6_4 = fconvert.t(*arg16) - fconvert.t(9.9999999999999995e-07)
            x87_r6_4 - st0_2
            eax_25.w = (x87_r6_4 < st0_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_4, st0_2) ? 1 : 0) << 0xa | (x87_r6_4 == st0_2 ? 1 : 0) << 0xe
                | 0x3800
            bool p_2 = unimplemented  {test ah, 0x41}
            
            if (not(p_2))
                *arg16 = fconvert.d(st0_2)
                *arg14 = arg12
                *arg15 = arg13
                sub_5a6aba(arg1 ^ &__saved_ebp)
                return 
    else
        if (arg8 s> 0)
            __builtin_memset(&var_a50, 0xffffffff, arg8 << 2)
        
        int32_t ecx_2 = 0
        int32_t i_1 = 1
        
        if (arg10 s> 0)
            do
                if ((arg13 & i_1) != 0)
                    var_530[esi] = *(arg9 + (ecx_2 << 2))
                    esi += 1
                
                ecx_2 += 1
                i_1 = rol.d(i_1, 1)
            while (ecx_2 s< arg10)
            
            var_292c = esi
        
        int32_t edi_2 = 0
        int32_t var_2924_1 = 0
        int32_t var_291c_1 = 1
        
        if (arg8 s>= 0)
            do
                char* var_14_1 = arg3
                sub_48bb40(arg2, &var_2918, i_1.b)
                int32_t eax_8
                int32_t ecx_5
                eax_8, ecx_5, i_1 =
                    sub_4a6510(&var_530, arg3, &var_2918, arg6, &var_a50, edi_2, &var_530, var_292c)
                
                if (eax_8 != 0)
                    if (eax_8 == 1)
                        int32_t var_14_3 = 3
                        eax_8, i_1 = sub_49cc30(&var_2918, arg4, ecx_5, arg5)
                        
                        if (*(&var_24a6 + arg4 * 0x14) != 0)
                            int32_t esi_4
                            
                            for (i_1 = sx.d(var_28d0[arg3 * 0x5a]); i_1 != 0xffffffff; 
                                    i_1 = sx.d(*(&var_24a4 + esi_4)))
                                esi_4 = i_1 * 0x14
                                eax_8 = sx.d(*(&var_24a8 + esi_4))
                                
                                if (eax_8 == arg4)
                                    int32_t var_14_4 = 4
                                    eax_8 = sub_49cc30(&var_2918, i_1, arg5, arg5)
                    
                    int32_t eax_12
                    long double st0_1
                    st0_1, eax_12, i_1 = sub_4904a0(eax_8, i_1.b, &var_2918, arg3)
                    long double x87_r6_2 = fconvert.t(*arg16) - fconvert.t(9.9999999999999995e-07)
                    x87_r6_2 - st0_1
                    eax_12.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                        | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_1))
                        *arg16 = fconvert.d(st0_1)
                        *arg14 = var_291c_1 - 1
                        i_1 = arg13
                        *arg15 = i_1
                
                edi_2 = var_2924_1 + 1
                var_2924_1 = edi_2
                var_291c_1 = rol.d(var_291c_1, 1)
            while (edi_2 s<= arg8)
            
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return 
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
