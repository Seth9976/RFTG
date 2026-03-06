// 函数名称: sub_4a96b0
// 虚拟地址: 0x4a96b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4a96b0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f4a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* edi = arg2
    int32_t* esi = arg1
    int32_t* ebx = &esi[edi * 0x2d + 8]
    int32_t i = sx.d(ebx[9].w)
    int32_t edx = 0
    int32_t* var_e78 = esi
    char* var_e74 = edi
    int32_t var_e64 = 0
    int32_t var_e88 = 0
    int32_t* var_e6c = ebx
    
    if (i != 0xffffffff)
        int32_t var_934[0x148]
        
        do
            void* ecx_2
            ecx_2.b = *(esi[i * 5 + 0x11b] + 7)
            
            if (ecx_2.b s>= 1 && ecx_2.b s<= 6)
                var_934[edx] = i
                edx += 1
                var_e64 = edx
            
            i = sx.d(esi[i * 5 + 0x11d].w)
        while (i != 0xffffffff)
        
        if (edx != 0)
            sub_49d720(esi, edi)
            int32_t i_2
            
            if (ebx[0x2a] s>= ebx[0x29])
                i = (*(ebx[2] + 0xc))(esi, edi, 0x11, &var_934, &var_e64, 0, 0, 0, 0, 0, 0, eax_2)
                
                if (*(esi + 0x1ec3) == 0)
                    int32_t eax_7 = *(ebx[2] + 0x10)
                    
                    if (eax_7 != 0)
                        eax_7(esi, edi, 0x11)
                    
                    int32_t var_ea0_1 = 0
                    i = sub_49d860(&var_e64, 0, esi, edi, 0x11, &var_934, &var_e64, nullptr)
                    i_2 = i
                else
                    i_2 = 0xffffffff
            else
                i = sub_49d860(&var_934, 0, esi, edi, 0x11, &var_934, &var_e64, nullptr)
                i_2 = i
            
            if (*(esi + 0x1ec3) == 0)
                i = i_2
                
                if (i s>= 0)
                    void* eax_8 = &esi[i * 5]
                    int32_t* eax_9 = *(eax_8 + 0x46c)
                    int32_t ecx_8 = sx.d(*(eax_9 + 7))
                    char var_414[0x400]
                    
                    if (esi[6].b == 0)
                        int32_t var_ea0_2 = *eax_9
                        int32_t var_ea4_3 = *ebx
                        sub_5a733b(&var_414, "%s antes %s.\n")
                        int32_t eax_11
                        int32_t edx_5
                        eax_11, edx_5 = sub_4c5680(&var_414)
                        char (* var_ea0_3)[0x400] = &var_414
                        sub_4591b0(eax_11, edx_5, esi, edi)
                        sub_49b6d0(edi)
                        ebx = var_e6c
                    
                    int32_t var_ea0_4 = *ebx
                    char* i_1
                    int32_t ecx_11 = sub_4c4a50(&i_1, "%s flips ")
                    int32_t var_8_1 = 0
                    int32_t var_e60_1 = 0
                    
                    if (ecx_8 s> 0)
                        int32_t eax_39
                        
                        do
                            int32_t eax_13
                            void* ebx_3
                            
                            if (esi[6].b == 0)
                                if (*esi == 0)
                                    eax_13 = sub_49ca40(esi)
                                else
                                    int32_t eax_14 = esi[1]
                                    
                                    if (*(eax_14 + (edi << 2) + 0x1ec0)
                                            s>= *(eax_14 + (edi << 2) + 0x1ed8))
                                        eax_13 = sub_49ca40(esi)
                                    else
                                        int32_t edx_8 = *(eax_14 + (edi << 2) + 0x1ec0)
                                        eax_13 = *(eax_14 + ((edi * 0x148 + edx_8) << 2))
                                        *(eax_14 + (edi << 2) + 0x1ec0) = edx_8 + 1
                                        
                                        if (eax_13 s< 0)
                                            eax_13 = sub_49ca40(esi)
                                
                                ebx_3 = &(&__saved_ebp)[var_e60_1 - 0x394]
                            else
                                ebx_3 = &(&__saved_ebp)[var_e60_1 - 0x394]
                                eax_13 = sub_49cb90(esi)
                                esi[3] = esi[3] * 0x19660d + 0x3c6ef35f
                            
                            *ebx_3 = eax_13
                            int32_t var_e80_1 = eax_13
                            
                            if (eax_13 == 0xffffffff)
                                int32_t var_8_3 = 0xffffffff
                                i = i_1
                                
                                if (i != 0 && *i != 0)
                                    i = sub_4c4060(&i_1)
                                    int32_t temp3_1 = *(i + 4)
                                    *(i + 4) -= 1
                                    
                                    if (temp3_1 == 1)
                                        int32_t esi_6 = *(i + 0xc) + 0x10
                                        i = sub_4f4430(i, sub_4f4380(esi_6), esi_6)
                                
                                goto label_4aa05e
                            
                            ecx_11 = eax_13 * 5
                            int32_t* eax_19 = esi[ecx_11 + 0x11b]
                            
                            if (sx.d(*(eax_19 + 7)) s> ecx_8)
                                var_e88 = 1
                            
                            if (esi[6].b == 0)
                                int32_t var_ea0_5 = *eax_19
                                int32_t var_ea4_5 = *var_e6c
                                sub_5a733b(&var_414, "%s flips %s.\n")
                                sub_4c5680(&var_414)
                                int32_t var_ea0_6 = *esi[ecx_11 + 0x11b]
                                
                                if (var_e60_1 != ecx_8 - 1)
                                    var_8_1.b = 2
                                    char* var_e7c
                                    int128_t* eax_31 = *sub_4c4a50(&var_e7c, "%s, ")
                                    
                                    if (eax_31 == 0)
                                        eax_31 = &data_83f3d3
                                    
                                    ecx_11 = sub_4c4620(&i_1, eax_31)
                                    var_8_1.b = 0
                                    char* eax_33 = var_e7c
                                    
                                    if (eax_33 != 0 && *eax_33 != 0)
                                        void* eax_35 = sub_4c4060(&var_e7c)
                                        int32_t temp4_1 = *(eax_35 + 4)
                                        *(eax_35 + 4) -= 1
                                        
                                        if (temp4_1 == 1)
                                            int32_t esi_4 = *(eax_35 + 0xc) + 0x10
                                            ecx_11 = sub_4f4430(eax_35, sub_4f4380(esi_4), esi_4)
                                            esi = var_e78
                                            edi = var_e74
                                else
                                    var_8_1.b = 1
                                    char* var_e84
                                    char* eax_23 = *sub_4c4a50(&var_e84, "and %s.\n")
                                    
                                    if (eax_23 == 0)
                                        eax_23 = &data_83f3d3
                                    
                                    int32_t edx_14 = sub_4c4620(&i_1, eax_23)
                                    var_8_1.b = 0
                                    char* eax_25 = var_e84
                                    
                                    if (eax_25 != 0 && *eax_25 != 0)
                                        void* eax_27 = sub_4c4060(&var_e84)
                                        int32_t temp5_1 = *(eax_27 + 4)
                                        *(eax_27 + 4) -= 1
                                        
                                        if (temp5_1 == 1)
                                            int32_t esi_2 = *(eax_27 + 0xc) + 0x10
                                            edx_14 = sub_4f4430(eax_27, sub_4f4380(esi_2), esi_2)
                                            esi = var_e78
                                            edi = var_e74
                                    
                                    char* const i_4 = i_1
                                    
                                    if (i_4 == 0)
                                        i_4 = &data_83f3d3
                                    
                                    char* const i_6 = i_4
                                    ecx_11 = sub_4591b0(i_4, edx_14, esi, edi)
                                
                                sub_49b760(edi)
                            
                            eax_39 = var_e60_1 + 1
                            var_e60_1 = eax_39
                        while (eax_39 s< ecx_8)
                    
                    int32_t var_e54[0x148]
                    
                    if (ecx_8 s> 0 && var_e88 != 0)
                        int32_t i_3 = i_2
                        __builtin_memcpy(&var_934, &var_e54, ecx_8 << 2)
                        var_e64 = ecx_8
                        sub_49d720(var_e78, var_e74)
                        int32_t (* eax_55)[0x148] = var_e6c[0x2a]
                        int32_t var_e58_1
                        char* ecx_26
                        int32_t eax_59
                        
                        if (eax_55 s>= var_e6c[0x29])
                            ecx_26 = (*(var_e6c[2] + 0xc))(var_e78, var_e74, 0x12, &var_934, &var_e64, 
                                0, 0, 0, 0, 0, 0, eax_2)
                            
                            if (*(var_e78 + 0x1ec3) == 0)
                                int32_t eax_58 = *(var_e6c[2] + 0x10)
                                
                                if (eax_58 != 0)
                                    eax_58(var_e78, var_e74, 0x12)
                                
                                int32_t var_ea0_21 = 0
                                eax_59, ecx_26 = sub_49d860(&var_934, 0, var_e78, var_e74, 0x12, 
                                    &var_934, &var_e64, nullptr)
                                var_e58_1 = eax_59
                            else
                                var_e58_1 = 0xffffffff
                        else
                            eax_59, ecx_26 = sub_49d860(eax_55, 0, var_e78, var_e74, 0x12, &var_934, 
                                &var_e64, nullptr)
                            var_e58_1 = eax_59
                        
                        if (*(var_e78 + 0x1ec3) == 0)
                            if (var_e78[6].b == 0)
                                int32_t var_ea0_23 = *var_e78[var_e58_1 * 5 + 0x11b]
                                int32_t var_ea4_10 = *var_e6c
                                sub_5a733b(&var_414, "%s keeps %s.\n")
                                int32_t eax_65
                                int32_t edx_23
                                eax_65, edx_23 = sub_4c5680(&var_414)
                                char (* var_ea0_24)[0x400] = &var_414
                                ecx_26 = sub_4591b0(eax_65, edx_23, var_e78, var_e74)
                                sub_49b900(var_e74)
                                sub_49b640(var_e74)
                                sub_49b640(var_e74)
                            
                            int32_t var_e60_2 = 0
                            int32_t eax_72
                            
                            do
                                int32_t ebx_17 = var_e54[var_e60_2]
                                
                                if (ebx_17 != var_e58_1)
                                    int32_t var_ea0_27 = 1
                                    sub_49cc30(var_e78, ebx_17, ecx_26, 0xffffffff)
                                    int32_t edx_28 = ebx_17 * 5
                                    var_e78[edx_28 + 0x11a].w |= 0x3f
                                    
                                    if (var_e78[6].b == 0)
                                        sub_49bbd0(var_e74)
                                else
                                    int32_t var_ea0_26 = 2
                                    sub_49cc30(var_e78, var_e58_1, ecx_26, var_e74)
                                    int32_t eax_68 = ebx_17 * 5
                                    ecx_26 = var_e74
                                    var_e78[eax_68 + 0x11a].w =
                                        (var_e78[eax_68 + 0x11a].w & 0xffc0) | 1 << ecx_26.b
                                
                                eax_72 = var_e60_2 + 1
                                var_e60_2 = eax_72
                            while (eax_72 s< ecx_8)
                            i = 0xffffffff
                            int32_t var_8_5 = 0xffffffff
                            char* i_5 = i_1
                            
                            if (i_5 != 0 && *i_5 != 0)
                                if (*(i_5 - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t temp7_1 = *(i_5 - 0xc)
                                *(i_5 - 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    void* esi_12 = data_26a44e4
                                    int32_t ebx_20 = *(i_5 - 4) + 0x10
                                    
                                    if (esi_12 == 0)
                                        sub_4f4250()
                                        esi_12 = data_26a44e4
                                    
                                    int32_t eax_74 = 0
                                    void** esi_13
                                    
                                    while (true)
                                        if (ebx_20 s<= 1 << (eax_74.b + 4))
                                            esi_13 = esi_12 + eax_74 * 0x14
                                            break
                                        
                                        eax_74 += 1
                                        
                                        if (eax_74 s>= 7)
                                            esi_13 = esi_12 + 0x8c
                                            break
                                    
                                    esi_13[3] -= 1
                                    
                                    if (ebx_20 s<= 0x400 || esi_13[4] != 0xffffffff)
                                        int32_t eax_76 = esi_13[4]
                                        int32_t* ecx_33 = esi_13[1]
                                        
                                        if (ecx_33 == 0)
                                        label_4aa03c:
                                            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                                "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                            
                                            if (IsDebuggerPresent() == 1)
                                                breakpoint
                                            
                                            sub_4c5a30()
                                            noreturn
                                        
                                        while (true)
                                            void* edx_30 = &ecx_33[1]
                                            ecx_33 = *ecx_33
                                            
                                            if (&i_5[0xfffffff0] u>= edx_30
                                                    && &i_5[0xfffffff0] u< edx_30 + esi_13[2] * eax_76)
                                                int32_t eax_80
                                                int32_t edx_31
                                                edx_31:eax_80 = sx.q(&i_5[0xfffffff0] - edx_30)
                                                i = divs.dp.d(edx_31:eax_80, eax_76)
                                                
                                                if (mods.dp.d(edx_31:eax_80, eax_76) == 0)
                                                    *(i_5 - 0x10) = *esi_13
                                                    *esi_13 = &i_5[0xfffffff0]
                                                    break
                                            
                                            if (ecx_33 == 0)
                                                goto label_4aa03c
                                    else
                                        i = _aligned_free_base(&i_5[0xfffffff0])
                        else
                            int32_t var_8_4 = 0xffffffff
                            i = i_1
                            
                            if (i != 0 && *i != 0)
                                if (*(i - 0x10) != 0xfafafafa)
                                    sub_4c5870(
                                        "pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                        &data_83f3d3, "xString.cpp", 0x20, 
                                        "XStringMagicDataStructFromCharPtr")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t temp6_1 = *(i - 0xc)
                                *(i - 0xc) -= 1
                                
                                if (temp6_1 == 1)
                                    int32_t esi_11 = *(i - 4) + 0x10
                                    i = sub_4f4430(i - 0x10, sub_4f4380(esi_11), esi_11)
                    else
                        int32_t var_ea0_12 = 1
                        sub_49cc30(esi, i_2, ecx_11, 0xffffffff)
                        
                        if (esi[6].b == 0)
                            sub_49b870(edi)
                            sub_49bbd0(edi)
                            int32_t var_ea0_14 = *var_e6c
                            char (* var_ea0_15)[0x400] = &var_414
                            ecx_11 =
                                sub_4591b0(&var_414, sub_5a733b(&var_414, "%s loses ante.\n"), esi, edi)
                        
                        *(eax_8 + 0x468) |= 0x3f
                        int32_t edi_3 = 0
                        
                        if (ecx_8 s> 0)
                            int32_t ecx_21 = ecx_11
                            
                            do
                                int32_t ebx_10 = var_e54[edi_3]
                                int32_t var_ea0_16 = 1
                                sub_49cc30(esi, ebx_10, ecx_21, 0xffffffff)
                                ecx_21 = ebx_10 * 5
                                esi[ecx_21 + 0x11a].w |= 0x3f
                                
                                if (esi[6].b == 0)
                                    sub_49bbd0(var_e74)
                                
                                edi_3 += 1
                            while (edi_3 s< ecx_8)
                        
                        int32_t var_8_2 = 0xffffffff
                        i = i_1
                        
                        if (i != 0 && *i != 0)
                            if (*(i - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t temp2_1 = *(i - 0xc)
                            *(i - 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                void* edx_19 = data_26a44e4
                                int32_t esi_8 = *(i - 4) + 0x10
                                
                                if (edx_19 == 0)
                                    sub_4f4250()
                                    edx_19 = data_26a44e4
                                
                                int32_t eax_51 = 0
                                
                                while (true)
                                    if (esi_8 s<= 1 << (eax_51.b + 4))
                                        i = sub_4f4430(i - 0x10, edx_19 + eax_51 * 0x14, esi_8)
                                        break
                                    
                                    eax_51 += 1
                                    
                                    if (eax_51 s>= 7)
                                        i = sub_4f4430(i - 0x10, edx_19 + 0x8c, esi_8)
                                        break
    
    label_4aa05e:
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return i
}
