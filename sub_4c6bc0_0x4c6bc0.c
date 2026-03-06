// 函数名称: sub_4c6bc0
// 虚拟地址: 0x4c6bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4c6bc0()
{
    // 第一条实际指令: if (data_27e7bb4 == 0)
    if (data_27e7bb4 == 0)
        return 
    
    void* edx_1 = data_26a44e4
    
    if (edx_1 == 0)
        sub_4f4250()
        edx_1 = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x5c)
            esi_2 = edx_1 + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            esi_2 = edx_1 + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* edi_1 = *esi_2
    *esi_2 = *edi_1
    sub_5abfc0(edi_1, 0, 0x5c)
    int32_t* eax_2
    
    if (edi_1 == 0)
        eax_2 = nullptr
    else
        eax_2 = edi_1
        sub_4c6c70(eax_2)
    
    data_27e7bb8 = eax_2
    sub_4c9340(&eax_2[7])
    sub_4c9140()
    (**data_27e7bb4)()
}
