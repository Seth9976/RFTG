// 函数名称: sub_5c3a30
// 虚拟地址: 0x5c3a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c3a30(int32_t* arg1 @ esi, int32_t* arg2, int128_t* arg3, void* arg4, int32_t arg5)
{
    // 第一条实际指令: if (zip_error_code_zip(arg1) != 0)
    if (zip_error_code_zip(arg1) != 0)
        return 0xffffffff
    
    void* ebx = arg4
    
    if ((ebx | arg5) != 0 && *(arg1 + 0xe) == 0)
        void* edi = nullptr
        void* var_c = nullptr
        int32_t var_8 = 0
        
        if (arg5 u>= 0 && (arg5 u> 0 || ebx u> 0xffffffff))
            ebx = 0xffffffff
        
        arg1[0x80b] = arg3
        
        while (true)
            arg1[0x80c] = ebx
            
            while (true)
                int32_t eax_2 = sx.d(arg1[3].b)
                int32_t eax_3 = neg.d(eax_2)
                int32_t eax_7 = sub_6746d0(&arg1[0x808], sbb.d(eax_3, eax_3, eax_2 != 0) & 4)
                
                if (eax_7 + 5 u<= 7)
                    int32_t ebx_1
                    
                    switch (eax_7)
                        case 0
                        label_5c3ad2:
                            
                            if (arg1[0x80c] != 0)
                                if (arg1[3].b == 0)
                                    continue
                                else if (arg1[0x809] != 0)
                                    continue
                                
                                ebx_1 = arg5
                            else
                                void* temp1_1 = edi
                                edi += ebx
                                ebx_1 = arg5
                                int32_t edx_3 = adc.d(var_8, 0, temp1_1 + ebx u< temp1_1)
                                var_c = edi
                                var_8 = edx_3
                                
                                if (edx_3 u<= ebx_1 && (edx_3 u< ebx_1 || edi u< arg4))
                                    void* ecx_1 = arg4 - edi
                                    int32_t eax_9 = sbb.d(ebx_1, edx_3, arg4 u< edi)
                                    
                                    if (eax_9 u>= 0 && (eax_9 u> 0 || ecx_1 u> 0xffffffff))
                                        ebx = 0xffffffff
                                        arg1[0x80b] = edi + arg3
                                        break
                                    
                                    ebx = ecx_1
                                    arg1[0x80b] = edi + arg3
                                    break
                                
                                *(arg1 + 0xd) = 0
                        case 1
                            if (*(arg1 + 0xd) != 0)
                                void* ecx_4 = arg1[0x80a]
                                
                                if (ecx_4 u<= arg1[0x80d])
                                    arg1[6] = ecx_4
                                    *(arg1 + 0xe) = 1
                                    arg1[7] = 0
                                    sub_5ab990(arg3, &arg1[8], ecx_4)
                                    arg1[7]
                                    return arg1[6]
                            
                            goto label_5c3ad2
                        case 2, 0xfffffffc, 0xfffffffd, 0xfffffffe
                            zip_error_set(arg1, 0xd, eax_7)
                            ebx_1 = arg5
                        case 0xfffffffb
                            if (arg1[0x809] != 0)
                                zip_error_set(arg1, 0xd, eax_7)
                                ebx_1 = arg5
                            else
                                if (arg1[3].b == 0)
                                    int32_t eax_14
                                    int32_t edx_9
                                    eax_14, edx_9 = zip_source_read(arg2, &arg1[8], 0x2000, 0)
                                    
                                    if (edx_9 s>= 0 && (edx_9 s> 0 || eax_14 u>= 0))
                                        int32_t ecx_8 = eax_14 | edx_9
                                        
                                        if (ecx_8 != 0)
                                            if (arg1[0x80a] u> 0)
                                                *(arg1 + 0xd) = 0
                                            
                                            arg1[0x808] = &arg1[8]
                                            edi = var_c
                                            arg1[0x809] = eax_14
                                            continue
                                        else
                                            edi = var_c
                                            arg1[3].b = 1
                                            arg1[6] = arg1[0x80a]
                                            arg1[7] = ecx_8
                                            continue
                                    
                                    sub_5bf050(arg1, arg2)
                                
                                ebx_1 = arg5
                        case 0xffffffff
                            continue
                    
                    int32_t edx_6 = arg1[0x80c]
                    
                    if (0 u<= ebx_1 && (0 u< ebx_1 || edx_6 u< arg4))
                        *(arg1 + 0xd) = 0
                        return arg4 - edx_6
                    
                    int32_t eax_18 = zip_error_code_zip(arg1)
                    int32_t eax_19 = neg.d(eax_18)
                    int32_t result
                    int32_t edx_12
                    edx_12:result = sx.q(sbb.d(eax_19, eax_19, eax_18 != 0))
                    return result
    
    return 0
}
