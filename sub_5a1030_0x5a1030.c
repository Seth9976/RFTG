// 函数名称: sub_5a1030
// 虚拟地址: 0x5a1030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5a1030(float arg1, float arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_10 = ecx
    long double x87_r6 = fconvert.t(0.5)
    float var_8 = fconvert.s(fconvert.t(arg2) * x87_r6)
    long double x87_r7_6 = fconvert.t(fconvert.s(sub_4064d0(fconvert.s(fconvert.t(arg1)))))
    long double x87_r6_2 = fconvert.t(fconvert.s(x87_r6 + fconvert.t(var_8)))
    x87_r6_2 - x87_r7_6
    bool p = unimplemented  {test ah, 0x41}
    
    if (not(p))
        return float.t(0)
    
    long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(0.5) - fconvert.t(var_8)))
    x87_r5_2 - x87_r7_6
    
    if ((((x87_r5_2 < x87_r7_6 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_2, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3000):1.b & 1) != 0)
        return fconvert.t(fconvert.s((x87_r6_2 - x87_r7_6) / fconvert.t(arg2)))
    
    return float.t(1)
}
