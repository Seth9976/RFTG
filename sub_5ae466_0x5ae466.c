// 函数名称: sub_5ae466
// 虚拟地址: 0x5ae466
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5ae466()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x8aa2f0
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa2f0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_3 = &data_5ae472
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t* eax = __getptd()
    void* result
    
    if ((eax[0x1c] & data_8b8a50) == 0 || eax[0x1b] == 0)
        sub_5aeedd(0xd)
        int32_t var_8_1 = 0
        result = eax[0x1a]
        void* result_1 = result
        
        if (result != data_8b8958)
            if (result != 0 && InterlockedDecrement(result) == 0 && result != 0x8b8530)
                __free_base(result)
            
            eax[0x1a] = data_8b8958
            result = data_8b8958
            void* result_2 = result
            InterlockedIncrement(result)
        
        int32_t var_8_2 = 0xfffffffe
        sub_5ae501()
    else
        result = eax[0x1a]
    
    if (result == 0)
        __amsg_exit(0x20)
        noreturn
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5ae49f
    return result
}
