// 函数名称: sub_4e3630
// 虚拟地址: 0x4e3630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4e3630(float* arg1, uint32_t arg2)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(255.0)
    long double x87_r6 = fconvert.t(255.0)
    *arg1 = fconvert.s(float.t(zx.d(arg2.b)) / x87_r6)
    arg1[1] = fconvert.s(float.t(zx.d((arg2 u>> 8).b)) / x87_r6)
    arg1[2] = fconvert.s(float.t(zx.d((arg2 u>> 0x10).b)) / x87_r6)
    long double x87_r6_6 = float.t(arg2 u>> 0x18)
    arg1[3] = fconvert.s(x87_r6_6 / x87_r6_6)
}
