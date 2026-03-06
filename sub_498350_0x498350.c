// 函数名称: sub_498350
// 虚拟地址: 0x498350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_498350(char* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t j_5
    int32_t j_5
    int32_t* edx
    j_5, edx = __chkstk(0x20ac)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    data_c021f0 += 1
    long double x87_r7 = fconvert.t(-1.0)
    int32_t eax_2 = *edx
    double var_20a4 = fconvert.d(x87_r7)
    int32_t* ebx = arg3
    int32_t* esi = arg2
    int32_t i = 0
    int32_t j_2 = j_5
    int32_t* var_2070 = esi
    int32_t* var_2078 = ebx
    int32_t* var_2074 = edx
    int32_t i_3 = 0xffffffff
    int32_t entry_ebx
    
    if (eax_2 s> 0)
        int32_t* ebx_1 = ebx - esi
        
        do
            int32_t ecx = *esi
            
            if (ecx s>= 0)
                int32_t eax_3 = *(ebx_1 + esi)
                int32_t ecx_2 = *(j_2 + ecx * 0x14 + 0x46c)
                int32_t ecx_3 = *(ecx_2 + ((eax_3 * 3 + 3) << 3) + 8)
                int32_t var_20a8_1 = *(ecx_2 + ((eax_3 * 3 + 3) << 3) + 0xc)
                
                if ((ecx_3 & 0x4000000) == 0)
                    eax_2 = ecx_3 & 0x8000000
                
                if ((ecx_3 & 0x4000000) != 0 || eax_2 != 0 || ((ecx_3 & 0x40000000) | eax_2) != 0)
                    *var_2070 = var_2070[i]
                    *var_2078 = var_2078[i]
                    sub_5a6aba(entry_ebx ^ &__saved_ebp)
                    return 
            
            edx = var_2074
            i += 1
            esi = &esi[1]
        while (i s< *edx)
        
        esi = var_2070
        ebx = var_2078
        j_5 = j_2
    
    eax_2.b = *(j_5 + 0x18)
    
    if (eax_2.b != 0 && arg1 != sx.d(*(j_5 + 0x19)))
        int32_t i_5 = 0
        
        if (*edx s> 0)
            int32_t ecx_6 = *edx
            int32_t* esi_1 = var_2070
            void* ebx_3 = var_2078 - esi_1
            
            do
                long double x87_r6_1 = float.t(sub_4981e0(j_2, *(esi_1 + ebx_3), *esi_1, j_2, arg1))
                x87_r6_1 - x87_r7
                int32_t eax_13
                eax_13.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3000
                
                if ((eax_13:1.b & 0x41) != 0)
                    x87_r7 = x87_r6_1
                else
                    i_3 = i_5
                
                i_5 += 1
                esi_1 = &esi_1[1]
            while (i_5 s< ecx_6)
        
        *var_2070 = var_2070[i_3]
        *var_2078 = var_2078[i_3]
        sub_5a6aba(entry_ebx ^ &__saved_ebp)
        return 
    
    int32_t var_19c[0x61]
    
    if (*edx s> 0)
        __builtin_memset(&var_19c, 0, *edx << 2)
    
    int32_t eax_18 = 0
    int32_t var_2068 = 0
    
    if (*edx s> 0)
        int32_t* ebx_6 = ebx - esi
        int32_t esi_2 = esi - &var_19c
        int32_t* var_2080_1 = ebx_6
        int32_t var_20a8_2 = esi_2
        
        while (eax_2.b == 0)
            int32_t eax_19 = esi_2 + (eax_18 << 2)
            int32_t ecx_16 = *(&var_19c + eax_19)
            
            if (ecx_16 s>= 0)
                void* edx_8 = *(j_2 + ecx_16 * 0x14 + 0x46c)
                    + ((*(ebx_6 + &__saved_ebp + eax_19 - 0x198) * 3 + 3) << 3)
                int32_t ecx_18 = 0
                void* var_2098_1 = edx_8
                
                if ((*(edx_8 + 8) & 0x301e0000) == 0)
                    int32_t* esi_3 = var_2070
                    int32_t* edi = &var_19c - var_2070
                    int32_t var_2090_2 = 0
                    int32_t* var_208c_2 = esi_3
                    int32_t* var_2094_1 = edi
                    
                    while (true)
                        if (var_2068 != ecx_18 && *(edi + esi_3) == 0)
                            int32_t ecx_19 = *esi_3
                            
                            if (ecx_19 s>= 0)
                                void* esi_5 =
                                    *(j_2 + ecx_19 * 0x14 + 0x46c) + ((*(esi_3 + ebx_6) * 3 + 3) << 3)
                                
                                if ((*(esi_5 + 8) & 0x301e0000) == 0)
                                    int32_t eax_33 = *(edx_8 + 8)
                                    int32_t edi_1 = *(esi_5 + 8)
                                    
                                    if (eax_33 == edi_1 && *(edx_8 + 0x10) == *(esi_5 + 0x10)
                                            && *(edx_8 + 0x11) == *(esi_5 + 0x11))
                                        var_19c[var_2068] = 1
                                        break
                                    
                                    int32_t ecx_24 = eax_33 & 0x100
                                    
                                    if (ecx_24 != 0 && (edi_1 & 0x100) != 0 && (eax_33 & 0x200) != 0)
                                        var_19c[var_2068] = 1
                                        break
                                    
                                    if (ecx_24 == 0 && (edi_1 & 0x100) == 0)
                                        if (eax_33 == edi_1)
                                            ebx_6.b = *(esi_5 + 0x11)
                                            ecx_24.b = *(edx_8 + 0x11)
                                            char var_2079_1 = ebx_6.b
                                            
                                            if (ecx_24.b == ebx_6.b)
                                                ebx_6.b = *(edx_8 + 0x10)
                                                
                                                if (ebx_6.b s< *(esi_5 + 0x10))
                                                    var_19c[var_2068] = 1
                                                    break
                                                    break
                                                    break
                                            
                                            ebx_6.b = *(edx_8 + 0x10)
                                            
                                            if (ebx_6.b == *(esi_5 + 0x10) && ecx_24.b s> var_2079_1)
                                                var_19c[var_2068] = 1
                                                break
                                                break
                                        
                                        ecx_24.b = *(edx_8 + 0x11)
                                        
                                        if (ecx_24.b == *(esi_5 + 0x11))
                                            ecx_24.b = *(edx_8 + 0x10)
                                            
                                            if (ecx_24.b == *(esi_5 + 0x10))
                                                int32_t eax_34 = eax_33 & 0xffff83ff
                                                int32_t esi_6 = 0
                                                int32_t ecx_26 = eax_33 & 0x7c00
                                                int32_t edx_10 = edi_1 & 0x7c00
                                                int32_t edi_2 = edi_1 & 0xffff83ff
                                                int32_t var_2084_1 = 0
                                                
                                                if ((eax_34 & 0x200000) != 0)
                                                    var_2084_1 = 1
                                                
                                                if ((edi_2 & 0x200000) != 0)
                                                    esi_6 = 1
                                                
                                                if ((eax_34 & &__dos_header) != 0)
                                                    var_2084_1 = 2
                                                
                                                if ((edi_2 & &__dos_header) != 0)
                                                    esi_6 = 2
                                                
                                                if ((eax_34 & &data_800000) != 0)
                                                    var_2084_1 = 3
                                                
                                                if ((edi_2 & &data_800000) != 0)
                                                    esi_6 = 3
                                                
                                                int32_t eax_35 = eax_34 & 0xff1fffff
                                                int32_t edi_3 = edi_2 & 0xff1fffff
                                                
                                                if (eax_35 != edi_3)
                                                label_498750:
                                                    
                                                    if (ecx_26 == edx_10 && var_2084_1 == esi_6 && (
                                                            edi_3 == (eax_35 | 0x1000000)
                                                            || edi_3 == (eax_35 | 0x2000000)))
                                                        var_19c[var_2068] = 1
                                                        break
                                                    
                                                    edx_8 = var_2098_1
                                                else
                                                    if (ecx_26 == edx_10)
                                                        if (var_2084_1 s>= esi_6)
                                                            goto label_498750
                                                        
                                                        var_19c[var_2068] = 1
                                                        break
                                                    
                                                    edx_8 = var_2098_1
                        
                        ecx_18 = var_2090_2 + 1
                        esi_3 = &var_208c_2[1]
                        var_2090_2 = ecx_18
                        var_208c_2 = esi_3
                        
                        if (ecx_18 s>= *var_2074)
                            break
                        
                        edi = var_2094_1
                        ebx_6 = var_2080_1
            
            edx = var_2074
            eax_18 = var_2068 + 1
            var_2068 = eax_18
            
            if (eax_18 s>= *edx)
                break
            
            esi_2 = var_20a8_2
            ebx_6 = var_2080_1
    
    int32_t i_4 = 0
    void var_2064
    
    if (*edx s<= 0)
    label_49896e:
        char* var_14_6 = arg1
        int128_t* eax_57
        char edx_20
        eax_57, edx_20 = sub_48bb40(j_2, &var_2064, edx.b)
        
        if (*(j_2 + 0x18) == 0)
            int32_t var_14_7 = 0
            eax_57, edx_20 = sub_48bc70(&var_2064, 1)
        
        char edx_21
        long double st0_2
        st0_2, edx_21 = sub_4904a0(eax_57, edx_20, &var_2064, arg1)
        double var_20a4_1 = fconvert.d(st0_2)
        
        if (*var_2074 s> 0)
            int32_t* edi_8 = var_2070
            void* eax_61 = var_2078 - edi_8
            int32_t i_1 = 0
            
            do
                char* var_14_9 = arg1
                sub_48bb40(j_2, &var_2064, edx_21)
                int32_t eax_63 = *(eax_61 + edi_8)
                void* j = sub_4aab60(eax_63, &var_2064, arg1, *edi_8, eax_63)
                int32_t j_6 = j_2
                
                if (*(j_6 + 0x18) == 0)
                    do
                        j, j_6 = sub_4ab170(j, j_6, &var_2064, arg1)
                    while (j != 0)
                    
                    void* j_4 = j
                    j, j_6 = sub_48bc70(&var_2064, j_6)
                
                int32_t eax_65
                long double st0_3
                st0_3, eax_65, edx_21 = sub_4904a0(j, j_6.b, &var_2064, arg1)
                long double x87_r6_5 = fconvert.t(var_20a4_1) - fconvert.t(9.9999999999999995e-07)
                x87_r6_5 - st0_3
                eax_65.w = (x87_r6_5 < st0_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_5, st0_3) ? 1 : 0) << 0xa
                    | (x87_r6_5 == st0_3 ? 1 : 0) << 0xe | 0x3800
                bool p_3 = unimplemented  {test ah, 0x41}
                
                if (not(p_3))
                    var_20a4_1 = fconvert.d(st0_3)
                    i_3 = i_1
                
                i_1 += 1
                edi_8 = &edi_8[1]
            while (i_1 s< *var_2074)
    else
        int32_t* ebx_7 = var_2070
        void* eax_42 = var_2078 - ebx_7
        int32_t i_2
        
        do
            void* edi_5 = eax_42 + ebx_7
            
            if (*(edi_5 + &var_19c - var_2078) == 0)
                int32_t eax_43 = *ebx_7
                
                if (eax_43 s>= 0)
                    void* eax_46 = *(j_2 + eax_43 * 0x14 + 0x46c) + ((*edi_5 * 3 + 3) << 3)
                    int32_t edx_16 = *(eax_46 + 0xc)
                    int32_t ecx_32 = *(eax_46 + 8)
                    int32_t var_20a8_3 = edx_16
                    int32_t eax_49 = ecx_32 & 0x10000000
                    
                    if (eax_49 == 0 && ((ecx_32 & 0x100000) | eax_49) == 0)
                        char* var_14_2 = arg1
                        int32_t edx_19 = sub_4aab60(sub_48bb40(j_2, &var_2064, edx_16.b), &var_2064, 
                            arg1, *ebx_7, *edi_5)
                        int32_t j_1 = j_2
                        
                        if (*(j_1 + 0x18) == 0)
                            do
                                j_1, edx_19 = sub_4ab170(j_1, edx_19, &var_2064, arg1)
                            while (j_1 != 0)
                            
                            int32_t j_3 = j_1
                            j_1, edx_19 = sub_48bc70(&var_2064, edx_19)
                        
                        int32_t eax_54
                        long double st0_1
                        st0_1, eax_54 = sub_4904a0(j_1, edx_19.b, &var_2064, arg1)
                        x87_r7 = st0_1
                        long double x87_r6_2 = fconvert.t(var_20a4)
                        long double x87_r5_2 = x87_r6_2 - fconvert.t(9.9999999999999995e-07)
                        x87_r5_2 - x87_r7
                        eax_54.w = (x87_r5_2 < x87_r7 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r5_2, x87_r7) ? 1 : 0) << 0xa
                            | (x87_r5_2 == x87_r7 ? 1 : 0) << 0xe | 0x3000
                        bool p_1 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_1))
                            x87_r7 = x87_r6_2
                            var_20a4 = fconvert.d(x87_r7)
                            i_3 = i_4
            
            edx = var_2074
            i_2 = i_4 + 1
            ebx_7 = &ebx_7[1]
            i_4 = i_2
        while (i_2 s< *edx)
        
        long double x87_r6_3 = fconvert.t(-1.0)
        x87_r6_3 - x87_r7
        i_2.w = (x87_r6_3 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_3 == x87_r7 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            goto label_49896e
    
    if (i_3 != 0xffffffff)
        *var_2070 = var_2070[i_3]
        *var_2078 = var_2078[i_3]
        *var_2074 = 1
        sub_5a6aba(entry_ebx ^ &__saved_ebp)
        return 
    
    if (arg4 != 0)
        *var_2074 = 0
        sub_5a6aba(entry_ebx ^ &__saved_ebp)
        return 
    
    char const* const var_14_13 = "Selected no power, but some are mandatory!\n"
    sub_4c5680("error %s")
    sub_5a79f4()
    noreturn
}
