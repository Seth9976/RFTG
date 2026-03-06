// 函数名称: sub_405f60
// 虚拟地址: 0x405f60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_405f60(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_2c
    float* entry_ebx
    sub_405970(&var_2c, &entry_ebx[5], &arg2[1])
    long double x87_r7_1 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
    var_2c = fconvert.s(x87_r7_1 * fconvert.t(var_2c))
    float var_28
    float var_28_1 = fconvert.s(fconvert.t(var_28) * x87_r7_1)
    float result
    float var_24 = fconvert.s(x87_r7_1 * fconvert.t(result))
    float var_1c = fconvert.s(fconvert.t(var_2c) + fconvert.t(arg2[5]))
    float var_18_1 = fconvert.s(fconvert.t(arg2[6]) + fconvert.t(var_28_1))
    long double x87_r7_7 = fconvert.t(arg2[7])
    arg1[5] = var_1c
    arg1[6] = var_18_1
    float var_14_1 = fconvert.s(x87_r7_7 + fconvert.t(var_24))
    arg1[7] = var_14_1
    sub_405ee0(&var_1c, &entry_ebx[1], &arg2[1])
    arg1[1] = var_1c
    arg1[2] = var_18_1
    arg1[3] = var_14_1
    arg1[4] = result
    *arg1 = fconvert.s(fconvert.t(*entry_ebx) * fconvert.t(*arg2))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
