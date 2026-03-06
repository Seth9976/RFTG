// 函数名称: sub_56e600
// 虚拟地址: 0x56e600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_56e600()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f1f8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = data_27e7fcc
    
    if (edi == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ecx = *(edi + 0x2c)
    int32_t edx = ecx[1]
    int32_t eax_4 = 0
    int32_t* var_28 = ecx
    int32_t esi_2
    
    if (edx == 0)
    label_56e69b:
        esi_2 = 0
    else
        void* esi_1 = *ecx
        
        while ((*(esi_1 + 0x90) & 0xffff0000) == 0)
            eax_4 += 1
            esi_1 += 0x94
            
            if (eax_4 u>= edx)
                goto label_56e69b
        
        esi_2 = *(esi_1 + 0x90)
    
    int32_t edx_1 = esi_2
    
    if (esi_2 != 0)
        while (true)
            int32_t esi_3 = *ecx
            int32_t edx_2 = edx_1 & 0xffff
            int32_t edx_3 = ecx[1]
            int32_t eax_6 = edx_2 + 1
            void* ebx_3 = edx_2 * 0x94 + esi_3
            int32_t ecx_4
            
            if (eax_6 u>= edx_3)
            label_56e6fb:
                ecx_4 = 0
            else
                void* ecx_3 = eax_6 * 0x94 + esi_3
                
                while ((*(ecx_3 + 0x90) & 0xffff0000) == 0)
                    eax_6 += 1
                    ecx_3 += 0x94
                    
                    if (eax_6 u>= edx_3)
                        goto label_56e6fb
                
                ecx_4 = *(ecx_3 + 0x90)
            
            int32_t* eax_7 = *(ebx_3 + 0x68)
            edx_1 = ecx_4
            
            if (eax_7 != 0)
                int32_t edi_3 = *(ebx_3 + 0x6c) * 0x60
                
                if (data_26a44e4 == 0)
                    sub_4f4250()
                
                int32_t edx_4 = 0
                int32_t* esi_5
                
                while (true)
                    if (edi_3 s<= 1 << (edx_4.b + 4))
                        esi_5 = data_26a44e4 + edx_4 * 0x14
                        break
                    
                    edx_4 += 1
                    
                    if (edx_4 s>= 7)
                        esi_5 = data_26a44e4 + 0x8c
                        break
                
                esi_5[3] -= 1
                
                if (edi_3 s<= 0x400 || esi_5[4] != 0xffffffff)
                    void* edx_7 = esi_5[2] * esi_5[4]
                    int32_t* edi_4 = esi_5[1]
                    void* var_20_1 = edx_7
                    
                    if (edi_4 == 0)
                    label_56e841:
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t* eax_10 = eax_7
                    
                    while (true)
                        int32_t* ecx_7 = *edi_4
                        void* ecx_8 = &edi_4[1]
                        edi_4 = ecx_7
                        
                        if (eax_10 u>= ecx_8 && eax_10 u< edx_7 + ecx_8)
                            eax_10 = eax_7
                            
                            if (mods.dp.d(sx.q(eax_7 - ecx_8), esi_5[4]) == 0)
                                *eax_10 = *esi_5
                                *esi_5 = eax_10
                                break
                        
                        if (ecx_7 == 0)
                            goto label_56e841
                        
                        edx_7 = var_20_1
                else if (eax_7 != 0)
                    _aligned_free_base(eax_7)
                
                edi = data_27e7fcc
                *(ebx_3 + 0x68) = 0
            
            if (edi == 0)
                sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_14 = *(edi + 0x2c)
            int32_t esi_6 = *(eax_14 + 0xc)
            *(eax_14 + 0xc) = zx.d(*(ebx_3 + 0x90))
            edi = data_27e7fcc
            *(ebx_3 + 0x90) = esi_6
            *(eax_14 + 0x10) -= 1
            
            if (ecx_4 == 0)
                break
            
            ecx = var_28
    
    int32_t* edi_6 = *(edi + 0x30)
    void* esi_7 = nullptr
    
    while (true)
        void* ebx_4
        
        if (esi_7 != 0)
            ebx_4 = esi_7 + 0x7c
        else
            ebx_4 = *edi_6
        
        int32_t eax_18 = *edi_6 + edi_6[1] * 0x7c
        
        if (ebx_4 u>= eax_18)
            break
        
        while ((*(ebx_4 + 0x78) & 0xffff0000) == 0)
            ebx_4 += 0x7c
            
            if (ebx_4 u>= eax_18)
                goto label_56e8d1
        
        esi_7 = ebx_4
        sub_4eb650()
    
    label_56e8d1:
    void* eax_19 = data_27e7fcc
    
    if (eax_19 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_21 = *(eax_19 + 4)
    int32_t* var_20_2 = eax_21
    void* ebx_5 = nullptr
    int32_t result
    
    while (true)
        void* ebx_6
        
        if (ebx_5 != 0)
            ebx_6 = ebx_5 + 0x6c
        else
            ebx_6 = *eax_21
        
        result = *eax_21 + eax_21[1] * 0x6c
        
        if (ebx_6 u>= result)
            break
        
        void* ebx_7 = ebx_6
        
        while (true)
            if ((*(ebx_7 + 0x68) & 0xffff0000) != 0)
                void* var_1c_2 = ebx_7
                sub_4d3c40(*(ebx_7 + 0x68))
                int32_t* eax_24 = *(ebx_7 + 0x2c)
                
                if (eax_24 != 0)
                    sub_515650(eax_24)
                
                void* eax_25 = data_27e7fcc
                
                if (eax_25 == 0)
                    sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, 
                        "GetGameData")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* edi_8 = *(eax_25 + 4)
                int32_t var_8_1 = 0
                sub_4d5a00(ebx_7 + 0x38)
                int32_t var_8_2 = 0xffffffff
                char* eax_26 = *ebx_7
                
                if (eax_26 != 0 && *eax_26 != 0)
                    if (*(eax_26 - 0x10) != 0xfafafafa)
                        sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                            &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t temp2_1 = *(eax_26 - 0xc)
                    *(eax_26 - 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        int32_t edi_10 = *(eax_26 - 4) + 0x10
                        
                        if (data_26a44e4 == 0)
                            sub_4f4250()
                        
                        int32_t eax_27 = 0
                        int32_t* ecx_15
                        
                        while (true)
                            if (edi_10 s<= 1 << (eax_27.b + 4))
                                ecx_15 = data_26a44e4 + eax_27 * 0x14
                                break
                            
                            eax_27 += 1
                            
                            if (eax_27 s>= 7)
                                ecx_15 = data_26a44e4 + 0x8c
                                break
                        
                        sub_4f4430(&eax_26[0xfffffff0], ecx_15, edi_10)
                
                int32_t eax_29 = *(edi_8 + 0xc)
                *(edi_8 + 0xc) = zx.d(*(ebx_7 + 0x68))
                *(ebx_7 + 0x68) = eax_29
                *(edi_8 + 0x10) -= 1
                ebx_5 = ebx_7
                eax_21 = var_20_2
                break
            
            ebx_7 += 0x6c
            
            if (ebx_7 u>= result)
                goto label_56e93f
    
    label_56e93f:
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
