// 函数名称: sub_405ee0
// 虚拟地址: 0x405ee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_405ee0(float* arg1, float* arg2, float* arg3)
{
    // 第一条实际指令: long double x87_r7_3 = fconvert.t(arg2[3]) * fconvert.t(arg3[3]) - fconvert.t(*arg2) * fconvert.t(*arg3) - fconvert.t(arg2[1]) * fconvert.t(arg3[1]) - fconvert.t(arg2[2]) * fconvert.t(arg3[2])
    long double x87_r7_3 = fconvert.t(arg2[3]) * fconvert.t(arg3[3])
        - fconvert.t(*arg2) * fconvert.t(*arg3) - fconvert.t(arg2[1]) * fconvert.t(arg3[1])
        - fconvert.t(arg2[2]) * fconvert.t(arg3[2])
    arg1[3] = fconvert.s(x87_r7_3)
    long double x87_r7_8 = fconvert.t(*arg2) * fconvert.t(arg3[3])
        + fconvert.t(*arg3) * fconvert.t(arg2[3]) + fconvert.t(arg2[2]) * fconvert.t(arg3[1])
        - fconvert.t(arg3[2]) * fconvert.t(arg2[1])
    *arg1 = fconvert.s(x87_r7_8)
    arg1[1] = fconvert.s(fconvert.t(arg2[1]) * fconvert.t(arg3[3])
        + fconvert.t(arg3[1]) * fconvert.t(arg2[3]) + fconvert.t(arg3[2]) * fconvert.t(*arg2)
        - fconvert.t(arg2[2]) * fconvert.t(*arg3))
    arg1[2] = fconvert.s(fconvert.t(arg2[2]) * fconvert.t(arg3[3])
        + fconvert.t(arg3[2]) * fconvert.t(arg2[3]) + fconvert.t(arg2[1]) * fconvert.t(*arg3)
        - fconvert.t(*arg2) * fconvert.t(arg3[1]))
}
