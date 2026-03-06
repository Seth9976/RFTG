// 函数名称: sub_4fc810
// 虚拟地址: 0x4fc810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4fc810(float* arg1, float* arg2, float* arg3)
{
    // 第一条实际指令: float* var_8 = arg3
    float* var_8 = arg3
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
    *arg1 = fconvert.s((fconvert.t(arg3[2]) - x87_r6) * fconvert.t(*arg2) + x87_r6)
    long double x87_r6_1 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
    arg1[2] = fconvert.s((fconvert.t(arg3[2]) - x87_r6_1) * fconvert.t(arg2[2]) + x87_r6_1)
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
    arg1[1] = fconvert.s((fconvert.t(arg3[3]) - x87_r6_2) * fconvert.t(arg2[1]) + x87_r6_2)
    long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
    arg1[3] = fconvert.s((fconvert.t(arg3[3]) - x87_r6_3) * fconvert.t(arg2[3]) + x87_r6_3)
}
