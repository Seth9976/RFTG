// 函数名称: sub_5a8abc
// 虚拟地址: 0x5a8abc
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5a8abc(char* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0x14
    int32_t __saved_ebp_2 = 0x14
    int32_t var_8 = 0x8aa0d0
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa0d0 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_38
    void* const var_3c_3 = &data_5a8ac8
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* result_2 = arg1
    char* result_3 = result_2
    char* result_1 = result_2
    char* result
    
    if (result_2 != 0 || arg2 == 0)
        int32_t eax_1
        eax_1.b = arg2 s>= 0
        
        if (eax_1 == 0)
            goto label_5a8ae0
        
        int32_t eax_2
        eax_2.b = arg3 != 0
        
        if (eax_2 == 0)
            goto label_5a8ae0
        
        if (arg2 == 0)
            result = nullptr
        else
            arg1 = arg3
            sub_5a873c(arg3)
            int32_t var_8_1 = 0
            
            if ((arg3[3].b & 0x40) == 0)
                int32_t eax_3 = __fileno(arg3)
                void* ecx_6
                
                if (eax_3 == 0xffffffff || eax_3 == 0xfffffffe)
                    ecx_6 = &data_8b8ea8
                else
                    ecx_6 = ((eax_3 & 0x1f) << 6) + (&data_3166ee0)[eax_3 s>> 5]
                
                void* eax_6
                
                if ((*(ecx_6 + 0x24) & 0x7f) == 0)
                    if (eax_3 == 0xffffffff || eax_3 == 0xfffffffe)
                        eax_6 = &data_8b8ea8
                    else
                        eax_6 = ((eax_3 & 0x1f) << 6) + (&data_3166ee0)[eax_3 s>> 5]
                
                if ((*(ecx_6 + 0x24) & 0x7f) != 0 || (*(eax_6 + 0x24) & 0x80) != 0)
                    *__errno() = 0x16
                    __invalid_parameter_noinfo()
                    result_1 = nullptr
            
            if (result_1 != 0)
                while (true)
                    int32_t temp0_1 = arg2
                    arg2 -= 1
                    
                    if (temp0_1 != 1)
                        int32_t temp1_1 = arg3[1]
                        arg3[1] -= 1
                        uint32_t eax_8
                        
                        if (temp1_1 - 1 s< 0)
                            eax_8 = sub_5b1ded(arg3)
                        else
                            char* ecx_9 = *arg3
                            eax_8 = zx.d(*ecx_9)
                            *arg3 = &ecx_9[1]
                        
                        uint32_t var_24_1 = eax_8
                        
                        if (eax_8 != 0xffffffff)
                            *result_3 = eax_8.b
                            result_3 = &result_3[1]
                            char* result_4 = result_3
                            
                            if (eax_8.b != 0xa)
                                continue
                        else if (result_3 == result_2)
                            result_1 = nullptr
                            break
                    
                    *result_3 = 0
                    break
            
            int32_t var_8_2 = 0xfffffffe
            sub_5a8bec(arg3)
            result = result_1
    else
    label_5a8ae0:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = nullptr
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a8be8
    return result
}
