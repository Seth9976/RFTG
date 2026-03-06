// 函数名称: sub_468120
// 虚拟地址: 0x468120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_468120(float* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690a0e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_316529c & 1) == 0)
        data_316529c.d |= 1
        int32_t var_8_1 = 0
        data_3165298 = sub_4f5220(data_307c110, "Card")
        int32_t var_8_2 = 0xffffffff
    
    void var_b8
    int32_t eax_5
    int80_t result
    result, eax_5 = sub_40a930(&var_b8)
    int32_t eax_6 = data_3165298
    void var_58
    __builtin_memcpy(&var_58, eax_5, 0x40)
    int32_t* eax_7 = sub_4f5350(eax_6, &var_58, data_307c110, &var_58)
    float edx_1 = eax_7[1]
    long double x87_r6 = fconvert.t(eax_7[2])
    float edx_2 = eax_7[3]
    long double x87_r4 = fconvert.t(*eax_7)
    long double x87_r3_1 = fconvert.t(0.5)
    __builtin_memcpy(arg1, &data_be4c5c, 0x20)
    arg1[5] = fconvert.s(fconvert.t(fconvert.s((x87_r6 + x87_r4) * x87_r3_1)))
    arg1[6] = fconvert.s(fconvert.t(fconvert.s(x87_r3_1 * (fconvert.t(edx_1) + fconvert.t(edx_2)))))
    arg1[7] = fconvert.s(float.t(0))
    *arg1 = fconvert.s(fconvert.t(fconvert.s(x87_r6 - x87_r4)) / fconvert.t(data_307cc8c))
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
