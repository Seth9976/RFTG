// 函数名称: sub_466250
// 虚拟地址: 0x466250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_466250(float* arg1, float arg2)
{
    // 第一条实际指令: long double x87_r6 = float.t(1)
    long double x87_r6 = float.t(1)
    long double x87_r6_1 = fconvert.t(fconvert.s(x87_r6 / x87_r6))
    float var_c = fconvert.s(x87_r6_1 * fconvert.t(arg1[1]))
    return fconvert.s(fconvert.t(*arg1) * x87_r6_1)
}
