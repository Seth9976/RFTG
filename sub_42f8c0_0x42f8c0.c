// 函数名称: sub_42f8c0
// 虚拟地址: 0x42f8c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_42f8c0(int32_t arg1, int32_t arg2, int32_t arg3, float* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690b4e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_fc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = data_307c1c8
    
    if ((data_31652cc & 1) == 0)
        data_31652cc.d |= 1
        int32_t var_8_1 = 0
        data_31652c8 = sub_4f5220(ebx, "card2")
        int32_t var_8_2 = 0xffffffff
    
    void var_ec
    int32_t eax_5
    int32_t edx
    int80_t st0
    st0, eax_5, edx = sub_40a930(&var_ec)
    void var_64
    __builtin_memcpy(&var_64, eax_5, 0x40)
    int32_t* eax_7 = sub_4f5350(data_31652c8, edx, ebx, &var_64)
    float edx_1 = eax_7[1]
    int32_t var_24 = *eax_7
    float edx_2 = eax_7[3]
    int32_t var_1c = eax_7[2]
    int32_t* eax_10 = *sub_466320(data_307c03c)
    long double x87_r6 = float.t(*eax_10)
    
    if (*eax_10 s< 0)
        x87_r6 = x87_r6 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_1 = float.t(eax_10[1])
    
    if (eax_10[1] s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(eax_10[2])))
    long double x87_r6_7 = fconvert.t(fconvert.s(fconvert.t(edx_2) - fconvert.t(edx_1)))
    long double x87_r5_6 = float.t(1)
    long double x87_r6_11 = fconvert.t(fconvert.s(x87_r5_6 / x87_r5_6))
    float var_74_2 = fconvert.s(x87_r6_11 * fconvert.t(fconvert.s(x87_r6_7
        * fconvert.t(fconvert.s(x87_r6_3 * fconvert.t(fconvert.s(x87_r6)))))))
    float var_108 = var_74_2
    void var_ac
    int32_t* eax_13
    int80_t result
    result, eax_13 = sub_466770(&var_ac, arg5, arg3, arg3, fconvert.s(fconvert.t(5f)), var_74_2, 
        fconvert.s(x87_r6_11 * fconvert.t(fconvert.s(x87_r6_7
            * fconvert.t(fconvert.s(x87_r6_3 * fconvert.t(fconvert.s(x87_r6_1))))))))
    float edx_5 = eax_13[1]
    long double x87_r5_9 = fconvert.t(eax_13[2])
    long double x87_r3 = fconvert.t(*eax_13)
    float edx_6 = eax_13[3]
    long double x87_r2_1 = fconvert.t(0.5)
    __builtin_memcpy(arg4, &data_be4c5c, 0x20)
    float var_78_1 =
        fconvert.s(fconvert.t(fconvert.s(x87_r2_1 * (fconvert.t(edx_5) + fconvert.t(edx_6)))))
    float var_74_4 = fconvert.s(float.t(0))
    arg4[5] = fconvert.s(fconvert.t(fconvert.s((x87_r5_9 + x87_r3) * x87_r2_1)))
    float var_80_1 = fconvert.s(x87_r5_9 - x87_r3)
    arg4[6] = var_78_1
    arg4[7] = var_74_4
    *arg4 = fconvert.s(fconvert.t(var_80_1) / fconvert.t(data_307cc8c))
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
