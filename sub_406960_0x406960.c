// 函数名称: sub_406960
// 虚拟地址: 0x406960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_406960(int32_t arg1, int32_t arg2, int32_t arg3, float arg4, float arg5, float arg6)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    long double x87_r7 = float.t(0)
    long double x87_r6 = fconvert.t(arg4)
    x87_r6 - x87_r7
    arg1.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x41}
    
    if (p)
        long double x87_r6_1 = float.t(1)
        x87_r6_1 - x87_r7
        arg1.w = (x87_r6_1 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (p_1)
            float var_c = fconvert.s(fconvert.t(arg6))
            float var_10 = fconvert.s(fconvert.t(arg5))
            return sub_4066a0(arg3, fconvert.s(x87_r7))
    
    return arg1
}
