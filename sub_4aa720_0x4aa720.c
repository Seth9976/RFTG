// 函数名称: sub_4aa720
// 虚拟地址: 0x4aa720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4aa720(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t* arg7, int32_t* arg8, int32_t* arg9, int32_t* arg10)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_24 = 0
    int32_t var_28 = 0
    
    if (arg3 s< 0)
        sub_49b2a0()
        noreturn
    
    void* edx_1 = *(arg4 + arg3 * 0x14 + 0x46c) + ((arg2 * 3 + 3) << 3)
    int32_t ecx_2 = *(edx_1 + 8)
    int32_t var_50 = *(edx_1 + 0xc)
    
    if ((ecx_2 & 0x100) != 0)
        *arg7 = sub_4aa690(arg5, arg4, arg6)
        *arg8 = 1
        *arg9 = 1
        int32_t eax_8 = 2
        
        if ((*(edx_1 + 8) & 0x200) == 0)
            eax_8 = 1
        
        *arg10 = eax_8
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 4
    
    if ((ecx_2 & 0x4000000) != 0)
        sub_49b2a0()
        noreturn
    
    if ((ecx_2 & 0x8000000) != 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 1
    
    if ((ecx_2 & 0x20000000) != 0)
        *arg7 = sub_4aa6d0(arg5, arg4, arg6)
        *arg8 = 1
        *arg9 = 1
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    if ((ecx_2 & 0x40000000) != 0)
        sub_49b2a0()
        noreturn
    
    if ((ecx_2 & 0x10000000) != 0)
        int32_t i = sx.d(*(arg5 * 0xb4 + arg4 + 0x44))
        int32_t ecx_12 = 0
        
        while (i != 0xffffffff)
            *(arg6 + (ecx_12 << 2)) = i
            i = sx.d(*(arg4 + ((i * 5 + 0x11d) << 2)))
            ecx_12 += 1
        
        *arg7 = ecx_12
        *arg8 = 0
        
        if ((*(edx_1 + 8) & 0x10000) == 0)
            *arg9 = sx.d(*(edx_1 + 0x11))
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 2
        
        *arg8 = 2
        *arg9 = 2
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 2
    
    if ((ecx_2 & 0x100000) != 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 5
    
    int32_t var_20
    __builtin_memset(&var_20, 0, 0x18)
    int32_t i_1 = sx.d(*(arg5 * 0xb4 + arg4 + 0x46))
    int32_t edi_5 = 0
    
    if (i_1 != 0xffffffff)
        do
            int32_t ecx_22 = i_1 * 5
            void* esi_3 = arg4 + (ecx_22 << 2) + 0x464
            
            if (*(arg4 + (ecx_22 << 2) + 0x472) != 0)
                int32_t edi_6 = sx.d(*(*(esi_3 + 8) + 0xe))
                (&var_20)[edi_6] += 1
                
                if (edi_6 == 1)
                label_4aa9ee:
                    
                    if ((*(edx_1 + 8) & 0x8000) == 0 || arg3 == i_1)
                        int32_t j = 0
                        
                        if (*(esi_3 + 0xe) s> 0)
                            int32_t ecx_27 = var_28
                            
                            do
                                *(arg6 + (ecx_27 << 2)) = i_1
                                j += 1
                                ecx_27 += 1
                            while (j s< sx.d(*(esi_3 + 0xe)))
                            
                            var_28 = ecx_27
                else
                    int32_t ecx_23 = *(edx_1 + 8)
                    int32_t var_50_1 = *(edx_1 + 0xc)
                    
                    if (((ecx_23 & 0x800) == 0 || edi_6 == 2) && ((ecx_23 & 0x1000) == 0 || edi_6 == 3)
                            && ((ecx_23 & 0x2000) == 0 || edi_6 == 4)
                            && ((ecx_23 & 0x4000) == 0 || edi_6 == 5))
                        goto label_4aa9ee
            
            i_1 = sx.d(*(arg4 + ((i_1 * 5 + 0x11d) << 2)))
        while (i_1 != 0xffffffff)
        
        if (var_20 != 0)
            var_24 = i_1 + 2
        
        int32_t var_1c
        edi_5 = var_1c
        
        if (edi_5 != 0)
            var_24 += i_1 + 2
        
        int32_t var_18
        
        if (var_18 != 0)
            var_24 += i_1 + 2
        
        int32_t var_14
        
        if (var_14 != 0)
            var_24 += i_1 + 2
        
        int32_t var_10
        
        if (var_10 != 0)
            var_24 += i_1 + 2
        
        int32_t var_c
        
        if (var_c != 0)
            var_24 += i_1 + 2
    
    int32_t edx_29 = *(edx_1 + 8)
    int32_t esi_5 = edx_29 & 0x10000
    int32_t var_50_2 = *(edx_1 + 0xc)
    int32_t ebx
    ebx.b = 0
    int32_t eax_45
    int32_t ecx_30
    
    if (esi_5 == 0)
        if ((edx_29 & 0x20000) != 0)
            ecx_30 = 3
            ebx.b = 1
            eax_45 = 3
            
            if (edi_5 != 0 && var_24 == 3)
                eax_45 = 0
            
            goto label_4aaaf4
        
        if ((edx_29 & 0x40000) != 0)
            eax_45 = var_24
            ebx.b = 1
            ecx_30 = eax_45
            
            if (eax_45 s> 4)
                ecx_30 = 4
                eax_45 = 4
            
            if (edi_5 != 0 && eax_45 s> 1)
                eax_45 -= 1
            
            goto label_4aaaf4
        
        if ((edx_29 & 0x80000) == 0)
            ecx_30 = sx.d(*(edx_1 + 0x11))
            goto label_4aaaef
        
        eax_45 = var_28
        ecx_30 = eax_45
    else
        ecx_30 = 2
    label_4aaaef:
        eax_45 = ecx_30
    label_4aaaf4:
        
        if (eax_45 s> var_28)
            eax_45 = var_28
        
        if (ecx_30 s> var_28)
            ecx_30 = var_28
    
    if (edi_5 != 0 && esi_5 == 0 && ((edx_29 & 0x7800) | esi_5) != 0
            && var_28 s<= sx.d(*(edx_1 + 0x11)))
        eax_45 -= 1
    
    *arg7 = var_28
    *arg8 = eax_45
    *arg9 = ecx_30
    uint32_t ecx_31 = zx.d(ebx.b)
    int32_t ecx_32 = neg.d(ecx_31)
    *arg10 = sbb.d(ecx_32, ecx_32, ecx_31 != 0) & 3
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 3
}
