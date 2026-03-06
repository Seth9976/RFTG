// 函数名称: sub_533500
// 虚拟地址: 0x533500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_533500(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax = data_27e7fcc
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int128_t* eax_2 = sub_5338d0(*(eax + 0xc))
    
    if (eax_2 == 0)
        return eax_2
    
    int32_t edi = *(eax_2 + 0x2c)
    *eax_2 = 0
    void* edx = *(arg2 + 0x10)
    *(eax_2 + 0xc) = edx
    eax_2[2].d = 0
    *(eax_2 + 0x24) = 0
    *(eax_2 + 0x28) = 0
    eax_2[1].d = 0
    *(eax_2 + 0x14) = 0
    *(eax_2 + 0x18) = 0
    int32_t var_10 = 1
    *(eax_2 + 0x1c) = 0x3f800000
    int32_t var_14 = 0
    void* var_10_1 = arg1
    int32_t var_14_1 = 4
    int32_t ecx_2
    void* edx_2
    ecx_2, edx_2 =
        sub_530b60(eax_2 + 4, arg1, sub_530b60(eax_2 + 4, edx, arg2, &data_8beefc), &data_8beefc)
    int32_t* const var_10_2 = &data_840b64
    int32_t var_14_2 = 1
    sub_530b60(eax_2 + 4, edx_2, ecx_2, &data_8beefc)
    return edi
}
