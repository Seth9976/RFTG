// 函数名称: sub_55d730
// 虚拟地址: 0x55d730
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_55d730(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x40) != 0)
    if (*(arg1 + 0x40) != 0)
        sub_563f50(arg1 + 0x40)
        void* eax = *(arg1 + 0x40)
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        __builtin_memset(arg1 + 0x40, 0, 0x14)
        *(arg1 + 0x58) = 0
    
    if (*(arg1 + 0x14) != 0)
        int32_t* eax_2 = *(arg1 + 0x14)
        (*(*eax_2 + 8))(eax_2)
    
    if (*(arg1 + 4) != 0)
        int32_t* eax_3 = *(arg1 + 4)
        (*(*eax_3 + 8))(eax_3)
    
    if (*(arg1 + 0xc) != 0)
        int32_t* eax_4 = *(arg1 + 0xc)
        (*(*eax_4 + 8))(eax_4)
    
    if (*(arg1 + 8) != 0)
        int32_t* edi_1 = *(arg1 + 8)
        (*(*edi_1 + 8))(edi_1)
    
    void** edi_2 = data_3079204
    
    if (edi_2 == 0)
        return 
    
    if (edi_2[0x10] != 0)
        sub_563f50(&edi_2[0x10])
        int32_t eax_7 = edi_2[0x10]
        
        if (eax_7 != 0)
            _aligned_free_base(eax_7)
        
        __builtin_memset(&edi_2[0x10], 0, 0x14)
        edi_2[0x16] = 0
    
    void* edx_4 = data_26a44e4
    
    if (edx_4 == 0)
        sub_4f4250()
        edx_4 = data_26a44e4
    
    int32_t eax_8 = 0
    void** edi_4
    
    while (true)
        if (1 << (eax_8.b + 4) s>= 0x6c)
            edi_4 = edx_4 + eax_8 * 0x14
            break
        
        eax_8 += 1
        
        if (eax_8 s>= 7)
            edi_4 = edx_4 + 0x8c
            break
    
    edi_4[3] -= 1
    
    if (sub_4f4210(edi_4, edi_2).b == 0)
        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
            "XAllocator::Free")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    *edi_2 = *edi_4
    *edi_4 = edi_2
    data_3079204 = 0
}
