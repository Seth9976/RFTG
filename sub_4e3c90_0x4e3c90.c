// 函数名称: sub_4e3c90
// 虚拟地址: 0x4e3c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4e3c90()
{
    // 第一条实际指令: DeleteCriticalSection(data_26a44e0 + 0x268)
    DeleteCriticalSection(data_26a44e0 + 0x268)
    void* result = data_26a44e0
    
    if (result != 0)
        sub_5a71d9(result, 0x4c, 8, sub_407cd0)
        void* edx_1 = data_26a44e4
        int32_t* esi_1 = data_26a44e0
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax_1 = 0
        int32_t* edi_2
        
        while (true)
            if (1 << (eax_1.b + 4) s>= 0x280)
                edi_2 = edx_1 + eax_1 * 0x14
                break
            
            eax_1 += 1
            
            if (eax_1 s>= 7)
                edi_2 = edx_1 + 0x8c
                break
        
        edi_2[3] -= 1
        result = sub_4f4210(edi_2, esi_1)
        
        if (result.b == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_1 = *edi_2
        *edi_2 = esi_1
        data_26a44e0 = 0
    
    return result
}
