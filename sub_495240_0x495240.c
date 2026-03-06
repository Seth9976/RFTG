// 函数名称: sub_495240
// 虚拟地址: 0x495240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_495240(int32_t arg1 @ edi, int128_t* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t* edx
    ecx, edx = __chkstk(0x42e4)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    int32_t i_5 = ecx - arg3
    int32_t entry_ebx
    int32_t i_1 = sx.d(*(entry_ebx * 0xb4 + arg2 + 0x44))
    int32_t edi = 0
    int32_t i_3 = i_5
    int32_t var_530[0x141]
    
    if (i_1 == 0xffffffff)
    label_4952e8:
        int32_t var_10_1 = entry_ebx
        void var_42c0
        sub_48bb40(arg2, &var_42c0, i_5.b)
        int32_t i = i_3
        double var_42e0
        
        if (edi s> 8)
            void* var_42d4_1 = &edx[i - 1]
            
            while (i s> 2)
                int32_t edx_4 = edi - i
                
                if (edx_4 s<= 2)
                    break
                
                int32_t i_4 = 0xffffffff
                var_42e0 = fconvert.d(fconvert.t(-1.0))
                int32_t i_2 = 0
                
                if (edi s> 0)
                    int32_t (* var_42d0_1)[0x141] = &var_530
                    
                    do
                        int32_t var_10_2 = entry_ebx
                        void var_23f8
                        int32_t eax_5
                        char edx_6
                        eax_5, edx_6 = sub_49dbf0(sub_48bb40(&var_42c0, &var_23f8, edx_4.b), 
                            var_42d0_1, &var_23f8, entry_ebx, 1)
                        int32_t eax_6
                        long double st0_1
                        st0_1, eax_6, edx_4 = sub_4904a0(eax_5, edx_6, &var_23f8, entry_ebx)
                        long double x87_r6_2 = fconvert.t(var_42e0) - fconvert.t(9.9999999999999995e-07)
                        x87_r6_2 - st0_1
                        eax_6.w = (x87_r6_2 < st0_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r6_2, st0_1) ? 1 : 0) << 0xa
                            | (x87_r6_2 == st0_1 ? 1 : 0) << 0xe | 0x3800
                        bool p_1 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_1))
                            var_42e0 = fconvert.d(st0_1)
                            i_4 = i_2
                        
                        var_42d0_1 = &(*var_42d0_1)[1]
                        i = i_2 + 1
                        i_2 = i
                    while (i s< edi)
                
                sub_49dbf0(i, &(&__saved_ebp)[i_4 - 0x14b], &var_42c0, entry_ebx, 1)
                int32_t* eax_8 = var_42d4_1
                i_3 -= 1
                void var_534
                int32_t ecx_12 = *(&var_534 + (edi << 2))
                *eax_8 = (&__saved_ebp)[i_4 - 0x14b]
                edi -= 1
                var_42d4_1 = eax_8 - 4
                i = i_3
                (&__saved_ebp)[i_4 - 0x14b] = ecx_12
                
                if (edi s<= 8)
                    break
        
        double* var_10_5 = &var_42e0
        var_42e0 = fconvert.d(fconvert.t(-1.0))
        char var_2400_1 = 0xff
        int32_t var_42e4
        sub_494790(&var_42c0, entry_ebx, &var_530, edi, i, 0, &var_42e4, var_10_5)
        int32_t edx_9 = var_42e4
        int32_t ecx_13 = 0
        
        if (edx_9 s>= 1)
            int32_t* esi_8 = edx
            int32_t eax_10 = 1
            
            do
                if ((edx_9 & eax_10) != 0)
                    *esi_8 = var_530[ecx_13]
                    esi_8 = &esi_8[1]
                
                ecx_13 += 1
                eax_10 = 1 << ecx_13.b
            while (eax_10 s<= edx_9)
    else
        do
            int32_t esi_1 = i_1 * 5
            
            if (*(arg2 + (esi_1 << 2) + 0x467) != 2 || sx.d(*(arg2 + (esi_1 << 2) + 0x466)) != entry_ebx
                    || arg4 != 0)
                var_530[edi] = i_1
                edi += 1
            
            i_1 = sx.d(*(arg2 + ((i_1 * 5 + 0x11d) << 2)))
        while (i_1 != 0xffffffff)
        
        if (edi s<= 0x1e)
            goto label_4952e8
        
        if (i_5 s> 0)
            __builtin_memcpy(edx, &var_530, i_5 << 2)
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return 
    sub_5a6aba(arg1 ^ &__saved_ebp)
}
