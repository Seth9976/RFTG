// 函数名称: sub_4981e0
// 虚拟地址: 0x4981e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4981e0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t var_c = 0
    int32_t var_8 = 1
    
    if (arg3 s< 0)
        return 0
    
    int32_t eax_2 = *(arg4 + arg3 * 0x14 + 0x46c)
    void* ebx = eax_2 + ((arg2 * 3 + 3) << 3)
    int32_t ecx_1 = *(ebx + 8)
    int32_t var_10 = *(eax_2 + ((arg2 * 3 + 3) << 3) + 0xc)
    
    if ((ecx_1 & 0x10000000) != 0)
        return 0
    
    if ((ecx_1 & 0x1000000) != 0)
        var_c = sx.d(*(ebx + 0x10))
    
    if ((ecx_1 & 0x200000) != 0)
        esi = sx.d(*(ebx + 0x10))
    
    if ((ecx_1 & &__dos_header) != 0)
        esi += sx.d(*(ebx + 0x10)) << 1
    
    if ((ecx_1 & &data_800000) != 0)
        esi += sx.d(*(ebx + 0x10)) * 3
    
    if ((ecx_1 & 0x100) != 0)
        esi += 4
    
    if ((ecx_1 & 0x200) != 0)
        esi -= 1
    
    if ((ecx_1 & 0x10000) != 0)
        var_8 = 2
    
    if ((ecx_1 & 0x20000) != 0)
        var_8 = 3
    
    if ((ecx_1 & 0x80000) != 0)
        var_8 = 4
    
    int32_t eax_9
    
    if (((*(arg5 * 0xb4 + arg4 + 0x2c)).b & 0x7f) == 8
            || ((*(arg5 * 0xb4 + arg4 + 0x30)).b & 0x7f) == 8)
        eax_9 = var_c * 2
    else
        eax_9 = var_c
    
    int32_t result = divs.dp.d(sx.q(eax_9 * 0x6e + esi * 0x32), var_8)
    
    if ((ecx_1 & 0x400) == 0)
        result += sx.d(*(ebx + 0x11)) * 6
    
    int32_t ecx_3
    ecx_3.b = *(ebx + 0x11)
    
    if (ecx_3.b s<= 1)
        return result
    
    int32_t ecx_5 = sx.d(ecx_3.b)
    return result + neg.d(ecx_5) * 4 - ecx_5
}
