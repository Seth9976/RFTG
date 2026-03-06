// 函数名称: sub_4e4540
// 虚拟地址: 0x4e4540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4e4540(float* arg1, float arg2, float arg3)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg2)
    long double x87_r7 = fconvert.t(arg2)
    long double x87_r6_2 = fconvert.t(fconvert.s(x87_r7 * fconvert.t(arg3)))
    *arg1 = fconvert.s(fneg(x87_r6_2))
    arg1[1] = fconvert.s(fneg(x87_r7))
    arg1[2] = fconvert.s(x87_r6_2)
    arg1[3] = fconvert.s(x87_r7)
}
