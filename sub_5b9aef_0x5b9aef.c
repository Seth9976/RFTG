// 函数名称: sub_5b9aef
// 虚拟地址: 0x5b9aef
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b9aef(int32_t arg1, char arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x14
    int32_t __saved_ebp_1 = 0x14
    int32_t var_8 = 0x8aa738
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa738 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_38
    void* const var_3c_2 = &data_5b9afb
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_20 = 0
    int32_t eax
    eax.b = arg5 != 0
    int32_t result
    
    if (eax != 0)
        *arg5 = 0xffffffff
        int32_t eax_2
        eax_2.b = arg1 != 0
        
        if (eax_2 == 0)
            goto label_5b9b13
        
        int32_t eax_4
        int32_t eax_5
        
        if (arg6 != 0)
            eax_4 = arg4 & 0xfffffe7f
            eax_5 = neg.d(eax_4)
        
        if (arg6 != 0 && sbb.d(eax_5, eax_5, eax_4 != 0) == 0xffffffff)
            goto label_5b9b13
        
        int32_t var_8_1 = 0
        int32_t var_3c_1 = arg4
        int32_t var_40_1 = arg3
        PSTR ecx
        int32_t* edx
        int32_t result_1 = sub_5b93bb(arg5, edx, ecx, &var_20, arg1, arg2)
        int32_t var_8_2 = 0xfffffffe
        sub_5b9b85(&__saved_ebp, arg5, 0)
        result = result_1
        
        if (result != 0)
            *arg5 = 0xffffffff
    else
    label_5b9b13:
        int32_t var_3c = 0x16
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0x16
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b9b7f
    return result
}
