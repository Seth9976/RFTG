// 函数名称: sub_5a7d4b
// 虚拟地址: 0x5a7d4b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a7d4b(char* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0xc
    int32_t __saved_ebp_2 = 0xc
    int32_t var_8 = 0x8aa030
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa030 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_2 = &data_5a7d57
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax
    eax.b = arg1 != 0
    uint32_t result
    
    if (eax != 0)
        int32_t var_34 = 0x20
        sub_5a877d(1, &data_8b80b0)
        int32_t var_8_1 = 0
        int32_t eax_2 = sub_5af828(&data_8b80b0)
        void arg_8
        uint32_t result_1 = sub_5ad547(&data_8b80b0, arg1, nullptr, &arg_8)
        sub_5af8c4(eax_2, &data_8b80b0)
        int32_t var_8_2 = 0xfffffffe
        $LN8()
        result = result_1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a7dde
    return result
}
