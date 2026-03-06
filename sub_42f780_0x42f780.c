// 函数名称: sub_42f780
// 虚拟地址: 0x42f780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_42f780(float* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690b8e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = data_307c1c8
    
    if ((data_31652d4 & 1) == 0)
        data_31652d4.d |= 1
        int32_t var_8_1 = 0
        data_31652d0 = sub_4f5220(ebx, "card1")
        int32_t var_8_2 = 0xffffffff
    
    void var_b8
    int32_t eax_4
    int32_t edx
    int80_t result
    result, eax_4, edx = sub_40a930(&var_b8)
    int32_t eax_5 = data_31652d0
    void var_58
    __builtin_memcpy(&var_58, eax_4, 0x40)
    int32_t* eax_6 = sub_4f5350(eax_5, edx, ebx, &var_58)
    float ecx_1 = eax_6[1]
    float eax_7 = eax_6[3]
    long double x87_r6 = fconvert.t(eax_6[2])
    long double x87_r4 = fconvert.t(*eax_6)
    long double x87_r3_1 = fconvert.t(0.5)
    __builtin_memcpy(arg1, &data_be4c5c, 0x20)
    arg1[5] = fconvert.s(fconvert.t(fconvert.s((x87_r6 + x87_r4) * x87_r3_1)))
    arg1[6] = fconvert.s(fconvert.t(fconvert.s(x87_r3_1 * (fconvert.t(ecx_1) + fconvert.t(eax_7)))))
    arg1[7] = fconvert.s(float.t(0))
    *arg1 = fconvert.s(fconvert.t(fconvert.s(x87_r6 - x87_r4)) / fconvert.t(data_307cc8c))
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
