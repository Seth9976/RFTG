// 函数名称: sub_488860
// 虚拟地址: 0x488860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __convention("regparm")sub_488860(int32_t arg1, int32_t arg2, float* arg3, float* arg4, float arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg5)))
    float var_2c =
        fconvert.s((fconvert.t(arg3[4]) - fconvert.t(arg4[4])) * x87_r6 + fconvert.t(arg4[4]))
    long double x87_r6_2 = fconvert.t(arg3[5])
    float* entry_result
    entry_result[4] = var_2c
    long double x87_r6_6 = fconvert.t(arg3[6])
    entry_result[5] = fconvert.s((x87_r6_2 - fconvert.t(arg4[5])) * x87_r6 + fconvert.t(arg4[5]))
    long double x87_r6_10 = fconvert.t(*arg3)
    entry_result[6] = fconvert.s((x87_r6_6 - fconvert.t(arg4[6])) * x87_r6 + fconvert.t(arg4[6]))
    var_2c = fconvert.s((x87_r6_10 - fconvert.t(*arg4)) * x87_r6 + fconvert.t(*arg4))
    float var_14 =
        fconvert.s((fconvert.t(arg3[1]) - fconvert.t(arg4[1])) * x87_r6 + fconvert.t(arg4[1]))
    float var_10 =
        fconvert.s((fconvert.t(arg3[2]) - fconvert.t(arg4[2])) * x87_r6 + fconvert.t(arg4[2]))
    long double x87_r7_7 = x87_r6 * (fconvert.t(arg3[3]) - fconvert.t(arg4[3])) + fconvert.t(arg4[3])
    float var_18 = var_2c
    float var_c = fconvert.s(x87_r7_7)
    float* eax_5 = sub_465ec0(&var_18, &var_2c)
    int32_t edx_4 = eax_5[1]
    *entry_result = *eax_5
    int32_t ecx_2 = eax_5[2]
    entry_result[1] = edx_4
    int32_t edx_5 = eax_5[3]
    entry_result[2] = ecx_2
    entry_result[3] = edx_5
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}
