// 函数名称: sub_4faeb0
// 虚拟地址: 0x4faeb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4faeb0(int32_t arg1, int32_t arg2, int32_t arg3, float arg4)
{
    // 第一条实际指令: void* eax = sub_4fc3d0(&data_be1cb8, arg3)
    void* eax = sub_4fc3d0(&data_be1cb8, arg3)
    int128_t* eax_1 = sub_4f6e90(arg1, eax, &data_83f3d3)
    int32_t* result = sub_4f4890(*(eax + 4))
    int32_t ebx
    
    if (*(eax_1 + 8) s<= *eax_1)
        ebx.b = (*result)[arg1 * 0x46 + 0xc].b
    else
        ebx.b = *(eax_1 + 0xc)
    
    long double x87_r7 = fconvert.t(arg4)
    long double x87_r5 = float.t(0)
    x87_r5 - x87_r7
    result.w = (x87_r5 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r7) ? 1 : 0) << 0xa
        | (x87_r5 == x87_r7 ? 1 : 0) << 0xe | 0x3800
    bool p = unimplemented  {test ah, 0x44}
    
    if (p || ebx.b != 0)
        long double x87_r5_1 = float.t(1)
        x87_r5_1 - x87_r7
        result.w = (x87_r5_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r7 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (p_1 || ebx.b != 1)
            long double x87_r6_2 = fconvert.t(eax_1[1].d)
            x87_r6_2 - x87_r7
            result.w = (x87_r6_2 < x87_r7 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                return 0
            
            return 1
    
    result.b = 0
    return result
}
