// 函数名称: sub_4ea1a0
// 虚拟地址: 0x4ea1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4ea1a0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68f2a6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t eax_2 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = arg1
    int32_t* esi = arg2
    esi[0xa] = fconvert.s(fconvert.t(*(ebx + 4)))
    esi[0xb] = *(ebx + 8)
    esi[0xc].b = *(ebx + 0x24)
    *(esi + 0x31) = *(ebx + 0x25)
    int32_t eax_4 = *(ebx + 0x10)
    esi[1] = eax_4
    int32_t eax_5 = eax_4 << 4
    int128_t* eax_6
    
    if (eax_5 != 0)
        int128_t* eax_7 = sub_4cce80(eax_5)
        sub_5abfc0(eax_7, 0, eax_5)
        eax_6 = eax_7
    else
        eax_6 = nullptr
    
    *esi = eax_6
    int32_t i_4 = 0
    char* const var_5c
    
    if (esi[1] s> 0)
        int32_t var_64_1 = 0
        int32_t var_60_1 = 0
        int32_t i
        
        do
            int32_t* esi_2 = *arg2 + var_60_1
            int32_t* edi_2 = *(arg1 + 0xc) + var_64_1
            var_5c = &data_83f3d3
            int32_t var_c_1 = 0
            int128_t* eax_9 = *edi_2
            char* eax_10 = sub_5a8f10(eax_9, 0x5f)
            float var_58
            int32_t eax_11
            
            if (eax_10 != 0)
                int32_t* var_80_2 = &var_58
                eax_11 = sub_5a957c(eax_10, "_fps%f")
            
            if (eax_10 == 0 || eax_11 != 1)
                var_58 = fconvert.s(float.t(0))
                sub_4c4590(eax_9)
            else
                sub_4c4690(&var_5c, eax_9)
            
            long double x87_r7_2 = fconvert.t(var_58)
            long double x87_r6_1 = float.t(0)
            x87_r6_1 - x87_r7_2
            int32_t* eax_13
            eax_13.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            if (not(p_1))
                var_58 = fconvert.s(fconvert.t(*(arg1 + 4)))
            
            char* const ebx_3 = var_5c
            esi_2[2] = edi_2[2]
            esi_2[1] = edi_2[1]
            esi_2[3] = fconvert.s(fconvert.t(var_58))
            char* const var_44_2
            char* const eax_16
            
            if (ebx_3 != 0)
                eax_16 = ebx_3
                var_44_2 = ebx_3
            else
                eax_16 = &data_83f3d3
                var_44_2 = &data_83f3d3
            
            void* edx_2 = &eax_16[1]
            int32_t ecx_2
            
            do
                ecx_2.b = *eax_16
                eax_16 = &eax_16[1]
            while (ecx_2.b != 0)
            int128_t* eax_19 = sub_4cce80(eax_16 - edx_2 + 1)
            *esi_2 = eax_19
            sub_5ab990(eax_19, var_44_2, eax_16 - edx_2 + 1, eax_2)
            int32_t var_c_2 = 0xffffffff
            
            if (ebx_3 != 0 && *ebx_3 != 0)
                if (*(ebx_3 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp3_1 = *(ebx_3 - 0xc)
                *(ebx_3 - 0xc) -= 1
                
                if (temp3_1 == 1)
                    void* edi_4 = data_26a44e4
                    int32_t esi_5 = *(ebx_3 - 4) + 0x10
                    
                    if (edi_4 == 0)
                        sub_4f4250()
                        edi_4 = data_26a44e4
                    
                    int32_t edx_3 = 0
                    int32_t* edi_5
                    
                    while (true)
                        if (esi_5 s<= 1 << (edx_3.b + 4))
                            edi_5 = edi_4 + edx_3 * 0x14
                            break
                        
                        edx_3 += 1
                        
                        if (edx_3 s>= 7)
                            edi_5 = edi_4 + 0x8c
                            break
                    
                    sub_4f4430(&ebx_3[0xfffffff0], edi_5, esi_5)
            
            var_60_1 += 0x10
            var_64_1 += 0xc
            i = i_4 + 1
            i_4 = i
        while (i s< arg2[1])
        ebx = arg1
        esi = arg2
    
    esi[2] = *(ebx + 0x14)
    int32_t ecx_6 = 0
    esi[3] = *(ebx + 0x18)
    int32_t edi_6 = 0
    *(ebx + 0x14) = 0
    *(ebx + 0x18) = 0
    
    if (*(ebx + 0x20) s> 0)
        int32_t* eax_25 = *(ebx + 0x1c) + 8
        int32_t i_5 = *(ebx + 0x20)
        int32_t i_1
        
        do
            int32_t edx_6 = *eax_25
            
            if (edx_6 != 0)
                ecx_6 += edx_6
                edi_6 += eax_25[2]
            else
                ecx_6 += 1
                edi_6 += 1
            
            eax_25 = &eax_25[5]
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
    
    esi[5] = ecx_6
    int32_t ecx_8 = ecx_6 * 0xa
    int32_t ecx_9 = ecx_8 * 2
    int128_t* eax_27
    
    if (ecx_8 != neg.d(ecx_8))
        int128_t* eax_29 = sub_4cce80(ecx_9)
        sub_5abfc0(eax_29, 0, ecx_9)
        eax_27 = eax_29
    else
        eax_27 = nullptr
    
    esi[7] = edi_6
    int32_t edi_8 = edi_6 * 0x60
    esi[4] = eax_27
    int128_t* eax_30
    
    if (edi_8 != 0)
        int128_t* eax_32 = sub_4cce80(edi_8)
        sub_5abfc0(eax_32, 0, edi_8)
        eax_30 = eax_32
    else
        eax_30 = nullptr
    
    esi[6] = eax_30
    int128_t* eax_33 = sub_4cce80(0x320)
    sub_5abfc0(eax_33, 0, 0x320)
    esi[8] = eax_33
    esi[9] = 0
    
    if ((data_316517c & 1) == 0)
        data_316517c.d |= 1
        int32_t var_c_3 = 1
        data_3165178 = sub_509140(3, &data_87df50)
        int32_t var_c_4 = 0xffffffff
    
    int32_t var_68 = 0
    int32_t var_60_2 = 0
    int32_t var_48 = 0
    
    if (*(ebx + 0x20) s> 0)
        int32_t var_44_4 = 0
        
        while (true)
            if (var_48 s>= *(arg1 + 0x20))
                sub_4c5870("mayaLayerIndex < pMayaDef->mLayerCount", &data_83f3d3, "Flanim.cpp", 0x671, 
                    "FlanimDefFromMayaDef")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* eax_37 = *(arg1 + 0x1c) + var_44_4
            int32_t ecx_11 = eax_37[2]
            
            if (ecx_11 != 0)
                int32_t var_4c_1 = 0
                
                if (ecx_11 s> 0)
                    int32_t edx_12 = var_68
                    int32_t* ebx_5 = nullptr
                    int32_t eax_45 = edx_12 * 0x14
                    int32_t var_54_1 = eax_45
                    
                    while (true)
                        if (edx_12 s>= arg2[5])
                            sub_4c5870("flanimLayerIndex < pFlanimDef->mLayerCount", &data_83f3d3, 
                                "Flanim.cpp", 0x685, "FlanimDefFromMayaDef")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int128_t** esi_8 = arg2[4] + eax_45
                        char* eax_47 = *eax_37
                        int128_t* var_3c_5 = eax_47
                        
                        if (eax_47 == 0)
                            sub_4c5870("pExistingString", &data_83f3d3, "Definition.cpp", 0x249, 
                                "DefDeepCopyString")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* edi_11 = &eax_47[1]
                        int32_t* ecx_14
                        
                        do
                            ecx_14.b = *eax_47
                            eax_47 = &eax_47[1]
                        while (ecx_14.b != 0)
                        int128_t* eax_50 = sub_4cce80(eax_47 - edi_11 + 1)
                        *esi_8 = eax_50
                        sub_5ab990(eax_50, var_3c_5, eax_47 - edi_11 + 1, eax_2)
                        esi_8[1] = *(ebx_5 + eax_37[1]) + var_60_2
                        var_68 += 1
                        var_54_1 += 0x14
                        esi_8[2] = *(ebx_5 + eax_37[1] + 4) + var_60_2
                        esi_8[3] = *(ebx_5 + eax_37[1] + 8) + var_60_2
                        int32_t ecx_18 = var_4c_1 + 1
                        esi_8[4] = *(ebx_5 + eax_37[1] + 0xc) + var_60_2
                        ebx_5 = &ebx_5[4]
                        var_4c_1 = ecx_18
                        
                        if (ecx_18 s>= eax_37[2])
                            break
                        
                        edx_12 = var_68
                        eax_45 = var_54_1
            else
                if (var_68 s>= arg2[5])
                    sub_4c5870("flanimLayerIndex < pFlanimDef->mLayerCount", &data_83f3d3, 
                        "Flanim.cpp", 0x676, "FlanimDefFromMayaDef")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int128_t* ebx_4 = *eax_37
                int128_t** esi_6 = arg2[4] + var_68 * 0x14
                
                if (ebx_4 == 0)
                    sub_4c5870("pExistingString", &data_83f3d3, "Definition.cpp", 0x249, 
                        "DefDeepCopyString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char* eax_38 = ebx_4
                void* edx_11 = &eax_38[1]
                int32_t ecx_13
                
                do
                    ecx_13.b = *eax_38
                    eax_38 = &eax_38[1]
                while (ecx_13.b != 0)
                int128_t* eax_41 = sub_4cce80(eax_38 - edx_11 + 1)
                *esi_6 = eax_41
                sub_5ab990(eax_41, ebx_4, eax_38 - edx_11 + 1, eax_2)
                var_68 += 1
                esi_6[1] = var_60_2
                esi_6[2] = var_60_2
                esi_6[3] = var_60_2
                esi_6[4] = var_60_2
            
            int32_t i_3 = 0
            
            if (eax_37[4] s> 0)
                int32_t* ecx_19 = eax_37
                int32_t var_4c_2 = var_60_2 * 0x60
                int32_t i_2 = 0
                
                do
                    int32_t* ecx_21 = ecx_19[3] + (i_2 << 3)
                    
                    if (i_2 + var_60_2 s>= arg2[7])
                        sub_4c5870("flanimVertexIndex < pFlanimDef->mVertexCount", &data_83f3d3, 
                            "Flanim.cpp", 0x697, "FlanimDefFromMayaDef")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* edx_25 = nullptr
                    int32_t* esi_10 = arg2[6] + var_4c_2
                    int32_t var_28_1 = 0x3f800000
                    int32_t var_24_1 = 0x3f800000
                    void* j = nullptr
                    int32_t var_20_1 = 0
                    int32_t var_1c_1 = 0
                    int32_t var_40_1 = 0xffffffff
                    var_5c = nullptr
                    int32_t var_3c_6
                    __builtin_memset(&var_3c_6, 0, 0x14)
                    
                    if (ecx_21[1] s> 0)
                        long double x87_r7_5 = fconvert.t(12345f)
                        int32_t var_54_2 = 0
                        
                        do
                            edx_25 = *ecx_21 + var_54_2
                            long double x87_r6_2 = fconvert.t(*edx_25)
                            x87_r7_5 - x87_r6_2
                            int32_t eax_57
                            eax_57.w = (x87_r7_5 < x87_r6_2 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_5, x87_r6_2) ? 1 : 0) << 0xa
                                | (x87_r7_5 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
                            bool p_2 = unimplemented  {test ah, 0x44}
                            int32_t var_38_1
                            int32_t var_34_1
                            
                            if (not(p_2))
                                *edx_25 = var_38_1
                                *(edx_25 + 4) = var_34_1
                            else
                                var_38_1 = *edx_25
                                var_34_1 = *(edx_25 + 4)
                            long double x87_r6_3 = fconvert.t(*(edx_25 + 8))
                            x87_r7_5 - x87_r6_3
                            int32_t eax_59
                            eax_59.w = (x87_r7_5 < x87_r6_3 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_5, x87_r6_3) ? 1 : 0) << 0xa
                                | (x87_r7_5 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800
                            bool p_3 = unimplemented  {test ah, 0x44}
                            int32_t var_30_1
                            int32_t var_2c_1
                            
                            if (not(p_3))
                                *(edx_25 + 8) = var_30_1
                                *(edx_25 + 0xc) = var_2c_1
                            else
                                var_30_1 = *(edx_25 + 8)
                                var_2c_1 = *(edx_25 + 0xc)
                            long double x87_r6_4 = fconvert.t(*(edx_25 + 0x10))
                            x87_r7_5 - x87_r6_4
                            int32_t eax_62
                            eax_62.w = (x87_r7_5 < x87_r6_4 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_5, x87_r6_4) ? 1 : 0) << 0xa
                                | (x87_r7_5 == x87_r6_4 ? 1 : 0) << 0xe | 0x3800
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_4))
                                *(edx_25 + 0x10) = var_28_1
                                *(edx_25 + 0x14) = var_24_1
                            else
                                var_28_1 = *(edx_25 + 0x10)
                                var_24_1 = *(edx_25 + 0x14)
                            
                            long double x87_r6_5 = fconvert.t(*(edx_25 + 0x18))
                            x87_r7_5 - x87_r6_5
                            int32_t eax_65
                            eax_65.w = (x87_r7_5 < x87_r6_5 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_5, x87_r6_5) ? 1 : 0) << 0xa
                                | (x87_r7_5 == x87_r6_5 ? 1 : 0) << 0xe | 0x3800
                            bool p_5 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_5))
                                *(edx_25 + 0x18) = var_20_1
                                *(edx_25 + 0x1c) = var_1c_1
                            else
                                var_20_1 = *(edx_25 + 0x18)
                                var_1c_1 = *(edx_25 + 0x1c)
                            
                            if (*(edx_25 + 0x20) != 0 || *(edx_25 + 0x21) != 0 || *(edx_25 + 0x22) != 0
                                    || *(edx_25 + 0x23) != 0)
                                var_40_1 = *(edx_25 + 0x20)
                            else
                                *(edx_25 + 0x20) = var_40_1
                            
                            if (*(edx_25 + 0x24) != 0 || *(edx_25 + 0x25) != 0 || *(edx_25 + 0x26) != 0
                                    || *(edx_25 + 0x27) != 0xff)
                                var_5c = *(edx_25 + 0x24)
                            else
                                *(edx_25 + 0x24) = var_5c
                            
                            eax_57 = *(edx_25 + 0x28)
                            
                            if (eax_57 == data_3165178)
                                *(edx_25 + 0x28) = var_3c_6
                            else
                                var_3c_6 = eax_57
                            
                            var_54_2 += 0x30
                            j += 1
                        while (j s< ecx_21[1])
                    
                    sub_4ea0a0(esi_10, edx_25, ecx_21, arg2)
                    ecx_19 = eax_37
                    var_4c_2 += 0x60
                    i_2 = i_3 + 1
                    i_3 = i_2
                while (i_2 s< ecx_19[4])
            
            var_60_2 += eax_37[4]
            var_44_4 += 0x14
            int32_t eax_78 = var_48 + 1
            var_48 = eax_78
            
            if (eax_78 s>= *(arg1 + 0x20))
                esi = arg2
                break
    
    if (esi[9] == 0)
        int32_t eax_79 = esi[8]
        
        if (eax_79 != 0)
            _aligned_free_base(eax_79)
        
        esi[8] = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
}
