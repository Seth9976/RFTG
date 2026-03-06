// 函数名称: sub_4e75e0
// 虚拟地址: 0x4e75e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e75e0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
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
        if (1 << (eax_2.b + 4) s>= 0x1c)
            esi_2 = edx + eax_2 * 0x14
            break
        
        eax_2 += 1
        
        if (eax_2 s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* eax_3 = *esi_2
    *esi_2 = *eax_3
    *eax_3 = 0
    __builtin_memset(&eax_3[1], 0, 0x18)
    
    if (eax_3 == 0)
        *(eax + 0x2c) = 0
        sub_4eab70(nullptr)
        return 0xd130
    
    __builtin_memset(eax_3, 0, 0x1c)
    eax_3[5] = 1
    eax_3[6] = 0
    *(eax + 0x2c) = eax_3
    sub_4eab70(eax_3)
    return 0xd130
}
