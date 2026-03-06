// 函数名称: sub_5b697c
// 虚拟地址: 0x5b697c
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b697c(void* arg1, int32_t* arg2, int32_t* arg3, char* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp_1 = 0xc
    int32_t __saved_ebp_1 = 0xc
    int32_t var_8 = 0x8aa660
    int32_t (* var_10)(int32_t* arg1, void* arg2, int32_t arg3) = sub_5ac950
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    uint32_t __security_cookie_1 = __security_cookie
    int32_t var_8_3 = 0x8aa660 ^ __security_cookie_1
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie_1 ^ &__saved_ebp
    int32_t* var_1c = &var_30
    void* const var_34_5 = &data_5b6988
    int32_t var_8_4 = 0xfffffffe
    int32_t var_c = var_8_3
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t result_1 = 0
    void* ecx = arg3[1]
    int32_t ecx_1
    
    if (ecx != 0 && *(ecx + 8) != 0)
        ecx_1 = arg3[2]
    
    int32_t result
    
    if (ecx != 0 && *(ecx + 8) != 0 && (ecx_1 != 0 || (*arg3 & 0x80000000) != 0))
        int32_t eax_1 = *arg3
        int32_t* esi_1 = arg2
        
        if (eax_1 s>= 0)
            esi_1 = ecx_1 + esi_1 + 0xc
        
        int32_t var_8_1 = 0
        int32_t eax_4
        
        if ((eax_1.b & 8) == 0)
            int32_t var_38_4 = *(arg1 + 0x18)
            
            if ((*arg4 & 1) != 0)
                if (sub_5bb0f1(var_38_4) == 0)
                    _inconsistency()
                    noreturn
                
                if (sub_5bb0f1(esi_1) == 0)
                    _inconsistency()
                    noreturn
                
                sub_5a6c10(esi_1, *(arg1 + 0x18), *(arg4 + 0x14))
                
                if (*(arg4 + 0x14) == 4)
                    eax_4 = *esi_1
                    
                    if (eax_4 != 0)
                        *esi_1 = sub_5b66f8(eax_4, &arg4[8])
            else if (*(arg4 + 0x18) != 0)
                if (sub_5bb0f1(var_38_4) == 0)
                    _inconsistency()
                    noreturn
                
                if (sub_5bb0f1(esi_1) == 0)
                    _inconsistency()
                    noreturn
                
                if (sub_5bb0f1(*(arg4 + 0x18)) == 0)
                    _inconsistency()
                    noreturn
                
                int32_t var_34_4 = 0
                int32_t eax_17
                eax_17.b = (*arg4 & 4) != 0
                result_1 = eax_17 + 1
            else
                if (sub_5bb0f1(var_38_4) == 0)
                    _inconsistency()
                    noreturn
                
                if (sub_5bb0f1(esi_1) == 0)
                    _inconsistency()
                    noreturn
                
                sub_5a6c10(esi_1, sub_5b66f8(*(arg1 + 0x18), &arg4[8]), *(arg4 + 0x14))
        else
            if (sub_5bb0f1(*(arg1 + 0x18)) == 0)
                _inconsistency()
                noreturn
            
            if (sub_5bb0f1(esi_1) == 0)
                _inconsistency()
                noreturn
            
            eax_4 = *(arg1 + 0x18)
            *esi_1 = eax_4
            *esi_1 = sub_5b66f8(eax_4, &arg4[8])
        int32_t var_8_2 = 0xfffffffe
        result = result_1
    else
        result = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    void* const __saved_ebp_2 = &data_5b6afa
    return result
}
