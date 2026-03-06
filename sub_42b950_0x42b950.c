// 函数名称: sub_42b950
// 虚拟地址: 0x42b950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_42b950()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_697edc
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_e4 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = data_27e7a40
    int32_t* ebx = *(eax_3 + 0x548)
    void* esi_1 = sub_46b2b0(*(eax_3 + 0x74))
    
    if ((data_31665a4 & 1) == 0)
        data_31665a4.d |= 1
        int32_t var_8_1 = 0
        data_31665a0 = sub_4f5220(data_307c1c8, "animBg")
        int32_t var_8_2 = 0xffffffff
    
    void* eax_4
    
    if (*(esi_1 + 0x1c) == 0x13 || ebx[0xb02e] != 0)
        eax_4.b = 1
    else
        eax_4.b = 0
    
    uint32_t edx = zx.d(eax_4.b == 0)
    uint32_t var_e8 = edx
    sub_4fa4e0(ebx[0x16], data_31665a0, edx.b)
    void var_94
    int32_t eax_8
    int80_t st0
    st0, eax_8 = sub_40a930(&var_94)
    float var_e8_1 = fconvert.s(float.t(1))
    void* eax_9 = ebx[0x16]
    void var_54
    __builtin_memcpy(&var_54, eax_8, 0x40)
    sub_4f9fe0(eax_9, &var_54)
    
    if ((data_31665a4 & 2) == 0)
        data_31665a4.d |= 2
        int32_t var_8_3 = 1
        data_316659c = sub_4f5220(data_307c530, "tblGamblingButtons")
        int32_t var_8_4 = 0xffffffff
    
    void var_d4
    int32_t eax_11
    int80_t result
    result, eax_11 = sub_40a930(&var_d4)
    __builtin_memcpy(&var_54, eax_11, 0x40)
    float edi = data_316659c
    void* eax_12
    int32_t ecx_2
    eax_12, ecx_2 = sub_4fc3d0(&data_be1cb8, *ebx)
    int32_t var_e8_3 = ecx_2
    float var_e8_4 = fconvert.s(float.t(1))
    sub_4f9b40(eax_12, eax_12, ecx_2, edi)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
