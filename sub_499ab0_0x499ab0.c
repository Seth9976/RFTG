// 函数名称: sub_499ab0
// 虚拟地址: 0x499ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_499ab0(int32_t arg1 @ edi, char* arg2, int32_t* arg3, int32_t* arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* edx
    ecx, edx = __chkstk(0x1f04)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t i_6 = 0xffffffff
    int32_t j_2 = 0xffffffff
    int32_t eax_5 = arg2 * 0xb4
    char* var_10 = arg2
    void var_1ed8
    int128_t* entry_ebx
    sub_48bb40(entry_ebx, &var_1ed8, edx.b)
    int32_t i
    int32_t edx_1
    
    do
        i, edx_1 = sub_4acd10(&var_1ed8, arg2)
    while (i != 0)
    
    int32_t i_5 = i
    int32_t eax_8
    char edx_2
    eax_8, edx_2 = sub_48bc70(&var_1ed8, edx_1)
    int32_t eax_9
    int32_t edx_3
    long double st0
    st0, eax_9, edx_3 = sub_4904a0(eax_8, edx_2, &var_1ed8, arg2)
    double var_1f08 = fconvert.d(st0)
    int32_t* esi_2 = arg4
    int32_t eax_10
    int32_t i_7
    eax_10, i_7 = sub_497d90(eax_9, edx_3, edx, entry_ebx, *esi_2)
    *esi_2 = eax_10
    
    if (*(entry_ebx + 0x18) == 0)
        int32_t i_4 = 0
        
        if (eax_10 s> 0)
            int32_t* var_1ef4_1 = edx
            int32_t i_1
            
            do
                int32_t j_1 = 0
                
                if (*ecx s> 0)
                    int32_t j
                    
                    do
                        char* var_10_10 = arg2
                        int32_t* esi_5 = &var_1ed8
                        sub_48bb40(entry_ebx, esi_5, i_7.b)
                        int32_t edx_17 = *var_1ef4_1
                        sub_49dff0(arg3, edx_17, arg3[j_1], esi_5, arg2, edx_17, arg5, arg6)
                        int32_t k
                        int32_t edx_18
                        
                        do
                            k, edx_18 = sub_4acd10(&var_1ed8, arg2)
                        while (k != 0)
                        
                        int32_t k_1 = k
                        int32_t eax_29
                        char edx_19
                        eax_29, edx_19 = sub_48bc70(&var_1ed8, edx_18)
                        int32_t eax_30
                        long double st0_2
                        st0_2, eax_30, i_7 = sub_4904a0(eax_29, edx_19, &var_1ed8, arg2)
                        long double x87_r6_4 = fconvert.t(var_1f08) - fconvert.t(9.9999999999999995e-07)
                        x87_r6_4 - st0_2
                        eax_30.w = (x87_r6_4 < st0_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_4, st0_2) ? 1 : 0) << 0xa
                            | (x87_r6_4 == st0_2 ? 1 : 0) << 0xe | 0x3800
                        bool p_2 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_2))
                            i_7 = i_4
                            var_1f08 = fconvert.d(st0_2)
                            i_6 = i_7
                            j_2 = j_1
                        
                        j = j_1 + 1
                        j_1 = j
                    while (j s< *ecx)
                    esi_2 = arg4
                
                var_1ef4_1 = &var_1ef4_1[1]
                i_1 = i_4 + 1
                i_4 = i_1
            while (i_1 s< *esi_2)
            
            if (i_6 s> 0xffffffff)
                *edx = edx[i_6]
                *arg3 = arg3[j_2]
                *ecx = 1
                sub_5a6aba(arg1 ^ &__saved_ebp)
                return 
    else
        int32_t eax_11 = sub_49c8f0(eax_10, entry_ebx, arg2, 2)
        int32_t eax_14 = sx.d(*(eax_5 + entry_ebx + 0xae)) - sx.d(*(eax_5 + entry_ebx + 0xb0))
        char edx_6 = eax_11.b + eax_14.b
        
        if (eax_11 != neg.d(eax_14))
            int32_t i_3 = 0
            
            if (*esi_2 s> 0)
                int32_t i_2
                
                do
                    char* var_10_5 = arg2
                    sub_48bb40(entry_ebx, &var_1ed8, edx_6)
                    int16_t var_1e28[0xf08]
                    var_1e28[arg2 * 0x5a] += 1
                    int32_t var_10_7 = 0
                    int32_t eax_19
                    char edx_11
                    eax_19, edx_11 =
                        sub_48bc70(&var_1ed8, sub_4abcd0(arg5, &var_1ed8, arg2, edx[i_3], arg5, arg6))
                    int32_t eax_20
                    long double st0_1
                    st0_1, eax_20, edx_6 = sub_4904a0(eax_19, edx_11, &var_1ed8, arg2)
                    long double x87_r6_2 = fconvert.t(var_1f08) - fconvert.t(9.9999999999999995e-07)
                    x87_r6_2 - st0_1
                    eax_20.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                        | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_1))
                        var_1f08 = fconvert.d(st0_1)
                        i_6 = i_3
                    
                    i_2 = i_3 + 1
                    i_3 = i_2
                while (i_2 s< *arg4)
                
                if (i_6 != 0xffffffff)
                    *(eax_5 + entry_ebx + 0xb0) += 1
                    sub_4abcd0(edx, entry_ebx, arg2, edx[i_6], arg5, arg6)
                    *ecx = 0
                    sub_5a6aba(arg1 ^ &__saved_ebp)
                    return 
    
    *ecx = 0
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
