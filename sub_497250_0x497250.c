// 函数名称: sub_497250
// 虚拟地址: 0x497250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_497250(int32_t arg1 @ edi, int128_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t* edx
    ecx, edx = __chkstk(0x1efc)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    char* entry_ebx
    char* var_10 = entry_ebx
    int32_t var_1ef4 = 0xffffffff
    int32_t var_1ee4 = 0
    void var_1ed8
    sub_48bb40(arg2, &var_1ed8, edx.b)
    int32_t var_10_1 = 0
    int32_t eax_4
    char edx_1
    eax_4, edx_1 = sub_48bc70(&var_1ed8, 1)
    double var_1f00 = fconvert.d(sub_4904a0(eax_4, edx_1, &var_1ed8, entry_ebx))
    int32_t i_1 = 0
    
    if (*arg4 s<= 0)
        *edx = 0
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return 
    
    int32_t i
    
    do
        int32_t j = 0
        
        if (*arg3 s> 0)
            do
                int128_t* eax_7 = arg2
                int32_t k_1 = sx.d(*(eax_7 + 0x1e6a))
                int32_t var_1eec_1 = 0
                
                if (k_1 s<= 0)
                    goto label_497339
                
                void* ecx_4 = eax_7 + 0x1e6c
                int32_t k
                
                do
                    if (*(ecx + (j << 2)) == sx.d(*ecx_4))
                        var_1eec_1 = 1
                    
                    ecx_4 += 2
                    k = k_1
                    k_1 -= 1
                while (k != 1)
                
                if (var_1eec_1 == k_1)
                    eax_7 = arg2
                label_497339:
                    char* var_10_3 = entry_ebx
                    sub_48bb40(eax_7, &var_1ed8, k_1.b)
                    
                    if (sub_4a3e90(i_1, &var_1ed8, edx[i_1], *(ecx + (j << 2))) != 0)
                        int32_t eax_9
                        eax_9.w = *(ecx + (j << 2))
                        char var_6e
                        int16_t var_6c[0xc]
                        var_6c[sx.d(var_6e)] = eax_9.w
                        char var_54[0xc]
                        var_54[sx.d(var_6e)] = entry_ebx.b
                        int32_t ecx_8
                        ecx_8.w = edx[i_1].w
                        int16_t var_48[0xc]
                        var_48[sx.d(var_6e)] = ecx_8.w
                        int32_t var_10_5 = 0
                        int32_t var_14_1 = 0
                        char var_30[0x10]
                        var_30[sx.d(var_6e)] = 0
                        var_6e += 1
                        int32_t var_20_1 = 0
                        int32_t eax_13
                        char edx_8
                        eax_13, edx_8 = sub_48bc70(&var_1ed8, 
                            sub_4a5400(&var_1ed8, 0xffffffff, entry_ebx, &var_1ed8, 0xffffffff, 
                                var_14_1, var_10_5))
                        int32_t eax_14
                        long double st0_1
                        st0_1, eax_14 = sub_4904a0(eax_13, edx_8, &var_1ed8, entry_ebx)
                        long double x87_r6_2 = fconvert.t(var_1f00) - fconvert.t(9.9999999999999995e-07)
                        x87_r6_2 - st0_1
                        eax_14.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                            | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
                        bool p_1 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_1))
                            var_1f00 = fconvert.d(st0_1)
                            var_1ef4 = *(ecx + (j << 2))
                            var_1ee4 = edx[i_1]
                
                j += 1
            while (j s< *arg3)
        
        i = i_1 + 1
        i_1 = i
    while (i s< *arg4)
    *edx = var_1ee4
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
