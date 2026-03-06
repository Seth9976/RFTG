// 函数名称: sub_4d5bb0
// 虚拟地址: 0x4d5bb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_4d5bb0(int32_t* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float* entry_ebx
    *arg1 = entry_ebx[1]
    arg1[1] = entry_ebx[2]
    arg1[2] = entry_ebx[3]
    arg1[3] = entry_ebx[4]
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(*entry_ebx)))
    long double x87_r6_2 = fconvert.t(arg2[1])
    float var_14 = fconvert.s(fconvert.t(*arg2) * x87_r6)
    float var_10 = fconvert.s(x87_r6_2 * x87_r6)
    float var_c = fconvert.s(x87_r6 * fconvert.t(arg2[2]))
    float var_30
    sub_405970(&var_30, &var_14, &entry_ebx[1])
    float var_2c
    float var_1c_2 = fconvert.s(fconvert.t(entry_ebx[6]) + fconvert.t(var_2c))
    long double x87_r7_9 = fconvert.t(entry_ebx[7])
    arg1[4] = fconvert.s(fconvert.t(entry_ebx[5]) + fconvert.t(var_30))
    arg1[5] = var_1c_2
    float var_28
    arg1[6] = fconvert.s(x87_r7_9 + fconvert.t(var_28))
    float var_1c_3 = fconvert.s(fconvert.t(arg2[4]) - fconvert.t(arg2[1]))
    float var_18_3 = fconvert.s(fconvert.t(arg2[5]) - fconvert.t(arg2[2]))
    long double x87_r7_18 = fconvert.t(fconvert.s(fconvert.t(*entry_ebx)))
    var_14 = fconvert.s(x87_r7_18 * fconvert.t(fconvert.s(fconvert.t(arg2[3]) - fconvert.t(*arg2))))
    arg1[7] = var_14
    arg1[8] = fconvert.s(fconvert.t(var_1c_3) * x87_r7_18)
    float result = fconvert.s(x87_r7_18 * fconvert.t(var_18_3))
    arg1[9] = result
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
