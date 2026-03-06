// 函数名称: sub_6471e0
// 虚拟地址: 0x6471e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_6471e0(void* arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: int32_t* eax = *(arg1 + 0x1c)
    int32_t* eax = *(arg1 + 0x1c)
    
    if (eax == 0)
        return 0xffffff7f
    
    sub_68b1d0(arg2, 1, 8)
    int32_t i_3 = 6
    char const* const var_8 = "vorbis"
    int32_t i
    
    do
        sub_68b1d0(arg2, sx.d(*var_8), 8)
        var_8 = &var_8[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    sub_68b1d0(arg2, i_3, 0x20)
    sub_68b1d0(arg2, *(arg1 + 4), 8)
    sub_68b1d0(arg2, *(arg1 + 8), 0x20)
    sub_68b1d0(arg2, *(arg1 + 0xc), 0x20)
    sub_68b1d0(arg2, *(arg1 + 0x10), 0x20)
    sub_68b1d0(arg2, *(arg1 + 0x14), 0x20)
    int32_t eax_5 = *eax
    int32_t ecx_2 = 0
    
    if (eax_5 != 0)
        uint32_t i_1 = eax_5 - 1
        
        if (eax_5 != 1)
            do
                ecx_2 += 1
                i_1 u>>= 1
            while (i_1 != 0)
    
    sub_68b1d0(arg2, ecx_2, 4)
    int32_t eax_6 = eax[1]
    int32_t ecx_3 = 0
    
    if (eax_6 != 0)
        uint32_t i_2 = eax_6 - 1
        
        if (eax_6 != 1)
            do
                ecx_3 += 1
                i_2 u>>= 1
            while (i_2 != 0)
    
    sub_68b1d0(arg2, ecx_3, 4)
    sub_68b1d0(arg2, 1, 1)
    return 0
}
