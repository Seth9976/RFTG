// 函数名称: sub_492910
// 虚拟地址: 0x492910
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_492910(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    eax.b = *(arg3 + arg1 * 0x14 + 0x464)
    int32_t ecx = sx.d(eax.b)
    
    if (ecx == arg4 && *(arg3 + arg1 * 0x14 + 0x465) == 2)
        return 0
    
    if (eax.b != 0xff)
        int32_t eax_3 = sub_49cb90(arg3)
        
        if (eax_3 == 0xffffffff)
            return 0
        
        if (*(arg3 + arg1 * 0x14 + 0x465) == 4)
            *(arg3 + eax_3 * 0x14 + 0x470) = *(arg3 + arg1 * 0x14 + 0x470)
        
        ecx = sx.d(*(arg3 + arg1 * 0x14 + 0x464))
        int32_t var_14_1 = sx.d(*(arg3 + arg1 * 0x14 + 0x465))
        sub_49cc30(arg3, eax_3, ecx, ecx)
    
    int32_t var_14_2 = 2
    sub_49cc30(arg3, arg1, ecx, arg4)
    sub_49ccf0(arg1, arg3)
    *(arg3 + arg1 * 0x14 + 0x468) = (*(arg3 + arg1 * 0x14 + 0x468) & 0xffc0) | 1 << arg4.b
    return 1
}
