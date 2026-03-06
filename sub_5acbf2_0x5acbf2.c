// 函数名称: sub_5acbf2
// 虚拟地址: 0x5acbf2
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5acbf2(void* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x8aa240
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa240 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_2 = &data_5acbfe
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_5aeedd(0xe)
    int32_t var_8_1 = 0
    int32_t ecx = *(arg1 + 4)
    
    if (ecx != 0)
        void* eax = data_bec928
        void* edx_1 = &data_bec924
        
        while (true)
            void* var_20_1 = eax
            
            if (eax == 0)
                break
            
            if (*eax == ecx)
                *(edx_1 + 4) = *(eax + 4)
                __free_base(eax)
                break
            
            edx_1 = eax
        
        __free_base(*(arg1 + 4))
        *(arg1 + 4) = 0
    
    int32_t var_8_2 = 0xfffffffe
    int32_t result = sub_5acc59()
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5acc54
    return result
}
