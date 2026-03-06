// 函数名称: sub_5b3cfb
// 虚拟地址: 0x5b3cfb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b3cfb(int32_t arg1, int32_t arg2, enum SET_FILE_POINTER_MOVE_METHOD arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x8aa4d8
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa4d8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_2 = &data_5b3d07
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
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
            sub_5afa74(arg1)
            int32_t var_8_1 = 0
            uint32_t result_1
            
            if ((*((&data_3166ee0)[arg1 s>> 5] + esi_3 + 4) & 1) == 0)
                *__errno() = 9
                *___doserrno() = 0
                result_1 = 0xffffffff
            else
                result_1 = sub_5b3c86(arg1, arg2, arg3)
            
            int32_t var_8_2 = 0xfffffffe
            sub_5b3dc7()
            result = result_1
    else
        *___doserrno() = 0
        *__errno() = 9
        result = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b3dc3
    return result
}
