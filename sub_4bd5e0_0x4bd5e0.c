// 函数名称: sub_4bd5e0
// 虚拟地址: 0x4bd5e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_4bd5e0(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_697a0e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_100 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_4
    int32_t edx
    int80_t st0
    st0, eax_4, edx = sub_4bb770(arg4, arg3)
    void var_58
    __builtin_memcpy(&var_58, eax_4, 0x40)
    int32_t* eax_7 = sub_4ba260(arg3 + 4)
    int32_t eax_9
    
    if ((data_31664dc & 1) != 0)
        eax_9 = data_31664d8
    else
        data_31664dc.d |= 1
        int32_t var_8_1 = 0
        eax_9, edx = sub_4f5220(data_307c628, "imgAvatar")
        data_31664d8 = eax_9
        int32_t var_8_2 = 0xffffffff
    
    int32_t* ecx_1 = data_307c628
    void* var_104_1 = &var_58
    int32_t* var_108_2 = ecx_1
    void var_b0
    __builtin_memcpy(&var_b0, 
        sub_4f62d0(eax_9, fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(arg4 + 0xc))))), edx), 0x40)
    int32_t eax_11 = sub_4f4890(ecx_1)
    sub_4f67d0(eax_11, nullptr, eax_7, eax_9 * 0x118 + *eax_11, &data_be1ae0, &var_b0, nullptr, nullptr)
    int80_t result = sub_4f5f30(data_307c628, &var_58, 0, fconvert.s(fconvert.t(*(arg4 + 0xc))))
    int32_t ecx_7 = arg3 * 7
    int32_t var_108_4 = ecx_7
    sub_5055d0(arg4 + (ecx_7 << 2) + 0x3f4, *(arg4 + (ecx_7 << 2) + 0x3f0), 
        arg4 + (ecx_7 << 2) + 0x3fc, *(arg4 + (ecx_7 << 2) + 0x3ec), &var_58, 
        fconvert.s(fconvert.t(*(arg4 + 0xc))), 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
