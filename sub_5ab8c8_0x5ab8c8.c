// 函数名称: sub_5ab8c8
// 虚拟地址: 0x5ab8c8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_5ab8c8(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 8
    int32_t __saved_ebp_2 = 8
    int32_t var_8 = 0x8aa218
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_5 = 0x8aa218 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30_5 = &data_5ab8d4
    int32_t var_8_6 = 0xfffffffe
    int32_t var_c = var_8_5
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0)
        sub_5aeedd(0xd)
        int32_t var_8_1 = 0
        int32_t eax = arg1[1]
        
        if (eax != 0 && InterlockedDecrement(eax) == 0)
            int32_t eax_2 = arg1[1]
            
            if (eax_2 != 0x8b8530)
                __free_base(eax_2)
        
        int32_t var_8_2 = 0xfffffffe
        sub_5ab975()
        
        if (*arg1 != 0)
            sub_5aeedd(0xc)
            int32_t var_8_3 = 1
            sub_5ae9b6(*arg1)
            int32_t* eax_3 = *arg1
            
            if (eax_3 != 0 && *eax_3 == 0 && eax_3 != 0x8b8bc0)
                sub_5aea4f(eax_3)
            
            int32_t var_8_4 = 0xfffffffe
            sub_5ab981()
        
        *arg1 = 0xbaadf00d
        arg1[1] = 0xbaadf00d
        result = __free_base(arg1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5ab971
    return result
}
