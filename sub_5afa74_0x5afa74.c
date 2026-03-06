// 函数名称: sub_5afa74
// 虚拟地址: 0x5afa74
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5afa74(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x8aa3f0
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa3f0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_5afa80
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* esi_3 = ((arg1 & 0x1f) << 6) + (&data_3166ee0)[arg1 s>> 5]
    int32_t result = 1
    
    if (*(esi_3 + 8) == 0)
        sub_5aeedd(0xa)
        int32_t var_8_1 = 0
        
        if (*(esi_3 + 8) == 0)
            if (InitializeCriticalSectionAndSpinCount(esi_3 + 0xc, 0xfa0) == 0)
                result = 0
            
            *(esi_3 + 8) += 1
        
        int32_t var_8_2 = 0xfffffffe
        sub_5afb0a()
    
    if (result != 0)
        EnterCriticalSection((&data_3166ee0)[arg1 s>> 5] + ((arg1 & 0x1f) << 6) + 0xc)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5afb04
    return result
}
