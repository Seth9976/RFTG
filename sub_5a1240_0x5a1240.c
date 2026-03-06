// 函数名称: sub_5a1240
// 虚拟地址: 0x5a1240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5a1240(float arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7_2 = float.t(1)
    fconvert.t(fconvert.s(sub_4064d0(fconvert.s(fconvert.t(arg1))))) - x87_r7_2
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        return fconvert.t(fconvert.s((
            x87_r7_2 * x87_r7_2 * (x87_r7_2 * fconvert.t(21.0) - fconvert.t(36.0)) + fconvert.t(16.0))
            / fconvert.t(18.0)))
    
    long double x87_r6_5 = fconvert.t(2f)
    x87_r6_5 - x87_r7_2
    
    if ((((x87_r6_5 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_5, x87_r7_2) ? 1 : 0) << 0xa
            | (x87_r6_5 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
        return float.t(0)
    
    return fconvert.t(fconvert.s((
        x87_r7_2 * ((fconvert.t(36.0) - fconvert.t(7.0) * x87_r7_2) * x87_r7_2 - fconvert.t(60.0))
        + fconvert.t(32.0)) / fconvert.t(18.0)))
}
