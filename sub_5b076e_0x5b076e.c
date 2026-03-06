// 函数名称: sub_5b076e
// 虚拟地址: 0x5b076e
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b076e()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x8aa458
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa458 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_4 = &data_5b077a
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = 0
    sub_5aeedd(1)
    int32_t var_8_1 = 0
    int32_t var_38 = 3
    int32_t edi = 3
    
    while (true)
        int32_t var_24_1 = edi
        
        if (edi s>= data_3168000)
            break
        
        int32_t eax = data_3166fec
        
        if (*(eax + (edi << 2)) != 0)
            int32_t* eax_1 = *(eax + (edi << 2))
            
            if ((eax_1[3].b & 0x83) != 0 && sub_5a8c61(eax_1) != 0xffffffff)
                result += 1
            
            if (edi s>= 0x14)
                DeleteCriticalSection(*(data_3166fec + (edi << 2)) + 0x20)
                __free_base(*(data_3166fec + (edi << 2)))
                *(data_3166fec + (edi << 2)) = 0
        
        edi += 1
    
    int32_t var_8_2 = 0xfffffffe
    sub_5b0801()
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b0800
    return result
}
