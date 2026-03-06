// 函数名称: sub_5327f0
// 虚拟地址: 0x5327f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5327f0()
{
    // 第一条实际指令: void* eax_12 = data_27e7fcc
    void* eax_12 = data_27e7fcc
    
    if (eax_12 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* ebx = *(eax_12 + 0x34)
    void* edi = nullptr
    
    while (true)
        void* esi_1
        
        if (edi != 0)
            esi_1 = edi + 0x34
        else
            esi_1 = *ebx
        
        int32_t eax_3 = ebx[1] * 0x34 + *ebx
        
        if (esi_1 u>= eax_3)
            break
        
        while ((*(esi_1 + 0x30) & 0xffff0000) == 0)
            esi_1 += 0x34
            
            if (esi_1 u>= eax_3)
                goto label_532857
        
        edi = esi_1
        sub_532730(esi_1)
    
    label_532857:
    void* result = data_27e7fcc
    
    if (result == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void** esi_2 = *(result + 0x34)
    void* ebx_1 = result + 0x34
    
    if (*esi_2 != 0)
        sub_532e20(esi_2)
        result = *esi_2
        int32_t ecx
        
        if (result != 0)
            result, ecx = _aligned_free_base(result)
        __builtin_memset(esi_2, 0, 0x14)
        esi_2[6] = 0
    
    int32_t* esi_3 = *ebx_1
    
    if (esi_3 != 0)
        if (*esi_3 != 0)
            sub_532e20(esi_3)
            int32_t eax_7 = *esi_3
            
            if (eax_7 != 0)
                _aligned_free_base(eax_7)
            
            __builtin_memset(esi_3, 0, 0x14)
            esi_3[6] = 0
        
        void* edx_1 = data_26a44e4
        int32_t* esi_4 = *ebx_1
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax_8 = 0
        int32_t* edi_2
        
        while (true)
            if (1 << (eax_8.b + 4) s>= 0x1c)
                edi_2 = edx_1 + eax_8 * 0x14
                break
            
            eax_8 += 1
            
            if (eax_8 s>= 7)
                edi_2 = edx_1 + 0x8c
                break
        
        edi_2[3] -= 1
        result = sub_4f4210(edi_2, esi_4)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_4 = *edi_2
        *edi_2 = esi_4
        *ebx_1 = 0
    
    return result
}
