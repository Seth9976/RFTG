// 函数名称: sub_531500
// 虚拟地址: 0x531500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_531500()
{
    // 第一条实际指令: void* eax_8 = data_27e7fcc
    void* eax_8 = data_27e7fcc
    
    if (eax_8 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* esi = *(eax_8 + 0x10)
    void* result = sub_531440()
    
    if (*esi != 0)
        sub_531d80(esi)
        result = *esi
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(esi, 0, 0x14)
        esi[6] = 0
    
    int32_t* esi_1 = *(eax_8 + 0x10)
    
    if (esi_1 != 0)
        if (*esi_1 != 0)
            sub_531d80(esi_1)
            int32_t eax_3 = *esi_1
            
            if (eax_3 != 0)
                _aligned_free_base(eax_3)
            
            __builtin_memset(esi_1, 0, 0x14)
            esi_1[6] = 0
        
        void* edx_1 = data_26a44e4
        int32_t* esi_2 = *(eax_8 + 0x10)
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax_4 = 0
        void* edi_2
        
        while (true)
            if (1 << (eax_4.b + 4) s>= 0x1c)
                edi_2 = edx_1 + eax_4 * 0x14
                break
            
            eax_4 += 1
            
            if (eax_4 s>= 7)
                edi_2 = edx_1 + 0x8c
                break
        
        *(edi_2 + 0xc) -= 1
        result = sub_4f4210(edi_2, esi_2)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_2 = *edi_2
        *edi_2 = esi_2
        *(eax_8 + 0x10) = 0
    
    return result
}
