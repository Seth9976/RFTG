// 函数名称: sub_4058c0
// 虚拟地址: 0x4058c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4058c0(int32_t* arg1, float* arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    long double x87_r7_1 = fconvert.t(arg2[1]) * fconvert.t(arg3[1])
    long double x87_r6 = fconvert.t(*arg2)
    *arg1 = *arg3
    long double x87_r6_1 = x87_r6 * fconvert.t(*arg3)
    arg1[1] = arg3[1]
    arg1[2] = arg3[2]
    arg1[3] = fconvert.s(fneg(fconvert.t(fconvert.s(x87_r7_1 + x87_r6_1
        + fconvert.t(arg2[2]) * fconvert.t(arg3[2])))))
}
