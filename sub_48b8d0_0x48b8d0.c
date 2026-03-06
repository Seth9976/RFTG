// 函数名称: sub_48b8d0
// 虚拟地址: 0x48b8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_48b8d0(float* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: float* var_20 = arg3
    float* var_20 = arg3
    long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(arg3[1]) - fconvert.t(arg1[1])))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg3) - fconvert.t(*arg1)))
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(arg3[2]) - fconvert.t(arg1[2])))
    return sub_413560(fconvert.s(fconvert.t(fconvert.s(x87_r7_6 * x87_r7_6 + x87_r6 * x87_r6
        + x87_r5 * x87_r5))))
}
