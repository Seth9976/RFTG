// 函数名称: sub_40af00
// 虚拟地址: 0x40af00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_40af00(float* arg1, float* arg2, float* arg3, float arg4)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(arg4)
    long double x87_r6 = fconvert.t(arg4)
    *arg1 = fconvert.s((fconvert.t(*arg2) - fconvert.t(*arg3)) * x87_r6 + fconvert.t(*arg3))
    arg1[2] = fconvert.s((fconvert.t(arg2[2]) - fconvert.t(*arg3)) * x87_r6 + fconvert.t(*arg3))
    arg1[1] = fconvert.s((fconvert.t(arg2[1]) - fconvert.t(arg3[1])) * x87_r6 + fconvert.t(arg3[1]))
    arg1[3] = fconvert.s(x87_r6 * (fconvert.t(arg2[3]) - fconvert.t(arg3[1])) + fconvert.t(arg3[1]))
}
