// 函数名称: sub_5a866b
// 虚拟地址: 0x5a866b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a866b()
{
    // 第一条实际指令: int32_t eax = data_3168000
    int32_t eax = data_3168000
    
    if (eax == 0)
        eax = 0x200
        data_3168000 = eax
    else if (eax s< 0x14)
        eax = 0x14
        data_3168000 = eax
    
    int32_t eax_1 = __calloc_crt(eax, 4)
    data_3166fec = eax_1
    
    if (eax_1 == 0)
        data_3168000 = 0x14
        eax_1 = __calloc_crt(0x14, 4)
        data_3166fec = eax_1
        
        if (eax_1 == 0)
            return 0x1a
    
    void*** edx = nullptr
    void** ecx_2 = &data_8b8090
    
    while (true)
        *(edx + eax_1) = ecx_2
        ecx_2 = &ecx_2[8]
        edx = &edx[1]
        
        if (ecx_2 s>= &data_8b8310)
            break
        
        eax_1 = data_3166fec
    
    int32_t edx_1 = 0
    
    for (void* i = &data_8b80a0; i s< 0x8b8100; )
        int32_t eax_6 = *(((edx_1 & 0x1f) << 6) + (&data_3166ee0)[edx_1 s>> 5])
        
        if (eax_6 == 0xffffffff || eax_6 == 0xfffffffe || eax_6 == 0)
            *i = 0xfffffffe
        
        i += 0x20
        edx_1 += 1
    
    return 0
}
