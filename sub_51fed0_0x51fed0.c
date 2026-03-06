// 函数名称: sub_51fed0
// 虚拟地址: 0x51fed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char**sub_51fed0(char** arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68d4a1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_14_1 = 0
    int32_t var_8_1 = 1
    char* arg_8
    char* eax_3 = arg_8
    
    if (eax_3 == 0 || *eax_3 == 0)
        goto label_51ff23
    
    int32_t eax_6 = *(sub_4c4060(&arg_8) + 8)
    char** ebx
    bool cond:0_1
    
    if (eax_6 s> 1)
        int32_t ecx_1 = eax_6 - 1
        eax_3 = arg_8
        char* const edx_1 = &data_83f3d3
        
        if (eax_3 != 0)
            edx_1 = eax_3
        
        char* const edx_2
        
        if (edx_1[ecx_1] != 0x2f)
            edx_2 = &data_83f3d3
            
            if (eax_3 != 0)
                edx_2 = eax_3
        
        if (edx_1[ecx_1] == 0x2f || edx_2[ecx_1] == 0x5c)
            ecx_1 -= 1
        
        int32_t edx_3 = ecx_1
        
        if (ecx_1 s>= 0)
            while (true)
                char* const ecx_2 = &data_83f3d3
                
                if (eax_3 != 0)
                    ecx_2 = eax_3
                
                if (ecx_2[edx_3] != 0x2f)
                    char* ecx_3 = &data_83f3d3
                    
                    if (eax_3 != 0)
                        ecx_3 = eax_3
                    
                    if (ecx_3[edx_3] != 0x5c)
                        int32_t temp2_1 = edx_3
                        edx_3 -= 1
                        
                        if (temp2_1 - 1 s< 0)
                            break
                        
                        continue
                
                if (eax_3 == 0)
                    eax_3 = &data_83f3d3
                
                char** esi_3 = arg1
                *esi_3 = &data_83f3d3
                sub_4c4690(esi_3, eax_3)
                var_8_1.b = 0
                char* eax_16 = arg_8
                int32_t var_14_3 = 1
                
                if (eax_16 != 0 && *eax_16 != 0)
                    void* eax_18 = sub_4c4060(&arg_8)
                    int32_t temp3_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        int32_t esi_5 = *(eax_18 + 0xc) + 0x10
                        sub_4f4430(eax_18, sub_4f4380(esi_5), esi_5)
                        esi_3 = arg1
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return esi_3
        
        ebx = arg1
        *ebx = eax_3
        cond:0_1 = eax_3 == 0
        
        if (eax_3 != 0)
            if (*eax_3 != 0)
                void* eax_10 = sub_4c4060(ebx)
                *(eax_10 + 4) += 1
                eax_3 = arg_8
            
            cond:0_1 = eax_3 == 0
    else
        eax_3 = arg_8
    label_51ff23:
        ebx = arg1
        *ebx = eax_3
        
        if (eax_3 != 0 && *eax_3 != 0)
            void* eax_8 = sub_4c4060(ebx)
            *(eax_8 + 4) += 1
            eax_3 = arg_8
        
        cond:0_1 = eax_3 == 0
    
    var_8_1.b = 0
    int32_t var_14_2 = 1
    
    if (not(cond:0_1) && *eax_3 != 0)
        void* eax_12 = sub_4c4060(&arg_8)
        int32_t temp0_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp0_1 == 1)
            int32_t esi_2 = *(eax_12 + 0xc) + 0x10
            sub_4f4430(eax_12, sub_4f4380(esi_2), esi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return ebx
}
