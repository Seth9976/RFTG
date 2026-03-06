// 函数名称: sub_4e4dc0
// 虚拟地址: 0x4e4dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float __convention("regparm")sub_4e4dc0(float* arg1, int32_t arg2, float* arg3)
{
    // 第一条实际指令: long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg1)))
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg1)))
    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(arg1[1])))
    float var_c = fconvert.s((fconvert.t(arg1[3]) - x87_r6_1) * fconvert.t(arg3[1]) + x87_r6_1)
    return fconvert.s((fconvert.t(arg1[2]) - x87_r6) * fconvert.t(*arg3) + x87_r6)
}
