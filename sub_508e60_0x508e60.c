// 函数名称: sub_508e60
// 虚拟地址: 0x508e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_508e60()
{
    // 第一条实际指令: if (data_30785d8 == 0)
    if (data_30785d8 == 0)
        return 
    
    sub_508dd0()
    int32_t* ebx_1 = data_30785d8
    
    if (*ebx_1 != 0)
        sub_50a9e0(ebx_1)
        void* esi_2 = (ebx_1[1] << 2) + 4
        sub_4f4430(*ebx_1, sub_4f4380(esi_2), esi_2)
        *ebx_1 = 0
        ebx_1 = data_30785d8
    
    int32_t* i_1 = ebx_1[4]
    
    if (i_1 != 0)
        int32_t* i
        
        do
            i = *i_1
            _aligned_free_base(i_1)
            i_1 = i
        while (i != 0)
    
    ebx_1[4] = 0
    ebx_1[6] = 0
    
    if (ebx_1 == 0)
        return 
    
    sub_508f80()
    void* edx_1 = data_26a44e4
    int32_t* esi_3 = data_30785d8
    
    if (edx_1 == 0)
        sub_4f4250()
        edx_1 = data_26a44e4
    
    int32_t eax_2 = 0
    void* ebx_3
    
    while (true)
        if (1 << (eax_2.b + 4) s>= 0x20)
            ebx_3 = edx_1 + eax_2 * 0x14
            break
        
        eax_2 += 1
        
        if (eax_2 s>= 7)
            ebx_3 = edx_1 + 0x8c
            break
    
    *(ebx_3 + 0xc) -= 1
    
    if (sub_4f4210(ebx_3, esi_3).b == 0)
        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
            "XAllocator::Free")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    *esi_3 = *ebx_3
    *ebx_3 = esi_3
    data_30785d8 = 0
}
