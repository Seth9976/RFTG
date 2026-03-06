// 函数名称: sub_508c10
// 虚拟地址: 0x508c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_508c10()
{
    // 第一条实际指令: if (data_30785d8 != 0)
    if (data_30785d8 != 0)
        return 
    
    void* edx_1 = data_26a44e4
    
    if (edx_1 == 0)
        sub_4f4250()
        edx_1 = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x20)
            esi_2 = edx_1 + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            esi_2 = edx_1 + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* eax_3 = *esi_2
    *esi_2 = *eax_3
    *eax_3 = 0
    
    if (eax_3 == 0)
        eax_3 = nullptr
    else
        __builtin_memset(eax_3, 0, 0x20)
        eax_3[1] = 0
        eax_3[2] = 0
    
    data_30785d8 = eax_3
    eax_3[3] = 0
    eax_3[4] = 0
    eax_3[5] = 0x400
    eax_3[6] = 0
    sub_50ac20(&eax_3[3])
    sub_50a440()
    *(data_30785d8 + 0x1c) = 1
}
