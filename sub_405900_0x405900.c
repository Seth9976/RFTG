// 函数名称: sub_405900
// 虚拟地址: 0x405900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_405900(float* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: long double x87_r6_2 = fconvert.t(2.0)
    long double x87_r6_2 = fconvert.t(2.0)
    long double x87_r6_4 = fconvert.t(arg3[1])
    long double x87_r5 = fconvert.t(arg3[2])
    long double x87_r4 = fconvert.t(arg3[3])
    long double x87_r3 = fconvert.t(*arg3)
    long double x87_r6_10 = fconvert.t(*arg3) * fconvert.t(arg3[3])
    long double x87_r5_5 = fconvert.t(arg3[2]) * fconvert.t(arg3[1])
    *arg1 = fconvert.s((fconvert.t(*arg3) * fconvert.t(arg3[1])
        - fconvert.t(arg3[3]) * fconvert.t(arg3[2])) * x87_r6_2)
    arg1[1] = fconvert.s(x87_r6_4 * x87_r6_4 - x87_r5 * x87_r5 + x87_r4 * x87_r4 - x87_r3 * x87_r3)
    arg1[2] = fconvert.s(x87_r6_2 * (x87_r6_10 + x87_r5_5))
}
