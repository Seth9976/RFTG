// 函数名称: sub_5acefe
// 虚拟地址: 0x5acefe
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __stdcallsub_5acefe(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 8
    int32_t __saved_ebp_1 = 8
    int32_t var_8 = 0x8aa2c8
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_5 = 0x8aa2c8 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_2c
    void* const var_30_13 = &data_5acf0a
    int32_t var_8_6 = 0xfffffffe
    int32_t var_c = var_8_5
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (arg1 != 0)
        int32_t eax = *(arg1 + 0x24)
        
        if (eax != 0)
            __free_base(eax)
        
        int32_t eax_1 = *(arg1 + 0x2c)
        
        if (eax_1 != 0)
            __free_base(eax_1)
        
        int32_t eax_2 = *(arg1 + 0x34)
        
        if (eax_2 != 0)
            __free_base(eax_2)
        
        int32_t eax_3 = *(arg1 + 0x3c)
        
        if (eax_3 != 0)
            __free_base(eax_3)
        
        int32_t eax_4 = *(arg1 + 0x40)
        
        if (eax_4 != 0)
            __free_base(eax_4)
        
        int32_t eax_5 = *(arg1 + 0x44)
        
        if (eax_5 != 0)
            __free_base(eax_5)
        
        int32_t eax_6 = *(arg1 + 0x48)
        
        if (eax_6 != 0)
            __free_base(eax_6)
        
        int32_t eax_7 = *(arg1 + 0x5c)
        
        if (eax_7 != 0x6b1de8)
            __free_base(eax_7)
        
        sub_5aeedd(0xd)
        int32_t var_8_1 = 0
        int32_t edi_1 = *(arg1 + 0x68)
        
        if (edi_1 != 0 && InterlockedDecrement(edi_1) == 0 && edi_1 != 0x8b8530)
            __free_base(edi_1)
        
        int32_t var_8_2 = 0xfffffffe
        sub_5ad018()
        sub_5aeedd(0xc)
        int32_t var_8_3 = 1
        int32_t* edi_2 = *(arg1 + 0x6c)
        
        if (edi_2 != 0)
            sub_5ae9b6(edi_2)
            
            if (edi_2 != data_8b8c98 && edi_2 != 0x8b8bc0 && *edi_2 == 0)
                sub_5aea4f(edi_2)
        
        int32_t var_8_4 = 0xfffffffe
        sub_5ad024()
        result = __free_base(arg1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5ad012
    return result
}
