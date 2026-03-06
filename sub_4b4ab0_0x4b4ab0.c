// 函数名称: sub_4b4ab0
// 虚拟地址: 0x4b4ab0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4b4ab0(void* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69053b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_54 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t i_1 = 0
    
    if (data_26a44b0 s> 0)
        int32_t* ebx_2 = arg1 + 0x10
        int32_t* var_2c_1 = ebx_2
        int32_t i
        
        do
            int32_t esi_1 = *ebx_2
            
            if (esi_1 != 0)
                void* edi_1 = sub_4fc3d0(&data_be1cb8, esi_1)
                int32_t* eax_4 = sub_4f4890(*(edi_1 + 4))
                int32_t ecx_1 = 0
                int32_t* var_34_1 = eax_4
                int32_t var_38_1 = 0
                
                if (eax_4[1] s> 0)
                    void* ebx_3 = edi_1 + 0x30
                    int32_t var_3c_1 = 0
                    void* var_40_1 = ebx_3
                    
                    while (true)
                        void* esi_3 = *eax_4
                        int32_t edi_2 = *(esi_3 + ecx_1 + 8)
                        
                        if (ecx_1 s>= 0x11800)
                            sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                                "UIStateElementGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int32_t edx_1 = *ebx_3
                        int128_t* var_44_1
                        int32_t ecx_2
                        int128_t* edi_3
                        
                        if (edx_1 != 0)
                            int128_t* eax_6
                            eax_6, ecx_2 = sub_4fc1e0(ecx_1, edx_1)
                            var_44_1 = eax_6
                            edi_3 = eax_6
                        else
                            int128_t* eax_5 = sub_4fc0d0()
                            *(eax_5 + 4) = edi_2
                            ecx_2 = *(eax_5 + 0x1bc)
                            edi_3 = eax_5
                            *ebx_3 = ecx_2
                            var_44_1 = edi_3
                        
                        int32_t esi_5 = *(esi_3 + ecx_1 + 4)
                        
                        if (esi_5 == 2)
                            void* esi_9 = edi_3 + 0xa4
                            int32_t j_1 = 0x1e
                            int32_t j
                            
                            do
                                sub_4f7100(*esi_9)
                                esi_9 += 4
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                        else if (esi_5 == 7)
                            if (sub_4e7b40(ecx_2, *(edi_3 + 0x9c)) != 0)
                                sub_4e7bb0()
                        else if (esi_5 == 8 && sub_4eb5a0(ecx_2, edi_3[0xa].d) != 0)
                            sub_4eb650()
                        
                        int32_t var_c_1 = 0
                        char* esi_10 = edi_3[0x16].d
                        
                        if (esi_10 != 0 && *esi_10 != 0)
                            if (*(esi_10 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t temp6_1 = *(esi_10 - 0xc)
                            *(esi_10 - 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                void* edi_4 = data_26a44e4
                                int32_t ebx_7 = *(esi_10 - 4) + 0x10
                                
                                if (edi_4 == 0)
                                    sub_4f4250()
                                    edi_4 = data_26a44e4
                                
                                int32_t edx_5 = 0
                                void** edi_5
                                
                                while (true)
                                    if (ebx_7 s<= 1 << (edx_5.b + 4))
                                        edi_5 = edi_4 + edx_5 * 0x14
                                        break
                                    
                                    edx_5 += 1
                                    
                                    if (edx_5 s>= 7)
                                        edi_5 = edi_4 + 0x8c
                                        break
                                
                                edi_5[3] -= 1
                                
                                if (ebx_7 s<= 0x400 || edi_5[4] != 0xffffffff)
                                    int32_t eax_11 = edi_5[4]
                                    int32_t* ebx_8 = edi_5[1]
                                    void* edx_7 = edi_5[2] * eax_11
                                    void* var_20_1 = edx_7
                                    
                                    if (ebx_8 == 0)
                                    label_4b4f11:
                                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    while (true)
                                        int32_t* eax_16 = *ebx_8
                                        void* ecx_4 = &ebx_8[1]
                                        int32_t* var_24_1 = eax_16
                                        ebx_8 = eax_16
                                        
                                        if (&esi_10[0xfffffff0] u>= ecx_4
                                                && &esi_10[0xfffffff0] u< edx_7 + ecx_4)
                                            if (mods.dp.d(sx.q(&esi_10[0xfffffff0] - ecx_4), eax_11)
                                                    == 0)
                                                *(esi_10 - 0x10) = *edi_5
                                                *edi_5 = &esi_10[0xfffffff0]
                                                break
                                            
                                            eax_16 = ebx_8
                                        
                                        if (eax_16 == 0)
                                            goto label_4b4f11
                                        
                                        edx_7 = var_20_1
                                else
                                    _aligned_free_base(&esi_10[0xfffffff0])
                                
                                edi_3 = var_44_1
                        
                        int32_t var_c_2 = 0xffffffff
                        char* ebx_9 = *(edi_3 + 0x68)
                        
                        if (ebx_9 != 0 && *ebx_9 != 0)
                            if (*(ebx_9 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t temp7_1 = *(ebx_9 - 0xc)
                            *(ebx_9 - 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                void* esi_12 = data_26a44e4
                                int32_t edi_7 = *(ebx_9 - 4) + 0x10
                                
                                if (esi_12 == 0)
                                    sub_4f4250()
                                    esi_12 = data_26a44e4
                                
                                int32_t eax_18 = 0
                                void** esi_13
                                
                                while (true)
                                    if (edi_7 s<= 1 << (eax_18.b + 4))
                                        esi_13 = esi_12 + eax_18 * 0x14
                                        break
                                    
                                    eax_18 += 1
                                    
                                    if (eax_18 s>= 7)
                                        esi_13 = esi_12 + 0x8c
                                        break
                                
                                esi_13[3] -= 1
                                
                                if (edi_7 s<= 0x400 || esi_13[4] != 0xffffffff)
                                    int32_t eax_20 = esi_13[4]
                                    int32_t* ecx_6 = esi_13[1]
                                    
                                    if (ecx_6 == 0)
                                    label_4b4dbe:
                                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    while (true)
                                        void* edx_12 = &ecx_6[1]
                                        ecx_6 = *ecx_6
                                        
                                        if (&ebx_9[0xfffffff0] u>= edx_12
                                                && &ebx_9[0xfffffff0] u< edx_12 + esi_13[2] * eax_20
                                                && mods.dp.d(sx.q(&ebx_9[0xfffffff0] - edx_12), eax_20)
                                                == 0)
                                            *(ebx_9 - 0x10) = *esi_13
                                            *esi_13 = &ebx_9[0xfffffff0]
                                            break
                                        
                                        if (ecx_6 == 0)
                                            goto label_4b4dbe
                                else
                                    _aligned_free_base(&ebx_9[0xfffffff0])
                                
                                edi_3 = var_44_1
                        
                        int32_t eax_27 = data_be1ca8
                        var_40_1 += 4
                        var_3c_1 += 0x118
                        data_be1ca8 = zx.d(*(edi_3 + 0x1bc))
                        *(edi_3 + 0x1bc) = eax_27
                        data_be1cac -= 1
                        int32_t eax_29 = var_38_1 + 1
                        var_38_1 = eax_29
                        
                        if (eax_29 s>= var_34_1[1])
                            ebx_2 = var_2c_1
                            break
                        
                        ecx_1 = var_3c_1
                        ebx_3 = var_40_1
                        eax_4 = var_34_1
                
                int32_t eax_30 = data_be1cc4
                data_be1cc4 = zx.d(*(edi_1 + 0x434))
                *(edi_1 + 0x434) = eax_30
                data_be1cc8 -= 1
            
            i = i_1 + 1
            *ebx_2 = 0
            ebx_2 = &ebx_2[1]
            i_1 = i
            var_2c_1 = ebx_2
        while (i s< data_26a44b0)
    
    int32_t result = *(arg1 + 0x50)
    
    if (result != 0)
        result = sub_4f7100(result)
    
    *(arg1 + 0x50) = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
