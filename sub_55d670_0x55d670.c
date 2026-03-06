// 函数名称: sub_55d670
// 虚拟地址: 0x55d670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_55d670()
{
    // 第一条实际指令: void* edx = data_26a44e4
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x6c)
            esi_2 = edx + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* edi = *esi_2
    *esi_2 = *edi
    int128_t* result = sub_5abfc0(edi, 0, 0x6c)
    
    if (edi == 0)
        data_3079204 = 0
        data_3078804 = 0
        return 0
    
    *edi = &data_8941a8
    __builtin_memset(&edi[0x10], 0, 0x14)
    edi[0x16] = 0
    edi[0x15] = 1
    data_3079204 = edi
    data_3078804 = edi
    return result
}
