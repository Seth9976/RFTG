// 函数名称: sub_681c70
// 虚拟地址: 0x681c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_681c70(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t ecx = *(*(arg3 + 0x1cc) + 0x18)
    int32_t ecx = *(*(arg3 + 0x1cc) + 0x18)
    int32_t edx_1 = arg4[1]
    int32_t* result_11 = arg4[4]
    int32_t* result_4 = *arg4
    int32_t edi = arg4[5]
    int32_t var_c = arg4[2]
    int32_t* result_1 = result_4
    int32_t var_10 = edx_1
    int32_t var_14 = arg4[3]
    int32_t* result_13 = result_11
    int32_t var_24 = edi
    
    if (result_4 s< edx_1)
        int32_t* result_3 = result_4
        void* result_9
        
        do
            int32_t esi_2 = var_c
            
            if (esi_2 s<= var_14)
                int16_t* edx_5 = *(ecx + (result_3 << 2)) + (&result_11[esi_2 * 8] << 1)
                
                while (true)
                    int16_t* ecx_2 = edx_5
                    int32_t* result_14 = result_11
                    
                    if (result_13 s<= edi)
                        while (true)
                            int16_t ebx = *ecx_2
                            ecx_2 = &ecx_2[1]
                            
                            if (ebx != 0)
                                result_11 = result_13
                                result_1 = result_3
                                *arg4 = result_3
                                break
                            
                            result_14 += 1
                            
                            if (result_14 s> edi)
                                goto label_681cf0
                        
                        break
                    
                label_681cf0:
                    result_11 = result_13
                    esi_2 += 1
                    edx_5 = &edx_5[0x20]
                    
                    if (esi_2 s> var_14)
                        goto label_681cff
                
                break
            
        label_681cff:
            result_9 = result_3 + 1
            result_3 = result_9
        while (result_9 s<= var_10)
        
        if (var_10 s> result_1)
            int32_t var_18_1 = var_10
            int32_t eax_8
            
            do
                int32_t esi_3 = var_c
                
                if (esi_3 s<= var_14)
                    int32_t* result_10 = *(ecx + (var_18_1 << 2)) + (&result_11[esi_3 * 8] << 1)
                    
                    while (true)
                        result_4 = result_10
                        int32_t* result_15 = result_11
                        
                        if (result_13 s<= edi)
                            while (true)
                                result_11.w = *result_4
                                result_4 += 2
                                
                                if (result_11.w != 0)
                                    result_11 = result_13
                                    var_10 = var_18_1
                                    arg4[1] = var_18_1
                                    break
                                
                                result_15 += 1
                                
                                if (result_15 s> edi)
                                    goto label_681d60
                            
                            break
                        
                    label_681d60:
                        result_11 = result_13
                        esi_3 += 1
                        result_10 = &result_10[0x10]
                        
                        if (esi_3 s> var_14)
                            goto label_681d6f
                    
                    break
                
            label_681d6f:
                eax_8 = var_18_1 - 1
                var_18_1 = eax_8
            while (eax_8 s>= result_1)
    
    if (var_c s< var_14)
        int32_t var_18_2 = var_c
        int32_t esi_7 = &result_11[var_c * 8] * 2
        int32_t eax_15
        
        do
            int32_t* result_5 = result_1
            
            if (result_5 s<= var_10)
                while (true)
                    int16_t* eax_13 = *(ecx + (result_5 << 2)) + esi_7
                    result_4 = result_11
                    
                    if (result_13 s<= edi)
                        while (true)
                            result_11.w = *eax_13
                            eax_13 = &eax_13[1]
                            
                            if (result_11.w != 0)
                                result_11 = result_13
                                var_c = var_18_2
                                arg4[2] = var_18_2
                                break
                            
                            result_4 += 1
                            
                            if (result_4 s> edi)
                                goto label_681dd0
                        
                        break
                    
                label_681dd0:
                    result_11 = result_13
                    result_5 += 1
                    
                    if (result_5 s> var_10)
                        goto label_681ddc
                
                break
            
        label_681ddc:
            eax_15 = var_18_2 + 1
            esi_7 += 0x40
            var_18_2 = eax_15
        while (eax_15 s<= var_14)
        
        if (var_14 s> var_c)
            int32_t var_18_3 = var_14
            int32_t esi_11 = &result_11[var_14 * 8] * 2
            int32_t eax_21
            
            do
                int32_t* result_6 = result_1
                
                if (result_6 s<= var_10)
                    while (true)
                        int16_t* eax_19 = *(ecx + (result_6 << 2)) + esi_11
                        result_4 = result_11
                        
                        if (result_13 s<= edi)
                            while (true)
                                result_11.w = *eax_19
                                eax_19 = &eax_19[1]
                                
                                if (result_11.w != 0)
                                    result_11 = result_13
                                    var_14 = var_18_3
                                    arg4[3] = var_18_3
                                    break
                                
                                result_4 += 1
                                
                                if (result_4 s> edi)
                                    goto label_681e37
                            
                            break
                        
                    label_681e37:
                        result_11 = result_13
                        result_6 += 1
                        
                        if (result_6 s> var_10)
                            goto label_681e43
                    
                    break
                
            label_681e43:
                eax_21 = var_18_3 - 1
                esi_11 -= 0x40
                var_18_3 = eax_21
            while (eax_21 s>= var_c)
    
    if (result_11 s< edi)
        int32_t* result_16 = result_11
        int32_t* result_12 = result_11
        
        do
            int32_t* result_7 = result_1
            
            if (result_7 s<= var_10)
                while (true)
                    int32_t ecx_6 = var_c
                    int16_t* eax_25 = *(ecx + (result_7 << 2)) + &result_16[var_c * 8] * 2
                    
                    if (ecx_6 s<= var_14)
                        while (*eax_25 == 0)
                            ecx_6 += 1
                            eax_25 = &eax_25[0x20]
                            
                            if (ecx_6 s> var_14)
                                goto label_681ea2
                        
                        result_11 = result_12
                        edi = var_24
                        result_13 = result_11
                        arg4[4] = result_11
                        break
                    
                label_681ea2:
                    result_7 += 1
                    
                    if (result_7 s> var_10)
                        edi = var_24
                        result_16 = result_12
                        goto label_681eae
                
                break
            
        label_681eae:
            result_16 += 1
            result_12 = result_16
        while (result_16 s<= edi)
        
        if (edi s> result_11)
            int32_t eax_26 = edi
            int32_t var_18_4 = edi
            
            do
                int32_t* result_8 = result_1
                
                if (result_8 s<= var_10)
                    while (true)
                        int32_t ecx_8 = var_c
                        int16_t* eax_29 = *(ecx + (result_8 << 2)) + ((var_c << 5) + eax_26) * 2
                        
                        if (ecx_8 s<= var_14)
                            while (*eax_29 == 0)
                                ecx_8 += 1
                                eax_29 = &eax_29[0x20]
                                
                                if (ecx_8 s> var_14)
                                    goto label_681f02
                            
                            edi = var_18_4
                            var_24 = edi
                            arg4[5] = edi
                            break
                        
                    label_681f02:
                        result_8 += 1
                        
                        if (result_8 s> var_10)
                            eax_26 = var_18_4
                            edi = var_24
                            goto label_681f0e
                    
                    break
                
            label_681f0e:
                eax_26 -= 1
                var_18_4 = eax_26
            while (eax_26 s>= result_11)
    
    int32_t esi_21 = var_14 - var_c
    void* edi_3 = edi - result_11
    int32_t ecx_12 = esi_21 * 0xc
    int32_t eax_32 = (var_10 - result_1) << 4
    int32_t edx_10 = edi_3 << 3
    int32_t* result = result_1
    int32_t ebx_1 = 0
    arg4[6] = edx_10 * edx_10 + ecx_12 * ecx_12 + eax_32 * eax_32
    int32_t var_28 = 0
    int32_t* result_2 = result
    
    if (result s> var_10)
        arg4[7] = 0
        return result
    
    int32_t ecx_15 = var_c
    
    do
        if (ecx_15 s<= var_14)
            int16_t* edx_15 = *(ecx + (result << 2)) + (&result_13[ecx_15 * 8] << 1)
            int32_t i_1 = esi_21 + 1
            int32_t i
            
            do
                ebx_1 = var_28
                int16_t* eax_35 = edx_15
                
                if (result_13 s<= var_24)
                    void* j_1 = edi_3 + 1
                    void* j
                    
                    do
                        if (*eax_35 != 0)
                            ebx_1 += 1
                        
                        eax_35 = &eax_35[1]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    var_28 = ebx_1
                
                edx_15 = &edx_15[0x20]
                i = i_1
                i_1 -= 1
            while (i != 1)
            result = result_2
            ecx_15 = var_c
        
        result += 1
        result_2 = result
    while (result s<= var_10)
    
    arg4[7] = ebx_1
    return result
}
