// 函数名称: sub_4d8760
// 虚拟地址: 0x4d8760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4d8760()
{
    // 第一条实际指令: if (*(data_27e7fe0 + 0x1c) == 0)
    if (*(data_27e7fe0 + 0x1c) == 0)
        sub_4c5870("gpSpriteAppData->materialBound", &data_83f3d3, "Sprite.cpp", 0x5c, 
            "SpritePutMaterialInCache")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax_2 = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax_2.b + 4) s>= 0xf80)
            esi_2 = edx + eax_2 * 0x14
            break
        
        eax_2 += 1
        
        if (eax_2 s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    int128_t* eax_4
    int32_t edx_1
    
    if (esi_2[4] != 0xffffffff)
        if (*esi_2 == 0)
            sub_4f4170(esi_2)
        
        int32_t* edi_1 = *esi_2
        *esi_2 = *edi_1
        edx_1 = sub_5abfc0(edi_1, 0, 0xf80)
        eax_4 = edi_1
    else
        int128_t* eax_3 = sub_4cce80(0xf80)
        edx_1 = sub_5abfc0(eax_3, 0, 0xf80)
        eax_4 = eax_3
    
    int128_t* var_8 = eax_4
    char** entry_ebx
    *eax_4 = entry_ebx
    sub_5349c0(eax_4, edx_1, eax_4 + 4, entry_ebx)
    sub_518190(data_27e7fe0 + 0x40, &var_8)
    return var_8 + 4
}
