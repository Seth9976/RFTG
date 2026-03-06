// 函数名称: sub_4d7140
// 虚拟地址: 0x4d7140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_4d7140(float arg1, float arg2) __pure
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1)
    long double x87_r7 = fconvert.t(arg1)
    long double x87_r6 = fconvert.t(arg2)
    x87_r6 - x87_r7
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
        return fconvert.t(fconvert.s(x87_r7))
    
    return fconvert.t(fconvert.s(x87_r6))
}
