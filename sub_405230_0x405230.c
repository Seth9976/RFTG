// 函数名称: sub_405230
// 虚拟地址: 0x405230
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_405230(int32_t arg1, float* arg2, int32_t* arg3, float* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    float var_3c
    __builtin_memcpy(&var_3c, arg2, 0x20)
    long double x87_r6 = float.t(1)
    var_3c = fconvert.s(x87_r6 / x87_r6)
    float var_38 = fconvert.s(fneg(fconvert.t(var_38)))
    float var_34
    float var_34_1 = fconvert.s(fneg(fconvert.t(var_34)))
    float var_30
    float var_30_1 = fconvert.s(fneg(fconvert.t(var_30)))
    float var_6c
    float var_28
    sub_405970(&var_6c, &var_28, &var_38)
    long double x87_r7_10 = fconvert.t(fconvert.s(fneg(fconvert.t(var_3c))))
    var_28 = fconvert.s(x87_r7_10 * fconvert.t(var_6c))
    float var_68
    float var_24 = fconvert.s(fconvert.t(var_68) * x87_r7_10)
    float var_64
    float var_20 = fconvert.s(x87_r7_10 * fconvert.t(var_64))
    float var_74
    float* eax_5 = sub_4056e0(&var_74, &var_3c)
    float ecx_3 = *eax_5
    float edx_4 = eax_5[1]
    long double x87_r7_13 = fneg(fconvert.t(eax_5[2]))
    var_28 = eax_5[3]
    long double x87_r7_15 = float.t(0)
    fconvert.t(fconvert.s(x87_r7_13 / fconvert.t(eax_5[5]))) - x87_r7_15
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        *arg5 = 0
        arg5[1] = 0
        *arg3 = 0
        arg3[1] = 0
        arg3[2] = 0
        int32_t* eax_7
        eax_7.b = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_7
    
    float var_18_1 = fconvert.s(fconvert.t(eax_5[4]) * x87_r7_15)
    var_6c = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_28) * x87_r7_15)) + fconvert.t(ecx_3))
    *arg5 = fconvert.s(fconvert.t(var_6c))
    arg5[1] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(edx_4) + fconvert.t(var_18_1))))
    long double x87_r7_18 = fconvert.t(fconvert.s(fconvert.t(*arg2)))
    float var_44_4 = fconvert.s(x87_r7_18 * fconvert.t(fconvert.s(x87_r7_15 * fconvert.t(arg4[5]))))
    float var_18_3 = fconvert.s(fconvert.t(arg4[1])
        + fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg4[4]) * x87_r7_15)) * x87_r7_18)))
    long double x87_r7_24 = fconvert.t(arg4[2])
    *arg3 = fconvert.s(fconvert.t(*arg4)
        + fconvert.t(fconvert.s(x87_r7_18 * fconvert.t(fconvert.s(fconvert.t(arg4[3]) * x87_r7_15)))))
    arg3[1] = var_18_3
    arg3[2] = fconvert.s(x87_r7_24 + fconvert.t(var_44_4))
    int32_t* eax_8
    eax_8.b = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_8
}
