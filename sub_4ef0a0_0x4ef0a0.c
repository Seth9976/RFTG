// 函数名称: sub_4ef0a0
// 虚拟地址: 0x4ef0a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4ef0a0(float* arg1, int32_t, float* arg3)
{
    // 第一条实际指令: float var_8 = fconvert.s(fconvert.t(arg3[1]))
    float var_8 = fconvert.s(fconvert.t(arg3[1]))
    float var_c = fconvert.s(fconvert.t(arg3[3]))
    float var_10 = fconvert.s(fconvert.t(arg3[4]))
    float var_14 = fconvert.s(fconvert.t(arg3[5]))
    float var_18 = fconvert.s(fconvert.t(arg3[7]))
    *arg1 = fconvert.s(fconvert.t(*arg3))
    arg1[1] = fconvert.s(fconvert.t(var_8))
    arg1[2] = fconvert.s(fconvert.t(var_c))
    arg1[3] = fconvert.s(fconvert.t(var_10))
    arg1[4] = fconvert.s(fconvert.t(var_14))
    arg1[5] = fconvert.s(fconvert.t(var_18))
    long double x87_r7_11 = float.t(0)
    arg1[6] = fconvert.s(x87_r7_11)
    arg1[7] = fconvert.s(x87_r7_11)
    arg1[8] = fconvert.s(float.t(1))
}
