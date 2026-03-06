// 函数名称: sub_4685a0
// 虚拟地址: 0x4685a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4685a0(float arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t mxcsr
    int16_t x87control
    long double st0
    st0, eax = sub_686950(mxcsr, x87control, fconvert.d(fconvert.t(arg1)))
    long double x87_r7_3 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(fconvert.s(st0))))
    x87_r6 - x87_r7_3
    eax.w = (x87_r6 < x87_r7_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_3 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        return sub_685f40(x87_r7_3 + fconvert.t(0.5))
    
    return sub_685f40(x87_r7_3 - fconvert.t(0.5))
}
