// 函数名称: sub_405830
// 虚拟地址: 0x405830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_405830(float* arg1 @ esi, float* arg2 @ edi, float* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
    float var_20 = fconvert.s(fconvert.t(*arg3) * x87_r6)
    float var_1c = fconvert.s(fconvert.t(arg3[1]) * x87_r6)
    float var_10 = var_1c
    long double x87_r7_4 = x87_r6 * fconvert.t(arg3[2])
    float var_14 = var_20
    float var_18 = fconvert.s(x87_r7_4)
    float var_c = var_18
    sub_405970(&var_20, &var_14, &arg2[1])
    long double x87_r7_5 = fconvert.t(arg2[5])
    *arg1 = var_20
    arg1[1] = var_1c
    arg1[2] = var_18
    *arg1 = fconvert.s(x87_r7_5 + fconvert.t(*arg1))
    arg1[1] = fconvert.s(fconvert.t(arg2[6]) + fconvert.t(arg1[1]))
    arg1[2] = fconvert.s(fconvert.t(arg2[7]) + fconvert.t(arg1[2]))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
