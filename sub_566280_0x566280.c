// 函数名称: sub_566280
// 虚拟地址: 0x566280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __fastcallsub_566280(int32_t* arg1, int32_t** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_69242c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_f4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = arg1
    int32_t* var_9c = ebx
    int32_t i = 0
    int32_t var_8_1 = 0
    int32_t* i_5 = *ebx
    sub_4c5680("AtlasMaker: making page %s")
    int32_t var_e4
    i_5 = &var_e4
    QueryPerformanceCounter(i_5)
    int32_t var_cc = var_e4
    int32_t* i_6 = nullptr
    int32_t var_ac = 0
    void* var_a8 = nullptr
    var_8_1.b = 2
    int16_t top
    
    if (ebx[2] s> 0)
        do
            char* eax_5 = *(ebx[1] + (i << 2))
            i_5 = &i_6
            sub_565f70(eax_5, arg2, i_5)
            top -= 1
            unimplemented  {call 0x565f70}
            i += 1
        while (i s< ebx[2])
    
    char* result
    char* lpFileName_5
    char* result_1
    void* eax_7
    int32_t* i_16
    int32_t* edi_4
    
    if (ebx[2] s> 0 && var_a8 s> 0)
        int32_t var_a4 = 0
        int32_t var_a0_1 = 0
        int32_t* lpFileName_4 = nullptr
        
        while (true)
            char* result_2 = result_1
            
            if (result_2 == 0)
                result_2 = &data_83f3d3
            
            int32_t edx_2 = *ebx
            i_5 = lpFileName_4
            int32_t var_fc_2 = edx_2
            char* result_5 = result_2
            char* lpFileName_3
            sub_4c4a50(&lpFileName_3, "%s-%s-%d.png")
            char* lpFileName = lpFileName_3
            
            if (lpFileName == 0)
                lpFileName = &data_83f3d3
            
            void var_80
            i_5 = &var_80
            BOOL eax_13
            int32_t ecx_6
            eax_13, ecx_6 = GetFileAttributesExA(lpFileName, GetFileExInfoStandard, i_5)
            
            if (eax_13 == 0)
                var_8_1.b = 2
                char* lpFileName_9 = lpFileName_3
                
                if (lpFileName_9 != 0 && *lpFileName_9 != 0)
                    if (*(lpFileName_9 - 0x10) != 0xfafafafa)
                        i_5 = "XStringMagicDataStructFromCharPtr"
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, i_5)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp5_1 = *(lpFileName_9 - 0xc)
                    *(lpFileName_9 - 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        void* edi_7 = data_26a44e4
                        int32_t* i_18 = *(lpFileName_9 - 4) + 0x10
                        
                        if (edi_7 == 0)
                            sub_4f4250()
                            edi_7 = data_26a44e4
                        
                        int32_t edx_5 = 0
                        int32_t* edi_8
                        
                        while (true)
                            if (i_18 s<= 1 << (edx_5.b + 4))
                                edi_8 = edi_7 + edx_5 * 0x14
                                break
                            
                            edx_5 += 1
                            
                            if (edx_5 s>= 7)
                                edi_8 = edi_7 + 0x8c
                                break
                        
                        i_5 = i_18
                        sub_4f4430(&lpFileName_9[0xfffffff0], edi_8, i_5)
                
                break
            
            int32_t var_6c
            int32_t var_68
            
            if (var_68 u>= var_a0_1 && (var_68 u> var_a0_1 || var_6c u> var_a4))
                var_a4 = var_6c
                var_a0_1 = var_68
            
            var_8_1.b = 2
            char* lpFileName_7 = lpFileName_3
            
            if (lpFileName_7 != 0 && *lpFileName_7 != 0)
                if (*(lpFileName_7 - 0x10) != 0xfafafafa)
                    i_5 = "XStringMagicDataStructFromCharPtr"
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, i_5)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp7_1 = *(lpFileName_7 - 0xc)
                *(lpFileName_7 - 0xc) -= 1
                
                if (temp7_1 == 1)
                    void* edi_5 = data_26a44e4
                    int32_t* i_17 = *(lpFileName_7 - 4) + 0x10
                    
                    if (edi_5 == 0)
                        sub_4f4250()
                        edi_5 = data_26a44e4
                    
                    int32_t edx_3 = 0
                    int32_t* edi_6
                    
                    while (true)
                        if (i_17 s<= 1 << (edx_3.b + 4))
                            edi_6 = edi_5 + edx_3 * 0x14
                            break
                        
                        edx_3 += 1
                        
                        if (edx_3 s>= 7)
                            edi_6 = edi_5 + 0x8c
                            break
                    
                    i_5 = i_17
                    sub_4f4430(&lpFileName_7[0xfffffff0], edi_6, i_5)
            
            void* lpFileName_8 = lpFileName_4 + 1
            lpFileName_4 = lpFileName_8
            
            if (lpFileName_8 s>= 0x64)
                break
            
            ebx = var_9c
        
        int32_t ebx_3 = var_a0_1
        int32_t* i_19 = i_6
        
        if (ebx_3 != 0 || var_a4 u> 0)
            char* lpFileName_1 = lpFileName_5
            
            if (lpFileName_1 == 0)
                lpFileName_1 = &data_83f3d3
            
            void var_5c
            i_5 = &var_5c
            
            if (GetFileAttributesExA(lpFileName_1, GetFileExInfoStandard, i_5) == 0)
                goto label_5667f8
            
            char var_8d_1 = 1
            int32_t var_48
            int32_t var_44
            
            if (var_44 u>= ebx_3 && (var_44 u> ebx_3 || var_48 u>= var_a4))
                i_5 = "AtlasMaker: rebuilding page because atlasmaker file is new"
                sub_4c5680(i_5)
                var_8d_1 = 0
            
            int32_t* i_31 = i_19
            
            if (i_19 != 0)
                while (true)
                    int32_t* i_20 = *i_31
                    i_31 = i_31[1]
                    
                    if (i_20[2] != 0)
                        i_5 = i_20
                        char eax_25
                        int32_t edx_6
                        eax_25, edx_6 = sub_5204e0(i_5)
                        
                        if (eax_25 != 0)
                            int32_t* i_22 = i_20[8]
                            
                            if (i_22 == 0)
                                i_22 = &data_83f3d3
                            
                            i_5 = i_22
                            sub_4c5680("AtlasMaker: rebuilding page for: '%s'")
                            goto label_5667f8
                        
                        char* eax_26 = i_20[8]
                        
                        if (eax_26 == 0)
                            eax_26 = &data_83f3d3
                        
                        i_5 = &lpFileName_4
                        sub_51f490(eax_26, edx_6, eax_26, i_5)
                        int32_t* lpFileName_2 = lpFileName_4
                        
                        if (lpFileName_2 == 0)
                            lpFileName_2 = &data_83f3d3
                        
                        void var_38
                        i_5 = &var_38
                        char const* const var_fc_3
                        
                        if (GetFileAttributesExA(lpFileName_2, GetFileExInfoStandard, i_5) == 0)
                            int32_t* i_29 = i_20[8]
                            int32_t* i_8 = &data_83f3d3
                            
                            if (i_29 != 0)
                                i_8 = i_29
                            
                            i_5 = i_8
                            var_fc_3 = "AtlasMaker: rebuilding page because no xbin for: '%s'"
                        label_56687e:
                            sub_4c5680(var_fc_3)
                            var_8_1.b = 2
                            int32_t* lpFileName_10 = lpFileName_4
                            
                            if (lpFileName_10 != 0 && *lpFileName_10 != 0)
                                void* eax_40 = sub_4c4060(&lpFileName_4)
                                int32_t temp9_1 = *(eax_40 + 4)
                                *(eax_40 + 4) -= 1
                                
                                if (temp9_1 == 1)
                                    int32_t* i_23 = *(eax_40 + 0xc) + 0x10
                                    int32_t* eax_41 = sub_4f4380(i_23)
                                    i_5 = i_23
                                    sub_4f4430(eax_40, eax_41, i_5)
                            
                            goto label_5667f8
                        
                        int32_t var_24
                        int32_t var_20
                        
                        if (var_20 u> ebx_3 || (var_20 u>= ebx_3 && var_24 u>= var_a4))
                            int32_t* i_30 = i_20[8]
                            int32_t* i_9 = &data_83f3d3
                            
                            if (i_30 != 0)
                                i_9 = i_30
                            
                            i_5 = i_9
                            var_fc_3 = "AtlasMaker: rebuilding page because image is new: '%s'"
                            goto label_56687e
                        
                        var_8_1.b = 2
                        int32_t* lpFileName_12 = lpFileName_4
                        
                        if (lpFileName_12 != 0 && *lpFileName_12 != 0)
                            if (lpFileName_12[-4] != 0xfafafafa)
                                i_5 = "XStringMagicDataStructFromCharPtr"
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, i_5)
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t temp10_1 = lpFileName_12[-3]
                            lpFileName_12[-3] -= 1
                            
                            if (temp10_1 == 1)
                                int32_t edi_10 = lpFileName_12[-1] + 0x10
                                
                                if (data_26a44e4 == 0)
                                    sub_4f4250()
                                
                                int32_t edx_7 = 0
                                void** ebx_5
                                
                                while (true)
                                    if (edi_10 s<= 1 << (edx_7.b + 4))
                                        ebx_5 = data_26a44e4 + edx_7 * 0x14
                                        break
                                    
                                    edx_7 += 1
                                    
                                    if (edx_7 s>= 7)
                                        ebx_5 = data_26a44e4 + 0x8c
                                        break
                                
                                ebx_5[3] -= 1
                                
                                if (edi_10 s<= 0x400 || ebx_5[4] != 0xffffffff)
                                    int32_t eax_30 = ebx_5[4]
                                    int32_t* edi_11 = ebx_5[1]
                                    void* edx_10 = ebx_5[2] * eax_30
                                    void* var_88_1 = edx_10
                                    
                                    if (edi_11 == 0)
                                    label_566912:
                                        i_5 = "XAllocator::Free"
                                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                            "c:\ax2010\engine\xAlloc.h", 0x81, i_5)
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    while (true)
                                        int32_t* eax_35 = *edi_11
                                        void* ecx_14 = &edi_11[1]
                                        int32_t* var_94_1 = eax_35
                                        edi_11 = eax_35
                                        
                                        if (&lpFileName_12[-4] u>= ecx_14
                                                && &lpFileName_12[-4] u< edx_10 + ecx_14)
                                            if (mods.dp.d(sx.q(&lpFileName_12[-4] - ecx_14), eax_30)
                                                    == 0)
                                                lpFileName_12[-4] = *ebx_5
                                                *ebx_5 = &lpFileName_12[-4]
                                                break
                                            
                                            eax_35 = edi_11
                                        
                                        if (eax_35 == 0)
                                            goto label_566912
                                        
                                        edx_10 = var_88_1
                                else
                                    i_5 = &lpFileName_12[-4]
                                    _aligned_free_base(i_5)
                    else
                        char* const i_21 = i_20[8]
                        
                        if (i_21 == 0)
                            i_21 = &data_83f3d3
                        
                        i_5 = i_21
                        sub_4c5680("AtlasMaker: unknown asset '%s'")
                    
                    if (i_31 == 0)
                        break
                    
                    ebx_3 = var_a0_1
            
            if (var_8d_1 == 0)
                goto label_5667f8
            
            i_5 = "AtlasMaker: atlas is up to date."
            sub_4c5680(i_5)
            i_5 = &i_6
            var_8_1.b = 1
            sub_5041e0(i_5)
            var_8_1.b = 0
            char* lpFileName_11 = lpFileName_5
            
            if (lpFileName_11 == 0 || *lpFileName_11 == 0)
                goto label_566393
            
            eax_7 = sub_4c4060(&lpFileName_5)
            goto label_566377
        
    label_5667f8:
        int32_t* i_25 = var_a8 * 4
        
        if (data_26a44e4 == 0)
            sub_4f4250()
        
        int32_t edx_14 = 0
        int32_t* esi_6
        
        while (true)
            if (i_25 s<= 1 << (edx_14.b + 4))
                esi_6 = data_26a44e4 + edx_14 * 0x14
                break
            
            edx_14 += 1
            
            if (edx_14 s>= 7)
                esi_6 = data_26a44e4 + 0x8c
                break
        
        esi_6[3] += 1
        int128_t* i_32
        
        if (i_25 s<= 0x400 || esi_6[4] != 0xffffffff)
            if (*esi_6 == 0)
                sub_4f4170(esi_6)
            
            int128_t* i_40 = *esi_6
            int32_t ecx_17 = *i_40
            i_5 = i_25
            *esi_6 = ecx_17
            sub_5abfc0(i_40, 0, i_5)
            i_32 = i_40
        else
            int128_t* i_38 = sub_4cce80(i_25)
            i_5 = i_25
            sub_5abfc0(i_38, 0, i_5)
            i_32 = i_38
        
        int32_t ebx_6 = 0
        int128_t* i_28 = i_32
        int32_t var_bc_1 = 0
        var_8_1.b = 5
        
        if (data_26a44e4 == 0)
            sub_4f4250()
        
        int32_t edx_17 = 0
        int32_t* esi_10
        
        while (true)
            if (i_25 s<= 1 << (edx_17.b + 4))
                esi_10 = data_26a44e4 + edx_17 * 0x14
                break
            
            edx_17 += 1
            
            if (edx_17 s>= 7)
                esi_10 = data_26a44e4 + 0x8c
                break
        
        esi_10[3] += 1
        int128_t* i_33
        
        if (i_25 s<= 0x400 || esi_10[4] != 0xffffffff)
            if (*esi_10 == 0)
                sub_4f4170(esi_10)
            
            int128_t* i_41 = *esi_10
            int32_t eax_50 = *i_41
            i_5 = i_25
            *esi_10 = eax_50
            sub_5abfc0(i_41, 0, i_5)
            i_33 = i_41
            ebx_6 = var_bc_1
        else
            int128_t* i_39 = sub_4cce80(i_25)
            i_5 = i_25
            sub_5abfc0(i_39, 0, i_5)
            i_33 = i_39
        
        int128_t* i_27 = i_33
        int32_t var_d4_1 = 0
        var_8_1.b = 6
        int32_t* i_1 = i_6
        
        while (i_1 != 0)
            int32_t* i_26 = *i_1
            i_1 = i_1[1]
            i_5 = i_26
            
            if (sub_566150(i_5) != 0)
                if (ebx_6 s>= var_a8)
                    i_5 = "XArray<struct XAsset *>::Append"
                    sub_4c5870("mSize < mSizeReserved", &data_83f3d3, "c:\ax2010\engine\xArray.h", 
                        0x96, i_5)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* eax_52 = i_32 + (ebx_6 << 2)
                
                if (eax_52 != 0)
                    *eax_52 = i_26
                
                ebx_6 += 1
                int32_t var_bc_2 = ebx_6
        
        i_5 = &var_a4
        QueryPerformanceCounter(i_5)
        int32_t esi_12 = var_a4
        int32_t esi_13 = esi_12 - var_cc
        int32_t var_e0
        int32_t edi_17 = sbb.d(var_a0_1, var_e0, esi_12 u< var_cc)
        
        if ((data_3160a20 & 1) == 0)
            data_3160a20.d |= 1
            i_5 = &var_cc
            QueryPerformanceFrequency(i_5)
            data_3160a18 = var_cc
            data_3160a1c = var_e0
        
        i_5 = nullptr
        int32_t eax_54
        uint32_t edx_21
        eax_54, edx_21 = __allmul(esi_13, edi_17, 0x3e8, i_5)
        i_5 = data_3160a1c
        i_5 = __aulldiv(eax_54, edx_21, data_3160a18, i_5)
        int32_t* i_12 = sub_4c5680("AtlasMaker: match and load assets time %d ms")
        int32_t* ebx_7 = &i_28
        int32_t* esi_14 = &i_27
        char** i_2
        
        for (i_2 = nullptr; i_2 s< 0x64; )
            char* edx_22 = result_1
            i_5 = i_12
            i_5 = edx_22
            char* result_3 = result_1
            int32_t** var_88_2 = &i_5
            
            if (result_3 != 0 && *result_3 != 0)
                if (*(result_3 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                *(result_3 - 0xc) += 1
            
            i_12 = sub_565580(result_3, var_9c, esi_14, i_2, ebx_7, i_5)
            top -= 1
            unimplemented  {call 0x565580}
            
            if (esi_14[1] == 0)
                break
            
            int32_t* eax_56 = ebx_7
            i_2 += 1
            ebx_7 = esi_14
            esi_14 = eax_56
            eax_56[1] = 0
        
        void* i_3 = i_2 + 1
        void* i_7 = i_3
        
        while (i_3 s< 0x64)
            char* result_4 = result_1
            
            if (result_4 == 0)
                result_4 = &data_83f3d3
            
            int32_t edx_24 = *var_9c
            i_5 = i_3
            int32_t var_fc_6 = edx_24
            char* result_6 = result_4
            sub_4c4a50(&lpFileName_4, "%s-%s-%d.png")
            int32_t* eax_57 = lpFileName_4
            
            if (eax_57 == 0)
                eax_57 = &data_83f3d3
            
            i_5 = eax_57
            
            if (GetFileAttributesA(i_5) == 0xffffffff)
                var_8_1.b = 6
                int32_t* lpFileName_14 = lpFileName_4
                
                if (lpFileName_14 != 0 && *lpFileName_14 != 0)
                    if (lpFileName_14[-4] != 0xfafafafa)
                        i_5 = "XStringMagicDataStructFromCharPtr"
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, i_5)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp15_1 = lpFileName_14[-3]
                    lpFileName_14[-3] -= 1
                    
                    if (temp15_1 == 1)
                        int32_t edi_25 = lpFileName_14[-1] + 0x10
                        
                        if (data_26a44e4 == 0)
                            sub_4f4250()
                        
                        int32_t edx_35 = 0
                        void** ebx_13
                        
                        while (true)
                            if (edi_25 s<= 1 << (edx_35.b + 4))
                                ebx_13 = data_26a44e4 + edx_35 * 0x14
                                break
                            
                            edx_35 += 1
                            
                            if (edx_35 s>= 7)
                                ebx_13 = data_26a44e4 + 0x8c
                                break
                        
                        ebx_13[3] -= 1
                        
                        if (edi_25 s<= 0x400 || ebx_13[4] != 0xffffffff)
                            int32_t eax_82 = ebx_13[4]
                            int32_t* edi_26 = ebx_13[1]
                            void* edx_38 = ebx_13[2] * eax_82
                            void* var_88_5 = edx_38
                            
                            if (edi_26 == 0)
                            label_567062:
                                i_5 = "XAllocator::Free"
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, i_5)
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            while (true)
                                int32_t* eax_87 = *edi_26
                                void* ecx_37 = &edi_26[1]
                                int32_t* var_98_3 = eax_87
                                edi_26 = eax_87
                                
                                if (&lpFileName_14[-4] u>= ecx_37
                                        && &lpFileName_14[-4] u< edx_38 + ecx_37)
                                    if (mods.dp.d(sx.q(&lpFileName_14[-4] - ecx_37), eax_82) == 0)
                                        lpFileName_14[-4] = *ebx_13
                                        *ebx_13 = &lpFileName_14[-4]
                                        break
                                    
                                    eax_87 = edi_26
                                
                                if (eax_87 == 0)
                                    goto label_567062
                                
                                edx_38 = var_88_5
                        else
                            i_5 = &lpFileName_14[-4]
                            _aligned_free_base(i_5)
                
                break
            
            int32_t* eax_59 = lpFileName_4
            
            if (eax_59 == 0)
                eax_59 = &data_83f3d3
            
            i_5 = eax_59
            sub_5a9d3d()
            var_8_1.b = 6
            int32_t* lpFileName_13 = lpFileName_4
            
            if (lpFileName_13 != 0 && *lpFileName_13 != 0)
                if (lpFileName_13[-4] != 0xfafafafa)
                    i_5 = "XStringMagicDataStructFromCharPtr"
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, i_5)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp16_1 = lpFileName_13[-3]
                lpFileName_13[-3] -= 1
                
                if (temp16_1 == 1)
                    int32_t edi_19 = lpFileName_13[-1] + 0x10
                    
                    if (data_26a44e4 == 0)
                        sub_4f4250()
                    
                    int32_t edx_25 = 0
                    void** ebx_9
                    
                    while (true)
                        if (edi_19 s<= 1 << (edx_25.b + 4))
                            ebx_9 = data_26a44e4 + edx_25 * 0x14
                            break
                        
                        edx_25 += 1
                        
                        if (edx_25 s>= 7)
                            ebx_9 = data_26a44e4 + 0x8c
                            break
                    
                    ebx_9[3] -= 1
                    
                    if (edi_19 s<= 0x400 || ebx_9[4] != 0xffffffff)
                        int32_t eax_63 = ebx_9[4]
                        int32_t* edi_20 = ebx_9[1]
                        void* edx_28 = ebx_9[2] * eax_63
                        void* var_98_2 = edx_28
                        
                        if (edi_20 == 0)
                        label_5670ce:
                            i_5 = "XAllocator::Free"
                            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                "c:\ax2010\engine\xAlloc.h", 0x81, i_5)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        while (true)
                            int32_t* eax_68 = *edi_20
                            void* ecx_27 = &edi_20[1]
                            int32_t* var_94_2 = eax_68
                            edi_20 = eax_68
                            
                            if (&lpFileName_13[-4] u>= ecx_27 && &lpFileName_13[-4] u< edx_28 + ecx_27)
                                if (mods.dp.d(sx.q(&lpFileName_13[-4] - ecx_27), eax_63) == 0)
                                    lpFileName_13[-4] = *ebx_9
                                    *ebx_9 = &lpFileName_13[-4]
                                    break
                                
                                eax_68 = edi_20
                            
                            if (eax_68 == 0)
                                goto label_5670ce
                            
                            edx_28 = var_98_2
                    else
                        i_5 = &lpFileName_13[-4]
                        _aligned_free_base(i_5)
                    
                    i_3 = i_7
            
            i_3 += 1
            i_7 = i_3
        
        int32_t* i_4 = i_6
        
        while (i_4 != 0)
            int32_t* i_10 = *i_4
            i_4 = i_4[1]
            
            if (i_10[2] != 4 && i_10[1] == 0x12)
                i_5 = i_10
                void* eax_70 = sub_466320(i_5)
                void* var_88_4 = eax_70
                int32_t j_1 = 0
                
                if (*(eax_70 + 0x14) s> 0)
                    int32_t var_9c_1 = 0
                    int32_t j
                    
                    do
                        int32_t* esi_17 = *(eax_70 + 0x18) + var_9c_1
                        int32_t* i_11 = *esi_17
                        
                        if (i_11[1] != 3)
                            i_5 = "TextureGetDef"
                            sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                                "c:\ax2010\engine\Texture.h", 0x83, i_5)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        i_5 = i_11
                        *(*sub_466320(i_5) + 0x28) = 1
                        int32_t* i_24 = *esi_17
                        
                        if (i_24[1] != 3)
                            i_5 = "TextureGetDef"
                            sub_4c5870("assetPtr->assetType == ASSET_TYPE_TEXTURE", &data_83f3d3, 
                                "c:\ax2010\engine\Texture.h", 0x83, i_5)
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        i_5 = i_24
                        int32_t* edi_21 = *sub_466320(i_5)
                        int32_t edx_32 = *(data_30d746c + 8)
                        int32_t eax_75 = neg.d(edx_32)
                        int32_t eax_78 = neg.d(sbb.d(eax_75, eax_75, edx_32 != 0)) - 1
                        int32_t* ecx_32
                        
                        do
                            if (eax_78 == 0xffffffff)
                                i_5 = "DefFindField"
                                sub_4c5870("Halt", &data_83f3d3, "Definition.cpp", 0x469, i_5)
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t ecx_31 = eax_78 * 0xf
                            eax_78 += 1
                            ecx_32 = *(data_30d746c + 4) + (ecx_31 << 2)
                            
                            if (eax_78 s>= edx_32)
                                eax_78 = 0xffffffff
                        while (*ecx_32 != 0x3c)
                        
                        sub_4feb10(nullptr, edi_21, ecx_32)
                        i_5 = i_24
                        edi_21[0xd] = 0
                        edi_21[0xf] = 0
                        sub_4cf840()
                        eax_70 = var_88_4
                        var_9c_1 += 0x1c
                        j = j_1 + 1
                        j_1 = j
                    while (j s< *(eax_70 + 0x14))
        
        var_8_1.b = 5
        
        if (data_26a44e4 != 0)
            int128_t* i_13 = i_27
            
            if (i_13 != 0)
                int32_t esi_20 = var_a8 * 4
                int32_t edx_34 = 0
                int128_t** edi_23
                
                while (true)
                    if (esi_20 s<= 1 << (edx_34.b + 4))
                        edi_23 = data_26a44e4 + edx_34 * 0x14
                        break
                    
                    edx_34 += 1
                    
                    if (edx_34 s>= 7)
                        edi_23 = data_26a44e4 + 0x8c
                        break
                
                edi_23[3] -= 1
                
                if (esi_20 s<= 0x400 || edi_23[4] != 0xffffffff)
                    int32_t* esi_22 = edi_23[1]
                    
                    if (esi_22 == 0)
                    label_5671eb:
                        i_5 = "XAllocator::Free"
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, i_5)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        int128_t* i_34 = i_27
                        int32_t* ebx_15 = *esi_22
                        void* ecx_38 = &esi_22[1]
                        esi_22 = ebx_15
                        
                        if (i_34 u>= ecx_38 && i_34 u< edi_23[2] * edi_23[4] + ecx_38)
                            edi_23[4]
                            
                            if (mods.dp.d(sx.q(i_34 - ecx_38), edi_23[4]) == 0)
                                int128_t* i_35 = i_27
                                *i_35 = *edi_23
                                *edi_23 = i_35
                                break
                        
                        if (ebx_15 == 0)
                            goto label_5671eb
                else
                    i_5 = i_13
                    _aligned_free_base(i_5)
        
        var_8_1.b = 2
        
        if (data_26a44e4 != 0)
            int128_t* i_14 = i_28
            
            if (i_14 != 0)
                int32_t esi_25 = var_a8 * 4
                int32_t edx_47 = 0
                int128_t** edi_28
                
                while (true)
                    if (esi_25 s<= 1 << (edx_47.b + 4))
                        edi_28 = data_26a44e4 + edx_47 * 0x14
                        break
                    
                    edx_47 += 1
                    
                    if (edx_47 s>= 7)
                        edi_28 = data_26a44e4 + 0x8c
                        break
                
                edi_28[3] -= 1
                
                if (esi_25 s<= 0x400 || edi_28[4] != 0xffffffff)
                    int32_t* esi_26 = edi_28[1]
                    
                    if (esi_26 == 0)
                    label_5672eb:
                        i_5 = "XAllocator::Free"
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, i_5)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        int128_t* i_36 = i_28
                        int32_t* ebx_16 = *esi_26
                        void* ecx_41 = &esi_26[1]
                        esi_26 = ebx_16
                        
                        if (i_36 u>= ecx_41 && i_36 u< edi_28[2] * edi_28[4] + ecx_41)
                            edi_28[4]
                            
                            if (mods.dp.d(sx.q(i_36 - ecx_41), edi_28[4]) == 0)
                                int128_t* i_37 = i_28
                                *i_37 = *edi_28
                                *edi_28 = i_37
                                break
                        
                        if (ebx_16 == 0)
                            goto label_5672eb
                else
                    i_5 = i_14
                    _aligned_free_base(i_5)
        
        i_5 = &i_6
        var_8_1.b = 1
        sub_5041e0(i_5)
        var_8_1.b = 0
        char* lpFileName_15 = lpFileName_5
        
        if (lpFileName_15 != 0 && *lpFileName_15 != 0)
            if (*(lpFileName_15 - 0x10) != 0xfafafafa)
                i_5 = "XStringMagicDataStructFromCharPtr"
                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                    "xString.cpp", 0x20, i_5)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t temp14_1 = *(lpFileName_15 - 0xc)
            *(lpFileName_15 - 0xc) -= 1
            
            if (temp14_1 == 1)
                void* ebx_17 = data_26a44e4
                int32_t edi_30 = *(lpFileName_15 - 4) + 0x10
                
                if (ebx_17 == 0)
                    sub_4f4250()
                    ebx_17 = data_26a44e4
                
                int32_t edx_53 = 0
                void** ebx_18
                
                while (true)
                    if (edi_30 s<= 1 << (edx_53.b + 4))
                        ebx_18 = ebx_17 + edx_53 * 0x14
                        break
                    
                    edx_53 += 1
                    
                    if (edx_53 s>= 7)
                        ebx_18 = ebx_17 + 0x8c
                        break
                
                ebx_18[3] -= 1
                
                if (edi_30 s<= 0x400 || ebx_18[4] != 0xffffffff)
                    int32_t eax_113 = ebx_18[4]
                    int32_t* edi_31 = ebx_18[1]
                    void* edx_55 = ebx_18[2] * eax_113
                    void* var_88_8 = edx_55
                    
                    if (edi_31 == 0)
                    label_567444:
                        i_5 = "XAllocator::Free"
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, i_5)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        int32_t* eax_118 = *edi_31
                        void* ecx_44 = &edi_31[1]
                        int32_t* var_98_4 = eax_118
                        edi_31 = eax_118
                        
                        if (&lpFileName_15[0xfffffff0] u>= ecx_44
                                && &lpFileName_15[0xfffffff0] u< edx_55 + ecx_44)
                            if (mods.dp.d(sx.q(&lpFileName_15[0xfffffff0] - ecx_44), eax_113) == 0)
                                *(lpFileName_15 - 0x10) = *ebx_18
                                *ebx_18 = &lpFileName_15[0xfffffff0]
                                break
                            
                            eax_118 = edi_31
                        
                        if (eax_118 == 0)
                            goto label_567444
                        
                        edx_55 = var_88_8
                else
                    i_5 = &lpFileName_15[0xfffffff0]
                    _aligned_free_base(i_5)
        
        int32_t var_8_3 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp13_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp13_1 == 1)
                void* edx_59 = data_26a44e4
                i_16 = *(result + 0xc) + 0x10
                
                if (edx_59 == 0)
                    sub_4f4250()
                    edx_59 = data_26a44e4
                
                int32_t eax_122 = 0
                
                while (true)
                    if (i_16 s<= 1 << (eax_122.b + 4))
                        edi_4 = edx_59 + eax_122 * 0x14
                        break
                    
                    eax_122 += 1
                    
                    if (eax_122 s>= 7)
                        edi_4 = edx_59 + 0x8c
                        break
                
                i_5 = i_16
                result = sub_4f4430(result, edi_4, i_5)
    else
        i_5 = *ebx
        sub_4c5680("AtlasMaker: not enough textures for atlas page: '%s'")
        i_5 = &i_6
        var_8_1.b = 1
        sub_5041e0(i_5)
        var_8_1.b = 0
        char* lpFileName_6 = lpFileName_5
        
        if (lpFileName_6 != 0 && *lpFileName_6 != 0)
            eax_7 = sub_4c4060(&lpFileName_5)
        label_566377:
            int32_t temp3_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t* i_15 = *(eax_7 + 0xc) + 0x10
                int32_t* eax_8 = sub_4f4380(i_15)
                i_5 = i_15
                sub_4f4430(eax_7, eax_8, i_5)
            
            goto label_566393
        
    label_566393:
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                i_16 = *(result + 0xc) + 0x10
                edi_4 = sub_4f4380(i_16)
                i_5 = i_16
                result = sub_4f4430(result, edi_4, i_5)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
