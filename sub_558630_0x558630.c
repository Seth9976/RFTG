// 函数名称: sub_558630
// 虚拟地址: 0x558630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_558630()
{
    // 第一条实际指令: void* edx = data_26a44e4
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 4)
            esi_2 = edx + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* result = *esi_2
    *esi_2 = *result
    *result = 0
    
    if (result == 0)
        data_27e7bb4 = 0
        data_307917c = 0
        return 0
    
    *result = &data_892874
    data_27e7bb4 = result
    data_307917c = result
    return result
}
