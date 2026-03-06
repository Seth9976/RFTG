// 函数名称: sub_5a9094
// 虚拟地址: 0x5a9094
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a9094(void* arg1, int32_t arg2, uint32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0xc
    int32_t __saved_ebp_2 = 0xc
    int32_t var_8 = 0x8aa130
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa130 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_2 = &data_5a90a0
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t result
    
    if (arg2 == 0 || arg3 == 0)
        result = 0
    else
        int32_t eax
        eax.b = arg4 != 0
        
        if (eax != 0)
            sub_5a873c(arg4)
            int32_t var_8_1 = 0
            uint32_t result_1 = sub_5a8f3d(arg1, arg2, arg3, arg4)
            int32_t var_8_2 = 0xfffffffe
            $LN12(&__saved_ebp)
            result = result_1
        else
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a90cf
    return result
}
