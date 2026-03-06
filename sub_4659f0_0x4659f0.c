// 函数名称: sub_4659f0
// 虚拟地址: 0x4659f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4659f0(float* arg1, int32_t, float* arg3)
{
    // 第一条实际指令: long double x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(*arg3) - fconvert.t(*arg1)))
    long double x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(*arg3) - fconvert.t(*arg1)))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg3[1]) - fconvert.t(arg1[1])))
    return fconvert.t(fconvert.s(x87_r7_4 * x87_r7_4 + x87_r6 * x87_r6))
}
