// 函数名称: sub_4e4c10
// 虚拟地址: 0x4e4c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4e4c10(int32_t arg1, int32_t arg2, float* arg3, float* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(arg3[4])))
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(arg3[5])))
    long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(*arg3)))
    float var_50 = fconvert.s((fconvert.t(arg3[2]) - x87_r6_4)
        * fconvert.t(fconvert.s((fconvert.t(*arg4) - x87_r6) / (fconvert.t(arg3[6]) - x87_r6))) + x87_r6_4)
    long double x87_r6_5 = fconvert.t(fconvert.s(fconvert.t(arg3[1])))
    float var_4c = fconvert.s((fconvert.t(arg3[3]) - x87_r6_5)
        * fconvert.t(fconvert.s((fconvert.t(arg4[1]) - x87_r6_2) / (fconvert.t(arg3[7]) - x87_r6_2)))
        + x87_r6_5)
    float var_74
    sub_465a20(&var_74, arg2, &arg3[8])
    float var_2c = var_74
    float var_70
    float var_18 = fconvert.s(fneg(fconvert.t(var_70)))
    float var_6c
    float var_14 = fconvert.s(fneg(fconvert.t(var_6c)))
    long double x87_r6_6 = fconvert.t(var_4c)
    float var_3c = fconvert.s(fconvert.t(fconvert.s(fneg(fconvert.t(var_2c)))) * x87_r6_6)
    float var_38 = fconvert.s(fconvert.t(var_18) * x87_r6_6)
    float var_34 = fconvert.s(x87_r6_6 * fconvert.t(var_14))
    sub_466130(&var_2c, var_70, &arg3[8])
    long double x87_r6_10 = fconvert.t(var_50)
    float var_54 = fconvert.s(fconvert.t(var_2c) * x87_r6_10)
    float var_50_1 = fconvert.s(fconvert.t(var_70) * x87_r6_10)
    float var_4c_1 = fconvert.s(x87_r6_10 * fconvert.t(var_6c))
    float var_64
    sub_405900(&var_64, var_70, &arg3[8])
    var_2c = fconvert.s(fconvert.t(var_54) + fconvert.t(var_64))
    float var_5c
    float var_24_2 = fconvert.s(fconvert.t(var_5c) + fconvert.t(var_4c_1))
    var_3c = fconvert.s(fconvert.t(var_2c) + fconvert.t(var_3c))
    int32_t* entry_result
    *entry_result = arg3[0xc]
    float var_60
    float var_38_1 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_60) + fconvert.t(var_50_1)))
        + fconvert.t(var_38))
    entry_result[1] = arg3[0xd]
    float var_34_1 = fconvert.s(fconvert.t(var_24_2) + fconvert.t(var_34))
    entry_result[2] = arg3[0xe]
    float* eax_11 = sub_4132a0(&var_3c, &var_64)
    int32_t edx_5 = eax_11[1]
    int32_t eax_12 = eax_11[2]
    entry_result[3] = *eax_11
    entry_result[4] = edx_5
    entry_result[5] = eax_12
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return entry_result
}
