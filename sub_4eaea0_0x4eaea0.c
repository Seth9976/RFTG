// 函数名称: sub_4eaea0
// 虚拟地址: 0x4eaea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4eaea0()
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
        if (1 << (eax_2.b + 4) s>= 0x30)
            esi_2 = edx + eax_2 * 0x14
            break
        
        eax_2 += 1
        
        if (eax_2 s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* edi = *esi_2
    *esi_2 = *edi
    sub_5abfc0(edi, 0, 0x30)
    
    if (edi == 0)
        *(eax + 0x30) = 0
        sub_4f36b0(nullptr)
        return 0xd328
    
    __builtin_memset(edi, 0, 0x14)
    edi[5] = 1
    edi[6] = 0
    *(eax + 0x30) = edi
    sub_4f36b0(edi)
    return 0xd328
}
