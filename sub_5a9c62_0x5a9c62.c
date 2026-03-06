// 函数名称: sub_5a9c62
// 虚拟地址: 0x5a9c62
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a9c62(int128_t* arg1, void* arg2, int32_t arg3, uint32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0xc
    int32_t __saved_ebp_2 = 0xc
    int32_t var_8 = 0x8aa1d8
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa1d8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_3 = &data_5a9c6e
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    uint32_t result
    
    if (arg3 == 0 || arg4 == 0)
        result = 0
    else if (arg5 != 0)
        sub_5a873c(arg5)
        int32_t var_8_1 = 0
        uint32_t result_1 = sub_5a9aa6(arg1, arg2, arg3, arg4, arg5)
        int32_t var_8_2 = 0xfffffffe
        sub_5a9ce6(&__saved_ebp)
        result = result_1
    else
        if (arg2 != 0xffffffff)
            sub_5abfc0(arg1, 0, arg2)
        
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a9cae
    return result
}
