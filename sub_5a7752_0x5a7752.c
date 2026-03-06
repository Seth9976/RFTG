// 函数名称: sub_5a7752
// 虚拟地址: 0x5a7752
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5a7752(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp_2 = 0x20
    int32_t __saved_ebp_2 = 0x20
    int32_t var_8 = 0x8aa010
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa010 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_44 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_44
    void* const var_48_6 = &data_5a775e
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_5aeedd(8)
    int32_t var_8_1 = 0
    
    if (data_bec5b8 != 1)
        data_bec5b4 = 1
        data_bec5b0 = arg3.b
        
        if (arg2 == 0)
            int32_t ebx_1 = DecodePointer(data_316800c)
            int32_t var_34_1 = ebx_1
            
            if (ebx_1 != 0)
                int32_t* edi_1 = DecodePointer(data_3168008)
                int32_t* var_30_1 = edi_1
                int32_t var_28_1 = ebx_1
                int32_t* var_2c_1 = edi_1
                
                while (true)
                    edi_1 -= 4
                    int32_t* var_30_2 = edi_1
                    
                    if (edi_1 u< ebx_1)
                        break
                    
                    int32_t eax_3 = sub_5accf7()
                    
                    if (*edi_1 != eax_3)
                        if (edi_1 u< ebx_1)
                            break
                        
                        int32_t eax_4 = DecodePointer(*edi_1)
                        *edi_1 = sub_5accf7()
                        eax_4()
                        int32_t eax_6 = DecodePointer(data_316800c)
                        int32_t* eax_7 = DecodePointer(data_3168008)
                        
                        if (var_28_1 != eax_6 || var_2c_1 != eax_7)
                            var_28_1 = eax_6
                            var_34_1 = eax_6
                            var_2c_1 = eax_7
                            edi_1 = eax_7
                            int32_t* var_30_3 = edi_1
                        
                        ebx_1 = var_34_1
            
            for (void* const i = &data_6b01ac; i u< 0x6b01b8; i += 4)
                int32_t eax_9 = *i
                
                if (eax_9 != 0)
                    eax_9()
        
        for (void* const i_1 = &data_6b01bc; i_1 u< 0x6b01c0; i_1 += 4)
            int32_t eax_11 = *i_1
            
            if (eax_11 != 0)
                eax_11()
    
    int32_t var_8_2 = 0xfffffffe
    int32_t result = $LN17(&__saved_ebp)
    
    if (arg3 != 0)
        fsbase->NtTib.ExceptionList = ExceptionList
        void* const __saved_ebp_1 = &data_5a7891
        return result
    
    data_bec5b8 = 1
    __unlock(8)
    __endthreadex(arg1)
    noreturn
}
