// 函数名称: sub_4bc770
// 虚拟地址: 0x4bc770
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4bc770(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68fc18
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* var_14
    sub_4bc740(&var_14)
    char* edx = var_14
    char* const eax_4 = &data_83f3d3
    
    if (edx != 0)
        eax_4 = edx
    
    char i
    
    do
        i = *eax_4
        eax_4 = &eax_4[1]
    while (i != 0)
    char* const ecx = *(arg3 + 4)
    
    if (ecx == 0)
        ecx = &data_83f3d3
    
    if (edx == 0)
        edx = &data_83f3d3
    
    if (sub_5a7934(edx, ecx, eax_4 - &eax_4[1]) == 0)
        char* edx_1 = *(arg3 + 4)
        char* const eax_7 = &data_83f3d3
        
        if (edx_1 != 0)
            eax_7 = edx_1
        
        char i_1
        
        do
            i_1 = *eax_7
            eax_7 = &eax_7[1]
        while (i_1 != 0)
        
        if (edx_1 == 0)
            edx_1 = &data_83f3d3
        
        if (sub_5a7934(eax_7 - &eax_7[1] + edx_1 - 4, ".xml", 4) == 0)
            int32_t var_8_1 = 0xffffffff
            char* eax_11 = var_14
            
            if (eax_11 != 0 && *eax_11 != 0)
                eax_11 = sub_4c4060(&var_14)
                int32_t temp1_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_4 = *(eax_11 + 0xc) + 0x10
                    sub_4f4430(eax_11, sub_4f4380(esi_4), esi_4)
            
            eax_11.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_11
    
    int32_t var_8_2 = 0xffffffff
    void* eax_15 = var_14
    
    if (eax_15 != 0 && *eax_15 != 0)
        eax_15 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_6 = *(eax_15 + 0xc) + 0x10
            sub_4f4430(eax_15, sub_4f4380(esi_6), esi_6)
    
    eax_15.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_15
}
