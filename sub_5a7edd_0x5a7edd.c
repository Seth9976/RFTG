// 函数名称: sub_5a7edd
// 虚拟地址: 0x5a7edd
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a7edd(char* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0xc
    int32_t __saved_ebp_2 = 0xc
    int32_t var_8 = 0x8aa050
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa050 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_3 = &data_5a7ee9
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_34 = 2
    int32_t var_20 = 2
    sub_5afa74(2)
    int32_t var_8_1 = 0
    
    if (arg1 != 0 && *arg1 != 0)
        sub_5afcd3(2, 2, arg1, _strlen(arg1))
        sub_5afcd3(2, 2, ": ", 2)
    
    char* eax_2 = __get_sys_err_msg(*__errno())
    sub_5afcd3(2, 2, eax_2, _strlen(eax_2))
    sub_5afcd3(2, 2, &data_862374, 1)
    int32_t var_8_2 = 0xfffffffe
    int32_t result = sub_5a7f61(&__saved_ebp)
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a7f60
    return result
}
