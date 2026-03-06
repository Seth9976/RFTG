// 函数名称: sub_5b0aa1
// 虚拟地址: 0x5b0aa1
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5b0aa1()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x10
    int32_t __saved_ebp_1 = 0x10
    int32_t var_8 = 0x8aa478
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa478 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_34 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_34
    void* const var_38_5 = &data_5b0aad
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = nullptr
    int32_t var_20 = 0
    sub_5aeedd(1)
    int32_t var_8_1 = 0
    int32_t esi = 0
    
    while (true)
        int32_t var_24_1 = esi
        
        if (esi s>= data_3168000)
            break
        
        int32_t* eax_1 = data_3166fec + (esi << 2)
        
        if (*eax_1 == 0)
            int32_t eax_9 = sub_5abd7c(0x38)
            *(data_3166fec + (esi << 2)) = eax_9
            
            if (eax_9 != 0)
                bool cond:0_1 =
                    InitializeCriticalSectionAndSpinCount(*(data_3166fec + (esi << 2)) + 0x20, 0xfa0)
                    != 0
                int32_t eax_14 = data_3166fec
                
                if (cond:0_1)
                    EnterCriticalSection(*(eax_14 + (esi << 2)) + 0x20)
                    result = *(data_3166fec + (esi << 2))
                    int32_t* result_2 = result
                    result[3] = 0
                else
                    __free_base(*(eax_14 + (esi << 2)))
                    *(data_3166fec + (esi << 2)) = 0
            
            break
        
        int32_t eax_3 = *(*eax_1 + 0xc)
        
        if ((eax_3.b & 0x83) == 0 && (eax_3 & 0x8000) == 0)
            if (esi - 3 u<= 0x10 && sub_5aee1b(esi + 0x10) == 0)
                break
            
            sub_5a877d(esi, *(data_3166fec + (esi << 2)))
            int32_t* result_3 = *(data_3166fec + (esi << 2))
            
            if ((result_3[3].b & 0x83) == 0)
                result = result_3
                int32_t* result_1 = result
                break
            
            sub_5a87eb(esi, result_3)
        
        esi += 1
    
    if (result != 0)
        result[3] &= 0x8000
        result[1] = 0
        result[2] = 0
        *result = 0
        result[7] = 0
        result[4] = 0xffffffff
    
    int32_t var_8_2 = 0xfffffffe
    sub_5b0bcb()
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b0bc7
    return result
}
