// 函数名称: sub_4d31e0
// 虚拟地址: 0x4d31e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d31e0()
{
    // 第一条实际指令: if (data_27e7fcc != 0)
    if (data_27e7fcc != 0)
        sub_4c5870("gpGameData == NULL", &data_83f3d3, "Game.cpp", 0x3d, "GameInitialize")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x5c)
            esi_2 = edx + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* edi = *esi_2
    *esi_2 = *edi
    sub_5abfc0(edi, 0, 0x5c)
    edi[0x16] = fconvert.s(fconvert.t(0.00400000019f))
    data_27e7fcc = edi
    edi[0x10].b = 0
    sub_514ff0()
    sub_4d35c0()
    sub_531350()
    sub_531ee0()
    sub_4e75e0()
    sub_4eaea0()
    sub_532640()
    int32_t result = sub_532f70()
    
    if (data_30785f1 == 0)
        result = (*(*data_27e7fd0 + 8))()
    
    char** entry_ebx
    
    if (entry_ebx != 0)
        result = sub_4d3190(entry_ebx)
    
    return result
}
