// 函数名称: sub_4bd0e0
// 虚拟地址: 0x4bd0e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_4bd0e0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_697aae
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_ec
    int32_t eax_2 = __security_cookie ^ &var_ec
    int32_t __saved_edi
    int32_t var_fc = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    var_ec = arg4
    int32_t eax_6
    int80_t result
    result, eax_6 = sub_4bba20(arg4)
    void var_60
    __builtin_memcpy(&var_60, eax_6, 0x40)
    int32_t* esi_1 = var_ec
    int32_t ecx_1 = arg3 * 7
    var_ec = fconvert.s(fconvert.t(esi_1[5]))
    int32_t var_104 = ecx_1
    int32_t edx_2 = sub_5055d0(&esi_1[ecx_1 + 0xbe], esi_1[ecx_1 + 0xbd], &esi_1[ecx_1 + 0xc0], 
        esi_1[ecx_1 + 0xbc], &var_60, fconvert.s(fconvert.t(var_ec)), 0)
    int32_t eax_9
    
    if ((data_31664f4 & 1) != 0)
        eax_9 = data_31664f0
    else
        data_31664f4.d |= 1
        int32_t var_c_1 = 0
        eax_9, edx_2 = sub_4f5220(data_307c630, "txtNewProfile")
        data_31664f0 = eax_9
        int32_t var_c_2 = 0xffffffff
    
    int32_t* ecx_3 = data_307c630
    void* var_100_1 = &var_60
    int32_t* var_104_3 = ecx_3
    float var_104_4 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(esi_1[5]))))
    var_ec = ecx_3
    __builtin_memcpy(&var_60, sub_4f62d0(eax_9, var_104_4, edx_2), 0x40)
    sub_4f5010(&var_60, eax_9 * 0x118 + *sub_4f4890(var_ec), "New Profile", 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_ec)
    return result
}
