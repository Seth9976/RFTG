// 函数名称: sub_5138e0
// 虚拟地址: 0x5138e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_5138e0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68ffe0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_58 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* arg_4
    void* eax_3 = arg_4
    char* const edi = &data_83f3d3
    char* const var_18 = &data_83f3d3
    int32_t var_8_1 = 0
    int32_t ebx = *(eax_3 + 0x104)
    void* i = ebx - 1
    void* i_7 = i
    void* var_20
    
    if (ebx - 1 s>= 0)
        void* eax_4 = eax_3 + (i << 3) + 8
        var_20 = eax_4
        
        do
            char* esi_1 = *eax_4
            
            if (esi_1 != 0 && *esi_1 != 0)
                char j
                
                if (edi == 0 || *edi == 0)
                    char* eax_5 = esi_1
                    void* edx_1 = &eax_5[1]
                    
                    do
                        j = *eax_5
                        eax_5 = &eax_5[1]
                    while (j != 0)
                    
                    char* const* var_5c_1 = &var_18
                    sub_4c40c0(eax_5 - edx_1, edx_1)
                    edi = var_18
                    char* eax_7 = esi_1
                    
                    do
                        j = *eax_7
                        eax_7[edi - esi_1] = j
                        eax_7 = &eax_7[1]
                    while (j != 0)
                else
                    void* ebx_1 = *(sub_4c4060(&var_18) + 8)
                    char* eax_10 = esi_1
                    void** edx_4 = &eax_10[1]
                    
                    do
                        j = *eax_10
                        eax_10 = &eax_10[1]
                    while (j != 0)
                    
                    void* eax_11 = eax_10 - edx_4
                    void** eax_12 = eax_11 + ebx_1
                    sub_4c4160(eax_12, edx_4, &var_18, eax_12, 1)
                    edi = var_18
                    sub_5ab990(ebx_1 + edi, esi_1, eax_11 + 1)
                    i = i_7
            
            i -= 1
            eax_4 = var_20 - 8
            i_7 = i
            var_20 = eax_4
        while (i s>= 0)
    
    char* const i_14 = &data_83f3d3
    char* const i_15 = &data_83f3d3
    var_8_1.b = 1
    void* ecx_1 = arg_4
    void* i_1 = nullptr
    i_7 = nullptr
    char* var_38
    char* var_34
    char* var_28
    
    if (*(ecx_1 + 0x15c) s> 0)
        do
            void** ebx_6
            void* esi_4
            
            if (i_1 != 0)
                void* i_6 = i_1
                int128_t** eax_28
                char j_1
                eax_28, j_1 = sub_4c4a50(&var_38, "uniform sampler texDiffuse%d;\n")
                var_8_1.b = 3
                int128_t* esi_5 = *eax_28
                
                if (esi_5 != 0 && *esi_5 != 0)
                    if (i_14 == 0 || *i_14 == 0)
                        int128_t* eax_29 = esi_5
                        void** edx_16 = eax_29 + 1
                        
                        do
                            j_1 = *eax_29
                            eax_29 += 1
                        while (j_1 != 0)
                        
                        char* const* var_5c_4 = &i_15
                        sub_4c40c0(eax_29 - edx_16, edx_16)
                        char* const i_17 = i_15
                        char* eax_31 = esi_5
                        i_14 = i_17
                        char j_2
                        
                        do
                            j_2 = *eax_31
                            *(eax_31 + i_17 - esi_5) = j_2
                            eax_31 = &eax_31[1]
                        while (j_2 != 0)
                    else
                        if (*(i_14 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* ebx_8 = *(i_14 - 8)
                        int128_t* eax_32 = esi_5
                        void** edx_19 = eax_32 + 1
                        char j_3
                        
                        do
                            j_3 = *eax_32
                            eax_32 += 1
                        while (j_3 != 0)
                        void* eax_33 = eax_32 - edx_19
                        void** eax_34 = eax_33 + ebx_8
                        sub_4c4160(eax_34, edx_19, &i_15, eax_34, 1)
                        i_14 = i_15
                        sub_5ab990(ebx_8 + i_14, esi_5, eax_33 + 1)
                
                var_8_1.b = 1
                char* esi_6 = var_38
                
                if (esi_6 != 0 && *esi_6 != 0)
                    esi_4 = &esi_6[0xfffffff0]
                    
                    if (*esi_4 != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp4_1 = *(esi_4 + 4)
                    *(esi_4 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        void* ebx_10 = data_26a44e4
                        int32_t edi_11 = *(esi_4 + 0xc) + 0x10
                        
                        if (ebx_10 == 0)
                            sub_4f4250()
                            ebx_10 = data_26a44e4
                        
                        int32_t edx_20 = 0
                        void** ebx_11
                        
                        while (true)
                            if (edi_11 s<= 1 << (edx_20.b + 4))
                                ebx_11 = ebx_10 + edx_20 * 0x14
                                break
                            
                            edx_20 += 1
                            
                            if (edx_20 s>= 7)
                                ebx_11 = ebx_10 + 0x8c
                                break
                        
                        ebx_11[3] -= 1
                        
                        if (edi_11 s<= 0x400 || ebx_11[4] != 0xffffffff)
                            int32_t eax_37 = ebx_11[4]
                            int32_t* edi_12 = ebx_11[1]
                            void* edx_22 = ebx_11[2] * eax_37
                            var_20 = edx_22
                            
                            if (edi_12 == 0)
                            label_513e3f:
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            ebx_6 = ebx_11
                            
                            while (true)
                                int32_t* eax_42 = *edi_12
                                void* ecx_8 = &edi_12[1]
                                var_28 = eax_42
                                edi_12 = eax_42
                                
                                if (esi_4 u>= ecx_8 && esi_4 u< edx_22 + ecx_8)
                                    if (mods.dp.d(sx.q(esi_4 - ecx_8), eax_37) == 0)
                                        break
                                    
                                    eax_42 = edi_12
                                
                                if (eax_42 == 0)
                                    goto label_513e3f
                                
                                edx_22 = var_20
                            
                        label_513d11:
                            *esi_4 = *ebx_6
                            *ebx_6 = esi_4
                            i_14 = i_15
                        else
                            _aligned_free_base(esi_4)
                            i_14 = i_15
            else
                void* i_5 = i_1
                var_8_1.b = 2
                char* esi_2 = *sub_4c4a50(&var_34, "uniform sampler texDiffuse;\n")
                
                if (esi_2 != 0 && *esi_2 != 0)
                    char j_4
                    
                    if (i_14 == 0 || *i_14 == 0)
                        char* eax_15 = esi_2
                        void* edx_5 = &eax_15[1]
                        
                        do
                            j_4 = *eax_15
                            eax_15 = &eax_15[1]
                        while (j_4 != 0)
                        
                        char* const* var_5c_2 = &i_15
                        sub_4c40c0(eax_15 - edx_5, edx_5)
                        i_14 = i_15
                        char* eax_17 = esi_2
                        char j_5
                        
                        do
                            j_5 = *eax_17
                            eax_17[i_14 - esi_2] = j_5
                            eax_17 = &eax_17[1]
                        while (j_5 != 0)
                    else
                        if (*(i_14 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* ebx_3 = *(i_14 - 8)
                        void* eax_18 = esi_2
                        void** edx_8 = eax_18 + 1
                        
                        do
                            j_4 = *eax_18
                            eax_18 += 1
                        while (j_4 != 0)
                        
                        void* eax_19 = eax_18 - edx_8
                        void* eax_20 = eax_19 + ebx_3
                        sub_4c4160(eax_20, edx_8, &i_15, eax_20, 1)
                        i_14 = i_15
                        sub_5ab990(ebx_3 + i_14, esi_2, eax_19 + 1)
                
                var_8_1.b = 1
                char* esi_3 = var_34
                
                if (esi_3 != 0 && *esi_3 != 0)
                    esi_4 = &esi_3[0xfffffff0]
                    
                    if (*esi_4 != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp5_1 = *(esi_4 + 4)
                    *(esi_4 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        void* ebx_5 = data_26a44e4
                        int32_t edi_6 = *(esi_4 + 0xc) + 0x10
                        
                        if (ebx_5 == 0)
                            sub_4f4250()
                            ebx_5 = data_26a44e4
                        
                        int32_t edx_9 = 0
                        
                        while (true)
                            if (edi_6 s<= 1 << (edx_9 + 4).b)
                                ebx_6 = ebx_5 + edx_9 * 0x14
                                break
                            
                            edx_9 += 1
                            
                            if (edx_9 s>= 7)
                                ebx_6 = ebx_5 + 0x8c
                                break
                        
                        ebx_6[3] -= 1
                        
                        if (edi_6 s<= 0x400 || ebx_6[4] != 0xffffffff)
                            int32_t eax_22 = ebx_6[4]
                            int32_t* edi_7 = ebx_6[1]
                            void* edx_12 = ebx_6[2] * eax_22
                            var_20 = edx_12
                            
                            if (edi_7 == 0)
                            label_513daf:
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            while (true)
                                int32_t* eax_27 = *edi_7
                                void* ecx_5 = &edi_7[1]
                                var_28 = eax_27
                                edi_7 = eax_27
                                
                                if (esi_4 u>= ecx_5 && esi_4 u< edx_12 + ecx_5)
                                    if (mods.dp.d(sx.q(esi_4 - ecx_5), eax_22) == 0)
                                        break
                                    
                                    eax_27 = edi_7
                                
                                if (eax_27 == 0)
                                    goto label_513daf
                                
                                edx_12 = var_20
                            
                            goto label_513d11
                        
                        _aligned_free_base(esi_4)
                        i_14 = i_15
            ecx_1 = arg_4
            i_1 = i_7 + 1
            i_7 = i_1
        while (i_1 s< *(ecx_1 + 0x15c))
    
    char* const esi_7 = &data_83f3d3
    var_20 = &data_83f3d3
    var_8_1.b = 4
    bool cond:1 = *(ecx_1 + 0x2a0) s<= 0
    char* const var_1c = nullptr
    
    if (not(cond:1))
        while (true)
            char* const var_5c_6 = var_1c
            var_8_1.b = 5
            char* ebx_12 = *sub_4c4a50(&var_28, "uniform float3x3 gTexAnim%d;\n")
            
            if (ebx_12 != 0 && *ebx_12 != 0)
                char i_2
                
                if (esi_7 == 0 || *esi_7 == 0)
                    char* eax_52 = ebx_12
                    
                    do
                        i_2 = *eax_52
                        eax_52 = &eax_52[1]
                    while (i_2 != 0)
                    
                    void* eax_53 = eax_52 - &eax_52[1]
                    
                    if (eax_53 s<= 0)
                        sub_4c5870("length > 0", &data_83f3d3, "xString.cpp", 0x27, 
                            "sXStringAllocBufferLength")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* esi_8 = data_26a44e4
                    
                    if (esi_8 == 0)
                        sub_4f4250()
                        esi_8 = data_26a44e4
                    
                    int32_t edx_27 = 0
                    int32_t** esi_9
                    
                    while (true)
                        if (eax_53 + 0x11 s<= 1 << (edx_27.b + 4))
                            esi_9 = esi_8 + edx_27 * 0x14
                            break
                        
                        edx_27 += 1
                        
                        if (edx_27 s>= 7)
                            esi_9 = esi_8 + 0x8c
                            break
                    
                    esi_9[3] += 1
                    int32_t* eax_56
                    
                    if (eax_53 + 0x11 s<= 0x400 || esi_9[4] != 0xffffffff)
                        if (*esi_9 == 0)
                            sub_4f4170(esi_9)
                        
                        eax_56 = *esi_9
                        *esi_9 = *eax_56
                    else
                        eax_56 = sub_4cce80(eax_53 + 0x11)
                    
                    eax_56[2] = eax_53
                    *eax_56 = 0xfafafafa
                    eax_56[1] = 1
                    eax_56[3] = eax_53 + 1
                    var_20 = &eax_56[4]
                    char* eax_58 = ebx_12
                    void* ecx_13
                    
                    do
                        ecx_13.b = *eax_58
                        *(eax_58 + &eax_56[4] - ebx_12) = ecx_13.b
                        eax_58 = &eax_58[1]
                    while (ecx_13.b != 0)
                else
                    if (*(esi_7 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edi_13 = *(esi_7 - 8)
                    void* eax_59 = ebx_12
                    void** edx_30 = eax_59 + 1
                    
                    do
                        i_2 = *eax_59
                        eax_59 += 1
                    while (i_2 != 0)
                    
                    void* eax_60 = eax_59 - edx_30
                    void* eax_61 = eax_60 + edi_13
                    sub_4c4160(eax_61, edx_30, &var_20, eax_61, 1)
                    sub_5ab990(edi_13 + var_20, ebx_12, eax_60 + 1)
            
            var_8_1.b = 4
            char* esi_12 = var_28
            
            if (esi_12 != 0 && *esi_12 != 0)
                if (*(esi_12 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp3_1 = *(esi_12 - 0xc)
                *(esi_12 - 0xc) -= 1
                
                if (temp3_1 == 1)
                    i_14 = *(esi_12 - 4) + 0x10
                    
                    if (data_26a44e4 == 0)
                        sub_4f4250()
                    
                    int32_t edx_31 = 0
                    void** ebx_14
                    
                    while (true)
                        if (i_14 s<= 1 << (edx_31.b + 4))
                            ebx_14 = data_26a44e4 + edx_31 * 0x14
                            break
                        
                        edx_31 += 1
                        
                        if (edx_31 s>= 7)
                            ebx_14 = data_26a44e4 + 0x8c
                            break
                    
                    ebx_14[3] -= 1
                    
                    if (i_14 s<= 0x400 || ebx_14[4] != 0xffffffff)
                        int32_t eax_64 = ebx_14[4]
                        i_14 = ebx_14[1]
                        void* edx_33 = ebx_14[2] * eax_64
                        void* var_3c_1 = edx_33
                        
                        if (i_14 == 0)
                        label_51413f:
                            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        while (true)
                            void* i_9 = *i_14
                            void* ecx_17 = &i_14[4]
                            i_7 = i_9
                            i_14 = i_9
                            
                            if (&esi_12[0xfffffff0] u>= ecx_17
                                    && &esi_12[0xfffffff0] u< edx_33 + ecx_17)
                                if (mods.dp.d(sx.q(&esi_12[0xfffffff0] - ecx_17), eax_64) == 0)
                                    *(esi_12 - 0x10) = *ebx_14
                                    *ebx_14 = &esi_12[0xfffffff0]
                                    break
                                
                                i_9 = i_14
                            
                            if (i_9 == 0)
                                goto label_51413f
                            
                            edx_33 = var_3c_1
                    else
                        _aligned_free_base(&esi_12[0xfffffff0])
            
            void* ecx_18 = arg_4
            void* eax_71 = &var_1c[1]
            var_1c = eax_71
            
            if (eax_71 s>= *(ecx_18 + 0x2a0))
                break
            
            esi_7 = var_20
    
    char* const esi_14 = &data_83f3d3
    var_1c = &data_83f3d3
    var_8_1.b = 6
    bool cond:2 = *(arg_4 + 0x2b4) s<= 0
    i_7 = nullptr
    
    if (not(cond:2))
        while (true)
            void* i_8 = i_7
            var_8_1.b = 7
            char* var_40
            char* ebx_15 = *sub_4c4a50(&var_40, "uniform float4 gMaterialColor%d;\n")
            
            if (ebx_15 != 0 && *ebx_15 != 0)
                char i_3
                
                if (esi_14 == 0 || *esi_14 == 0)
                    char* eax_78 = ebx_15
                    
                    do
                        i_3 = *eax_78
                        eax_78 = &eax_78[1]
                    while (i_3 != 0)
                    
                    void* eax_79 = eax_78 - &eax_78[1]
                    
                    if (eax_79 s<= 0)
                        sub_4c5870("length > 0", &data_83f3d3, "xString.cpp", 0x27, 
                            "sXStringAllocBufferLength")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* esi_15 = data_26a44e4
                    
                    if (esi_15 == 0)
                        sub_4f4250()
                        esi_15 = data_26a44e4
                    
                    int32_t edx_39 = 0
                    int32_t** esi_16
                    
                    while (true)
                        if (eax_79 + 0x11 s<= 1 << (edx_39.b + 4))
                            esi_16 = esi_15 + edx_39 * 0x14
                            break
                        
                        edx_39 += 1
                        
                        if (edx_39 s>= 7)
                            esi_16 = esi_15 + 0x8c
                            break
                    
                    esi_16[3] += 1
                    int32_t* eax_82
                    
                    if (eax_79 + 0x11 s<= 0x400 || esi_16[4] != 0xffffffff)
                        if (*esi_16 == 0)
                            sub_4f4170(esi_16)
                        
                        eax_82 = *esi_16
                        *esi_16 = *eax_82
                    else
                        eax_82 = sub_4cce80(eax_79 + 0x11)
                    
                    eax_82[2] = eax_79
                    *eax_82 = 0xfafafafa
                    eax_82[1] = 1
                    eax_82[3] = eax_79 + 1
                    var_1c = &eax_82[4]
                    char* eax_83 = ebx_15
                    char i_4
                    
                    do
                        i_4 = *eax_83
                        *(&eax_82[4] - ebx_15 + eax_83) = i_4
                        eax_83 = &eax_83[1]
                    while (i_4 != 0)
                else
                    if (*(esi_14 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edi_17 = *(esi_14 - 8)
                    void* eax_84 = ebx_15
                    void** edx_43 = eax_84 + 1
                    
                    do
                        i_3 = *eax_84
                        eax_84 += 1
                    while (i_3 != 0)
                    
                    void* eax_85 = eax_84 - edx_43
                    void* eax_86 = eax_85 + edi_17
                    sub_4c4160(eax_86, edx_43, &var_1c, eax_86, 1)
                    sub_5ab990(&var_1c[edi_17], ebx_15, eax_85 + 1)
            
            var_8_1.b = 6
            char* eax_87 = var_40
            
            if (eax_87 != 0 && *eax_87 != 0)
                if (*(eax_87 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp6_1 = *(eax_87 - 0xc)
                *(eax_87 - 0xc) -= 1
                
                if (temp6_1 == 1)
                    i_14 = *(eax_87 - 4) + 0x10
                    
                    if (data_26a44e4 == 0)
                        sub_4f4250()
                    
                    int32_t edx_44 = 0
                    void** ebx_17
                    
                    while (true)
                        if (i_14 s<= 1 << (edx_44.b + 4))
                            ebx_17 = data_26a44e4 + edx_44 * 0x14
                            break
                        
                        edx_44 += 1
                        
                        if (edx_44 s>= 7)
                            ebx_17 = data_26a44e4 + 0x8c
                            break
                    
                    ebx_17[3] -= 1
                    
                    if (i_14 s<= 0x400 || ebx_17[4] != 0xffffffff)
                        int32_t eax_90 = ebx_17[4]
                        i_14 = ebx_17[1]
                        void* edx_46 = ebx_17[2] * eax_90
                        void* var_44_1 = edx_46
                        
                        if (i_14 == 0)
                        label_51444f:
                            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        while (true)
                            char* const i_16 = *i_14
                            void* ecx_26 = &i_14[4]
                            char* const i_18 = i_16
                            i_14 = i_16
                            
                            if (&eax_87[0xfffffff0] u>= ecx_26
                                    && &eax_87[0xfffffff0] u< edx_46 + ecx_26)
                                if (mods.dp.d(sx.q(&eax_87[0xfffffff0] - ecx_26), eax_90) == 0)
                                    *(eax_87 - 0x10) = *ebx_17
                                    *ebx_17 = &eax_87[0xfffffff0]
                                    break
                                
                                i_16 = i_14
                            
                            if (i_16 == 0)
                                goto label_51444f
                            
                            edx_46 = var_44_1
                    else
                        _aligned_free_base(&eax_87[0xfffffff0])
            
            void* ecx_27 = arg_4
            void* i_10 = i_7 + 1
            i_7 = i_10
            
            if (i_10 s>= *(ecx_27 + 0x2b4))
                break
            
            esi_14 = var_1c
    
    void* edi_19 = data_26a44e4
    
    if (edi_19 == 0)
        sub_4f4250()
        edi_19 = data_26a44e4
    
    int32_t edx_50 = 0
    int32_t* esi_20
    
    while (true)
        if (1 << (edx_50.b + 4) s>= 0x55d)
            esi_20 = edi_19 + edx_50 * 0x14
            break
        
        edx_50 += 1
        
        if (edx_50 s>= 7)
            esi_20 = edi_19 + 0x8c
            break
    
    esi_20[3] += 1
    int32_t* eax_102
    int32_t ecx_29
    
    if (esi_20[4] != 0xffffffff)
        if (*esi_20 == 0)
            sub_4f4170(esi_20)
            edi_19 = data_26a44e4
        
        eax_102 = *esi_20
        *esi_20 = *eax_102
    else
        eax_102, ecx_29 = sub_4cce80(0x55d)
        edi_19 = data_26a44e4
    
    *eax_102 = 0xfafafafa
    eax_102[1] = 1
    eax_102[2] = 0x54c
    eax_102[3] = 0x54d
    char const* const eax_103 = "%s\n%s\n\t\nuniform float4x4 gWorldViewProj;\nuniform float4 "
    "gOverlayColor;\n%s%s%s\nstruct VS_OUTPUT\n{\t\n\tfloat4 Position   SEM_POSITION;\n\tfloat4 Diffuse    "
    "SEM_COLOR0;\n\tfloat2 UV  SEM_TEXCOORD0;\n};\t\n\t\nVS_OUTPUT MainVS(\n\tfloat3 Pos SEM_POSITION,\n"
    "float3 Norm SEM_NORMAL,\n\tfloat4 Diffuse SEM_COLOR0,\n\tfloat2 UV SEM_TEXCOORD0)\n{\t\n\tVS_OUTPUT "
    "Output;\n\t\n\tOutput.Position = Multipl"
    arg_4 = &eax_102[4]
    
    do
        ecx_29.b = *eax_103
        eax_103[eax_102 - "rialColor%d;\n"] = ecx_29.b
        eax_103 = &eax_103[1]
    while (ecx_29.b != 0)
    
    var_8_1.b = 8
    
    if (edi_19 == 0)
        sub_4f4250()
        edi_19 = data_26a44e4
    
    int32_t edx_54 = 0
    void* esi_21
    
    while (true)
        if (1 << (edx_54.b + 4) s>= 0x3154)
            esi_21 = edi_19 + edx_54 * 0x14
            break
        
        edx_54 += 1
        
        if (edx_54 s>= 7)
            esi_21 = edi_19 + 0x8c
            break
    
    *(esi_21 + 0xc) += 1
    int32_t* eax_105
    int32_t ecx_31
    
    if (*(esi_21 + 0x10) != 0xffffffff)
        if (*esi_21 == 0)
            sub_4f4170(esi_21)
            edi_19 = data_26a44e4
        
        eax_105 = *esi_21
        *esi_21 = *eax_105
    else
        eax_105, ecx_31 = sub_4cce80(0x3154)
        edi_19 = data_26a44e4
    
    *eax_105 = 0xfafafafa
    eax_105[1] = 1
    eax_105[2] = 0x3143
    eax_105[3] = 0x3144
    char const* const eax_106 = "#if !defined(HAVE_GLSLES)\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#define lowp\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
    "\t\t\t\t\t\t\n#define mediump\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#define highp\t\t\t\t"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n"
    "#endif\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
    "\t\t\t\t\t\t\t\n#ifdef GLS"
    i_7 = &eax_105[4]
    
    do
        ecx_31.b = *eax_106
        *(eax_106 + eax_105 - "IXEL_SHADER\n") = ecx_31.b
        eax_106 = &eax_106[1]
    while (ecx_31.b != 0)
    
    var_8_1.b = 9
    
    if (edi_19 == 0)
        sub_4f4250()
        edi_19 = data_26a44e4
    
    int32_t edx_58 = 0
    void* esi_22
    
    while (true)
        if (1 << (edx_58.b + 4) s>= 0x48b8)
            esi_22 = edi_19 + edx_58 * 0x14
            break
        
        edx_58 += 1
        
        if (edx_58 s>= 7)
            esi_22 = edi_19 + 0x8c
            break
    
    *(esi_22 + 0xc) += 1
    int32_t* eax_108
    int32_t ecx_33
    
    if (*(esi_22 + 0x10) != 0xffffffff)
        if (*esi_22 == 0)
            sub_4f4170(esi_22)
        
        eax_108 = *esi_22
        *esi_22 = *eax_108
    else
        eax_108, ecx_33 = sub_4cce80(0x48b8)
    
    *eax_108 = 0xfafafafa
    eax_108[1] = 1
    eax_108[2] = 0x48a7
    eax_108[3] = 0x48a8
    char const* const eax_109 = "#ifndef SHADER_FUNCTIONS_INC\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#define SHADER_FUNCTIONS_INC\t\t\t"
    "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
    "\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
    "\t\t"
    var_34 = &eax_108[4]
    
    do
        ecx_33.b = *eax_109
        *(eax_109 + eax_108 - "\t\t\t\t\t\t\t\t\t\t\n") = ecx_33.b
        eax_109 = &eax_109[1]
    while (ecx_33.b != 0)
    
    var_8_1.b = 0xa
    char* const eax_110 = var_18
    var_28 = &data_83f3d3
    
    if (eax_110 != 0)
        var_28 = eax_110
    
    char* const eax_111 = var_1c
    char* const var_2c_5 = &data_83f3d3
    
    if (eax_111 != 0)
        var_2c_5 = eax_111
    
    void* ebx_18 = var_20
    
    if (ebx_18 == 0)
        ebx_18 = &data_83f3d3
    
    char* const i_20 = i_15
    
    if (i_20 == 0)
        i_20 = &data_83f3d3
    
    char* edx_62 = &data_83f3d3
    
    if (eax_108 != 0xfffffff0)
        edx_62 = &eax_108[4]
    
    void* i_12 = i_7
    
    if (i_12 == 0)
        i_12 = &data_83f3d3
    
    void* eax_112 = &data_83f3d3
    
    if (arg_4 != 0)
        eax_112 = arg_4
    
    char* var_5c_9 = var_28
    char* const var_60_6 = var_2c_5
    void* var_64_10 = ebx_18
    char* const i_21 = i_20
    char* var_6c_6 = edx_62
    void* i_13 = i_12
    char* var_30
    sub_4c4a50(&var_30, eax_112)
    var_8_1.b = 0xb
    char* eax_113 = var_30
    
    if (eax_113 == 0)
        eax_113 = &data_83f3d3
    
    char** result
    void* ecx_35
    result, ecx_35 = sub_54c980(eax_113)
    var_8_1.b = 0xa
    char* esi_23 = var_30
    
    if (esi_23 != 0 && *esi_23 != 0)
        if (*(esi_23 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp8_1 = *(esi_23 - 0xc)
        *(esi_23 - 0xc) -= 1
        
        if (temp8_1 == 1)
            void* ebx_19 = data_26a44e4
            int32_t edi_24 = *(esi_23 - 4) + 0x10
            
            if (ebx_19 == 0)
                sub_4f4250()
                ebx_19 = data_26a44e4
            
            int32_t edx_63 = 0
            void** ebx_20
            
            while (true)
                if (edi_24 s<= 1 << (edx_63.b + 4))
                    ebx_20 = ebx_19 + edx_63 * 0x14
                    break
                
                edx_63 += 1
                
                if (edx_63 s>= 7)
                    ebx_20 = ebx_19 + 0x8c
                    break
            
            ebx_20[3] -= 1
            
            if (edi_24 s<= 0x400 || ebx_20[4] != 0xffffffff)
                int32_t eax_117 = ebx_20[4]
                int32_t* edi_25 = ebx_20[1]
                void* edx_65 = ebx_20[2] * eax_117
                void* var_44_2 = edx_65
                
                if (edi_25 == 0)
                label_5147e2:
                    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                        "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                while (true)
                    int32_t* eax_122 = *edi_25
                    ecx_35 = &edi_25[1]
                    var_38 = eax_122
                    edi_25 = eax_122
                    
                    if (&esi_23[0xfffffff0] u>= ecx_35 && &esi_23[0xfffffff0] u< edx_65 + ecx_35)
                        if (mods.dp.d(sx.q(&esi_23[0xfffffff0] - ecx_35), eax_117) == 0)
                            *(esi_23 - 0x10) = *ebx_20
                            *ebx_20 = &esi_23[0xfffffff0]
                            break
                        
                        eax_122 = edi_25
                    
                    if (eax_122 == 0)
                        goto label_5147e2
                    
                    edx_65 = var_44_2
            else
                _aligned_free_base(&esi_23[0xfffffff0])
    
    var_8_1.b = 9
    char* eax_125 = var_34
    
    if (eax_125 != 0 && *eax_125 != 0)
        void* eax_127 = sub_4c4060(&var_34)
        int32_t temp7_1 = *(eax_127 + 4)
        *(eax_127 + 4) -= 1
        
        if (temp7_1 == 1)
            void* edi_26 = data_26a44e4
            int32_t esi_26 = *(eax_127 + 0xc) + 0x10
            
            if (edi_26 == 0)
                sub_4f4250()
                edi_26 = data_26a44e4
            
            int32_t edx_69 = 0
            int32_t* edi_27
            
            while (true)
                if (esi_26 s<= 1 << (edx_69.b + 4))
                    edi_27 = edi_26 + edx_69 * 0x14
                    break
                
                edx_69 += 1
                
                if (edx_69 s>= 7)
                    edi_27 = edi_26 + 0x8c
                    break
            
            sub_4f4430(eax_127, edi_27, esi_26)
    
    var_8_1.b = 8
    void* i_11 = i_7
    
    if (i_11 != 0 && *i_11 != 0)
        void* eax_131 = sub_4c4060(&i_7)
        int32_t temp9_1 = *(eax_131 + 4)
        *(eax_131 + 4) -= 1
        
        if (temp9_1 == 1)
            void* edi_28 = data_26a44e4
            int32_t esi_28 = *(eax_131 + 0xc) + 0x10
            
            if (edi_28 == 0)
                sub_4f4250()
                edi_28 = data_26a44e4
            
            int32_t edx_70 = 0
            int32_t* edi_29
            
            while (true)
                if (esi_28 s<= 1 << (edx_70.b + 4))
                    edi_29 = edi_28 + edx_70 * 0x14
                    break
                
                edx_70 += 1
                
                if (edx_70 s>= 7)
                    edi_29 = edi_28 + 0x8c
                    break
            
            sub_4f4430(eax_131, edi_29, esi_28)
    
    var_8_1.b = 6
    void* eax_134 = arg_4
    
    if (eax_134 != 0 && *eax_134 != 0)
        void* eax_136 = sub_4c4060(&arg_4)
        int32_t temp10_1 = *(eax_136 + 4)
        *(eax_136 + 4) -= 1
        
        if (temp10_1 == 1)
            void* edi_30 = data_26a44e4
            int32_t esi_30 = *(eax_136 + 0xc) + 0x10
            
            if (edi_30 == 0)
                sub_4f4250()
                edi_30 = data_26a44e4
            
            int32_t edx_71 = 0
            int32_t* edi_31
            
            while (true)
                if (esi_30 s<= 1 << (edx_71.b + 4))
                    edi_31 = edi_30 + edx_71 * 0x14
                    break
                
                edx_71 += 1
                
                if (edx_71 s>= 7)
                    edi_31 = edi_30 + 0x8c
                    break
            
            sub_4f4430(eax_136, edi_31, esi_30)
    
    var_8_1.b = 4
    char* const eax_139 = var_1c
    
    if (eax_139 != 0 && *eax_139 != 0)
        void* eax_141 = sub_4c4060(&var_1c)
        int32_t temp11_1 = *(eax_141 + 4)
        *(eax_141 + 4) -= 1
        
        if (temp11_1 == 1)
            void* edi_32 = data_26a44e4
            int32_t esi_32 = *(eax_141 + 0xc) + 0x10
            
            if (edi_32 == 0)
                sub_4f4250()
                edi_32 = data_26a44e4
            
            int32_t edx_72 = 0
            int32_t* edi_33
            
            while (true)
                if (esi_32 s<= 1 << (edx_72.b + 4))
                    edi_33 = edi_32 + edx_72 * 0x14
                    break
                
                edx_72 += 1
                
                if (edx_72 s>= 7)
                    edi_33 = edi_32 + 0x8c
                    break
            
            sub_4f4430(eax_141, edi_33, esi_32)
    
    var_8_1.b = 1
    void* eax_144 = var_20
    
    if (eax_144 != 0 && *eax_144 != 0)
        void* eax_146 = sub_4c4060(&var_20)
        int32_t temp12_1 = *(eax_146 + 4)
        *(eax_146 + 4) -= 1
        
        if (temp12_1 == 1)
            void* edi_34 = data_26a44e4
            int32_t esi_34 = *(eax_146 + 0xc) + 0x10
            
            if (edi_34 == 0)
                sub_4f4250()
                edi_34 = data_26a44e4
            
            int32_t edx_73 = 0
            int32_t* edi_35
            
            while (true)
                if (esi_34 s<= 1 << (edx_73.b + 4))
                    edi_35 = edi_34 + edx_73 * 0x14
                    break
                
                edx_73 += 1
                
                if (edx_73 s>= 7)
                    edi_35 = edi_34 + 0x8c
                    break
            
            sub_4f4430(eax_146, edi_35, esi_34)
    
    var_8_1.b = 0
    char* const i_19 = i_15
    
    if (i_19 != 0 && *i_19 != 0)
        void* eax_150 = sub_4c4060(&i_15)
        int32_t temp13_1 = *(eax_150 + 4)
        *(eax_150 + 4) -= 1
        
        if (temp13_1 == 1)
            void* edi_36 = data_26a44e4
            int32_t esi_36 = *(eax_150 + 0xc) + 0x10
            
            if (edi_36 == 0)
                sub_4f4250()
                edi_36 = data_26a44e4
            
            int32_t edx_74 = 0
            int32_t* edi_37
            
            while (true)
                if (esi_36 s<= 1 << (edx_74.b + 4))
                    edi_37 = edi_36 + edx_74 * 0x14
                    break
                
                edx_74 += 1
                
                if (edx_74 s>= 7)
                    edi_37 = edi_36 + 0x8c
                    break
            
            sub_4f4430(eax_150, edi_37, esi_36)
    
    int32_t var_8_2 = 0xffffffff
    char* const eax_153 = var_18
    
    if (eax_153 != 0 && *eax_153 != 0)
        void* eax_155 = sub_4c4060(&var_18)
        int32_t temp14_1 = *(eax_155 + 4)
        *(eax_155 + 4) -= 1
        
        if (temp14_1 == 1)
            void* edx_75 = data_26a44e4
            int32_t esi_38 = *(eax_155 + 0xc) + 0x10
            
            if (edx_75 == 0)
                sub_4f4250()
                edx_75 = data_26a44e4
            
            int32_t eax_156 = 0
            int32_t* edi_39
            
            while (true)
                if (esi_38 s<= 1 << (eax_156.b + 4))
                    edi_39 = edx_75 + eax_156 * 0x14
                    break
                
                eax_156 += 1
                
                if (eax_156 s>= 7)
                    edi_39 = edx_75 + 0x8c
                    break
            
            sub_4f4430(eax_155, edi_39, esi_38)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
