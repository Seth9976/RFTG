// 函数名称: sub_656880
// 虚拟地址: 0x656880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_656880(float* arg1)
{
    // 第一条实际指令: float var_10 = fconvert.s(fconvert.t(arg1[6]) - fconvert.t(arg1[2]))
    float var_10 = fconvert.s(fconvert.t(arg1[6]) - fconvert.t(arg1[2]))
    float var_14 = fconvert.s(fconvert.t(arg1[4]) - fconvert.t(*arg1))
    long double x87_r7_8 = fconvert.t(fconvert.s(fconvert.t(*arg1) + fconvert.t(arg1[4])))
    long double x87_r5 = fconvert.t(fconvert.s(fconvert.t(arg1[6]) + fconvert.t(arg1[2])))
    arg1[6] = fconvert.s(x87_r7_8 + x87_r5)
    arg1[4] = fconvert.s(x87_r5 - x87_r7_8)
    float var_c_1 = fconvert.s(fconvert.t(arg1[7]) - fconvert.t(arg1[3]))
    long double x87_r7_14 = fconvert.t(var_10)
    long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(arg1[5]) - fconvert.t(arg1[1])))
    *arg1 = fconvert.s(x87_r7_14 + x87_r5_2)
    arg1[2] = fconvert.s(x87_r7_14 - x87_r5_2)
    float var_8_2 = fconvert.s(fconvert.t(arg1[5]) + fconvert.t(arg1[1]))
    float var_10_1 = fconvert.s(fconvert.t(arg1[7]) + fconvert.t(arg1[3]))
    long double x87_r7_20 = fconvert.t(var_14)
    long double x87_r5_4 = fconvert.t(var_c_1)
    arg1[3] = fconvert.s(x87_r7_20 + x87_r5_4)
    arg1[1] = fconvert.s(x87_r5_4 - x87_r7_20)
    long double x87_r7_22 = fconvert.t(var_10_1)
    long double x87_r5_6 = fconvert.t(var_8_2)
    arg1[7] = fconvert.s(x87_r7_22 + x87_r5_6)
    arg1[5] = fconvert.s(x87_r7_22 - x87_r5_6)
}
