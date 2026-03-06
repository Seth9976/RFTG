// 函数名称: sub_659d70
// 虚拟地址: 0x659d70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_659d70(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    int32_t eax
    int32_t ecx
    int32_t edx
    int32_t* result = _calloc(eax, edx, ecx, 1, 0xb18)
    void* ecx_1 = *(arg1 + 0x1c)
    *result = sub_68b0a0(arg2, 0x18)
    result[1] = sub_68b0a0(arg2, 0x18)
    result[2] = sub_68b0a0(arg2, 0x18) + 1
    result[3] = sub_68b0a0(arg2, 6) + 1
    int32_t eax_8 = sub_68b0a0(arg2, 8)
    result[5] = eax_8
    
    if (eax_8 s>= 0)
        int32_t i_2 = 0
        
        if (result[3] s> 0)
            arg1 = &result[6]
            int32_t i
            
            do
                uint32_t j = sub_68b0a0(arg2, 3)
                int32_t eax_10 = sub_68b0a0(arg2, 1)
                
                if (eax_10 s< 0)
                    goto label_659f00
                
                if (eax_10 != 0)
                    int32_t eax_11 = sub_68b0a0(arg2, 5)
                    
                    if (eax_11 s< 0)
                        goto label_659f00
                    
                    j |= eax_11 * 8
                
                int32_t eax_15 = 0
                *arg1 = j
                
                for (; j != 0; j u>>= 1)
                    eax_15 += j & 1
                
                var_8 += eax_15
                arg1 += 4
                i = i_2 + 1
                i_2 = i
            while (i s< result[3])
        
        int32_t edi_1 = 0
        
        if (var_8 s> 0)
            arg1 = &result[0x46]
            
            do
                int32_t eax_18 = sub_68b0a0(arg2, 8)
                
                if (eax_18 s< 0)
                    goto label_659f00
                
                *arg1 = eax_18
                edi_1 += 1
                arg1 += 4
            while (edi_1 s< var_8)
        
        int32_t edx_4 = *(ecx_1 + 0x18)
        
        if (result[5] s< edx_4)
            int32_t ecx_5 = 0
            
            if (var_8 s> 0)
                void* esi_1 = &result[0x46]
                
                do
                    int32_t eax_19 = *esi_1
                    
                    if (eax_19 s>= edx_4)
                        goto label_659f00
                    
                    if (*(*(ecx_1 + (eax_19 << 2) + 0x720) + 0xc) == 0)
                        goto label_659f00
                    
                    ecx_5 += 1
                    esi_1 += 4
                while (ecx_5 s< var_8)
            
            int32_t* eax_22 = *(ecx_1 + (result[5] << 2) + 0x720)
            int32_t i_1 = *eax_22
            int32_t ecx_6 = 1
            
            if (i_1 s>= 1)
                for (; i_1 s> 0; i_1 -= 1)
                    ecx_6 *= result[3]
                    
                    if (ecx_6 s> eax_22[1])
                        goto label_659f00
                
                result[4] = ecx_6
                return result
    
    label_659f00:
    sub_5abfc0(result, 0, 0xb18)
    __free_base(result)
    return 0
}
