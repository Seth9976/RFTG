// 函数名称: sub_4a3100
// 虚拟地址: 0x4a3100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a3100(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4 @ esi, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t* arg9)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_5 = arg3 * 0xb4 + arg5
    *arg9 = 0
    *arg4 = 0
    int32_t edx_1
    edx_1.b = sx.d(*(arg5 + arg6 * 0x14 + 0x464)) != arg3
    int32_t var_88c = 0
    char var_856 = 0
    int32_t eax_10
    eax_10.b = (*(*(arg5 + arg6 * 0x14 + 0x46c) + 0x10)).b & 1
    char var_855 = 0
    int32_t eax_12 = neg.d(sbb.d(eax_10, eax_10, 0 u< eax_10.b))
    void* eax_14 = *(arg5 + arg6 * 0x14 + 0x46c)
    int32_t edx_3 = sx.d(*(eax_14 + 0xe))
    int32_t edx_4 = sx.d(*(eax_14 + 7))
    int32_t eax_15 = *(eax_14 + 0x10)
    int32_t eax_16
    int32_t ecx_1
    int32_t edx_5
    eax_16, ecx_1, edx_5 = sub_4b1530(eax_15, edx_4, arg5, arg3)
    void var_330
    void* var_8a4_1 = &var_330
    int32_t var_864 = eax_16
    int32_t var_8a8 = 3
    int32_t i = sub_49dea0(arg3, edx_5, ecx_1, arg5)
    *arg9 = i
    int32_t i_3 = 0
    
    if (i s> 0)
        do
            void var_32c
            void* edi_1 = *(&var_32c + (i_3 << 3))
            int32_t eax_18 = *(edi_1 + 8)
            int32_t var_894_1 = *(edi_1 + 0xc)
            
            if ((eax_18 & 0x10000) != 0)
                var_856 = 1
            
            int32_t edx_7 = 0
            
            if ((eax_18 & 0x100) == 0)
            label_4a32ee:
                
                if (edx_1 == 0 && edx_3 != 5 && (eax_18 & 0x40) != 0)
                    edx_7 = sx.d(*(&var_330 + (i_3 << 3)))
                    *(arg2 + (*arg4 << 2)) = edx_7
                    *arg4 += 1
                
                if (*(edi_1 + 8) == 0x120 && *(edi_1 + 0xc) == 0)
                    edx_7 = arg2
                    *(edx_7 + (*arg4 << 2)) = sx.d(*(&var_330 + (i_3 << 3)))
                    *arg4 += 1
                
                if (edx_1 != 0 || arg7 != 0 || eax_12 == 0)
                    goto label_4a3408
                
                int32_t ecx_28 = *(edi_1 + 8)
                int32_t var_894_2 = *(edi_1 + 0xc)
                edx_7 = 0
                
                if ((ecx_28 & 0x4000) == 0)
                    goto label_4a3408
                
                if ((ecx_28 & 0x10) == 0)
                    if (edx_3 != 5)
                    label_4a33a4:
                        
                        if (((ecx_28 & 0x200) == 0 || (eax_15 & 0x40) != 0)
                                && ((ecx_28 & 0x400) == 0 || (eax_15 & 0x800) != 0))
                            edx_7 = sx.d(*(&var_330 + (i_3 << 3)))
                            *(arg2 + (*arg4 << 2)) = edx_7
                            *arg4 += 1
                            var_855 = 1
                        label_4a3408:
                            
                            if ((*(edi_1 + 8) & 0x80) != 0)
                                edx_7 = arg2
                                *(edx_7 + (*arg4 << 2)) = sx.d(*(&var_330 + (i_3 << 3)))
                                *arg4 += 1
                            
                            if (eax_12 != 0)
                                goto label_4a3484
                            
                            int32_t ecx_34 = *(edi_1 + 8)
                            int32_t var_894_3 = *(edi_1 + 0xc)
                            edx_7 = 0
                            
                            if ((ecx_34 & 0x20000) == 0)
                                goto label_4a3484
                            
                            if (edx_1 == 0 || (ecx_34 & 0x40000) == 0)
                                edx_7 = sx.d(*(&var_330 + (i_3 << 3)))
                                *(arg2 + (*arg4 << 2)) = edx_7
                                *arg4 += 1
                            label_4a3484:
                                int32_t eax_52 = *(edi_1 + 8) & 0x20000000
                                void var_850
                                
                                if (eax_52 != 0)
                                    int32_t eax_53
                                    eax_53, edx_7 =
                                        sub_49db70(eax_52, &var_850, arg3, arg5, &var_850, 4)
                                    
                                    if (eax_53 s> 0)
                                        edx_7 = *arg4
                                        *(arg2 + (edx_7 << 2)) = sx.d(*(&var_330 + (i_3 << 3)))
                                        *arg4 += 1
                                
                                int32_t eax_58 = *(edi_1 + 8) & 0x10000000
                                
                                if (eax_58 != 0)
                                    int32_t eax_59
                                    eax_59, edx_7 = sub_49db70(eax_58, edx_7, arg3, arg5, &var_850, 3)
                                    
                                    if (eax_59 s> 0)
                                        edx_7 = arg2
                                        *(edx_7 + (*arg4 << 2)) = sx.d(*(&var_330 + (i_3 << 3)))
                                        *arg4 += 1
                                
                                if ((*(edi_1 + 8) & 0x40000000) != 0
                                        && sub_49db70(&var_850, edx_7, arg3, arg5, &var_850, 5) s> 0)
                                    *(arg2 + (*arg4 << 2)) = sx.d(*(&var_330 + (i_3 << 3)))
                                    *arg4 += 1
                                
                                if ((*(edi_1 + 8) & 0x80000000) != 0 && *(eax_5 + 0xa3) s> 0)
                                    *(arg2 + (*arg4 << 2)) = sx.d(*(&var_330 + (i_3 << 3)))
                                    *arg4 += 1
                else if (edx_3 == 5)
                    goto label_4a33a4
            else if (((eax_18 & 2) == 0 || edx_3 != 2) && ((eax_18 & 4) == 0 || edx_3 != 3)
                    && ((eax_18 & 8) == 0 || edx_3 != 4) && ((eax_18 & 0x10) == 0 || edx_3 != 5))
                edx_7 = 0
                
                if ((eax_18 & 0x200) == 0)
                    goto label_4a32ee
                
                edx_7 = *(arg5 + arg6 * 0x14 + 0x46c)
                
                if ((*(edx_7 + 0x10) & 0x40) == 0)
                    goto label_4a32ee
                
                var_864 += sx.d(*(edi_1 + 0x10))
            else
                var_864 += sx.d(*(edi_1 + 0x10))
            
            i = i_3 + 1
            i_3 = i
        while (i s< *arg9)
    
    if (edx_1 == 0)
        if (eax_12 == 0 || var_864 s< edx_4 || *arg4 != 0)
            goto label_4a35e7
        
        *arg9 = 0
        *arg4 = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return i
    
    if (*arg4 != 0)
    label_4a35e7:
        void* edx_18 = eax_5
        *arg9 = 0
        int32_t i_1 = sx.d(*(edx_18 + 0x44))
        int32_t ecx_50 = 0
        
        if (i_1 != 0xffffffff)
            do
                *(arg8 + (ecx_50 << 2)) = i_1
                i_1 = sx.d(*(arg5 + ((i_1 * 5 + 0x11d) << 2)))
                ecx_50 += 1
            while (i_1 != 0xffffffff)
            
            edx_18 = eax_5
        
        *arg9 = ecx_50
        int32_t i_2 = 0
        
        if (sx.d(*(edx_18 + 0xae)) - sx.d(*(edx_18 + 0xb0)) s> 0)
            do
                *(arg8 + (*arg9 << 2)) = 0xffffffff
                *arg9 += 1
                i_2 += 1
            while (i_2 s< sx.d(*(edx_18 + 0xae)) - sx.d(*(edx_18 + 0xb0)))
        
        int16_t eax_74 = *(edx_18 + 0xb0)
        int16_t ecx_56 = *(edx_18 + 0xae)
        
        if (eax_74 s> ecx_56)
            *arg9 += sx.d(ecx_56) - sx.d(eax_74)
        
        i = 0
        
        if (*arg9 s> 0)
            do
                if (*(arg8 + (i << 2)) == arg6)
                    *arg9 -= 1
                    *(arg8 + (i << 2)) = *(arg8 + (*arg9 << 2))
                    i -= 1
                
                i += 1
            while (i s< *arg9)
        
        if (var_856 == 0 || var_855 == 0)
            i.b = 1
        else
            i.b = 0
        
        if (edx_4 == 0)
            *arg4 = 0
            *arg9 = 0
        else if (edx_1 == 0 && eax_12 != 0 && var_864 s>= edx_4 && i.b != 0)
            *arg4 = 0
            *arg9 = 0
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
