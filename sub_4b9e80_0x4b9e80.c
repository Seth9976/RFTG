// 函数名称: sub_4b9e80
// 虚拟地址: 0x4b9e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4b9e80(void* arg1)
{
    // 第一条实际指令: void* esi = data_26a44e4
    void* esi = data_26a44e4
    
    if (esi == 0)
        sub_4f4250()
        esi = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_1
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x530)
            esi_1 = esi + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_1 = esi + 0x8c
            break
    
    esi_1[3] += 1
    int128_t* eax_2
    
    if (esi_1[4] != 0xffffffff)
        if (*esi_1 == 0)
            sub_4f4170(esi_1)
        
        int128_t* edi_1 = *esi_1
        *esi_1 = *edi_1
        sub_5abfc0(edi_1, 0, 0x530)
        eax_2 = edi_1
    else
        int128_t* eax_1 = sub_4cce80(0x530)
        sub_5abfc0(eax_1, 0, 0x530)
        eax_2 = eax_1
    
    int128_t* esi_3
    
    if (eax_2 == 0)
        esi_3 = nullptr
    else
        __builtin_memset(eax_2 + 0x50c, 0, 0x18)
        *eax_2 = 1
        *(eax_2 + 4) = 0
        esi_3 = eax_2
    
    void* result = sub_4d27b0(esi_3, arg1)
    
    if (*(arg1 + 0x1d0) == 0)
        *(arg1 + 0x1d0) = esi_3
        return result
    
    sub_4c5870("syncedGame.gameNetSync == NULL", &data_83f3d3, "..\code\SyncedState.cpp", 0x13, 
        "SyncedStateInit")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
