// 函数名称: sub_4082e0
// 虚拟地址: 0x4082e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4082e0(struct _EXCEPTION_REGISTRATION_RECORD** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f9e8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_18
    sub_407f90(&var_18)
    int32_t var_8_1 = 0
    void* ebx = data_30785c8
    *(ebx + 0x1c) += 1
    int32_t* edi = data_307b6a8
    
    if (*(ebx + 0x10) == 0)
        sub_504460(ebx + 0x10)
    
    int32_t* esi_2 = *(ebx + 0x10)
    *(ebx + 0x10) = *esi_2
    __builtin_memset(esi_2, 0, 0x14)
    
    if (esi_2 != 0)
        *esi_2 = &data_83f3d3
        esi_2[1] = 0
        esi_2[2] = 0
        esi_2[3] = 0
    
    uint32_t edx_1 = sub_504160(edi, arg1, nullptr, esi_2, arg1)
    char* const eax_5 = var_18
    char var_11 = 1
    
    if (eax_5 == 0)
        eax_5 = &data_83f3d3
    
    data_307b6a8
    int32_t* var_30_1 = esi_2
    char ebx_1
    
    if (sub_504620(eax_5, edx_1) != 0)
        ebx_1 = var_11
    else
        char* const eax_7 = var_18
        
        if (eax_7 == 0)
            eax_7 = &data_83f3d3
        
        char* const var_30_2 = eax_7
        sub_4c5680("Failed to write file: '%s'")
        ebx_1 = 0
    
    sub_500770(esi_2)
    
    if (ebx_1 == 0)
        int32_t var_8_2 = 0xffffffff
        char* eax_8 = var_18
        
        if (eax_8 != 0 && *eax_8 != ebx_1)
            eax_8 = sub_4c4060(&var_18)
            int32_t temp1_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp1_1 == 1)
                int32_t esi_4 = *(eax_8 + 0xc) + 0x10
                sub_4f4430(eax_8, sub_4f4380(esi_4), esi_4)
        
        eax_8.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_8
    
    char eax_13 = sub_408210(arg1, arg2)
    int32_t var_8_3 = 0xffffffff
    void* eax_14 = var_18
    
    if (eax_14 != 0 && *eax_14 != 0)
        eax_14 = sub_4c4060(&var_18)
        int32_t temp0_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_6 = *(eax_14 + 0xc) + 0x10
            sub_4f4430(eax_14, sub_4f4380(esi_6), esi_6)
    
    eax_14.b = eax_13
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_14
}
