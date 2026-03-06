// 函数名称: sub_536590
// 虚拟地址: 0x536590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_536590()
{
    // 第一条实际指令: void* entry_ebx
    void* entry_ebx
    int128_t* esi = *(entry_ebx + 0x50)
    
    if (esi == 0)
        return 
    
    sub_65f700(esi)
    
    if (esi != 0)
        void* edx_1 = data_26a44e4
        
        if (edx_1 == 0)
            sub_4f4250()
            edx_1 = data_26a44e4
        
        int32_t eax_1 = 0
        int128_t** edi_2
        
        while (true)
            if (1 << (eax_1.b + 4) s>= 0x2e0)
                edi_2 = edx_1 + eax_1 * 0x14
                break
            
            eax_1 += 1
            
            if (eax_1 s>= 7)
                edi_2 = edx_1 + 0x8c
                break
        
        edi_2[3] -= 1
        
        if (sub_4f4210(edi_2, esi) == 0)
            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 
                0x81, "XAllocator::Free")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi = *edi_2
        *edi_2 = esi
    
    *(entry_ebx + 0x50) = 0
}
