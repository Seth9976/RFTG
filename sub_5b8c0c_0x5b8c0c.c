// 函数名称: sub_5b8c0c
// 虚拟地址: 0x5b8c0c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_5b8c0c()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x8aa6f8
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa6f8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30 = &data_5b8c18
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_bed2cc == 0)
        sub_5aeedd(6)
        int32_t var_8_1 = 0
        
        if (data_bed2cc == 0)
            sub_5b852b()
            data_bed2cc += 1
        
        int32_t var_8_2 = 0xfffffffe
        result = sub_5b8c52()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b8c51
    return result
}
