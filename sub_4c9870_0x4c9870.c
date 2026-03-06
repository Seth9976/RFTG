// 函数名称: sub_4c9870
// 虚拟地址: 0x4c9870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long double __convention("regparm")sub_4c9870(float* arg1)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg1[1])
    long double x87_r7 = fconvert.t(arg1[1])
    long double x87_r6 = fconvert.t(*arg1)
    return fconvert.t(fconvert.s(__CIasin_default(fconvert.t(fconvert.s(x87_r7 * x87_r7
        + x87_r6 * x87_r6)))))
}
