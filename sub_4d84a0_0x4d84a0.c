// 函数名称: sub_4d84a0
// 虚拟地址: 0x4d84a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4d84a0(int32_t arg1, float* arg2, float* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r6 = fconvert.t(0.5)
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(*arg2) * x87_r6))
    long double x87_r5_2 = fconvert.t(fconvert.s(fconvert.t(arg2[1]) * x87_r6))
    long double x87_r5_4 = fconvert.t(fconvert.s(x87_r6 * fconvert.t(arg2[2])))
    float var_3c = fconvert.s(fconvert.t(*arg3) + fconvert.t(fconvert.s(x87_r6_2)))
    float var_38 = fconvert.s(fconvert.t(arg3[1]) + fconvert.t(fconvert.s(x87_r5_2)))
    float var_34 = fconvert.s(fconvert.t(arg3[2]) + fconvert.t(fconvert.s(x87_r5_4)))
    float var_28 = fconvert.s(fconvert.t(arg3[1]) - fconvert.t(fconvert.s(x87_r5_2)))
    long double x87_r7_11 = fconvert.t(arg3[2]) - fconvert.t(fconvert.s(x87_r5_4))
    *arg4 = fconvert.s(fconvert.t(*arg3) - fconvert.t(fconvert.s(x87_r6_2)))
    arg4[1] = var_28
    arg4[2] = fconvert.s(x87_r7_11)
    arg4[3] = var_3c
    arg4[4] = var_38
    arg4[5] = var_34
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}
