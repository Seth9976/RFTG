// 函数名称: sub_5b5eb4
// 虚拟地址: 0x5b5eb4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b5eb4(int32_t arg1, int32_t arg2, int32_t arg3, enum SET_FILE_POINTER_MOVE_METHOD arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x14
    int32_t __saved_ebp_1 = 0x14
    int32_t var_8 = 0x8aa538
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa538 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_38
    void* const var_3c_2 = &data_5b5ec0
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_28 = 0xffffffff
    int32_t var_24 = 0xffffffff
    uint32_t result
    
    if (arg1 != 0xfffffffe)
        int32_t esi_3
        
        if (arg1 s>= 0 && arg1 u< data_3166edc)
            esi_3 = (arg1 & 0x1f) << 6
        
        if (arg1 s< 0 || arg1 u>= data_3166edc
                || (sx.d(*((&data_3166ee0)[arg1 s>> 5] + esi_3 + 4)) & 1) == 0)
            *___doserrno() = 0
            *__errno() = 9
            __invalid_parameter_noinfo()
            result = 0xffffffff
        else
            int32_t edx_1 = sub_5afa74(arg1)
            int32_t var_8_1 = 0
            int32_t eax_5 = (&data_3166ee0)[arg1 s>> 5]
            uint32_t result_1
            int32_t var_24_1
            
            if ((*(eax_5 + esi_3 + 4) & 1) == 0)
                *__errno() = 9
                *___doserrno() = 0
                result_1 = 0xffffffff
                var_24_1 = 0xffffffff
            else
                uint32_t result_2
                int32_t edx_2
                result_2, edx_2 = sub_5b5e2f(eax_5, edx_1, arg1, arg1, arg2, arg3, arg4)
                result_1 = result_2
                var_24_1 = edx_2
            int32_t var_8_2 = 0xfffffffe
            sub_5b5f94(&__saved_ebp)
            result = result_1
    else
        *___doserrno() = 0
        *__errno() = 9
        result = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b5f93
    return result
}
