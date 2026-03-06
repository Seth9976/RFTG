// 函数名称: sub_510cf0
// 虚拟地址: 0x510cf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_510cf0(char** arg1 @ esi, float arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t var_8_1 = 0
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg2) * fconvert.t(100.0)))
    x87_r6 - x87_r7_2
    int32_t eax
    eax.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p)
        x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
    else
        x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
    
    int32_t var_c = sub_685f40(x87_r7_3)
    sub_4c4a50(arg1, "%%%d")
    return arg1
}
