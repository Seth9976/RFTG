// 函数名称: sub_5b9eeb
// 虚拟地址: 0x5b9eeb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b9eeb(char* arg1, int32_t arg2, char* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: if (arg4 == 0)
    if (arg4 == 0)
        if (arg1 != 0)
            goto label_5b9f13
        
        if (arg2 == 0)
            return 0
    else if (arg1 != 0)
    label_5b9f13:
        int32_t i_3 = arg2
        
        if (i_3 u> 0)
            if (arg4 == 0)
                *arg1 = 0
                return 0
            
            int32_t edi
            int32_t var_20_1 = edi
            char* edi_1 = arg3
            int32_t result
            
            if (edi_1 != 0)
                void var_14
                sub_5a73dd(&var_14, arg5)
                void* var_10
                void* var_c
                char var_8
                
                if (*(var_10 + 8) != 0)
                    char* eax_3 = arg1
                    int32_t i_2 = i_3
                    char ecx_2
                    
                    if (arg4 != 0xffffffff)
                        int32_t i
                        
                        do
                            ecx_2 = *edi_1
                            *eax_3 = ecx_2
                            eax_3 = &eax_3[1]
                            edi_1 = &edi_1[1]
                            
                            if (ecx_2 == 0)
                                break
                            
                            int32_t i_4 = i_2
                            i_2 -= 1
                            
                            if (i_4 == 1)
                                break
                            
                            i = arg4
                            arg4 -= 1
                        while (i != 1)
                        
                        if (arg4 == 0)
                            *eax_3 = 0
                            eax_3 = &eax_3[1]
                    else
                        int32_t i_1
                        
                        do
                            ecx_2 = *edi_1
                            *eax_3 = ecx_2
                            eax_3 = &eax_3[1]
                            edi_1 = &edi_1[1]
                            
                            if (ecx_2 == 0)
                                break
                            
                            i_1 = i_2
                            i_2 -= 1
                        while (i_1 != 1)
                    void* edi_2
                    
                    if (i_2 != 0)
                        if (eax_3 - arg1 s>= 2)
                            edi_2 = &eax_3[0xfffffffe]
                            void* ebx_3 = edi_2
                            
                            if (edi_2 u>= arg1)
                                do
                                    if (__ismbblead_l(*ebx_3, &var_14) == 0)
                                        break
                                    
                                    ebx_3 -= 1
                                while (ebx_3 u>= arg1)
                            
                            if (((edi_2.b - ebx_3.b) & 1) == 0)
                                goto label_5ba0c3
                            
                        label_5ba0a1:
                            *edi_2 = 0
                            result = 0x2a
                            *__errno() = 0x2a
                            goto label_5ba0b0
                        
                    label_5ba0c3:
                        
                        if (var_8 != 0)
                            *(var_c + 0x70) &= 0xfffffffd
                        
                        result = 0
                    else
                        if (*edi_1 == i_2.b || arg4 == 1)
                            edi_2 = &eax_3[0xffffffff]
                            void* ebx_1 = edi_2
                            
                            if (edi_2 u>= arg1)
                                do
                                    if (__ismbblead_l(*ebx_1, &var_14) == 0)
                                        break
                                    
                                    ebx_1 -= 1
                                while (ebx_1 u>= arg1)
                            
                            if (((edi_2.b - ebx_1.b) & 1) != 0)
                                goto label_5ba0a1
                            
                            i_3 = arg2
                        
                        if (arg4 != 0xffffffff)
                            *arg1 = 0
                            *__errno() = 0x22
                            __invalid_parameter_noinfo()
                            
                            if (var_8 != 0)
                                *(var_c + 0x70) &= 0xfffffffd
                            
                            result = 0x22
                        else
                            if (i_3 u<= 1)
                                arg1[i_3 - 1] = 0
                            else
                                void* ebx_2 = &arg1[i_3 - 2]
                                
                                if (&arg1[i_3 - 2] u>= arg1)
                                    do
                                        if (__ismbblead_l(*ebx_2, &var_14) == 0)
                                            break
                                        
                                        ebx_2 -= 1
                                    while (ebx_2 u>= arg1)
                                
                                if ((((&arg1[i_3 - 2]).b - ebx_2.b) & 1) == 0)
                                    arg1[arg2 - 1] = 0
                                else
                                    arg1[i_3 - 2] = 0
                            
                            if (var_8 != 0)
                                *(var_c + 0x70) &= 0xfffffffd
                            
                            result = 0x50
                else
                    result = sub_5b76aa(arg1, i_3, edi_1, arg4)
                label_5ba0b0:
                    
                    if (var_8 != 0)
                        *(var_c + 0x70) &= 0xfffffffd
            else
                *arg1 = 0
                *__errno() = 0x16
                __invalid_parameter_noinfo()
                result = 0x16
            
            return result
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16
}
