// 函数名称: sub_5a13a0
// 虚拟地址: 0x5a13a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5a13a0(int16_t arg1, int32_t arg2, int32_t arg3, float arg4)
{
    // 第一条实际指令: long double x87_r7 = float.t(1)
    long double x87_r7 = float.t(1)
    int32_t var_c = arg3
    long double x87_r6 = fconvert.t(arg4)
    x87_r6 - x87_r7
    int32_t mxcsr
    int16_t x87control
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
        int32_t var_10_1 = (&data_8bc4fc)[arg3 * 2](fconvert.s(x87_r7), arg3)
        var_10_1.q = fconvert.d(fconvert.t(fconvert.s(x87_r6 + x87_r6)))
        return sub_685f40(fconvert.t(fconvert.s(sub_5aaa90(mxcsr, x87control, var_10_1))))
    
    long double x87_r6_1 = float.t(1)
    int32_t var_10 =
        (&data_8bc4fc)[arg3 * 2](fconvert.s(fconvert.t(fconvert.s(x87_r6_1 / x87_r6_1))), arg3)
    var_10.q = fconvert.d(fconvert.t(fconvert.s(x87_r6 + x87_r6)))
    return sub_685f40(fconvert.t(fconvert.s(sub_5aaa90(mxcsr, x87control, var_10))))
}
