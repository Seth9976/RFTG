// 函数名称: sub_5697b0
// 虚拟地址: 0x5697b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5697b0()
{
    // 第一条实际指令: if (data_3079210 == 0)
    if (data_3079210 == 0)
        return 
    
    void* ecx_1 = data_3079208
    
    if (ecx_1 != 0)
        int32_t eax_1 = *(ecx_1 + 4)
        
        if (eax_1 == 0x22 || eax_1 == 0x1d || eax_1 == 0x19 || eax_1 == 0x1b || eax_1 == 0x1e
                || eax_1 == 0x20)
            *(ecx_1 + 0x1c) -= 1
        
        data_3079208 = 0
    
    sub_5756a0()
    sub_52fdf0()
    sub_56f1e0()
    int32_t eax_2 = data_27c0490
    
    if (eax_2 != 0)
        sub_4f7100(eax_2)
        data_27c0490 = 0
    
    sub_5041e0(data_3079210 + 0x34)
    sub_5041e0(data_3079210 + 0xc)
    int32_t* ebx_1 = data_3079210
    
    if (*ebx_1 != 0)
        sub_56be40(ebx_1)
        void* esi_2 = (ebx_1[1] << 2) + 4
        sub_4f4430(*ebx_1, sub_4f4380(esi_2), esi_2)
        *ebx_1 = 0
        ebx_1 = data_3079210
    
    if (ebx_1 == 0)
        return 
    
    sub_569920(ebx_1)
    void* edx_1 = data_26a44e4
    int32_t* esi_3 = data_3079210
    
    if (edx_1 == 0)
        sub_4f4250()
        edx_1 = data_26a44e4
    
    int32_t eax_7 = 0
    int32_t* ebx_3
    
    while (true)
        if (1 << (eax_7.b + 4) s>= 0x88)
            ebx_3 = edx_1 + eax_7 * 0x14
            break
        
        eax_7 += 1
        
        if (eax_7 s>= 7)
            ebx_3 = edx_1 + 0x8c
            break
    
    ebx_3[3] -= 1
    
    if (sub_4f4210(ebx_3, esi_3) == 0)
        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x81, 
            "XAllocator::Free")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    *esi_3 = *ebx_3
    *ebx_3 = esi_3
    data_3079210 = 0
}
