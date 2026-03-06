// 函数名称: sub_4fa4e0
// 虚拟地址: 0x4fa4e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4fa4e0(int32_t arg1, float arg2, char arg3)
{
    // 第一条实际指令: void* eax = sub_4fc3d0(&data_be1cb8, arg1)
    void* eax = sub_4fc3d0(&data_be1cb8, arg1)
    void* ebx_2 = arg2 i* 0x118 + *sub_4f4890(*(eax + 4))
    int128_t* eax_2 = sub_4f6e90(arg2, eax, &data_83f3d3)
    int32_t esi_3 = *eax_2
    *(eax_2 + 8) = esi_3 + 1
    *(eax_2 + 0xc) = arg3
    
    if (*(eax_2 + 0x134) s<= esi_3)
        arg3.d = *(ebx_2 + 0x4c)
    else
        arg3.d = *(eax_2 + 0x138)
    
    long double x87_r7
    
    if (*(eax_2 + 0x5c) == 0)
        x87_r7 = float.t(*(ebx_2 + 0x50))
    else
        x87_r7 = fconvert.t(eax_2[6].d)
    
    arg3.d = fconvert.s((float.t(arg3.d) + fconvert.t(fconvert.s(x87_r7))) / fconvert.t(1000.0))
    long double x87_r7_4 = fconvert.t(*(eax_2 + 0x14))
    long double x87_r6 = fconvert.t(arg3.d)
    x87_r6 - x87_r7_4
    int32_t result
    result.w = (x87_r6 < x87_r7_4 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        return result
    
    *(eax_2 + 0x14) = fconvert.s(x87_r7_4)
    return result
}
