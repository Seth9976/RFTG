// 函数名称: sub_43cd90
// 虚拟地址: 0x43cd90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_43cd90(int32_t arg1, int32_t arg2, float* arg3, long double arg4 @ st0, float* arg5, float arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r6 = float.t(0)
    sub_406960(eax_1, arg2, 4, 
        fconvert.s(fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg6) - x87_r6))
            / fconvert.t(fconvert.s(float.t(1) - x87_r6))))), 
        fconvert.s(float.t(0)), fconvert.s(float.t(1)))
    float var_1c_3 = fconvert.s(arg4)
    long double x87_r7_9 = fconvert.t(var_1c_3)
    long double x87_r7_11 = fconvert.t(arg3[1])
    float* entry_ebx
    *arg5 = fconvert.s((fconvert.t(*arg3) - fconvert.t(*entry_ebx)) * x87_r7_9 + fconvert.t(*entry_ebx))
    long double x87_r7_15 = fconvert.t(arg3[2])
    arg5[1] = fconvert.s((x87_r7_11 - fconvert.t(entry_ebx[1])) * x87_r7_9 + fconvert.t(entry_ebx[1]))
    arg5[2] = fconvert.s(x87_r7_9 * (x87_r7_15 - fconvert.t(entry_ebx[2])) + fconvert.t(entry_ebx[2]))
    float var_64[0x4]
    float* eax_3 = sub_465b90(&var_64, &arg3[3])
    float edx_1 = eax_3[1]
    float ecx_2 = eax_3[2]
    float esi_2 = *eax_3
    float edx_2 = eax_3[3]
    float var_54[0x4]
    float* eax_5 = sub_465b90(&var_54, &entry_ebx[3])
    int32_t edx_3 = eax_5[1]
    float var_18 = *eax_5
    int32_t var_14 = edx_3
    int32_t var_10 = eax_5[2]
    int32_t var_c = eax_5[3]
    float var_8c = esi_2
    float var_90 = edx_2
    float var_74[0x4]
    float* eax_7 = sub_465f40(&var_8c, &var_74, &var_18, fconvert.s(fconvert.t(var_1c_3)), var_8c, 
        edx_1, ecx_2, edx_2)
    int32_t ecx_8 = eax_7[1]
    var_18 = *eax_7
    int32_t var_14_1 = ecx_8
    int32_t var_10_1 = eax_7[2]
    int32_t var_c_1 = eax_7[3]
    float var_44[0x5]
    int32_t* eax_9
    int80_t result
    result, eax_9 = sub_465c60(&var_18, &var_44)
    arg5[3] = *eax_9
    int32_t eax_10 = eax_9[2]
    arg5[4] = eax_9[1]
    arg5[5] = eax_10
    long double x87_r5_1 = fconvert.t(var_1c_3)
    long double x87_r5_3 = fconvert.t(arg3[7])
    arg5[6] = fconvert.s((fconvert.t(arg3[6]) - fconvert.t(entry_ebx[6])) * x87_r5_1
        + fconvert.t(entry_ebx[6]))
    long double x87_r5_8 = fconvert.t(arg3[8]) - fconvert.t(entry_ebx[8])
    arg5[7] = fconvert.s((x87_r5_3 - fconvert.t(entry_ebx[7])) * x87_r5_1 + fconvert.t(entry_ebx[7]))
    arg5[8] = fconvert.s(x87_r5_1 * x87_r5_8 + fconvert.t(entry_ebx[8]))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
