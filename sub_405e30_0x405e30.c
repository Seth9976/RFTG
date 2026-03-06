// 函数名称: sub_405e30
// 虚拟地址: 0x405e30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_405e30(int32_t* arg1, float* arg2, float* arg3)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(0.5)
    long double x87_r6 = fconvert.t(0.5)
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*arg2) * x87_r6))
    float var_14 = fconvert.s(fconvert.t(*arg3) + x87_r6_2)
    long double x87_r5_1 = fconvert.t(fconvert.s(x87_r6 * fconvert.t(arg2[1])))
    float var_10 = fconvert.s(fconvert.t(arg3[1]) + x87_r5_1)
    long double x87_r7_11 = fconvert.t(fconvert.s(fconvert.t(arg3[1]) - x87_r5_1))
    *arg1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(*arg3) - x87_r6_2)))
    arg1[1] = fconvert.s(x87_r7_11)
    arg1[2] = fconvert.s(fconvert.t(var_14))
    arg1[3] = fconvert.s(fconvert.t(var_10))
}
