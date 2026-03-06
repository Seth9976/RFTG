// 函数名称: sub_4d8430
// 虚拟地址: 0x4d8430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_4d8430(int32_t arg1, int32_t arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_c = fconvert.s(fconvert.t(arg3[2]) + fconvert.t(arg3[5]))
    long double x87_r6 = fconvert.t(0.5)
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(arg3[1]) + fconvert.t(arg3[4])))
    *arg4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg3[3]) + fconvert.t(*arg3))) * x87_r6)
    arg4[1] = fconvert.s(x87_r6_2 * x87_r6)
    arg4[2] = fconvert.s(x87_r6 * fconvert.t(var_c))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg4
}
