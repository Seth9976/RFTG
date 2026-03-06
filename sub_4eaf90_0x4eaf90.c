// 函数名称: sub_4eaf90
// 虚拟地址: 0x4eaf90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4eaf90()
{
    // 第一条实际指令: void* eax_10 = data_27e7fcc
    void* eax_10 = data_27e7fcc
    
    if (eax_10 == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* edi = *(eax_10 + 0x30)
    void* esi = nullptr
    
    while (true)
        void* ebx_1
        
        if (esi != 0)
            ebx_1 = esi + 0x7c
        else
            ebx_1 = *edi
        
        int32_t eax_3 = edi[1] * 0x7c + *edi
        
        if (ebx_1 u>= eax_3)
            break
        
        while ((*(ebx_1 + 0x78) & 0xffff0000) == 0)
            ebx_1 += 0x7c
            
            if (ebx_1 u>= eax_3)
                goto label_4eaff7
        
        esi = ebx_1
        sub_4eb650()
    
    label_4eaff7:
    void* result = data_27e7fcc
    
    if (result == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* esi_1 = *(result + 0x30)
    void* edi_1 = result + 0x30
    
    if (*esi_1 != 0)
        sub_4f3850(esi_1)
        result = *esi_1
        
        if (result != 0)
            result = _aligned_free_base(result)
        
        __builtin_memset(esi_1, 0, 0x14)
        esi_1[6] = 0
    
    int32_t* esi_2 = *edi_1
    
    if (esi_2 != 0)
        if (*esi_2 != 0)
            sub_4f3850(esi_2)
            int32_t eax_5 = *esi_2
            
            if (eax_5 != 0)
                _aligned_free_base(eax_5)
            
            __builtin_memset(esi_2, 0, 0x14)
            esi_2[6] = 0
        
        void* edx_1 = data_26a44e4
        int32_t* esi_3 = *edi_1
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax_6 = 0
        int32_t* ebx_3
        
        while (true)
            if (1 << (eax_6.b + 4) s>= 0x30)
                ebx_3 = edx_1 + eax_6 * 0x14
                break
            
            eax_6 += 1
            
            if (eax_6 s>= 7)
                ebx_3 = edx_1 + 0x8c
                break
        
        ebx_3[3] -= 1
        result = sub_4f4210(ebx_3, esi_3)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_3 = *ebx_3
        *ebx_3 = esi_3
        *edi_1 = 0
    
    return result
}
