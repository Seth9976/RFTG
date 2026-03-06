// 函数名称: sub_634210
// 虚拟地址: 0x634210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_634210(void* arg1)
{
    // 第一条实际指令: int32_t* ecx = *(arg1 + 0x34)
    int32_t* ecx = *(arg1 + 0x34)
    void* eax_1 = *(*ecx + 4)
    uint32_t edx_1
    
    if (*(eax_1 + 8) u>= 8)
        edx_1 = zx.d(*(eax_1 + 9))
    else
        edx_1 = 0
    
    int32_t eax_3 = ecx[0x11] & 0xffff8fff
    
    if (eax_3 == 0x100)
        return *((edx_1 << 2) + &data_6bbe44)
    
    if (eax_3 == 0)
        return *((edx_1 << 2) + &data_6bbe30)
    
    if (eax_3 == 0x12)
        int32_t eax_4
        eax_4.b = edx_1 s< 2
        return (eax_4 - 1) & sub_632150
    
    if (eax_3 == 0x112)
        int32_t eax_10
        eax_10.b = edx_1 s< 2
        return (eax_10 - 1) & sub_632c10
    
    return 0
}
