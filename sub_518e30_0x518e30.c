// 函数名称: sub_518e30
// 虚拟地址: 0x518e30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_518e30(float* arg1, int32_t arg2, float* arg3, float arg4)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(arg4)
    long double x87_r6 = fconvert.t(arg4)
    float var_8 = fconvert.s(fconvert.t(arg1[3]) * x87_r6)
    long double x87_r6_4 = fconvert.t(arg1[1])
    *arg3 = fconvert.s(fconvert.t(*arg1) * x87_r6)
    long double x87_r6_6 = fconvert.t(arg1[2])
    arg3[1] = fconvert.s(x87_r6_4 * x87_r6)
    long double x87_r6_8 = fconvert.t(arg1[4])
    arg3[2] = fconvert.s(x87_r6_6 * x87_r6)
    arg3[3] = var_8
    long double x87_r6_10 = fconvert.t(arg1[5])
    arg3[4] = fconvert.s(x87_r6_8 * x87_r6)
    long double x87_r6_12 = fconvert.t(arg1[6])
    arg3[5] = fconvert.s(x87_r6_10 * x87_r6)
    long double x87_r6_14 = fconvert.t(arg1[7])
    arg3[6] = fconvert.s(x87_r6_12 * x87_r6)
    long double x87_r6_16 = fconvert.t(arg1[8])
    arg3[7] = fconvert.s(x87_r6_14 * x87_r6)
    arg3[8] = fconvert.s(x87_r6_16 * x87_r6)
    long double x87_r7_3 = x87_r6 * fconvert.t(arg1[9])
    arg1.b = arg1[0xa].b
    arg3[0xa].b = arg1.b
    arg3[9] = fconvert.s(x87_r7_3)
    return arg1
}
