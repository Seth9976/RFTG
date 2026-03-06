// 函数名称: sub_4b4330
// 虚拟地址: 0x4b4330
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_4b4330(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68c808
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_7c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t* esi = *arg1
    char* result_1
    char* const result_2 = result_1
    
    if (result_2 == 0)
        result_2 = &data_83f3d3
    
    int32_t* eax_4 = sub_5a898b(result_2, U"r")
    int32_t eax_9
    
    if (eax_4 != 0)
        void* var_80_2 = &esi[2]
        int32_t* var_84_1 = &esi[1]
        int32_t* var_88_1 = esi
        eax_9 = sub_5a8a9c(eax_4, "%d %d %d\n")
    
    char* result
    
    if (eax_4 == 0 || eax_9 != 3)
        int32_t var_8_2 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_2 = *(result + 0xc) + 0x10
                sub_4f4430(result, sub_4f4380(esi_2), esi_2)
        
        result.b = 0
    else
        int32_t eax_12 = (*esi + 1) * esi[1]
        esi[4] = eax_12
        esi[3] = sub_4cce80(eax_12 * 8)
        int32_t eax_19 = (esi[1] + 1) * esi[2]
        esi[6] = eax_19
        esi[5] = sub_4cce80(eax_19 * 8)
        void var_6c
        void* var_80_3 = &var_6c
        sub_5a8a9c(eax_4, 0x876b4c)
        int32_t i = 0
        
        if (*esi s> 0)
            do
                char var_64[0x50]
                sub_5a8abc(&var_64, 0x50, eax_4)
                i += 1
            while (i s< *esi)
        
        int32_t var_68_1 = 0
        void** esi_4
        void* edi_3
        
        if (esi[1] s<= 0)
        label_4b4490:
            int32_t var_68_2 = 0
            
            if (esi[2] s<= 0)
            label_4b44ed:
                sub_5a8c61(eax_4)
                int32_t var_8_3 = 0xffffffff
                char* result_3 = result_1
                
                if (result_3 != 0 && *result_3 != 0)
                    if (*(result_3 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp3_1 = *(result_3 - 0xc)
                    *(result_3 - 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        void* esi_6 = data_26a44e4
                        int32_t ebx_14 = *(result_3 - 4) + 0x10
                        
                        if (esi_6 == 0)
                            sub_4f4250()
                            esi_6 = data_26a44e4
                        
                        int32_t eax_59 = 0
                        void** esi_7
                        
                        while (true)
                            if (ebx_14 s<= 1 << (eax_59.b + 4))
                                esi_7 = esi_6 + eax_59 * 0x14
                                break
                            
                            eax_59 += 1
                            
                            if (eax_59 s>= 7)
                                esi_7 = esi_6 + 0x8c
                                break
                        
                        esi_7[3] -= 1
                        
                        if (ebx_14 s<= 0x400 || esi_7[4] != 0xffffffff)
                            int32_t eax_61 = esi_7[4]
                            int32_t* ecx_10 = esi_7[1]
                            
                            if (ecx_10 == 0)
                            label_4b485c:
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            while (true)
                                void* edx_16 = &ecx_10[1]
                                ecx_10 = *ecx_10
                                
                                if (&result_3[0xfffffff0] u>= edx_16
                                        && &result_3[0xfffffff0] u< edx_16 + esi_7[2] * eax_61
                                        && mods.dp.d(sx.q(&result_3[0xfffffff0] - edx_16), eax_61)
                                        == 0)
                                    *(result_3 - 0x10) = *esi_7
                                    *esi_7 = &result_3[0xfffffff0]
                                    break
                                
                                if (ecx_10 == 0)
                                    goto label_4b485c
                        else
                            _aligned_free_base(&result_3[0xfffffff0])
                
                result.b = 1
            else
                while (esi[1] + 1 s<= 0)
                label_4b44e3:
                    int32_t eax_39 = var_68_2 + 1
                    var_68_2 = eax_39
                    
                    if (eax_39 s>= esi[2])
                        goto label_4b44ed
                
                int32_t ebx_4 = 0
                
                while (true)
                    int32_t var_80_6 = esi[5] + ((esi[2] * ebx_4 + var_68_2) << 3)
                    
                    if (sub_5a8a9c(eax_4, "%lf\n") != 1)
                        break
                    
                    ebx_4 += 1
                    
                    if (ebx_4 s>= esi[1] + 1)
                        goto label_4b44e3
                
                int32_t var_8_5 = 0xffffffff
                char* result_5 = result_1
                
                if (result_5 == 0 || *result_5 == 0)
                    result.b = 0
                else
                    edi_3 = &result_5[0xfffffff0]
                    
                    if (*edi_3 != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp5_1 = *(edi_3 + 4)
                    *(edi_3 + 4) -= 1
                    
                    if (temp5_1 != 1)
                        result.b = 0
                    else
                        void* esi_5 = data_26a44e4
                        int32_t ebx_10 = *(edi_3 + 0xc) + 0x10
                        
                        if (esi_5 == 0)
                            sub_4f4250()
                            esi_5 = data_26a44e4
                        
                        int32_t eax_51 = 0
                        
                        while (true)
                            if (ebx_10 s<= 1 << (eax_51.b + 4))
                                esi_4 = esi_5 + eax_51 * 0x14
                                break
                            
                            eax_51 += 1
                            
                            if (eax_51 s>= 7)
                                esi_4 = esi_5 + 0x8c
                                break
                        
                        esi_4[3] -= 1
                        
                        if (ebx_10 s<= 0x400 || esi_4[4] != 0xffffffff)
                            int32_t eax_52 = esi_4[4]
                            int32_t* ecx_7 = esi_4[1]
                            
                            if (ecx_7 == 0)
                            label_4b477d:
                                sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                    "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t* ecx_8 = ecx_7
                            
                            while (true)
                                void* edx_12 = &ecx_8[1]
                                ecx_8 = *ecx_8
                                
                                if (edi_3 u>= edx_12 && edi_3 u< edx_12 + esi_4[2] * eax_52
                                        && mods.dp.d(sx.q(edi_3 - edx_12), eax_52) == 0)
                                    break
                                
                                if (ecx_8 == 0)
                                    goto label_4b477d
                            
                        label_4b467c:
                            *edi_3 = *esi_4
                            *esi_4 = edi_3
                            result.b = 0
                        else
                            _aligned_free_base(edi_3)
                            result.b = 0
        else
            int32_t ebx_3
            
            while (true)
                ebx_3 = 0
                
                if (*esi + 1 s> 0)
                    break
                
            label_4b4483:
                int32_t eax_31 = var_68_1 + 1
                var_68_1 = eax_31
                
                if (eax_31 s>= esi[1])
                    goto label_4b4490
            
            while (true)
                int32_t var_80_5 = esi[3] + ((esi[1] * ebx_3 + var_68_1) << 3)
                
                if (sub_5a8a9c(eax_4, "%lf\n") != 1)
                    break
                
                ebx_3 += 1
                
                if (ebx_3 s>= *esi + 1)
                    goto label_4b4483
            
            int32_t var_8_4 = 0xffffffff
            char* result_4 = result_1
            
            if (result_4 == 0 || *result_4 == 0)
                result.b = 0
            else
                edi_3 = &result_4[0xfffffff0]
                
                if (*edi_3 != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp4_1 = *(edi_3 + 4)
                *(edi_3 + 4) -= 1
                
                if (temp4_1 != 1)
                    result.b = 0
                else
                    void* esi_3 = data_26a44e4
                    int32_t ebx_6 = *(edi_3 + 0xc) + 0x10
                    
                    if (esi_3 == 0)
                        sub_4f4250()
                        esi_3 = data_26a44e4
                    
                    int32_t eax_42 = 0
                    
                    while (true)
                        if (ebx_6 s<= 1 << (eax_42.b + 4))
                            esi_4 = esi_3 + eax_42 * 0x14
                            break
                        
                        eax_42 += 1
                        
                        if (eax_42 s>= 7)
                            esi_4 = esi_3 + 0x8c
                            break
                    
                    esi_4[3] -= 1
                    
                    if (ebx_6 s<= 0x400 || esi_4[4] != 0xffffffff)
                        int32_t eax_44 = esi_4[4]
                        int32_t* ecx_4 = esi_4[1]
                        
                        if (ecx_4 == 0)
                        label_4b4661:
                            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        while (true)
                            void* edx_8 = &ecx_4[1]
                            ecx_4 = *ecx_4
                            
                            if (edi_3 u>= edx_8 && edi_3 u< edx_8 + esi_4[2] * eax_44
                                    && mods.dp.d(sx.q(edi_3 - edx_8), eax_44) == 0)
                                break
                            
                            if (ecx_4 == 0)
                                goto label_4b4661
                        
                        goto label_4b467c
                    
                    _aligned_free_base(edi_3)
                    result.b = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
