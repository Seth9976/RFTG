// 函数名称: sub_527e80
// 虚拟地址: 0x527e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_527e80(float* arg1, float arg2, float arg3, float arg4)
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    *arg1 = fconvert.s(x87_r7)
    arg1[1] = fconvert.s(x87_r7)
    arg1[2] = fconvert.s(fconvert.t(3238f))
    arg1[3] = fconvert.s(fconvert.t(2048f))
    long double x87_r6 = float.t(0)
    long double x87_r5 = fconvert.t(arg2)
    float var_c_1 = fconvert.s((fconvert.t(arg1[2]) - x87_r6) * x87_r5 + x87_r6)
    float var_10_1 = fconvert.s((fconvert.t(arg1[1]) - x87_r6) * x87_r5 + x87_r6)
    long double x87_r5_11 = fconvert.t(arg1[3])
    *arg1 = fconvert.s((fconvert.t(*arg1) - x87_r6) * x87_r5 + x87_r6)
    arg1[1] = var_10_1
    arg1[2] = var_c_1
    arg1[3] = fconvert.s(x87_r6 + (x87_r5_11 - x87_r6) * x87_r5)
    long double x87_r6_8 =
        fconvert.t(fconvert.s(fconvert.t(fconvert.s(fneg(fconvert.t(arg3)))) * x87_r5))
    long double x87_r6_10 =
        fconvert.t(fconvert.s(x87_r5 * fconvert.t(fconvert.s(fneg(fconvert.t(arg4))))))
    float var_10_2 = fconvert.s(x87_r6_10 + fconvert.t(arg1[1]))
    float var_c_3 = fconvert.s(x87_r6_8 + fconvert.t(arg1[2]))
    long double x87_r7_13 = x87_r6_10 + fconvert.t(arg1[3])
    *arg1 = fconvert.s(fconvert.t(*arg1) + x87_r6_8)
    arg1[1] = var_10_2
    arg1[2] = var_c_3
    arg1[3] = fconvert.s(x87_r7_13)
}
