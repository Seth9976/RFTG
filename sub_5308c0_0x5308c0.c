// 函数名称: sub_5308c0
// 虚拟地址: 0x5308c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5308c0(float* arg1, float* arg2, float* arg3)
{
    // 第一条实际指令: float* var_8 = arg3
    float* var_8 = arg3
    long double x87_r7_2 =
        fconvert.t(*arg2) * fconvert.t(arg3[2]) - fconvert.t(*arg3) * fconvert.t(arg2[2])
    long double x87_r5 = float.t(1)
    (x87_r5 - fconvert.t(*arg3)) * fconvert.t(arg3[2])
    (x87_r5 - fconvert.t(arg3[2])) * fconvert.t(*arg3)
    long double x87_r6_7 = fconvert.t(fconvert.s(x87_r7_2 / x87_r7_2))
    *arg1 = fconvert.s(x87_r6_7)
    arg1[2] = fconvert.s(x87_r6_7 + fconvert.t(fconvert.s(fconvert.t(arg2[2]) - fconvert.t(*arg2)))
        / fconvert.t(fconvert.s(fconvert.t(arg3[2]) - fconvert.t(*arg3))))
    long double x87_r6_11 =
        fconvert.t(arg2[1]) * fconvert.t(arg3[3]) - fconvert.t(arg2[3]) * fconvert.t(arg3[1])
    (x87_r5 - fconvert.t(arg3[1])) * fconvert.t(arg3[3])
    (x87_r5 - fconvert.t(arg3[3])) * fconvert.t(arg3[1])
    long double x87_r7_8 = fconvert.t(fconvert.s(x87_r6_11 / x87_r6_11))
    arg1[1] = fconvert.s(x87_r7_8)
    arg1[3] = fconvert.s(x87_r7_8 + fconvert.t(fconvert.s(fconvert.t(arg2[3]) - fconvert.t(arg2[1])))
        / fconvert.t(fconvert.s(fconvert.t(arg3[3]) - fconvert.t(arg3[1]))))
}
