// 函数名称: sub_650d90
// 虚拟地址: 0x650d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_650d90(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    int32_t ecx
    int32_t edx
    int32_t* result = _calloc(eax, edx, ecx, 1, 0x28)
    result[9] = 1
    
    if (sub_68b0a0(arg1, 0x18) == 0x564342)
        *result = sub_68b0a0(arg1, 0x10)
        uint32_t eax_3 = sub_68b0a0(arg1, 0x18)
        result[1] = eax_3
        
        if (eax_3 != 0xffffffff && sub_64fbf0(*result) + sub_64fbf0(eax_3) s<= 0x18)
            int32_t eax_7 = sub_68b0a0(arg1, 1)
            
            if (eax_7 == 0)
                int32_t eax_17 = sub_68b0a0(arg1, 1)
                int32_t ebx_2 = result[1]
                int32_t eax_18 = sub_68b1a0(arg1)
                int32_t edx_8
                edx_8.b = eax_17 == 0
                
                if ((((edx_8 << 2) + 1) * ebx_2 + 7) s>> 3 s<= arg1[4] - eax_18)
                    result[2] = sub_5a881a(ebx_2 << 2)
                    int32_t i_3 = 0
                    
                    if (eax_17 == 0)
                        if (ebx_2 s> 0)
                            int32_t i
                            
                            do
                                int32_t eax_26 = sub_68b0a0(arg1, 5)
                                
                                if (eax_26 == 0xffffffff)
                                    goto label_651097
                                
                                *(result[2] + (i_3 << 2)) = eax_26 + 1
                                i = i_3 + 1
                                i_3 = i
                            while (i s< result[1])
                    else if (ebx_2 s> 0)
                        int32_t i_1
                        
                        do
                            if (sub_68b0a0(arg1, 1) == 0)
                                *(result[2] + (i_3 << 2)) = 0
                            else
                                int32_t eax_22 = sub_68b0a0(arg1, 5)
                                
                                if (eax_22 == 0xffffffff)
                                    goto label_651097
                                
                                *(result[2] + (i_3 << 2)) = eax_22 + 1
                            
                            i_1 = i_3 + 1
                            i_3 = i_1
                        while (i_1 s< result[1])
                    
                label_650fac:
                    int32_t eax_28 = sub_68b0a0(arg1, 4)
                    result[3] = eax_28
                    
                    if (eax_28 == 0)
                        return result
                    
                    if (eax_28 - 1 u<= 1)
                        result[4] = sub_68b0a0(arg1, 0x20)
                        result[5] = sub_68b0a0(arg1, 0x20)
                        result[6] = sub_68b0a0(arg1, 4) + 1
                        int32_t eax_34 = sub_68b0a0(arg1, 1)
                        result[7] = eax_34
                        
                        if (eax_34 != 0xffffffff)
                            int32_t eax_35 = result[3]
                            int32_t ebx_3 = 0
                            
                            if (eax_35 == 1)
                                long double x87_r0
                                
                                if (*result != 0)
                                    ebx_3 = sub_64fea0(x87_r0, result)
                                else
                                    ebx_3 = 0
                            else if (eax_35 == 2)
                                ebx_3 = *result * result[1]
                            
                            int32_t eax_39 = sub_68b1a0(arg1)
                            
                            if ((result[6] * ebx_3 + 7) s>> 3 s<= arg1[4] - eax_39)
                                int32_t eax_44 = ebx_3 << 2
                                result[8] = sub_5a881a(eax_44)
                                int32_t var_8_2 = 0
                                bool cond:1_1 = ebx_3 == 0
                                
                                if (ebx_3 s> 0)
                                    int32_t ecx_13
                                    
                                    do
                                        *(result[8] + (var_8_2 << 2)) = sub_68b0a0(arg1, result[6])
                                        ecx_13 = var_8_2 + 1
                                        var_8_2 = ecx_13
                                    while (ecx_13 s< ebx_3)
                                    cond:1_1 = ebx_3 == 0
                                
                                if (cond:1_1 || *(result[8] + eax_44 - 4) != 0xffffffff)
                                    return result
            else if (eax_7 == 1)
                int32_t eax_10 = sub_68b0a0(arg1, 5)
                int32_t var_8_1 = eax_10 + 1
                
                if (eax_10 != 0xffffffff)
                    int32_t i_2 = 0
                    result[2] = sub_5a881a(result[1] << 2)
                    
                    if (result[1] s> 0)
                        int32_t var_c_2 = var_8_1 - 1
                        
                        do
                            int32_t j_1 = sub_68b0a0(arg1, sub_64fbf0(result[1] - i_2))
                            
                            if (j_1 == 0xffffffff)
                                goto label_651097
                            
                            if (var_c_2 s> 0x1f)
                                goto label_651097
                            
                            if (j_1 s> result[1] - i_2)
                                goto label_651097
                            
                            if (j_1 s> 0)
                                if ((j_1 - 1) s>> var_c_2.b s> 1)
                                    goto label_651097
                                
                                if (j_1 s> 0)
                                    int32_t j
                                    
                                    do
                                        *(result[2] + (i_2 << 2)) = var_8_1
                                        i_2 += 1
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                            
                            var_8_1 += 1
                            var_c_2 += 1
                        while (i_2 s< result[1])
                    
                    goto label_650fac
    
    label_651097:
    sub_6503a0(result)
    return 0
}
