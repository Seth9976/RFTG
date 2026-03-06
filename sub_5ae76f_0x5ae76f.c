// 函数名称: sub_5ae76f
// 虚拟地址: 0x5ae76f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ae76f(uint32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0x14
    int32_t __saved_ebp_1 = 0x14
    int32_t var_8 = 0x8aa310
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa310 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_38
    void* const var_3c_8 = &data_5ae77b
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result = 0xffffffff
    uint32_t* eax = __getptd()
    sub_5ae466()
    void* ebx = eax[0x1a]
    uint32_t eax_1 = sub_5ae50a(arg1)
    
    if (eax_1 == *(ebx + 4))
        result = 0
    else
        int32_t* eax_2 = sub_5abd7c(0x220)
        
        if (eax_2 != 0)
            __builtin_memcpy(eax_2, eax[0x1a], 0x220)
            *eax_2 = 0
            int32_t result_1 = sub_5ae586(eax_1, eax_2)
            result = result_1
            
            if (result_1 == 0)
                if (InterlockedDecrement(eax[0x1a]) == 0)
                    int32_t eax_4 = eax[0x1a]
                    
                    if (eax_4 != 0x8b8530)
                        __free_base(eax_4)
                
                eax[0x1a] = eax_2
                InterlockedIncrement(eax_2)
                
                if ((eax[0x1c].b & 2) == 0 && (data_8b8a50.b & 1) == 0)
                    sub_5aeedd(0xd)
                    int32_t var_8_1 = 0
                    data_bec954 = eax_2[1]
                    data_bec958 = eax_2[2]
                    data_bec95c = eax_2[3]
                    int32_t eax_8 = 0
                    
                    while (true)
                        int32_t var_20_1 = eax_8
                        
                        if (eax_8 s>= 5)
                            break
                        
                        *((eax_8 << 1) + &data_bec948) = *(eax_2 + (eax_8 << 1) + 0x10)
                        eax_8 += 1
                    
                    void* eax_9 = nullptr
                    int16_t ecx_4
                    
                    while (true)
                        void* var_20_2 = eax_9
                        
                        if (eax_9 s>= 0x101)
                            break
                        
                        ecx_4.b = *(eax_9 + eax_2 + 0x1c)
                        *(eax_9 + 0x8b8750) = ecx_4.b
                        eax_9 += 1
                    
                    void* eax_10 = nullptr
                    
                    while (true)
                        void* var_20_3 = eax_10
                        
                        if (eax_10 s>= 0x100)
                            break
                        
                        ecx_4.b = *(eax_10 + eax_2 + 0x11d)
                        *(eax_10 + 0x8b8858) = ecx_4.b
                        eax_10 += 1
                    
                    if (InterlockedDecrement(data_8b8958) == 0)
                        void* eax_12 = data_8b8958
                        
                        if (eax_12 != 0x8b8530)
                            __free_base(eax_12)
                    
                    data_8b8958 = eax_2
                    InterlockedIncrement(eax_2)
                    int32_t var_8_2 = 0xfffffffe
                    sub_5ae8d0()
            else if (result_1 == 0xffffffff)
                if (eax_2 != 0x8b8530)
                    __free_base(eax_2)
                
                *__errno() = 0x16
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5ae908
    return result
}
