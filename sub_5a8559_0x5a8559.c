// 函数名称: sub_5a8559
// 虚拟地址: 0x5a8559
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5a8559(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0xc
    int32_t __saved_ebp_2 = 0xc
    int32_t var_8 = 0x8aa070
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa070 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_3 = &data_5a8565
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t result_1 = 0
    int32_t* edi = arg1
    int32_t eax
    eax.b = edi != 0
    int32_t eax_2
    
    if (eax != 0)
        eax_2.b = arg2 != 0
    
    uint32_t result
    
    if (eax == 0 || eax_2 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0xffffffff
    else
        arg1 = edi
        sub_5a873c(edi)
        int32_t var_8_1 = 0
        
        if ((edi[3].b & 0x40) == 0)
            int32_t eax_3 = __fileno(edi)
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
                result_1 = 0xffffffff
        
        if (result_1 == 0)
            int32_t eax_8 = sub_5af828(edi)
            void arg_c
            result_1 = sub_5ad547(edi, arg2, nullptr, &arg_c)
            sub_5af8c4(eax_8, edi)
        
        int32_t var_8_2 = 0xfffffffe
        sub_5a865b(&__saved_ebp)
        result = result_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a865a
    return result
}
