// 函数名称: sub_465a20
// 虚拟地址: 0x465a20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_465a20(float* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: long double x87_r6_2 = fconvert.t(2.0)
    long double x87_r6_2 = fconvert.t(2.0)
    float var_c = fconvert.s(x87_r6_2
        * (fconvert.t(arg3[2]) * fconvert.t(arg3[1]) - fconvert.t(*arg3) * fconvert.t(arg3[3])))
    long double x87_r7_6 = fconvert.t(arg3[2])
    long double x87_r6_7 = fconvert.t(arg3[1])
    long double x87_r5_2 = fconvert.t(*arg3)
    long double x87_r4 = fconvert.t(arg3[3])
    *arg1 = fconvert.s((fconvert.t(arg3[2]) * fconvert.t(*arg3)
        + fconvert.t(arg3[3]) * fconvert.t(arg3[1])) * x87_r6_2)
    arg1[1] = var_c
    arg1[2] =
        fconvert.s(x87_r4 * x87_r4 + x87_r7_6 * x87_r7_6 - x87_r6_7 * x87_r6_7 - x87_r5_2 * x87_r5_2)
}
