// 函数名称: sub_406520
// 虚拟地址: 0x406520
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_406520(float arg1) __pure
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1)
    long double x87_r7 = fconvert.t(arg1)
    long double x87_r6 = fconvert.t(0.10000000149011612)
    x87_r6 - x87_r7
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
        long double x87_r7_8 =
            fconvert.t(fconvert.s((x87_r7 - x87_r6) * fconvert.t(1.1111111640930176)))
        return fconvert.t(fconvert.s(float.t(1) - fconvert.t(fconvert.s(x87_r7_8 * x87_r7_8))))
    
    long double x87_r7_3 = fconvert.t(fconvert.s(x87_r6 * fconvert.t(10.0)))
    return fconvert.t(fconvert.s(x87_r7_3 * (fconvert.t(2.0) - x87_r7_3)))
}
