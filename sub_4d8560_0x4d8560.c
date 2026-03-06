// 函数名称: sub_4d8560
// 虚拟地址: 0x4d8560
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4d8560()
{
    // 第一条实际指令: void* edx = data_26a44e4
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x54)
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
    int128_t* result = sub_5abfc0(edi, 0, 0x54)
    
    if (edi == 0)
        data_27e7fe0 = 0
        return 0
    
    edi[0x10] = 0
    edi[0x11] = 0
    edi[0x12] = 0
    data_27e7fe0 = edi
    return result
}
