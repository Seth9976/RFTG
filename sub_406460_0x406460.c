// 函数名称: sub_406460
// 虚拟地址: 0x406460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_406460(float arg1)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(0.5f)
    long double x87_r7 = fconvert.t(0.5f)
    long double x87_r6 = fconvert.t(arg1)
    x87_r6 - x87_r7
    int32_t eax
    eax.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x41}
    
    if (not(p))
        long double x87_r6_1 = fconvert.t(2.0)
        long double x87_r6_3 = fconvert.t(fconvert.s(x87_r7 * x87_r6_1))
        return fconvert.t(fconvert.s(fconvert.t(fconvert.s((x87_r6_1 - x87_r6_3) * x87_r6_3))
            * fconvert.t(0.5)))
    
    long double x87_r6_4 = fconvert.t(0.5)
    long double x87_r7_8 = x87_r7 - x87_r6_4
    long double x87_r6_7 = fconvert.t(fconvert.s(x87_r7_8 + x87_r7_8))
    return fconvert.t(fconvert.s(x87_r6_4 + fconvert.t(fconvert.s(x87_r6_7 * x87_r6_7)) * x87_r6_4))
}
