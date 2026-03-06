// 函数名称: sub_465e80
// 虚拟地址: 0x465e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_465e80(float* arg1)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1[3])
    long double x87_r7 = fconvert.t(arg1[3])
    int32_t ecx
    int32_t var_10 = ecx
    long double x87_r6 = fconvert.t(*arg1)
    long double x87_r5 = fconvert.t(arg1[1])
    long double x87_r4 = fconvert.t(arg1[2])
    return sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7 * x87_r7 + x87_r6 * x87_r6
        + x87_r5 * x87_r5 + x87_r4 * x87_r4))))
}
