// 函数名称: sub_4056e0
// 虚拟地址: 0x4056e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float*sub_4056e0(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
    float* entry_ebx
    long double x87_r6_2 = fconvert.t(entry_ebx[1])
    float var_14 = fconvert.s(fconvert.t(*entry_ebx) * x87_r6)
    float var_10 = fconvert.s(x87_r6_2 * x87_r6)
    float var_c = fconvert.s(x87_r6 * fconvert.t(entry_ebx[2]))
    float var_30
    sub_405970(&var_30, &var_14, &arg2[1])
    long double x87_r7_7 = fconvert.t(arg2[6])
    *arg1 = fconvert.s(fconvert.t(arg2[5]) + fconvert.t(var_30))
    long double x87_r7_9 = fconvert.t(arg2[7])
    float var_2c
    arg1[1] = fconvert.s(x87_r7_7 + fconvert.t(var_2c))
    float var_28
    arg1[2] = fconvert.s(x87_r7_9 + fconvert.t(var_28))
    sub_405970(&var_30, &entry_ebx[3], &arg2[1])
    arg1[3] = var_30
    arg1[4] = var_2c
    arg1[5] = var_28
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return arg1
}
