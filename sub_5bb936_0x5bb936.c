// 函数名称: sub_5bb936
// 虚拟地址: 0x5bb936
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bb936(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t result_1 = 0
    int32_t result_1 = 0
    
    if (arg1 == 0)
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        return 0xffffffff
    
    char* esi_1 = *arg1
    int32_t edi
    int32_t var_24_1 = edi
    int32_t result
    
    if (esi_1 == 0)
        *__errno() = 0x16
        result = 0xffffffff
    else
        void* eax_2 = boost::math::tools::evaluate_polynomial<12,long double,long double>(esi_1, 0x3d)
        PSTR ecx_1 = 0x3d
        
        if (eax_2 == 0 || esi_1 == eax_2)
            *__errno() = 0x16
            result = 0xffffffff
        else
            int32_t eax_3
            eax_3.b = *(eax_2 + 1) == 0
            int32_t* eax_4 = data_bec598
            
            if (eax_4 == data_bec59c)
                eax_4, ecx_1 = sub_5bb8d6(eax_4)
                data_bec598 = eax_4
            
            if (eax_4 != 0)
                goto label_5bba08
            
            if (arg2 != 0 && data_bec5a0 != 0)
                if (sub_5baf55(ecx_1) == 0)
                    goto label_5bba08
                
                *__errno() = 0x16
                result = 0xffffffff
            else if (eax_3 != 0)
                result = 0
            else
                int32_t* eax_7 = sub_5abd7c(4)
                data_bec598 = eax_7
                
                if (eax_7 == 0)
                    result = 0xffffffff
                else
                    *eax_7 = 0
                    
                    if (data_bec5a0 != 0)
                        goto label_5bba08
                    
                    int32_t* eax_8 = sub_5abd7c(4)
                    data_bec5a0 = eax_8
                    
                    if (eax_8 == 0)
                        result = 0xffffffff
                    else
                        *eax_8 = 0
                    label_5bba08:
                        int32_t* esi_2 = data_bec598
                        
                        if (esi_2 == 0)
                            result = 0xffffffff
                        else
                            int32_t edi_4 = sub_5bb884(eax_2 - esi_1, esi_1)
                            int32_t eax_14
                            
                            if (edi_4 s>= 0 && *esi_2 != 0)
                                void* esi_3 = &esi_2[edi_4]
                                __free_base(*esi_3)
                                
                                if (eax_3 != 0)
                                    while (*esi_3 != 0)
                                        *esi_3 = *(esi_3 + 4)
                                        edi_4 += 1
                                        esi_3 = &esi_2[edi_4]
                                    
                                    if (edi_4 u>= 0x3fffffff)
                                        goto label_5bbacf
                                    
                                    eax_14 = __recalloc_crt(data_bec598, edi_4, 4)
                                    
                                    if (eax_14 == 0)
                                        goto label_5bbacf
                                    
                                    goto label_5bbac7
                                
                                *esi_3 = esi_1
                                *arg1 = 0
                            label_5bbacf:
                                
                                if (arg2 != 0)
                                    PSTR lpName = __calloc_crt(_strlen(esi_1) + 2, 1)
                                    
                                    if (lpName != 0)
                                        if (sub_5b04a4(lpName, _strlen(esi_1) + 2, esi_1) != 0)
                                            int32_t var_38
                                            __builtin_memset(&var_38, 0, 0x14)
                                            sub_5ad34e()
                                            noreturn
                                        
                                        void* eax_23 = lpName - esi_1 + eax_2
                                        *eax_23 = 0
                                        int32_t ecx_12 = neg.d(eax_3)
                                        
                                        if (SetEnvironmentVariableA(lpName, 
                                                not.d(sbb.d(ecx_12, ecx_12, eax_3 != 0)) & (eax_23 + 1)) == 0)
                                            result_1 = 0xffffffff
                                            *__errno() = 0x2a
                                        
                                        __free_base(lpName)
                                
                                if (eax_3 != 0)
                                    __free_base(esi_1)
                                    *arg1 = 0
                                
                                result = result_1
                            else if (eax_3 != 0)
                                __free_base(esi_1)
                                *arg1 = 0
                                result = 0
                            else
                                if (edi_4 s< 0)
                                    edi_4 = neg.d(edi_4)
                                
                                if (edi_4 + 2 s< edi_4 || edi_4 + 2 u>= 0x3fffffff)
                                    result = 0xffffffff
                                else
                                    eax_14 = __recalloc_crt(data_bec598, 4, edi_4 + 2)
                                    
                                    if (eax_14 != 0)
                                        char** ecx_6 = eax_14 + (edi_4 << 2)
                                        *ecx_6 = esi_1
                                        ecx_6[1] = 0
                                        *arg1 = 0
                                    label_5bbac7:
                                        data_bec598 = eax_14
                                        goto label_5bbacf
                                    
                                    result = 0xffffffff
    
    return result
}
