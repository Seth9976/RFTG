// 函数名称: sub_48b8a0
// 虚拟地址: 0x48b8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_48b8a0(float* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7 = fconvert.t(arg1[1])
    long double x87_r6 = fconvert.t(*arg1)
    long double x87_r5 = fconvert.t(arg1[2])
    return fconvert.t(fconvert.s(x87_r7 * x87_r7 + x87_r6 * x87_r6 + x87_r5 * x87_r5))
}
