// 函数名称: sub_514ff0
// 虚拟地址: 0x514ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_514ff0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edx = data_27e7fcc
    
    if (edx == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* esi = data_26a44e4
    void* var_8_1 = edx
    
    if (esi == 0)
        sub_4f4250()
        edx = data_27e7fcc
        esi = data_26a44e4
    
    int32_t eax_1 = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (eax_1.b + 4) s>= 0x20)
            esi_1 = esi + eax_1 * 0x14
            break
        
        eax_1 += 1
        
        if (eax_1 s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    
    if (*esi_1 == 0)
        sub_4f4170(esi_1)
        edx = data_27e7fcc
    
    int32_t* eax_2 = *esi_1
    *esi_1 = *eax_2
    __builtin_memset(eax_2, 0, 0x20)
    *(var_8_1 + 8) = eax_2
    
    if (edx == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* esi_2 = *(edx + 8)
    *esi_2 = 0
    esi_2[1] = 0
    esi_2[2] = 0x40
    esi_2[3] = 0
    sub_518440(esi_2)
    esi_2[4] = 0
    esi_2[5] = 0
    esi_2[6] = 0x40
    esi_2[7] = 0
    return sub_518500(&esi_2[4])
}
