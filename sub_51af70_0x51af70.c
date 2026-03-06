// 函数名称: sub_51af70
// 虚拟地址: 0x51af70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_51af70()
{
    // 第一条实际指令: int32_t var_8 = 0x200
    int32_t var_8 = 0x200
    sub_5c68c0()
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 8)
            esi_2 = edx + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* eax_1 = *esi_2
    *esi_2 = *eax_1
    *eax_1 = 0
    eax_1[1] = 0
    data_30785ec = eax_1
    int32_t* result = sub_5c7020(nullptr)
    *data_30785ec = result
    return result
}
