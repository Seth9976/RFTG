// 函数名称: sub_4130b0
// 虚拟地址: 0x4130b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_4130b0(float arg1, float arg2)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    long double x87_r6 = fconvert.t(arg1)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    long double x87_r5 = fconvert.t(0.5)
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_1
    
    if (p)
        x87_r6_1 = x87_r6 + x87_r5
    else
        x87_r6_1 = x87_r6 - x87_r5
    
    float result = fconvert.s(float.t(sub_685f40(x87_r6_1)))
    long double x87_r5_3 = fconvert.t(arg2)
    x87_r5_3 - x87_r7
    int32_t eax_1
    eax_1.w = (x87_r5_3 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_3, x87_r7) ? 1 : 0) << 0xa
        | (x87_r5_3 == x87_r7 ? 1 : 0) << 0xe | 0x2800
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r7_1
    
    if (p_1)
        x87_r7_1 = x87_r7 + x87_r5
    else
        x87_r7_1 = x87_r7 - x87_r5
    
    float var_8_1 = fconvert.s(float.t(sub_685f40(x87_r7_1)))
    return result
}
