// 函数名称: sub_5aebe7
// 虚拟地址: 0x5aebe7
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5aebe7()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x8aa330
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa330 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_5aebf3
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t* eax = __getptd()
    void* result
    
    if ((eax[0x1c] & data_8b8a50) == 0 || eax[0x1b] == 0)
        sub_5aeedd(0xc)
        int32_t var_8_1 = 0
        result = &eax[0x1b]
        void* var_20_1 = sub_5aeb9a(result, data_8b8c98)
        int32_t var_8_2 = 0xfffffffe
        sub_5aec54(&__saved_ebp)
    else
        result = __getptd()[0x1b]
    
    if (result == 0)
        __amsg_exit(0x20)
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5aec25
    return result
}
