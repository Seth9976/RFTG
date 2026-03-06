// 函数名称: sub_4e1260
// 虚拟地址: 0x4e1260
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e1260()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d128
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t ecx = data_2de8568
    int32_t eax_3 = 0
    
    if (ecx s> 0)
        do
            *((eax_3 << 2) + &data_3068588) = eax_3
            ecx = data_2de8568
            eax_3 += 1
        while (eax_3 s< ecx)
    
    int32_t i
    void* ecx_4
    i, ecx_4 = sub_4641a0(&data_3068588, (ecx << 2) + &data_3068588, ecx << 2 s>> 2, sub_4e10f0)
    
    if (data_30785b0 s> 0)
        data_30785b0 -= 1
        int32_t i_1 = 0
        
        if (data_2de8568 s> 0)
            do
                int32_t i_2 = i_1
                int32_t* edi_3 = *((i_2 << 2) + &data_3068588) * 0x180 + 0x27e8568
                char* const ebx_1 = &data_83f3d3
                int32_t* var_18_1 = edi_3
                char* const var_14 = &data_83f3d3
                int32_t var_8_1 = 0
                int32_t eax_6 = *edi_3
                
                if (eax_6 == 0)
                    char* const* var_48_1 = &var_14
                    sub_4c40c0(5, i_2)
                    ebx_1 = var_14
                    char const* const eax_7 = "Mesh "
                    i_2 = ebx_1 - "Mesh "
                    
                    do
                        ecx_4.b = *eax_7
                        eax_7[i_2] = ecx_4.b
                        eax_7 = &eax_7[1]
                    while (ecx_4.b != 0)
                else if (eax_6 == 1)
                    int32_t var_48_2 = edi_3[0x52]
                    char* var_20
                    char** eax_8
                    eax_8, ecx_4, i_2 = sub_4c4a50(&var_20, "QuadGroup count:%d ")
                    var_8_1.b = 1
                    char* esi_1 = *eax_8
                    
                    if (esi_1 != 0 && *esi_1 != 0)
                        char* eax_9 = esi_1
                        void** edx_2 = &eax_9[1]
                        
                        do
                            ecx_4.b = *eax_9
                            eax_9 = &eax_9[1]
                        while (ecx_4.b != 0)
                        
                        char* const* var_48_3 = &var_14
                        sub_4c40c0(eax_9 - edx_2, edx_2)
                        ebx_1 = var_14
                        char* eax_11 = esi_1
                        i_2 = ebx_1 - esi_1
                        
                        do
                            ecx_4.b = *eax_11
                            eax_11[i_2] = ecx_4.b
                            eax_11 = &eax_11[1]
                        while (ecx_4.b != 0)
                    
                    var_8_1.b = 0
                    char* eax_12 = var_20
                    
                    if (eax_12 != 0 && *eax_12 != 0)
                        if (*(eax_12 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t temp2_1 = *(eax_12 - 0xc)
                        *(eax_12 - 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            int32_t esi_3 = *(eax_12 - 4) + 0x10
                            ecx_4, i_2 = sub_4f4430(&eax_12[0xfffffff0], sub_4f4380(esi_3), esi_3)
                            edi_3 = var_18_1
                
                char* esi_4 = *(edi_3[0x12] + 0x20)
                
                if (esi_4 != 0 && *esi_4 != 0)
                    if (ebx_1 == 0 || *ebx_1 == 0)
                        char* eax_16 = esi_4
                        void* edx_4 = &eax_16[1]
                        
                        do
                            ecx_4.b = *eax_16
                            eax_16 = &eax_16[1]
                        while (ecx_4.b != 0)
                        
                        char* const* var_48_5 = &var_14
                        sub_4c40c0(eax_16 - edx_4, edx_4)
                        ebx_1 = var_14
                        char* eax_18 = esi_4
                        i_2 = ebx_1 - esi_4
                        char j
                        
                        do
                            j = *eax_18
                            eax_18[i_2] = j
                            eax_18 = &eax_18[1]
                        while (j != 0)
                    else
                        if (*(ebx_1 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* edi_7 = *(ebx_1 - 8)
                        char* eax_19 = esi_4
                        void** edx_6 = &eax_19[1]
                        
                        do
                            ecx_4.b = *eax_19
                            eax_19 = &eax_19[1]
                        while (ecx_4.b != 0)
                        
                        void* eax_20 = eax_19 - edx_6
                        void* eax_21 = eax_20 + edi_7
                        sub_4c4160(eax_21, edx_6, &var_14, eax_21, 1)
                        ebx_1 = var_14
                        i_2 = sub_5ab990(edi_7 + ebx_1, esi_4, eax_20 + 1)
                
                char j_1
                char* const edi_9
                
                if (ebx_1 == 0 || *ebx_1 == 0)
                    char* const* var_48_6 = &var_14
                    sub_4c40c0(1, i_2)
                    edi_9 = var_14
                    int16_t* const eax_22 = &data_860fe4
                    
                    do
                        j_1 = *eax_22
                        *(eax_22 + edi_9 - &data_860fe4) = j_1
                        eax_22 += 1
                    while (j_1 != 0)
                else
                    if (*(ebx_1 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int16_t* ebx_4 = *(ebx_1 - 8)
                    sub_4c4160(ebx_4 + 1, i_2, &var_14, ebx_4 + 1, 1)
                    edi_9 = var_14
                    *(ebx_4 + edi_9) = 0x20
                
                int32_t* edx_11 = var_18_1
                void* eax_24 = edx_11[0x13]
                
                if (eax_24 != 0)
                    char* esi_5 = *(eax_24 + 0x20)
                    
                    if (esi_5 != 0 && *esi_5 != 0)
                        if (edi_9 == 0 || *edi_9 == 0)
                            char* eax_25 = esi_5
                            void* edx_9 = &eax_25[1]
                            
                            do
                                j_1 = *eax_25
                                eax_25 = &eax_25[1]
                            while (j_1 != 0)
                            
                            char* const* var_48_7 = &var_14
                            sub_4c40c0(eax_25 - edx_9, edx_9)
                            char* const edi_10 = var_14
                            char* eax_27 = esi_5
                            edx_11 = edi_10 - esi_5
                            edi_9 = edi_10
                            char j_2
                            
                            do
                                j_2 = *eax_27
                                *(eax_27 + edx_11) = j_2
                                eax_27 = &eax_27[1]
                            while (j_2 != 0)
                        else
                            if (*(edi_9 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            void* ebx_5 = *(edi_9 - 8)
                            void* eax_28 = esi_5
                            void** edx_12 = eax_28 + 1
                            
                            do
                                j_1 = *eax_28
                                eax_28 += 1
                            while (j_1 != 0)
                            
                            void* eax_29 = eax_28 - edx_12
                            void** eax_30 = eax_29 + ebx_5
                            sub_4c4160(eax_30, edx_12, &var_14, eax_30, 1)
                            edi_9 = var_14
                            edx_11 = sub_5ab990(ebx_5 + edi_9, esi_5, eax_29 + 1)
                    
                    if (edi_9 == 0 || *edi_9 == 0)
                        char* const* var_48_8 = &var_14
                        sub_4c40c0(1, edx_11)
                        edi_9 = var_14
                        int16_t* const eax_31 = &data_860fe4
                        char j_3
                        
                        do
                            j_3 = *eax_31
                            *(eax_31 + edi_9 - &data_860fe4) = j_3
                            eax_31 += 1
                        while (j_3 != 0)
                    else
                        if (*(edi_9 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int16_t* esi_6 = *(edi_9 - 8)
                        sub_4c4160(esi_6 + 1, edx_11, &var_14, esi_6 + 1, 1)
                        edi_9 = var_14
                        *(esi_6 + edi_9) = 0x20
                
                int32_t var_48_9 = var_18_1[0x53]
                var_8_1.b = 2
                char* var_28
                char* esi_7 = *sub_4c4a50(&var_28, "layer:%d ")
                
                if (esi_7 != 0 && *esi_7 != 0)
                    char j_4
                    
                    if (edi_9 == 0 || *edi_9 == 0)
                        char* eax_34 = esi_7
                        void* edx_16 = &eax_34[1]
                        
                        do
                            j_4 = *eax_34
                            eax_34 = &eax_34[1]
                        while (j_4 != 0)
                        
                        char* const* var_48_10 = &var_14
                        sub_4c40c0(eax_34 - edx_16, edx_16)
                        char* const edi_13 = var_14
                        char* eax_36 = esi_7
                        edi_9 = edi_13
                        char j_5
                        
                        do
                            j_5 = *eax_36
                            eax_36[edi_13 - esi_7] = j_5
                            eax_36 = &eax_36[1]
                        while (j_5 != 0)
                    else
                        if (*(edi_9 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* ebx_7 = *(edi_9 - 8)
                        char* eax_37 = esi_7
                        void** edx_19 = &eax_37[1]
                        
                        do
                            j_4 = *eax_37
                            eax_37 = &eax_37[1]
                        while (j_4 != 0)
                        
                        void* eax_38 = eax_37 - edx_19
                        void* eax_39 = eax_38 + ebx_7
                        sub_4c4160(eax_39, edx_19, &var_14, eax_39, 1)
                        edi_9 = var_14
                        sub_5ab990(ebx_7 + edi_9, esi_7, eax_38 + 1)
                
                var_8_1.b = 0
                char* esi_8 = var_28
                
                if (esi_8 != 0 && *esi_8 != 0)
                    if (*(esi_8 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp3_1 = *(esi_8 - 0xc)
                    *(esi_8 - 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        int32_t ebx_10 = *(esi_8 - 4) + 0x10
                        
                        if (data_26a44e4 == 0)
                            sub_4f4250()
                        
                        int32_t edx_20 = 0
                        void** eax_42
                        
                        while (true)
                            if (ebx_10 s<= 1 << (edx_20.b + 4))
                                eax_42 = data_26a44e4 + edx_20 * 0x14
                                break
                            
                            edx_20 += 1
                            
                            if (edx_20 s>= 7)
                                eax_42 = data_26a44e4 + 0x8c
                                break
                        
                        eax_42[3] -= 1
                        
                        if (ebx_10 s<= 0x400 || eax_42[4] != 0xffffffff)
                            int32_t ecx_14 = eax_42[4]
                            int32_t* ebx_11 = eax_42[1]
                            void* edx_23 = eax_42[2] * ecx_14
                            void* var_30_1 = edx_23
                            
                            if (ebx_11 == 0)
                            label_4e1a22:
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t* ebx_12 = ebx_11
                            
                            while (true)
                                int32_t* eax_49 = *ebx_12
                                void* ecx_15 = &ebx_12[1]
                                int32_t* var_2c_1 = eax_49
                                ebx_12 = eax_49
                                
                                if (&esi_8[0xfffffff0] u>= ecx_15
                                        && &esi_8[0xfffffff0] u< edx_23 + ecx_15)
                                    if (mods.dp.d(sx.q(&esi_8[0xfffffff0] - ecx_15), ecx_14) == 0)
                                        *(esi_8 - 0x10) = *eax_42
                                        *eax_42 = &esi_8[0xfffffff0]
                                        break
                                    
                                    eax_49 = ebx_12
                                
                                if (eax_49 == 0)
                                    goto label_4e1a22
                                
                                edx_23 = var_30_1
                        else
                            _aligned_free_base(&esi_8[0xfffffff0])
                
                char* const eax_51 = &data_83f3d3
                
                if (edi_9 != 0)
                    eax_51 = edi_9
                
                char* const var_48_12 = eax_51
                sub_4c5680("%s")
                int32_t var_8_2 = 0xffffffff
                
                if (edi_9 != 0 && *edi_9 != 0)
                    if (*(edi_9 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp4_1 = *(edi_9 - 0xc)
                    *(edi_9 - 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        void* esi_10 = data_26a44e4
                        int32_t ebx_14 = *(edi_9 - 4) + 0x10
                        
                        if (esi_10 == 0)
                            sub_4f4250()
                            esi_10 = data_26a44e4
                        
                        int32_t eax_52 = 0
                        void** esi_11
                        
                        while (true)
                            if (ebx_14 s<= 1 << (eax_52.b + 4))
                                esi_11 = esi_10 + eax_52 * 0x14
                                break
                            
                            eax_52 += 1
                            
                            if (eax_52 s>= 7)
                                esi_11 = esi_10 + 0x8c
                                break
                        
                        esi_11[3] -= 1
                        
                        if (ebx_14 s<= 0x400 || esi_11[4] != 0xffffffff)
                            int32_t eax_54 = esi_11[4]
                            int32_t* ecx_18 = esi_11[1]
                            
                            if (ecx_18 == 0)
                            label_4e187c:
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            while (true)
                                void* edx_28 = &ecx_18[1]
                                ecx_18 = *ecx_18
                                
                                if (&edi_9[0xfffffff0] u>= edx_28
                                        && &edi_9[0xfffffff0] u< edx_28 + esi_11[2] * eax_54
                                        && mods.dp.d(sx.q(&edi_9[0xfffffff0] - edx_28), eax_54) == 0)
                                    *(edi_9 - 0x10) = *esi_11
                                    *esi_11 = &edi_9[0xfffffff0]
                                    break
                                
                                if (ecx_18 == 0)
                                    goto label_4e187c
                        else
                            _aligned_free_base(&edi_9[0xfffffff0])
                
                i = i_1 + 1
                i_1 = i
            while (i s< data_2de8568)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return i
}
