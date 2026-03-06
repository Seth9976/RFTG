// 函数名称: sub_671250
// 虚拟地址: 0x671250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_671250(void* arg1)
{
    // 第一条实际指令: int32_t ecx_1 = zx.d(*(arg1 + 0x140)) * zx.d(*(arg1 + 0x13d))
    int32_t ecx_1 = zx.d(*(arg1 + 0x140)) * zx.d(*(arg1 + 0x13d))
    uint32_t eax_3
    
    if (ecx_1 s< 8)
        eax_3 = (*(arg1 + 0xe4) * ecx_1 + 7) u>> 3
    else
        eax_3 = (ecx_1 u>> 3) * *(arg1 + 0xe4)
    
    *(arg1 + 0x143) = *(arg1 + 0x13e)
    *(arg1 + 0x142) = ecx_1.b
    char* eax_7 = sub_6664e0(arg1, eax_3 + 1)
    *(arg1 + 0x108) = eax_7
    *eax_7 = 0
    
    if ((*(arg1 + 0x13a) & 0x10) != 0)
        char* eax_10 = sub_6664e0(arg1, *(arg1 + 0xf4) + 1)
        *(arg1 + 0x10c) = eax_10
        *eax_10 = 1
    
    if ((*(arg1 + 0x13a) & 0xe0) != 0)
        int128_t* eax_11 = sub_6665d0(arg1, eax_3 + 1)
        bool cond:1_1 = (*(arg1 + 0x13a) & 0x20) == 0
        *(arg1 + 0x104) = eax_11
        
        if (not(cond:1_1))
            char* eax_12 = sub_6664e0(arg1, *(arg1 + 0xf4) + 1)
            *(arg1 + 0x110) = eax_12
            *eax_12 = 2
        
        if ((*(arg1 + 0x13a) & 0x40) != 0)
            char* eax_13 = sub_6664e0(arg1, *(arg1 + 0xf4) + 1)
            *(arg1 + 0x114) = eax_13
            *eax_13 = 3
        
        if ((*(arg1 + 0x13a) & 0x80) != 0)
            char* eax_16 = sub_6664e0(arg1, *(arg1 + 0xf4) + 1)
            *(arg1 + 0x118) = eax_16
            *eax_16 = 4
    
    if (*(arg1 + 0x138) == 0)
        int32_t eax_18 = *(arg1 + 0xe4)
        *(arg1 + 0xec) = *(arg1 + 0xe8)
        *(arg1 + 0xf0) = eax_18
    else if ((*(arg1 + 0x74) & 2) != 0)
        int32_t ecx_7 = *(arg1 + 0xe4)
        *(arg1 + 0xec) = *(arg1 + 0xe8)
        *(arg1 + 0xf0) = ecx_7
    else
        uint32_t edx_5 = (*(arg1 + 0xe4) + 7) u>> 3
        *(arg1 + 0xec) = (*(arg1 + 0xe8) + 7) u>> 3
        *(arg1 + 0xf0) = edx_5
    
    int32_t result = sub_66f220(arg1, 1)
    int32_t edx_7 = *(arg1 + 0xb0)
    *(arg1 + 0x88) = *(arg1 + 0xb4)
    *(arg1 + 0x84) = edx_7
    return result
}
