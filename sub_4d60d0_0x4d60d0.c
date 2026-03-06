// 函数名称: sub_4d60d0
// 虚拟地址: 0x4d60d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4d60d0()
{
    // 第一条实际指令: if (data_27e7fd8 == 0)
    if (data_27e7fd8 == 0)
        return 
    
    void* edx_1 = data_26a44e4
    
    if (edx_1 == 0)
        sub_4f4250()
        edx_1 = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x28)
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
        __builtin_memset(eax_3, 0, 0x28)
        eax_3[1] = 0
        eax_3[2] = 0
        eax_3[3] = 0
        eax_3[4] = 0
        eax_3[5] = 1
        eax_3[6] = 0
    
    data_27e7fd4 = eax_3
    sub_4d6f50()
    long double x87_r7_1 = fconvert.t(0.850000024f)
    void* eax_4 = data_27e7fd4
    int32_t* ecx_3 = data_27e7fd8
    *(eax_4 + 0x1c) = fconvert.s(x87_r7_1)
    int32_t* edx_2 = *ecx_3
    *(eax_4 + 0x20) = fconvert.s(x87_r7_1)
    *(eax_4 + 0x24) = fconvert.s(float.t(1))
    (*edx_2)()
}
