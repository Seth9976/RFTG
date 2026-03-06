// 函数名称: sub_5aee1b
// 虚拟地址: 0x5aee1b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5aee1b(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x8aa350
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa350 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_2 = &data_5aee27
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result_1 = 1
    
    if (data_bed0f8 == 0)
        __FF_MSGBANNER()
        sub_5af622(0x1e)
        __endthreadex(0xff)
        noreturn
    
    int32_t result
    
    if (*((arg1 << 3) + &data_8b8ca8) == 0)
        CRITICAL_SECTION* lpCriticalSection = sub_5abd7c(0x18)
        
        if (lpCriticalSection != 0)
            sub_5aeedd(0xa)
            int32_t var_8_1 = 0
            
            if (*((arg1 << 3) + &data_8b8ca8) != 0)
                __free_base(lpCriticalSection)
            else if (InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0xfa0) != 0)
                *((arg1 << 3) + &data_8b8ca8) = lpCriticalSection
            else
                __free_base(lpCriticalSection)
                *__errno() = 0xc
                result_1 = 0
            
            int32_t var_8_2 = 0xfffffffe
            sub_5aeed4()
            result = result_1
        else
            *__errno() = 0xc
            result = 0
    else
        result = 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5aeed3
    return result
}
