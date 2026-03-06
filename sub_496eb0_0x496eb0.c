// 函数名称: sub_496eb0
// 虚拟地址: 0x496eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_496eb0(int32_t arg1 @ esi, int128_t* arg2, char* arg3, int32_t arg4, int32_t* arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t* edx
    ecx, edx = __chkstk(0x2948)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    data_c021fc += 1
    double var_2940 = fconvert.d(fconvert.t(-1.0))
    bool cond:0 = *arg5 s<= 0xf
    int32_t var_2924 = 0
    int32_t var_2920 = 0
    int32_t var_291c = 0
    
    if (not(cond:0))
        *arg5 = 0xf
    
    int32_t edx_1 = *edx
    data_c02124 = 0
    sub_496e10(arg2, arg3, arg4, ecx, *arg5, arg6, edx_1, arg7, arg8, 0, 0, &var_2920, &var_291c, 
        &var_2940)
    long double x87_r7_1 = fconvert.t(var_2940)
    long double x87_r5 = fconvert.t(-1.0)
    x87_r5 - x87_r7_1
    int32_t i
    i.w = (x87_r5 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x44}
    int32_t edx_5
    int32_t esi_3
    
    if (p)
        edx_5 = var_2920
        esi_3 = var_291c
    else
        int32_t edx_3 = data_c02124
        
        if (edx_3 != 1)
            int32_t i_1
            void var_530
            
            if (edx_3 s> 0)
                int32_t ecx_4
                int32_t edi_1
                
                if (*arg5 s> 0)
                    edi_1, ecx_4 = __memfill_u32(&var_530, i | 0xffffffff, *arg5)
                i_1 = 0
            
            if (edx_3 s<= 0 || edx_3 s<= 0)
                edx_5 = var_2920
                esi_3 = var_291c
            else
                edx_5 = arg4 * 5
                void* eax_3 = &(&__saved_ebp)[edx_5 - 0x92a]
                
                do
                    int32_t ebx_1 = (&data_2602ea8)[i_1 * 2]
                    int32_t edi_2 = 0
                    int32_t var_a50[0x148]
                    
                    if (ebx_1 s>= 1)
                        int32_t eax_4 = 1
                        int32_t ecx_6 = 0
                        
                        do
                            if ((ebx_1 & eax_4) != 0)
                                edx_5 = arg6
                                var_a50[edi_2] = *(edx_5 + (ecx_6 << 2))
                                edi_2 += 1
                            
                            ecx_6 += 1
                            eax_4 = 1 << ecx_6.b
                        while (eax_4 s<= ebx_1)
                    
                    char* var_14_1 = arg3
                    void var_2918
                    sub_48bb40(arg2, &var_2918, edx_5.b)
                    int32_t eax_7 = (&data_2602eac)[i_1 * 2]
                    int32_t eax_9
                    int32_t edx_8
                    
                    if (*(*eax_3 + 6) != 2)
                        int32_t var_14_3 = arg8
                        eax_9, edx_8 = sub_4a1d50(&(&data_2602eac)[i_1 * 2], &var_2918, arg3, arg4, 
                            eax_7, edi_2, arg7)
                    else
                        int32_t var_14_2 = edi_2
                        eax_9, edx_8 =
                            sub_49f3d0(arg3, &var_a50, arg4, &var_2918, arg3, &var_530, eax_7)
                    
                    if (eax_9 == 0)
                        char const* const var_14_4 = "Payment failed!\n"
                        sub_4c5680("error %s")
                        sub_5a79f4()
                        noreturn
                    
                    int32_t var_14_5 = 1
                    int32_t eax_13
                    long double st0_1
                    st0_1, eax_13 = sub_4904a0(sub_48bc70(&var_2918, edx_8), arg3.b, &var_2918, arg3)
                    x87_r7_1 = st0_1
                    long double x87_r6_1 = fconvert.t(var_2940)
                    long double x87_r5_2 = x87_r6_1 - fconvert.t(9.9999999999999995e-07)
                    x87_r5_2 - x87_r7_1
                    eax_13.w = (x87_r5_2 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_2, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r5_2 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (p_1)
                        edx_5 = var_2920
                        esi_3 = var_291c
                    else
                        char ecx_12 = ((&data_2602eac)[i_1 * 2]).b
                        x87_r7_1 = x87_r6_1
                        var_2940 = fconvert.d(x87_r7_1)
                        esi_3 = ebx_1
                        var_291c = esi_3
                        edx_5 = (1 << ecx_12) - 1
                        var_2920 = edx_5
                    
                    i = i_1 + 1
                    i_1 = i
                while (i s< data_c02124)
            
            long double x87_r6_2 = fconvert.t(-1.0)
            x87_r6_2 - x87_r7_1
            i.w = (x87_r6_2 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_1 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                char const* const var_14_7 = "Couldn't find valid payment!\n"
                sub_4c5680("error %s")
                sub_5a79f4()
                noreturn
        else
            esi_3 = data_2602ea8
            edx_5 = (edx_3 << (data_2602eac).b) - 1
    
    int32_t edi_3 = 0
    int32_t ecx_13 = 0
    
    if (esi_3 s>= 1)
        int32_t eax_15 = 1
        
        do
            if ((esi_3 & eax_15) != 0)
                *(arg6 + (edi_3 << 2)) = *(arg6 + (ecx_13 << 2))
                edi_3 += 1
            
            ecx_13 += 1
            eax_15 = 1 << ecx_13.b
        while (eax_15 s<= esi_3)
    
    *edx = edi_3
    
    if (edx_5 != (1 << (*arg5).b) - 1)
        int32_t ecx_16 = 0
        
        if (edx_5 s>= 1)
            int32_t eax_19 = 1
            
            do
                if ((edx_5 & eax_19) != 0)
                    if (*(arg2 + 0x18) == 0)
                        *(ecx + (var_2924 << 2)) = *(ecx + (ecx_16 << 2))
                    else
                        *(ecx + (var_2924 << 2)) = 0xffffffff
                    
                    var_2924 += 1
                
                ecx_16 += 1
                eax_19 = 1 << ecx_16.b
            while (eax_19 s<= edx_5)
        
        *arg5 = var_2924
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
