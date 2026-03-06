// 函数名称: sub_518900
// 虚拟地址: 0x518900
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_518900(float* arg1, int32_t, float* arg3, float arg4)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(arg4)
    long double x87_r6 = fconvert.t(arg4)
    *arg1 = fconvert.s(fconvert.t(*arg3) * x87_r6)
    arg1[1] = fconvert.s(fconvert.t(arg3[1]) * x87_r6)
    arg1[2] = fconvert.s(fconvert.t(arg3[2]) * x87_r6)
    arg1[3] = fconvert.s(fconvert.t(arg3[3]) * x87_r6)
    arg1[4] = fconvert.s(fconvert.t(arg3[4]) * x87_r6)
    arg1[5] = fconvert.s(fconvert.t(arg3[5]) * x87_r6)
    arg1[6] = fconvert.s(fconvert.t(arg3[6]) * x87_r6)
    arg1[7] = fconvert.s(fconvert.t(arg3[7]) * x87_r6)
    arg1[8] = fconvert.s(fconvert.t(arg3[8]) * x87_r6)
    arg1[9] = fconvert.s(fconvert.t(arg3[9]) * x87_r6)
    arg1[0xa] = fconvert.s(fconvert.t(arg3[0xa]) * x87_r6)
    arg1[0xb] = fconvert.s(fconvert.t(arg3[0xb]) * x87_r6)
    arg1[0xc] = fconvert.s(fconvert.t(arg3[0xc]) * x87_r6)
    arg1[0xd] = fconvert.s(fconvert.t(arg3[0xd]) * x87_r6)
    arg1[0xe] = fconvert.s(fconvert.t(arg3[0xe]) * x87_r6)
    arg1[0xf] = fconvert.s(x87_r6 * fconvert.t(arg3[0xf]))
}
