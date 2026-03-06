// 函数名称: sub_634f20
// 虚拟地址: 0x634f20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_634f20(void* arg1)
{
    // 第一条实际指令: if (*(*(arg1 + 4) + 8) == 1)
    if (*(*(arg1 + 4) + 8) == 1)
        int32_t* ecx_1 = *(arg1 + 0x34)
        void* eax_2 = *(*ecx_1 + 4)
        uint32_t edx_2
        
        if (*(eax_2 + 8) u>= 8)
            edx_2 = zx.d(*(eax_2 + 9))
        else
            edx_2 = 0
        
        int32_t eax_4 = ecx_1[0x11] & 0xffff8fff
        
        if (eax_4 == 0x100)
            return *((edx_2 << 2) + &data_6bbe6c)
        
        if (eax_4 == 0)
            return *((edx_2 << 2) + &data_6bbe58)
        
        if (eax_4 == 0x12)
            int32_t eax_5
            eax_5.b = edx_2 s< 2
            return (eax_5 - 1) & sub_634880
        
        if (eax_4 == 0x112)
            int32_t eax_10
            eax_10.b = edx_2 s< 2
            return (eax_10 - 1) & sub_634bd0
    
    return 0
}
