// 函数名称: sub_4d36b0
// 虚拟地址: 0x4d36b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d36b0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f0b8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = data_27e7fcc
    
    if (edi == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ecx = *(edi + 4)
    int32_t edx = ecx[1]
    int32_t eax_4 = 0
    int32_t* var_18 = ecx
    int32_t eax_5
    
    if (edx == 0)
    label_4d3740:
        eax_5 = 0
    else
        void* esi_1 = *ecx
        
        while ((*(esi_1 + 0x68) & 0xffff0000) == 0)
            eax_4 += 1
            esi_1 += 0x6c
            
            if (eax_4 u>= edx)
                goto label_4d3740
        
        eax_5 = *(esi_1 + 0x68)
    
    if (eax_5 != 0)
        while (true)
            int32_t edi_1 = *ecx
            int32_t edx_1 = ecx[1]
            int32_t eax_7 = eax_5 & 0xffff
            int32_t eax_8 = eax_7 + 1
            int32_t* esi_4 = eax_7 * 0x6c + edi_1
            int32_t var_14_1
            
            if (eax_8 u>= edx_1)
            label_4d37c1:
                var_14_1 = 0
            else
                void* ecx_3 = eax_8 * 0x6c + edi_1
                
                while ((*(ecx_3 + 0x68) & 0xffff0000) == 0)
                    eax_8 += 1
                    ecx_3 += 0x6c
                    
                    if (eax_8 u>= edx_1)
                        goto label_4d37c1
                
                var_14_1 = *(ecx_3 + 0x68)
            
            int32_t* var_20_1 = esi_4
            sub_4d3c40(esi_4[0x1a])
            int32_t* eax_10 = esi_4[0xb]
            
            if (eax_10 != 0)
                sub_515650(eax_10)
            
            void* eax_11 = data_27e7fcc
            
            if (eax_11 == 0)
                sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* ebx_1 = *(eax_11 + 4)
            int32_t var_8_1 = 0
            sub_4d5a00(&esi_4[0xe])
            int32_t var_8_2 = 0xffffffff
            char* eax_12 = *esi_4
            
            if (eax_12 != 0 && *eax_12 != 0)
                if (*(eax_12 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp0_1 = *(eax_12 - 0xc)
                *(eax_12 - 0xc) -= 1
                
                if (temp0_1 == 1)
                    int32_t edi_3 = *(eax_12 - 4) + 0x10
                    
                    if (data_26a44e4 == 0)
                        sub_4f4250()
                    
                    int32_t eax_14 = 0
                    int32_t* ecx_7
                    
                    while (true)
                        if (edi_3 s<= 1 << (eax_14.b + 4))
                            ecx_7 = data_26a44e4 + eax_14 * 0x14
                            break
                        
                        eax_14 += 1
                        
                        if (eax_14 s>= 7)
                            ecx_7 = data_26a44e4 + 0x8c
                            break
                    
                    sub_4f4430(&eax_12[0xfffffff0], ecx_7, edi_3)
            
            int32_t eax_16 = *(ebx_1 + 0xc)
            *(ebx_1 + 0xc) = zx.d(esi_4[0x1a].w)
            esi_4[0x1a] = eax_16
            *(ebx_1 + 0x10) -= 1
            
            if (var_14_1 == 0)
                edi = data_27e7fcc
                break
            
            ecx = var_18
            eax_5 = var_14_1
    
    if (edi == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    char result = sub_4d5640(*(edi + 4))
    int32_t* esi_6 = *(edi + 4)
    
    if (esi_6 != 0)
        sub_4d5640(esi_6)
        void* edx_5 = data_26a44e4
        int32_t* esi_7 = *(edi + 4)
        
        if (edx_5 == 0)
            sub_4f4250()
            edx_5 = data_26a44e4
        
        int32_t eax_21 = 0
        int32_t* edi_6
        
        while (true)
            if (1 << (eax_21.b + 4) s>= 0x1c)
                edi_6 = edx_5 + eax_21 * 0x14
                break
            
            eax_21 += 1
            
            if (eax_21 s>= 7)
                edi_6 = edx_5 + 0x8c
                break
        
        edi_6[3] -= 1
        result = sub_4f4210(edi_6, esi_7)
        
        if (result == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_7 = *edi_6
        *edi_6 = esi_7
        *(edi + 4) = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
