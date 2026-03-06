// 函数名称: sub_4d62d0
// 虚拟地址: 0x4d62d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d62d0()
{
    // 第一条实际指令: int32_t* ecx_2 = data_27e7fd8
    int32_t* ecx_2 = data_27e7fd8
    
    if (ecx_2 == 0)
        return 
    
    (*(*ecx_2 + 4))()
    int32_t var_10_1 = data_27e7fd8
    sub_5a6ac9()
    int32_t* esi_1 = data_27e7fd4
    data_27e7fd8 = 0
    
    if (*esi_1 != 0)
        sub_4d70a0(esi_1)
        int32_t eax_4 = *esi_1
        
        if (eax_4 != 0)
            _aligned_free_base(eax_4)
        
        __builtin_memset(esi_1, 0, 0x14)
        esi_1[6] = 0
    
    void* edx_2 = data_26a44e4
    
    if (edx_2 == 0)
        sub_4f4250()
        edx_2 = data_26a44e4
    
    int32_t eax_7 = 0
    int32_t** edi_2
    
    while (true)
        if (1 << (eax_7.b + 4) s>= 0x28)
            edi_2 = edx_2 + eax_7 * 0x14
            break
        
        eax_7 += 1
        
        if (eax_7 s>= 7)
            edi_2 = edx_2 + 0x8c
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
    data_27e7fd4 = 0
}
