// 函数名称: sub_54cb80
// 虚拟地址: 0x54cb80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_54cb80(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float* entry_ebx
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*entry_ebx)))
    long double x87_r6_2 = fconvert.t(arg2[1])
    float var_14 = fconvert.s(fconvert.t(*arg2) * x87_r6)
    float var_10 = fconvert.s(x87_r6_2 * x87_r6)
    float var_c = fconvert.s(x87_r6 * fconvert.t(arg2[2]))
    float var_3c
    sub_405970(&var_3c, &var_14, &entry_ebx[1])
    long double x87_r7_7 = fconvert.t(entry_ebx[6])
    *arg1 = fconvert.s(fconvert.t(entry_ebx[5]) + fconvert.t(var_3c))
    long double x87_r7_9 = fconvert.t(entry_ebx[7])
    float var_38
    arg1[1] = fconvert.s(x87_r7_7 + fconvert.t(var_38))
    float var_34
    arg1[2] = fconvert.s(x87_r7_9 + fconvert.t(var_34))
    sub_405ee0(&var_3c, &arg2[3], &entry_ebx[1])
    long double x87_r7_12 = fconvert.t(fconvert.s(fconvert.t(*entry_ebx)))
    arg1[3] = var_3c
    long double x87_r6_5 = x87_r7_12 * fconvert.t(arg2[7])
    arg1[4] = var_38
    float var_24_3 = fconvert.s(x87_r6_5)
    long double x87_r6_6 = fconvert.t(arg2[8])
    arg1[5] = var_34
    arg1[7] = var_24_3
    int32_t var_30
    arg1[6] = var_30
    arg1[8] = fconvert.s(x87_r6_6 * x87_r7_12)
    arg1[9] = fconvert.s(x87_r7_12 * fconvert.t(arg2[9]))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
