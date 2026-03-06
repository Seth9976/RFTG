// 函数名称: sub_4a1730
// 虚拟地址: 0x4a1730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4a1730(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_874 = 0
    int32_t var_884 = 0
    int32_t var_880 = 0
    int32_t var_8a4 = 0
    int32_t var_88c = 0
    int32_t var_87c = 0
    int32_t edx_1
    edx_1.b = sx.d(*(arg3 + arg4 * 0x14 + 0x464)) != arg2
    void* eax_4 = *(arg3 + arg4 * 0x14 + 0x46c)
    int32_t ecx_3 = sx.d(*(eax_4 + 7))
    int32_t edx_2 = sx.d(*(eax_4 + 0xe))
    int32_t eax_6 = *(eax_4 + 0x10) & 1
    int32_t var_878 = eax_6
    int32_t eax_7 = sub_4b1530(eax_6, edx_2, arg3, arg2)
    int32_t ecx_6 = sx.d(*(arg2 * 0xb4 + arg3 + 0x62)) + arg8
    int32_t edx_3 = sx.d(*(arg2 * 0xb4 + arg3 + 0x63))
    int32_t result_1 = ecx_3 - edx_3
    int32_t var_86c = eax_7 + ecx_6
    void var_348
    void* var_8d4_1 = &var_348
    int32_t edi_1 = 0
    int32_t var_8d8 = 3
    int32_t var_24
    __builtin_memset(&var_24, 0, 0x18)
    int32_t eax_10 = sub_49dea0(arg2, edx_3, ecx_6, arg3)
    int32_t var_894 = 0
    
    if (arg6 s<= 0)
    label_4a1a46:
        int32_t eax_30 = var_880
        
        if (arg7 == 0 || eax_30 != 0 || var_878 != eax_30)
            if (edx_1 == 0)
                if (eax_30 == 0 || edi_1 == 0)
                label_4a1a8b:
                    
                    if (var_8a4 == 0 || var_878 == 0 || edi_1 != 0)
                        int32_t edi_4 = 2
                        
                        while (true)
                            int32_t esi_1 = (&var_24)[edi_4]
                            
                            if (esi_1 != 0)
                                void var_868
                                eax_30 = sub_49db70(eax_30, &var_868, arg2, arg3, &var_868, edi_4)
                                
                                if (eax_30 s< esi_1)
                                    break
                            
                            edi_4 += 1
                            
                            if (edi_4 s> 5)
                                int32_t eax_33 = sx.d(*(arg3 + 0x1ec0)) | 0x80
                                
                                if (eax_33 s>= 0)
                                    bool cond:4_1
                                    
                                    if (eax_33.b s< 0)
                                        if (*(arg2 * 0xb4 + arg3 + 0x2c) != eax_33)
                                            cond:4_1 = *(arg2 * 0xb4 + arg3 + 0x30) != eax_33
                                            goto label_4a1b03
                                        
                                        result_1 -= 3
                                    else if ((*(arg2 * 0xb4 + arg3 + 0x2c) & 0x7f) == eax_33)
                                        result_1 -= 3
                                    else
                                        cond:4_1 = (*(arg2 * 0xb4 + arg3 + 0x30) & 0x7f) != eax_33
                                    label_4a1b03:
                                        
                                        if (not(cond:4_1))
                                            result_1 -= 3
                                
                                int32_t ebx_1 = 0
                                
                                if (eax_10 s> 0)
                                    do
                                        int32_t var_344[0xc8]
                                        void* esi_2 = var_344[ebx_1 * 2]
                                        int32_t eax_34 = *(esi_2 + 8)
                                        int32_t var_8b4_3 = *(esi_2 + 0xc)
                                        
                                        if ((eax_34 & 1) == 0)
                                            goto label_4a1bb2
                                        
                                        if (((eax_34 & 2) == 0 || edx_2 == 2)
                                                && ((eax_34 & 4) == 0 || edx_2 == 3)
                                                && ((eax_34 & 8) == 0 || edx_2 == 4)
                                                && ((eax_34 & 0x10) == 0 || edx_2 == 5)
                                                && (eax_34 & 0x20000000) == 0)
                                            result_1 -= sx.d(*(esi_2 + 0x10))
                                        label_4a1bb2:
                                            
                                            if ((eax_34 & 0x100) == 0)
                                            label_4a1c4d:
                                                
                                                if (var_874 != 0 && (eax_34 & 0x8000) != 0)
                                                    result_1 -= sx.d(*(esi_2 + 0x10))
                                            else if ((eax_34 & 0x10000000) == 0
                                                    && (eax_34 & 0x40000000) == 0)
                                                if (((eax_34 & 2) == 0 || edx_2 != 2)
                                                        && ((eax_34 & 4) == 0 || edx_2 != 3)
                                                        && ((eax_34 & 8) == 0 || edx_2 != 4)
                                                        && ((eax_34 & 0x10) == 0 || edx_2 != 5))
                                                    if ((eax_34 & 0x200) == 0 || (
                                                            *(*(arg3 + arg4 * 0x14 + 0x46c) + 0x10)
                                                            & 0x40) == 0)
                                                        goto label_4a1c4d
                                                    
                                                    var_86c += sx.d(*(esi_2 + 0x10))
                                                else
                                                    var_86c += sx.d(*(esi_2 + 0x10))
                                        
                                        ebx_1 += 1
                                    while (ebx_1 s< eax_10)
                                
                                int32_t result = result_1
                                
                                if (result s< 0)
                                    result = 0
                                
                                bool cond:5_1
                                
                                if (edx_1 != 0)
                                label_4a1cc1:
                                    
                                    if (var_878 == 0 || var_874 != 0)
                                        goto label_4a1ceb
                                    
                                    cond:5_1 = var_88c == 0
                                    
                                    if (var_88c s<= 0)
                                        goto label_4a1cf2
                                    
                                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                                    return 0xffffffff
                                
                                if (var_878 == 0)
                                label_4a1ceb:
                                    cond:5_1 = var_88c == 0
                                label_4a1cf2:
                                    
                                    if (cond:5_1 || var_87c == 0)
                                        if (var_878 != 0 && var_874 == 0)
                                            if (edx_1 == 0)
                                                int32_t eax_40 =
                                                    sx.d(*(*(arg3 + arg4 * 0x14 + 0x46c) + 7))
                                                
                                                if (eax_40 s> var_86c)
                                                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                                                    return eax_40 - var_86c
                                            
                                            result = 0
                                        
                                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                                        return result
                                else if (var_874 != edx_1 || var_86c + var_884
                                        s>= sx.d(*(*(arg3 + arg4 * 0x14 + 0x46c) + 7)))
                                    goto label_4a1cc1
                                
                                break
            else if (eax_30 != 0)
                if (edi_1 == 0)
                    goto label_4a1a8b
            else if (var_878 != eax_30)
                goto label_4a1a8b
    else
        int32_t eax_29
        
        do
            int32_t eax_12 = *(arg5 + (var_894 << 2)) * 5
            int32_t ecx_9 = sx.d(*(*(arg3 + (eax_12 << 2) + 0x46c) + 0x15))
            int32_t var_8a8_1 = 0
            
            if (ecx_9 s> 0)
                int32_t* edx_6 = *(arg3 + (eax_12 << 2) + 0x46c) + 0x20
                int32_t eax_19
                
                do
                    if (edx_6[-2].b == 3)
                        int32_t eax_14 = *edx_6
                        int32_t var_8bc_1 = edx_6[1]
                        
                        if ((eax_14 & 0x4000) != 0)
                            if (edi_1 != 0)
                                goto label_4a1a7a
                            
                            int32_t ecx_15 = eax_14 & 0x10
                            
                            if (ecx_15 != 0 && edx_2 != 5)
                                goto label_4a1a7a
                            
                            if (ecx_15 == 0 && edx_2 == 5)
                                goto label_4a1a7a
                            
                            int32_t ecx_17 = sx.d(edx_6[2].b)
                            int32_t result_3 = result_1
                            result_1 -= ecx_17
                            edi_1 = 1
                            var_874 = 1
                            
                            if (result_3 - ecx_17 s< 0)
                                result_1 = 0
                        
                        if ((eax_14 & 0x20) != 0)
                            int32_t var_8b4_2 = edx_6[1]
                            
                            if ((eax_14 & 0x40) != 0)
                                var_8a4 = 1
                                
                                if (edx_2 != 5)
                                    result_1 = 0
                            
                            if ((eax_14 & 0x100) != 0)
                                var_86c += sx.d(edx_6[2].b)
                            
                            if ((eax_14 & 0x20000) != 0)
                                var_86c += sx.d(edx_6[2].b)
                                var_878 = 1
                                var_880 = 1
                            
                            break
                        
                        if ((eax_14 & 0x80) != 0)
                            var_884 += sx.d(edx_6[2].b)
                        
                        if ((eax_14 & 0x20000000) != 0)
                            int32_t ecx_28 = sx.d(edx_6[2].b)
                            var_88c += 1
                            int32_t result_2 = result_1
                            result_1 -= ecx_28
                            
                            if (result_2 - ecx_28 s< 0)
                                result_1 = 0
                            
                            int32_t var_14_1 = var_14_1 + 1
                        
                        if ((eax_14 & 0x10000000) != 0)
                            var_87c += 1
                            var_86c += sx.d(edx_6[2].b)
                            int32_t var_18_1 = var_18_1 + 1
                        
                        if ((eax_14 & 0x40000000) != 0)
                            var_87c += 1
                            var_86c += sx.d(edx_6[2].b)
                            int32_t var_10_1 = var_10_1 + 1
                        
                        if ((eax_14 & 0x80000000) != 0)
                            var_86c += sx.d(edx_6[2].b)
                    
                    eax_19 = var_8a8_1 + 1
                    edx_6 = &edx_6[6]
                    var_8a8_1 = eax_19
                while (eax_19 s< ecx_9)
            
            eax_29 = var_894 + 1
            var_894 = eax_29
        while (eax_29 s< arg6)
        
        if (var_884 s<= 0)
            goto label_4a1a46
        
        if (edi_1 == 0 && (var_878 != edi_1 || var_880 != edi_1))
            goto label_4a1a46
    
    label_4a1a7a:
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return 0xffffffff
}
