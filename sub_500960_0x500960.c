// 函数名称: sub_500960
// 虚拟地址: 0x500960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char* __convention("regparm")sub_500960(int32_t arg1, int32_t arg2, char* arg3, char** arg4, void* arg5)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68f268
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = arg5
    char* var_30 = arg3
    char* ecx = *(edi + 4)
    int32_t* var_1c = &var_30
    var_30 = ecx
    
    if (ecx != 0 && *ecx != 0)
        void* eax_4 = sub_4c4060(&var_30)
        *(eax_4 + 4) += 1
    
    char* var_14
    sub_4e64f0(&var_14)
    int32_t var_8_1 = 0
    char* const esi = var_14
    
    if (esi == 0)
        esi = &data_83f3d3
    
    if (sub_509d20(esi) == 0)
        char* const eax_6 = var_14
        
        if (eax_6 == 0)
            eax_6 = &data_83f3d3
        
        var_30 = eax_6
        char* var_18
        sub_51b510(&var_18, var_30)
        var_8_1.b = 1
        
        if (*(*(edi + 0xc) + 0x20) != 0)
            char* eax_7 = var_18
            
            if (eax_7 == 0)
                eax_7 = &data_83f3d3
            
            if (sub_508bc0(eax_7) != *(*(edi + 0xc) + 0x20))
                char* esi_1 = var_14
                
                if (esi_1 == 0)
                    esi_1 = &data_83f3d3
                
                if (sub_509cb0(esi_1) == 0)
                    var_8_1.b = 0
                    sub_4c43d0(&var_18)
                    int32_t var_8_2 = 0xffffffff
                    sub_4c43d0(&var_14)
                    int32_t* eax_18
                    eax_18.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_18
                
                char* edx_1 = var_14
                
                if (edx_1 == 0)
                    edx_1 = &data_83f3d3
                
                void* eax_10 = *(edi + 0xc)
                var_30 = &var_1c
                var_30 = sub_509d90(eax_10, edx_1, *(eax_10 + 0x20), var_30)
                var_8_1.b = 2
                sub_4c4510(var_30)
                var_8_1.b = 1
                sub_4c43d0(&var_1c)
            else
                var_30 = &var_18
                sub_4c4510(var_30)
        else
            var_30 = &var_18
            sub_4c4510(var_30)
        
        var_8_1.b = 0
        char* eax_12 = var_18
        
        if (eax_12 != 0 && *eax_12 != 0)
            void* eax_14 = sub_4c4060(&var_18)
            int32_t temp1_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp1_1 == 1)
                char* esi_3 = *(eax_14 + 0xc) + 0x10
                int32_t* eax_15 = sub_4f4380(esi_3)
                var_30 = esi_3
                sub_4f4430(eax_14, eax_15, var_30)
                edi = arg5
    
    char* ecx_9 = var_14
    char* const esi_4 = &data_83f3d3
    
    if (ecx_9 != 0)
        esi_4 = ecx_9
    
    char* eax_17 = *(*(edi + 0xc) + 0x20)
    
    if (eax_17 != 0)
        eax_17 = sub_509140(eax_17, esi_4)
        ecx_9 = var_14
    else if (*esi_4 != eax_17.b)
        if (eax_17 == 0)
            eax_17 = sub_508bc0(esi_4)
        
        eax_17 = sub_509140(eax_17, esi_4)
        ecx_9 = var_14
    
    *arg4 = eax_17
    int32_t var_8_3 = 0xffffffff
    
    if (ecx_9 != 0 && *ecx_9 != 0)
        eax_17 = sub_4c4060(&var_14)
        int32_t temp0_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp0_1 == 1)
            char* esi_6 = *(eax_17 + 0xc) + 0x10
            int32_t* eax_21 = sub_4f4380(esi_6)
            var_30 = esi_6
            sub_4f4430(eax_17, eax_21, var_30)
    
    eax_17.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_17
}
