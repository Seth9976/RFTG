// 函数名称: sub_4aab60
// 虚拟地址: 0x4aab60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4aab60(int32_t arg1, int32_t* arg2, char* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg2
    void* edi_2 = arg3 * 0xb4 + esi
    int32_t var_e7c = esi
    int32_t var_e84 = 0
    int32_t var_e6c = 0
    int32_t var_e90 = 2
    
    if (arg4 s< 0)
        int32_t eax_3 = sub_4aa440(arg4, esi, arg3, 0xffffffff, 2)
        *(edi_2 + 0x3d) = 1
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_3
    
    int32_t eax_4 = arg4 * 5
    int32_t* edx_1 = esi[eax_4 + 0x11b]
    void* ecx_2 = *edx_1
    esi[eax_4 + 0x11a].w |= 1 << (arg5.b + 8)
    int32_t ecx_4 = edx_1[(arg5 * 3 + 3) * 2 + 2]
    void* ebx_3 = &edx_1[(arg5 * 3 + 3) * 2]
    int32_t var_e88 = *(ebx_3 + 0xc)
    
    if ((ecx_4 & 0x100) != 0)
        int32_t eax_12 = ecx_4 & 0x200
        void* eax_13 = sub_4a8940(eax_12, 0, arg3, esi, eax_12, 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_13
    
    if ((ecx_4 & 0x4000000) != 0)
        sub_49cf20(esi, arg3, sx.d(*(ebx_3 + 0x10)), ecx_2)
        *(edi_2 + 0xb8) += sx.w(*(ebx_3 + 0x10))
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return edi_2
    
    if ((ecx_4 & 0x8000000) != 0)
        int32_t eax_20 = sub_4a94d0(esi, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_20
    
    if ((ecx_4 & 0x20000000) != 0)
        int32_t eax_24 = sub_4a96b0(esi, arg3)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_24
    
    int32_t eax_28
    
    if ((ecx_4 & 0x40000000) == 0)
        if ((ecx_4 & 0x10000000) != 0)
            int32_t eax_36 = sx.d(*(ebx_3 + 0x11))
            int32_t eax_37 = sub_4aa440(eax_36, esi, arg3, arg4, eax_36)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_37
        
        if ((ecx_4 & 0x100000) != 0)
            int32_t eax_38 = sub_4aa4f0(0, arg3, arg5, arg4)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_38
        
        int32_t i = sx.d(*(edi_2 + 0x46))
        int32_t var_424
        __builtin_memset(&var_424, 0, 0x18)
        int32_t var_944[0x148]
        int32_t var_420
        int32_t edi_5
        
        if (i == 0xffffffff)
            edi_5 = 0
        else
            do
                int32_t ecx_31 = i * 5
                void* edx_11 = &esi[ecx_31 + 0x119]
                
                if (*(&esi[ecx_31] + 0x472) != 0)
                    int32_t esi_1 = sx.d(*(*(edx_11 + 8) + 0xe))
                    (&var_424)[esi_1] += 1
                    
                    if (esi_1 == 1)
                    label_4aaf24:
                        
                        if ((*(ebx_3 + 8) & 0x8000) == 0 || arg4 == i)
                            int32_t j = 0
                            
                            if (*(edx_11 + 0xe) s> 0)
                                do
                                    int32_t ecx_35 = var_e6c
                                    var_944[ecx_35] = i
                                    var_e6c = ecx_35 + 1
                                    j += 1
                                while (j s< sx.d(*(edx_11 + 0xe)))
                    else
                        int32_t ecx_32 = *(ebx_3 + 8)
                        int32_t var_e88_1 = *(ebx_3 + 0xc)
                        
                        if (((ecx_32 & 0x800) == 0 || esi_1 == 2)
                                && ((ecx_32 & 0x1000) == 0 || esi_1 == 3)
                                && ((ecx_32 & 0x2000) == 0 || esi_1 == 4)
                                && ((ecx_32 & 0x4000) == 0 || esi_1 == 5))
                            goto label_4aaf24
                    
                    esi = var_e7c
                
                i = sx.d(esi[i * 5 + 0x11d].w)
            while (i != 0xffffffff)
            
            edi_5 = 1
            
            if (var_424 == 0)
                edi_5 = var_e84
            
            if (var_420 != 0)
                edi_5 += 1
            
            int32_t var_41c
            
            if (var_41c != 0)
                edi_5 += 1
            
            int32_t var_418
            
            if (var_418 != 0)
                edi_5 += 1
            
            int32_t var_414
            
            if (var_414 != 0)
                edi_5 += 1
            
            int32_t var_410
            
            if (var_410 != 0)
                edi_5 += 1
        
        int32_t edx_14 = *(ebx_3 + 8)
        int32_t ecx_39 = edx_14 & 0x10000
        int32_t var_e88_2 = *(ebx_3 + 0xc)
        int32_t eax_56
        int32_t ecx_41
        
        if (ecx_39 == 0)
            if ((edx_14 & 0x20000) != 0)
                ecx_41 = 3
                eax_56 = 3
                
                if (var_420 != 0 && edi_5 == 3)
                    eax_56 = 0
                
                goto label_4ab052
            
            if ((edx_14 & 0x40000) != 0)
                ecx_41 = edi_5
                eax_56 = edi_5
                
                if (edi_5 s> 4)
                    ecx_41 = 4
                    eax_56 = 4
                
                if (var_420 != 0 && eax_56 s> 1)
                    eax_56 -= 1
                
                goto label_4ab052
            
            if ((edx_14 & 0x80000) == 0)
                ecx_41 = sx.d(*(ebx_3 + 0x11))
                goto label_4ab050
            
            eax_56 = var_e6c
            ecx_41 = eax_56
        else
            ecx_41 = 2
        label_4ab050:
            eax_56 = ecx_41
        label_4ab052:
            int32_t edi_6 = var_e6c
            
            if (eax_56 s> edi_6)
                eax_56 = edi_6
            
            if (ecx_41 s> edi_6)
                ecx_41 = edi_6
        
        if (var_420 != 0 && ecx_39 == 0 && (edx_14 & 0x7800) != 0 && var_e6c s<= sx.d(*(ebx_3 + 0x11)))
            eax_56 -= 1
        
        int32_t var_e60_1 = arg5
        int32_t var_e64 = arg4
        sub_49d9e0(esi, arg3, 0xf, &var_944, &var_e6c, &var_e64, &var_e90, eax_56, ecx_41, 0, 0)
        eax_28 = var_e7c
        
        if (*(eax_28 + 0x1ec3) == 0)
            eax_28 = sub_4a8ae0(eax_28, arg3, arg5, eax_28, arg4, &var_944, var_e6c)
    else
        eax_28 = sx.d(*(ebx_3 + 0x10))
        int32_t ebx_4 = 1
        int32_t edx_6
        edx_6.b = (*(edi_2 + 0x2c)).b & 0x7f
        
        if (edx_6.b == 8 || ((*(edi_2 + 0x30)).b & 0x7f) == 8 || *(edi_2 + 0x2c) == 0x87
                || *(edi_2 + 0x30) == 0x87)
            ebx_4 = 2
        
        if (*(edi_2 + 0x2c) == 0x88 || *(edi_2 + 0x30) == 0x88)
            ebx_4 = 3
        
        int32_t ebx_5 = ebx_4 * eax_28
        *(edi_2 + 0xa6) += ebx_5.w
        esi[0x781].b -= ebx_5.b
        *(edi_2 + 0xba) += ebx_5.w
        
        if (esi[6].b == 0)
            int32_t var_ea8_2 = ebx_5
            sub_49bab0(arg3, edx_6)
            char* const eax_30 = &data_83f3d3
            
            if (ebx_5 != 1)
                eax_30 = &data_85f840
            
            void* var_ea8_3 = ecx_2
            char* const var_eac_3 = eax_30
            int32_t var_eb0_1 = ebx_5
            int32_t var_eb4_1 = *(edi_2 + 0x20)
            void var_40c
            sub_5a733b(&var_40c, "%s receives %d VP%s from %s.\n")
            char const* const var_ec0_1 = "verbose"
            void* var_ec4_1 = &var_40c
            int32_t eax_32 = sub_4c5680("%s (%s)")
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_32
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_28
}
