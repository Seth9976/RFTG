// 函数名称: sub_56b640
// 虚拟地址: 0x56b640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_56b640(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68fb48
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* eax_3 = *arg2
    
    if (eax_3 == 0 || *eax_3 == 0)
        int32_t var_40 = *(arg5 + 0x20)
        int32_t eax_5 = sub_4c5680("Can't edit unnamed marker: %s")
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_5
    
    char* const var_24 = &data_83f3d3
    int32_t var_c_1 = 0
    int32_t var_28 = arg1
    sub_4c4510(arg2)
    int32_t var_20 = arg3
    int32_t var_1c = arg4
    void arg_4
    sub_56bca0(&arg_4, &var_28)
    int32_t var_c_2 = 0xffffffff
    void* eax_7 = var_24
    
    if (eax_7 != 0 && *eax_7 != 0)
        eax_7 = sub_4c4060(&var_24)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_7 + 0xc) + 0x10
            eax_7 = sub_4f4430(eax_7, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7
}
