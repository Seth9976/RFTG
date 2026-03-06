// 函数名称: sub_4e76d0
// 虚拟地址: 0x4e76d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e76d0()
{
    // 第一条实际指令: void* edx = data_27e7fcc
    void* edx = data_27e7fcc
    
    if (edx == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi = *(edx + 0x2c)
    int32_t* var_10 = edi
    void* i_1 = nullptr
    label_4e7720:
    void* i
    
    if (i_1 != 0)
        i = i_1 + 0x94
    else
        i = *edi
    
    void* result
    
    for (result = edi[1] * 0x94 + *edi; i u< result; i += 0x94)
        if ((*(i + 0x90) & 0xffff0000) != 0)
            int32_t* eax_5 = *(i + 0x68)
            
            if (eax_5 != 0)
                void* edx_1 = data_26a44e4
                int32_t edi_3 = *(i + 0x6c) * 0x60
                
                if (edx_1 == 0)
                    sub_4f4250()
                    edx_1 = data_26a44e4
                
                int32_t eax_6 = 0
                int32_t* esi_2
                
                while (true)
                    if (edi_3 s<= 1 << (eax_6.b + 4))
                        esi_2 = edx_1 + eax_6 * 0x14
                        break
                    
                    eax_6 += 1
                    
                    if (eax_6 s>= 7)
                        esi_2 = edx_1 + 0x8c
                        break
                
                esi_2[3] -= 1
                
                if (edi_3 s<= 0x400 || esi_2[4] != 0xffffffff)
                    void* edi_6 = esi_2[2] * esi_2[4]
                    int32_t* ecx_3 = esi_2[1]
                    void* var_c_1 = edi_6
                    
                    if (ecx_3 == 0)
                    label_4e785c:
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        void* edx_2 = &ecx_3[1]
                        ecx_3 = *ecx_3
                        
                        if (eax_5 u>= edx_2)
                            if (eax_5 u< edi_6 + edx_2)
                                esi_2[4]
                                
                                if (mods.dp.d(sx.q(eax_5 - edx_2), esi_2[4]) == 0)
                                    *eax_5 = *esi_2
                                    *esi_2 = eax_5
                                    break
                            
                            edi_6 = var_c_1
                        
                        if (ecx_3 == 0)
                            goto label_4e785c
                else if (eax_5 != 0)
                    _aligned_free_base(eax_5)
                
                edi = var_10
                edx = data_27e7fcc
                *(i + 0x68) = 0
            
            if (edx != 0)
                void* eax_15 = *(edx + 0x2c)
                int32_t ecx = *(eax_15 + 0xc)
                *(eax_15 + 0xc) = zx.d(*(i + 0x90))
                *(i + 0x90) = ecx
                *(eax_15 + 0x10) -= 1
                i_1 = i
                goto label_4e7720
            
            sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    if (edx == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi_8 = *(edx + 0x2c)
    
    if (*edi_8 != 0)
        sub_4ead00(edi_8)
        result = *edi_8
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(edi_8, 0, 0x14)
        edi_8[6] = 0
    
    int32_t* edi_9 = *(edx + 0x2c)
    
    if (edi_9 != 0)
        if (*edi_9 != 0)
            sub_4ead00(edi_9)
            int32_t eax_19 = *edi_9
            
            if (eax_19 != 0)
                _aligned_free_base(eax_19)
            
            __builtin_memset(edi_9, 0, 0x14)
            edi_9[6] = 0
        
        void* edx_5 = data_26a44e4
        int32_t* esi_4 = *(edx + 0x2c)
        
        if (edx_5 == 0)
            sub_4f4250()
            edx_5 = data_26a44e4
        
        int32_t eax_20 = 0
        int32_t* edi_11
        
        while (true)
            if (1 << (eax_20.b + 4) s>= 0x1c)
                edi_11 = edx_5 + eax_20 * 0x14
                break
            
            eax_20 += 1
            
            if (eax_20 s>= 7)
                edi_11 = edx_5 + 0x8c
                break
        
        edi_11[3] -= 1
        result = sub_4f4210(edi_11, esi_4)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_4 = *edi_11
        *edi_11 = esi_4
        *(edx + 0x2c) = 0
    
    return result
}
