// 函数名称: sub_5b6025
// 虚拟地址: 0x5b6025
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5b6025(char* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x8aa558
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa558 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_1 = &data_5b6031
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax
    eax.b = arg1 != 0
    int32_t eax_2
    
    if (eax != 0)
        eax_2 = _strnlen(arg1, 0x7fff)
    
    void* result
    
    if (eax == 0 || neg.d(sbb.d(eax_2, eax_2, eax_2 u< 0x7fff)) == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = nullptr
    else
        sub_5aeedd(7)
        int32_t var_8_1 = 0
        void* result_1 = __getenv_helper_nolock(arg1)
        int32_t var_8_2 = 0xfffffffe
        sub_5b6096()
        result = result_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b6095
    return result
}
