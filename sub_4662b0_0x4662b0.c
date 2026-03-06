// 函数名称: sub_4662b0
// 虚拟地址: 0x4662b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4662b0(float* arg1, float* arg2, float* arg3, float arg4)
{
    // 第一条实际指令: float* var_8 = arg3
    float* var_8 = arg3
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
    long double x87_r5_1 = fconvert.t(arg4)
    *arg1 = fconvert.s(x87_r6 + (fconvert.t(*arg3) - x87_r6) * x87_r5_1)
    long double x87_r5_3 = fconvert.t(fconvert.s(fconvert.t(arg2[2])))
    arg1[2] = fconvert.s((fconvert.t(arg3[2]) - x87_r5_3) * x87_r5_1 + x87_r5_3)
    long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(arg2[1])))
    arg1[1] = fconvert.s((fconvert.t(arg3[1]) - x87_r5_4) * x87_r5_1 + x87_r5_4)
    long double x87_r5_5 = fconvert.t(fconvert.s(fconvert.t(arg2[3])))
    arg1[3] = fconvert.s(x87_r5_1 * (fconvert.t(arg3[3]) - x87_r5_5) + x87_r5_5)
}
