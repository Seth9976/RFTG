// 函数名称: sub_5aa268
// 虚拟地址: 0x5aa268
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5aa268(void* arg1, char* arg2, int32_t arg3, char* arg4, int32_t arg5, char* arg6, int32_t arg7, char* arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edi
    int32_t var_14 = edi
    void* edi_1 = nullptr
    int32_t var_8_1 = 0
    
    if (arg1 == 0)
        var_8_1 = 1
    else if (arg2 == 0)
        if (arg3 == 0)
            goto label_5aa292
        
        var_8_1 = 1
    else if (arg3 == 0)
        var_8_1 = 1
    else
    label_5aa292:
        
        if (arg4 == 0)
            if (arg5 == 0)
                goto label_5aa2a3
            
            var_8_1 = 1
        else if (arg5 == 0)
            var_8_1 = 1
        else
        label_5aa2a3:
            
            if (arg6 == 0)
                if (arg7 == 0)
                    goto label_5aa2b4
                
                var_8_1 = 1
            else if (arg7 == 0)
                var_8_1 = 1
            else
            label_5aa2b4:
                
                if (arg8 == 0)
                    if (arg9 == 0)
                        goto label_5aa2be
                    
                    var_8_1 = 1
                else if (arg9 != 0)
                label_5aa2be:
                    char* esi_1 = arg1
                    int32_t eax_1 = 1
                    
                    while (*esi_1 != 0)
                        eax_1 -= 1
                        esi_1 = &esi_1[1]
                        
                        if (eax_1 u<= 0)
                            break
                    
                    if (*esi_1 != 0x3a)
                        if (arg2 != 0)
                            *arg2 = 0
                        
                        goto label_5aa312
                    
                    if (arg2 == 0)
                        goto label_5aa2f5
                    
                    if (arg3 u>= 3)
                        __mbccpy_s(arg2, 0xffffffff, arg1, 2)
                        edi_1 = nullptr
                    label_5aa2f5:
                        arg1 = &esi_1[1]
                    label_5aa312:
                        void* esi_3 = arg1
                        char* ebx_1 = nullptr
                        
                        if (*esi_3 == 0)
                        label_5aa37c:
                            
                            if (arg4 != 0)
                                *arg4 = 0
                            
                        label_5aa383:
                            
                            if (ebx_1 == 0 || ebx_1 u< arg1)
                                if (arg6 == 0)
                                    goto label_5aa3ee
                                
                                int32_t esi_5 = esi_3 - arg1
                                
                                if (arg7 u> esi_5)
                                    __mbccpy_s(arg6, 0xffffffff, arg1, esi_5)
                                label_5aa3ee:
                                    
                                    if (arg8 == 0)
                                        return 0
                                    
                                    *arg8 = 0
                                    return 0
                            else
                                if (arg6 == 0)
                                    goto label_5aa3ae
                                
                                int32_t eax_8 = ebx_1 - arg1
                                
                                if (arg7 u> eax_8)
                                    __mbccpy_s(arg6, 0xffffffff, arg1, eax_8)
                                label_5aa3ae:
                                    
                                    if (arg8 == 0)
                                        return 0
                                    
                                    void* esi_4 = esi_3 - ebx_1
                                    
                                    if (arg9 u> esi_4)
                                        __mbccpy_s(arg8, 0xffffffff, ebx_1, esi_4)
                                        return 0
                        else
                            do
                                if (__ismbblead(*esi_3) == 0)
                                    int32_t eax_3
                                    eax_3.b = *esi_3
                                    
                                    if (eax_3.b == 0x2f || eax_3.b == 0x5c)
                                        edi_1 = esi_3 + 1
                                    else if (eax_3.b == 0x2e)
                                        ebx_1 = esi_3
                                else
                                    esi_3 += 1
                                
                                esi_3 += 1
                            while (*esi_3 != 0)
                            
                            if (edi_1 == 0)
                                goto label_5aa37c
                            
                            if (arg4 == 0)
                                goto label_5aa370
                            
                            void* eax_5 = edi_1 - arg1
                            
                            if (arg5 u> eax_5)
                                __mbccpy_s(arg4, 0xffffffff, arg1, eax_5)
                            label_5aa370:
                                arg1 = edi_1
                                goto label_5aa383
                else
                    var_8_1 = 1
    
    if (arg2 != 0 && arg3 u> 0)
        *arg2 = 0
    
    if (arg4 != 0 && arg5 u> 0)
        *arg4 = 0
    
    if (arg6 != 0 && arg7 u> 0)
        *arg6 = 0
    
    if (arg8 != 0 && arg9 u> 0)
        *arg8 = 0
    
    void* eax_15 = __errno()
    
    if (arg1 != 0 && var_8_1 == 0)
        *eax_15 = 0x22
        return 0x22
    
    *eax_15 = 0x16
    __invalid_parameter_noinfo()
    return 0x16
}
