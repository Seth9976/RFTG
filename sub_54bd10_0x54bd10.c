// 函数名称: sub_54bd10
// 虚拟地址: 0x54bd10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_54bd10(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float arg8) __pure
{
    // 第一条实际指令: long double x87_r7_4 = fconvert.t(arg4)
    long double x87_r7_4 = fconvert.t(arg4)
    long double x87_r5 = fconvert.t(arg3)
    long double x87_r3 = fconvert.t(fconvert.s(fconvert.t(arg7) - fconvert.t(arg1)))
    long double x87_r2_1 = fconvert.t(fconvert.s(fconvert.t(arg8) - fconvert.t(arg2)))
    long double x87_r5_4 = fconvert.t(arg6)
    long double x87_r3_4 = fconvert.t(arg5)
    arg2 = fconvert.s(fconvert.t(fconvert.s(x87_r2_1 * x87_r5_4 + x87_r3 * x87_r3_4))
        / fconvert.t(fconvert.s(x87_r3_4 * x87_r3_4 + x87_r5_4 * x87_r5_4)))
    return fconvert.s(fconvert.t(fconvert.s(x87_r7_4 * x87_r2_1 + x87_r5 * x87_r3))
        / fconvert.t(fconvert.s(x87_r5 * x87_r5 + x87_r7_4 * x87_r7_4)))
}
