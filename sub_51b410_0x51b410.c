// 函数名称: sub_51b410
// 虚拟地址: 0x51b410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_51b410()
{
    // 第一条实际指令: if (data_30785f4 == 0)
    if (data_30785f4 == 0)
        return 
    
    sub_51b4c0()
    void* edx_1 = data_26a44e4
    int32_t* esi_1 = data_30785f4
    
    if (edx_1 == 0)
        sub_4f4250()
        edx_1 = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* edi_2
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 4)
            edi_2 = edx_1 + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            edi_2 = edx_1 + 0x8c
            break
    
    edi_2[3] -= 1
    
    if (sub_4f4210(edi_2, esi_1) == 0)
        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
            "XAllocator::Free")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    *esi_1 = *edi_2
    *edi_2 = esi_1
    data_30785f4 = 0
}
