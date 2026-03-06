// 函数名称: sub_4f4250
// 虚拟地址: 0x4f4250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f4250()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* i = nullptr
    
    if (data_26a44e4 != 0)
        return 
    
    int128_t* eax_1 = sub_4cce80(0xa0)
    sub_5abfc0(eax_1, 0, 0xa0)
    data_26a44e4 = eax_1
    int32_t var_8_1 = 0
    
    do
        int32_t edi_1 = 1 << (var_8_1.b + 4)
        int32_t* esi_2 = i + data_26a44e4
        
        if (edi_1 u< 4)
            sub_4c5870("itemSize_arg >= sizeof(void*)", &data_83f3d3, "xAlloc.cpp", 0xf, 
                "XAllocator::Initialize")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        *esi_2 = 0
        esi_2[1] = 0
        esi_2[3] = 0
        esi_2[4] = edi_1
        esi_2[2] = divs.dp.d(0x10000, edi_1)
        sub_4f4170(esi_2)
        var_8_1 += 1
        i += 0x14
    while (i s< 0x8c)
    
    *(data_26a44e4 + 0x9c) = 0xffffffff
}
