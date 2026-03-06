// 函数名称: sub_5b5423
// 虚拟地址: 0x5b5423
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b5423(char* arg1, int32_t arg2, char* arg3, char* arg4, char* arg5, char* arg6)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    char* esi = arg1
    int32_t edi
    int32_t var_14 = edi
    int32_t result
    void* eax
    
    if (esi == 0 || arg2 u<= 0)
        eax = __errno()
        result = 0x16
    else
        int32_t edi_1 = 0
        
        if (arg3 == 0)
            goto label_5b5478
        
        char* eax_2
        eax_2.b = *arg3
        
        if (eax_2.b == 0)
            goto label_5b5478
        
        edi_1 = 2
        
        if (arg2 u> 2)
            *esi = eax_2.b
            esi[1] = 0x3a
            esi = &esi[2]
        label_5b5478:
            char* eax_3 = arg4
            
            if (arg4 == 0 || *arg4 == 0)
                goto label_5b54be
            
            while (true)
                if (edi_1 + 1 u>= arg2)
                    goto label_5b550e
                
                int32_t edx_1
                edx_1.b = *eax_3
                *esi = edx_1.b
                esi = &esi[1]
                eax_3 = &eax_3[1]
                
                if (*eax_3 == 0)
                    break
                
                edi_1 += 1
            
            char* eax_4
            eax_4.b = *boost::math::tools::evaluate_polynomial<9,long double,long double>(arg4, eax_3)
            
            if (eax_4.b == 0x2f || eax_4.b == 0x5c)
                edi_1 += 1
            label_5b54be:
                char* eax_5 = arg5
                char* ecx_2
                
                if (eax_5 != 0)
                    while (*eax_5 != 0)
                        edi_1 += 1
                        
                        if (edi_1 u>= arg2)
                            goto label_5b550e
                        
                        ecx_2.b = *eax_5
                        *esi = ecx_2.b
                        esi = &esi[1]
                        eax_5 = &eax_5[1]
                
                char* eax_6 = arg6
                
                if (eax_6 == 0)
                label_5b5506:
                    
                    if (edi_1 + 1 u<= arg2)
                        *esi = 0
                        return 0
                else
                    ecx_2.b = *eax_6
                    
                    if (ecx_2.b == 0)
                        goto label_5b5506
                    
                    if (ecx_2.b == 0x2e)
                        goto label_5b5503
                    
                    edi_1 += 1
                    
                    if (edi_1 u< arg2)
                        *esi = 0x2e
                        esi = &esi[1]
                    label_5b5503:
                        
                        while (*eax_6 != 0)
                            edi_1 += 1
                            
                            if (edi_1 u>= arg2)
                                goto label_5b550e
                            
                            ecx_2.b = *eax_6
                            *esi = ecx_2.b
                            esi = &esi[1]
                            eax_6 = &eax_6[1]
                        
                        goto label_5b5506
            else
                edi_1 += 2
                
                if (edi_1 u< arg2)
                    *esi = 0x5c
                    esi = &esi[1]
                    goto label_5b54be
        
    label_5b550e:
        *arg1 = 0
        eax = __errno()
        result = 0x22
    
    *eax = result
    __invalid_parameter_noinfo()
    return result
}
