// 函数名称: sub_5c3c90
// 虚拟地址: 0x5c3c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c3c90(int32_t* arg1 @ esi, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: if (zip_error_code_zip(arg1) != 0)
    if (zip_error_code_zip(arg1) != 0)
        return 0xffffffff
    
    int32_t ebx = arg4
    
    if ((ebx | arg5) == 0)
        return 0
    
    int32_t edi = 0
    int32_t var_c = 0
    int32_t var_8 = 0
    
    if (arg5 u>= 0 && (arg5 u> 0 || ebx u> 0xffffffff))
        ebx = 0xffffffff
    
    arg1[0x80b] = arg3
    
    while (true)
        arg1[0x80c] = ebx
        
        while (true)
            int32_t eax_4 = sub_6754d0(&arg1[0x808], 2)
            
            if (eax_4 + 5 u<= 7)
                switch (eax_4)
                    case 0
                        if (arg1[0x80c] != 0)
                            continue
                        else
                            int32_t temp0_1 = edi
                            edi += ebx
                            int32_t edx_4 = adc.d(var_8, 0, temp0_1 + ebx u< temp0_1)
                            var_c = edi
                            var_8 = edx_4
                            
                            if (edx_4 u<= arg5 && (edx_4 u< arg5 || edi u< arg4))
                                int32_t ecx_4 = arg4 - edi
                                int32_t eax_6 = sbb.d(arg5, edx_4, arg4 u< edi)
                                
                                if (eax_6 u>= 0 && (eax_6 u> 0 || ecx_4 u> 0xffffffff))
                                    ebx = 0xffffffff
                                    arg1[0x80b] = edi + arg3
                                    break
                                
                                ebx = ecx_4
                                arg1[0x80b] = edi + arg3
                                break
                    case 1
                        arg1[3].b = 1
                    case 2, 0xfffffffc, 0xfffffffd, 0xfffffffe
                        zip_error_set(arg1, 0xd, eax_4)
                    case 0xfffffffb
                        if (arg1[0x809] != 0)
                            zip_error_set(arg1, 0xd, eax_4)
                        else if (arg1[3].b == 0)
                            int32_t eax_9
                            int32_t edx_6
                            eax_9, edx_6 = zip_source_read(arg2, &arg1[8], 0x2000, 0)
                            
                            if (edx_6 s>= 0 && (edx_6 s> 0 || eax_9 u>= 0))
                                if ((eax_9 | edx_6) != 0)
                                    arg1[0x808] = &arg1[8]
                                    edi = var_c
                                    arg1[0x809] = eax_9
                                    continue
                                else
                                    edi = var_c
                                    arg1[3].b = 1
                                    continue
                            
                            sub_5bf050(arg1, arg2)
                    case 0xffffffff
                        continue
                
                int32_t edx_8 = arg1[0x80c]
                
                if (0 u<= arg5 && (0 u< arg5 || edx_8 u< arg4))
                    return arg4 - edx_8
                
                int32_t eax_12 = zip_error_code_zip(arg1)
                int32_t eax_13 = neg.d(eax_12)
                int32_t result
                int32_t edx_11
                edx_11:result = sx.q(sbb.d(eax_13, eax_13, eax_12 != 0))
                return result
}
