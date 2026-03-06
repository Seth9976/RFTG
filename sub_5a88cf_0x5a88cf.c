// 函数名称: sub_5a88cf
// 虚拟地址: 0x5a88cf
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5a88cf(int32_t* arg1, char* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0xc
    int32_t __saved_ebp_2 = 0xc
    int32_t var_8 = 0x8aa090
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa090 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_1 = &data_5a88db
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    int32_t* edi = arg1
    int32_t eax
    eax.b = edi != 0
    int32_t* result
    
    if (eax != 0)
        int32_t eax_2
        eax_2.b = arg2 != 0
        
        if (eax_2 == 0)
            goto label_5a88f3
        
        int32_t eax_3
        eax_3.b = *arg2 != 0
        
        if (eax_3 == 0)
            goto label_5a88f3
        
        int32_t* eax_4 = sub_5b0aa1()
        arg1 = eax_4
        
        if (eax_4 != 0)
            int32_t var_8_1 = 0
            
            if (*edi != 0)
                int32_t* result_1 = sub_5b080a(edi, arg2, arg3, eax_4)
                int32_t var_8_2 = 0xfffffffe
                sub_5a8981(&__saved_ebp)
                result = result_1
            else
                *__errno() = 0x16
                __local_unwind4(&__security_cookie, &ExceptionList, 0xfffffffe)
                result = nullptr
        else
            *__errno() = 0x18
            result = nullptr
    else
    label_5a88f3:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = nullptr
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a8980
    return result
}
