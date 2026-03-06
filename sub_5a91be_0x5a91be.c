// 函数名称: sub_5a91be
// 虚拟地址: 0x5a91be
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a91be(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0x14
    int32_t __saved_ebp_2 = 0x14
    int32_t var_8 = 0x8aa150
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_5 = 0x8aa150 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_38
    void* const var_3c_3 = &data_5a91ca
    int32_t var_8_6 = 0xfffffffe
    int32_t var_c = var_8_5
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result_2 = 0
    int32_t result_1 = 0
    sub_5aeedd(1)
    int32_t var_8_1 = 0
    int32_t esi = 0
    
    while (true)
        int32_t var_24_1 = esi
        
        if (esi s>= data_3168000)
            break
        
        int32_t* eax_1 = data_3166fec + (esi << 2)
        
        if (*eax_1 != 0)
            int32_t eax_2 = *eax_1
            
            if ((*(eax_2 + 0xc) & 0x83) != 0)
                sub_5a877d(esi, eax_2)
                int32_t var_8_2 = 1
                int32_t* eax_4 = *(data_3166fec + (esi << 2))
                char ecx_1 = (eax_4[3]).b
                
                if ((ecx_1 & 0x83) != 0)
                    if (arg1 == 1)
                        if (sub_5a9176(eax_4) != 0xffffffff)
                            result_2 += 1
                    else if (arg1 == 0 && (ecx_1 & 2) != 0)
                        int32_t eax_6 = sub_5a9176(eax_4)
                        
                        if (eax_6 == 0xffffffff)
                            result_1 |= eax_6
                
                int32_t var_8_3 = 0
                sub_5a9260(esi)
        
        esi += 1
    
    int32_t var_8_4 = 0xfffffffe
    sub_5a928f()
    int32_t result = result_2
    
    if (arg1 != 1)
        result = result_1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_1 = &data_5a928e
    return result
}
