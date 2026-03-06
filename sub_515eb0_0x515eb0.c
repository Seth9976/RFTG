// 函数名称: sub_515eb0
// 虚拟地址: 0x515eb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_515eb0(float* arg1 @ esi, float* arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float* entry_ebx
    float result_1 = fconvert.s(fconvert.t(arg1[7]) * fconvert.t(entry_ebx[7]))
    float var_18 = fconvert.s(fconvert.t(entry_ebx[8]) * fconvert.t(arg1[8]))
    long double x87_r7_5 = fconvert.t(entry_ebx[9]) * fconvert.t(arg1[9])
    arg2[7] = result_1
    arg2[8] = var_18
    float var_14 = fconvert.s(x87_r7_5)
    arg2[9] = var_14
    sub_405ee0(&result_1, entry_ebx, arg1)
    *arg2 = result_1
    arg2[1] = var_18
    arg2[2] = var_14
    int32_t var_10
    arg2[3] = var_10
    float var_2c
    sub_405970(&var_2c, &entry_ebx[4], arg1)
    var_2c = fconvert.s(fconvert.t(arg1[7]) * fconvert.t(var_2c))
    float var_28_1 = fconvert.s(fconvert.t(var_18) * fconvert.t(arg1[8]))
    float var_24
    float var_24_1 = fconvert.s(fconvert.t(var_24) * fconvert.t(arg1[9]))
    result_1 = fconvert.s(fconvert.t(arg1[4]) + fconvert.t(var_2c))
    float result = result_1
    float var_18_2 = fconvert.s(fconvert.t(arg1[5]) + fconvert.t(var_28_1))
    long double x87_r7_16 = fconvert.t(arg1[6])
    arg2[4] = result
    arg2[5] = var_18_2
    arg2[6] = fconvert.s(x87_r7_16 + fconvert.t(var_24_1))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
