// 函数名称: sub_5c2390
// 虚拟地址: 0x5c2390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c2390(int32_t* arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: switch (arg6)
    switch (arg6)
        case 0
            *arg2 = 0
            arg2[8] = sub_673170(0, nullptr, 0)
            arg2[6] = 0
            arg2[7] = 0
            return 0
        case 1
            if (*arg2 != 0 || (arg4 | arg5) == 0)
                return 0
            
            int32_t eax_6
            int32_t edx_4
            eax_6, edx_4 = zip_source_read(arg1, arg3, arg4, arg5)
            int32_t esi_2 = edx_4
            int32_t var_c = eax_6
            int32_t var_8 = esi_2
            
            if (esi_2 s> 0)
            label_5c241a:
                int32_t ecx_3 = eax_6 | esi_2
                
                if (ecx_3 != 0)
                    void* edi_1 = nullptr
                    int32_t ebx_3 = 0
                    
                    if (esi_2 u>= 0 && (esi_2 u> 0 || eax_6 != 0))
                        while (true)
                            void* ecx_8 = eax_6 - edi_1
                            int32_t eax_15 = sbb.d(esi_2, ebx_3, eax_6 u< edi_1)
                            int32_t var_10_1
                            void* esi_3
                            
                            if (eax_15 u< 0 || (eax_15 u<= 0 && ecx_8 u<= 0xffffffff))
                                esi_3 = ecx_8
                                var_10_1 = eax_15
                            else
                                esi_3 = 0xffffffff
                                var_10_1 = 0
                            
                            int32_t eax_18 = sub_673170(arg2[8], edi_1 + arg3, esi_3)
                            void* temp5_1 = edi_1
                            edi_1 += esi_3
                            ebx_3 = adc.d(ebx_3, var_10_1, temp5_1 + esi_3 u< temp5_1)
                            arg2[8] = eax_18
                            
                            if (ebx_3 u>= var_8)
                                if (ebx_3 u> var_8)
                                    break
                                
                                if (edi_1 u>= var_c)
                                    break
                            
                            esi_2 = var_8
                            eax_6 = var_c
                        
                        esi_2 = var_8
                        eax_6 = var_c
                    
                    int32_t temp2 = arg2[6]
                    arg2[6] += eax_6
                    arg2[7] = adc.d(arg2[7], esi_2, temp2 + eax_6 u< temp2)
                    return eax_6
                
                *arg2 = 1
                
                if (arg2[1] == ecx_3)
                    return eax_6
                
                int32_t var_54
                
                if (zip_source_stat(arg1, &var_54) s>= 0)
                    int32_t ecx_4 = var_54
                    int32_t var_68_3
                    int32_t var_24
                    
                    if ((ecx_4 & 0x20) == 0 || var_24 == arg2[8])
                        int32_t var_3c
                        int32_t var_38
                        
                        if ((ecx_4 & 4) == 0 || (var_3c == arg2[6] && var_38 == arg2[7]))
                            return var_c
                        
                        int32_t var_64_4 = 0
                        var_68_3 = 0x15
                    else
                        int32_t var_64_3 = 0
                        var_68_3 = 7
                    
                    zip_error_set(&arg2[2], var_68_3, 0)
                    return 0xffffffff
            else if (esi_2 s>= 0 && eax_6 u>= 0)
                goto label_5c241a
            
            sub_5bf050(&arg2[2], arg1)
            return 0xffffffff
        case 2
            return 0
        case 3
            if (*arg2 != 0)
                arg3[6] = arg2[6]
                arg3[7] = arg2[7]
                arg3[0xc] = arg2[8]
                arg3[8] = arg2[6]
                int32_t ecx_13 = arg2[7]
                *arg3 |= 0xec
                arg3[0xd] = 0
                int32_t edx_16 = arg3[1]
                arg3[9] = ecx_13
                arg3[1] = edx_16
            
            return 0
        case 4
            return zip_error_to_data(&arg2[2], arg3, arg4, arg5)
        case 5
            __free_base(arg2)
            return 0
        case 0xe
            int32_t __saved_ebx_2 = 0xffffffff
            int32_t var_64_7 = 5
            int32_t var_68_6 = 4
            int32_t var_6c_4 = 3
            int32_t var_70_1 = 2
            return zip_source_make_command_bitmap(0, 1)
    
    zip_error_set(&arg2[2], 0x1c, 0)
    return 0xffffffff
}
