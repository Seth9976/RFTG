// 函数名称: sub_525820
// 虚拟地址: 0x525820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_525820(void* arg1)
{
    // 第一条实际指令: int32_t i_2 = *(arg1 + 0x19d0)
    int32_t i_2 = *(arg1 + 0x19d0)
    int32_t i_1 = i_2
    
    if (i_2 s>= *(arg1 + 0x19d4))
        *(arg1 + 0x19d4) = i_2
        return i_2
    
    void* ebx_1 = arg1 + (i_2 << 2) + 0x15d0
    void* var_c = ebx_1
    int32_t i
    
    do
        uint32_t ecx
        void* eax = sub_530500(ecx, *ebx_1)
        int32_t j = 0
        
        if (*(eax + 0x19d4) s> 0)
            void* ebx_2 = eax + 0x15d0
            
            do
                sub_524b60(ebx_2)
                j += 1
                ebx_2 += 4
            while (j s< *(eax + 0x19d4))
            
            ebx_1 = var_c
        
        sub_530620(eax)
        ecx = zx.d(*(eax + 0x19dc))
        int32_t eax_1 = data_be1ee4
        data_be1ee4 = ecx
        *(eax + 0x19dc) = eax_1
        data_be1ee8 -= 1
        *ebx_1 = 0
        i = i_1 + 1
        ebx_1 += 4
        i_1 = i
        var_c = ebx_1
    while (i s< *(arg1 + 0x19d4))
    *(arg1 + 0x19d4) = *(arg1 + 0x19d0)
    return arg1
}
