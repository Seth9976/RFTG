// 函数名称: ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z
// 虚拟地址: 0x5a717b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __stdcall?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0x14
    int32_t __saved_ebp_2 = 0x14
    int32_t var_8 = 0x8a9fb0
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8a9fb0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_38
    void* const var_3c = &data_5a7187
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    
    while (true)
        int32_t temp1_1 = arg3
        arg3 -= 1
        
        if (temp1_1 - 1 s< 0)
            break
        
        arg1 -= arg2
        result = arg4()
    
    int32_t var_8_2 = 0xfffffffe
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a71d6
    return result
}
