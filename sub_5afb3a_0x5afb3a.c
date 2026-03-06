// 函数名称: sub_5afb3a
// 虚拟地址: 0x5afb3a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5afb3a()
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x18
    int32_t __saved_ebp_1 = 0x18
    int32_t var_8 = 0x8aa410
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_5 = 0x8aa410 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_3c
    void* const var_40_3 = &data_5afb46
    int32_t var_8_6 = 0xfffffffe
    int32_t var_c = var_8_5
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result_1 = 0xffffffff
    int32_t edi = 0
    int32_t var_28 = 0
    int32_t result
    
    if (sub_5aee1b(0xb) != 0)
        sub_5aeedd(0xb)
        int32_t var_8_1 = 0
        
        while (true)
            int32_t var_2c_1 = edi
            
            if (edi s>= 0x40)
                break
            
            int32_t* esi_1 = (&data_3166ee0)[edi]
            
            if (esi_1 == 0)
                int32_t* i = __calloc_crt(0x20, 0x40)
                int32_t* i_1 = i
                
                if (i != 0)
                    (&data_3166ee0)[edi] = i
                    data_3166edc += 0x20
                    
                    while (i u< (&data_3166ee0)[edi] + 0x800)
                        i[1].b = 0
                        *i = 0xffffffff
                        *(i + 5) = 0xa
                        i[2] = 0
                        i = &i[0x10]
                        int32_t* i_2 = i
                    
                    int32_t result_2 = edi << 5
                    result_1 = result_2
                    *((&data_3166ee0)[result_2 s>> 5] + ((result_2 & 0x1f) << 6) + 4) = 1
                    
                    if (sub_5afa74(result_2) == 0)
                        result_1 = 0xffffffff
                
                break
            
            while (true)
                int32_t* var_24_1 = esi_1
                
                if (esi_1 u>= (&data_3166ee0)[edi] + 0x800)
                    break
                
                if ((esi_1[1].b & 1) == 0)
                    if (esi_1[2] == 0)
                        sub_5aeedd(0xa)
                        int32_t var_8_2 = 1
                        
                        if (esi_1[2] == 0)
                            if (InitializeCriticalSectionAndSpinCount(&esi_1[3], 0xfa0) != 0)
                                esi_1[2] += 1
                            else
                                var_28 = 1
                        
                        int32_t var_8_3 = 0
                        sub_5afc0c()
                    
                    if (var_28 == 0)
                        EnterCriticalSection(&esi_1[3])
                        
                        if ((esi_1[1].b & 1) != 0)
                            LeaveCriticalSection(&esi_1[3])
                        else if (var_28 == 0)
                            esi_1[1].b = 1
                            *esi_1 = 0xffffffff
                            result_1 = ((esi_1 - (&data_3166ee0)[edi]) s>> 6) + (edi << 5)
                            break
                
                esi_1 = &esi_1[0x10]
            
            if (result_1 != 0xffffffff)
                break
            
            edi += 1
        
        int32_t var_8_4 = 0xfffffffe
        sub_5afcca()
        result = result_1
    else
        result = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5afcc9
    return result
}
