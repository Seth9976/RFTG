// 函数名称: sub_4dc3e0
// 虚拟地址: 0x4dc3e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4dc3e0(float* arg1)
{
    // 第一条实际指令: void var_30
    void var_30
    __builtin_memcpy(&var_30, 0x27e8090, 0x1c)
    float var_1c
    long double x87_r7_6 = fconvert.t(fconvert.s(fconvert.t(var_1c) - fconvert.t(arg1[1])))
    float var_20
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(var_20) - fconvert.t(*arg1)))
    float var_18
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(var_18) - fconvert.t(arg1[2])))
    return fconvert.t(fconvert.s(x87_r7_6 * x87_r7_6 + x87_r6 * x87_r6 + x87_r5 * x87_r5))
}
