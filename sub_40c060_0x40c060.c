// 函数名称: sub_40c060
// 虚拟地址: 0x40c060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_40c060(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6916de
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_118 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = data_307c1b8
    
    if ((data_3165550 & 1) == 0)
        data_3165550.d |= 1
        int32_t var_8_1 = 0
        data_316554c = sub_4f5220(ebx, "Name")
        int32_t var_8_2 = 0xffffffff
    
    void* eax_5 = sub_4f4900(data_316554c)
    void var_c8
    int32_t eax_6
    int80_t st0
    st0, eax_6 = sub_40a930(&var_c8)
    int32_t eax_7 = data_316554c
    void var_58
    __builtin_memcpy(&var_58, eax_6, 0x40)
    int32_t* eax_8 = sub_4f5350(eax_7, &var_58, ebx, &var_58)
    float edx_1 = eax_8[1]
    float var_74 = *eax_8
    float ecx_2 = eax_8[2]
    float edx_2 = eax_8[3]
    *(arg1 + 0x80) = *(eax_5 + 0xb4)
    float eax_10
    int32_t edx_3
    eax_10, edx_3 = sub_40af40(&var_74)
    *(arg1 + 0x64) = edx_3
    long double x87_r6_1 = fconvert.t(ecx_2) - fconvert.t(var_74)
    *(arg1 + 0x60) = eax_10
    *(arg1 + 0x68) = fconvert.s(x87_r6_1)
    *(arg1 + 0x6c) = fconvert.s(fconvert.t(edx_2) - fconvert.t(edx_1))
    *(arg1 + 0x84) = *(eax_5 + 0xb8)
    int32_t ecx_5 = *(eax_5 + 0xbc)
    *(arg1 + 0x94) = 0xb8
    *(arg1 + 0x8c) = ecx_5
    *(arg1 + 0x90) = 0xff787260
    *(arg1 + 0x70) = 0
    *(arg1 + 0x74) = 0
    void var_108
    int32_t eax_12
    int80_t result
    result, eax_12 = sub_40a930(&var_108)
    __builtin_memcpy(&var_58, eax_12, 0x40)
    long double x87_r5 = fconvert.t(*(eax_5 + 0xc0))
    *(arg1 + 0x98) = 8
    *(arg1 + 0xa4) = 2
    float var_4c
    *(arg1 + 0x88) = fconvert.s(x87_r5 * fconvert.t(var_4c))
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
