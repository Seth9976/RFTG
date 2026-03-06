// 函数名称: sub_533060
// 虚拟地址: 0x533060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_533060()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* esi = data_27e7fcc
    
    if (esi == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ebx = *(esi + 0xc)
    int32_t ecx_1 = ebx[1]
    uint32_t result = 0
    int32_t* var_8_1 = ebx
    int32_t i_1
    
    if (ecx_1 == 0)
    label_5330c6:
        i_1 = 0
    else
        void* edx_1 = *ebx
        
        while ((*(edx_1 + 0x2c) & 0xffff0000) == 0)
            result += 1
            edx_1 += 0x30
            
            if (result u>= ecx_1)
                goto label_5330c6
        
        i_1 = *(edx_1 + 0x2c)
    
    int32_t i = i_1
    
    if (i_1 != 0)
        do
            int32_t esi_1 = ebx[1]
            int32_t edi = i & 0xffff
            int32_t edi_1 = *ebx
            int32_t eax_2 = edi + 1
            
            if (eax_2 u>= esi_1)
            label_533115:
                i = 0
            else
                void* edx_4 = eax_2 * 0x30 + edi_1
                
                while ((*(edx_4 + 0x2c) & 0xffff0000) == 0)
                    eax_2 += 1
                    edx_4 += 0x30
                    
                    if (eax_2 u>= esi_1)
                        goto label_533115
                
                i = *(edx_4 + 0x2c)
            
            int32_t ecx_5 = *(edi * 0x30 + edi_1 + 0x2c)
            result = data_27e7fcc
            void* edx_5 = *(result + 0xc)
            
            if (ecx_5 != 0)
                result = zx.d(ecx_5.w)
                
                if (result u< *(edx_5 + 4))
                    void* esi_4 = result * 0x30 + *edx_5
                    
                    if (*(esi_4 + 0x2c) == ecx_5)
                        sub_4fecf0(esi_4 + 4, data_315f704, &data_8beefc)
                        void* eax_3 = data_27e7fcc
                        
                        if (eax_3 == 0)
                            sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, 
                                "GetGameData")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        result = *(eax_3 + 0xc)
                        int32_t ecx_7 = *(result + 0xc)
                        ebx = var_8_1
                        *(result + 0xc) = zx.d(*(esi_4 + 0x2c))
                        *(esi_4 + 0x2c) = ecx_7
                        *(result + 0x10) -= 1
        while (i != 0)
        
        esi = data_27e7fcc
    
    int32_t* esi_5 = *(esi + 0xc)
    
    if (*esi_5 != 0)
        sub_533a10(esi_5)
        result = *esi_5
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(esi_5, 0, 0x14)
        esi_5[6] = 0
    
    int32_t* esi_6 = *(esi + 0xc)
    
    if (esi_6 != 0)
        if (*esi_6 != 0)
            sub_533a10(esi_6)
            int32_t eax_6 = *esi_6
            
            if (eax_6 != 0)
                _aligned_free_base(eax_6)
            
            __builtin_memset(esi_6, 0, 0x14)
            esi_6[6] = 0
        
        void* edi_2 = data_26a44e4
        int32_t* esi_7 = *(esi + 0xc)
        
        if (edi_2 == 0)
            sub_4f4250()
            edi_2 = data_26a44e4
        
        int32_t eax_7 = 0
        int32_t* edi_3
        
        while (true)
            if (1 << (eax_7.b + 4) s>= 0x1c)
                edi_3 = edi_2 + eax_7 * 0x14
                break
            
            eax_7 += 1
            
            if (eax_7 s>= 7)
                edi_3 = edi_2 + 0x8c
                break
        
        edi_3[3] -= 1
        result = sub_4f4210(edi_3, esi_7)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_7 = *edi_3
        *edi_3 = esi_7
        *(esi + 0xc) = 0
    
    return result
}
