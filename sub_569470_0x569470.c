// 函数名称: sub_569470
// 虚拟地址: 0x569470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_569470()
{
    // 第一条实际指令: void* edx = data_26a44e4
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x1c)
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
    int32_t i = 0
    __builtin_memset(eax_1, 0, 0x1c)
    data_3079234 = fconvert.s(fconvert.t(400f))
    data_307920c = eax_1
    data_3079238 = fconvert.s(fconvert.t(600f))
    void* edx_1 = &eax_1[1]
    int32_t result
    
    do
        result = 4
        
        if (i == 1 || i == 2)
            result = 6
        
        if ((i != 1 && i != 2) || i != 2)
            result |= 1
        
        *edx_1 = result
        i += 1
        edx_1 += 4
    while (i s< 6)
    
    data_3078810 = sub_56b640
    return result
}
