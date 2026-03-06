// 函数名称: sub_65d000
// 虚拟地址: 0x65d000
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_65d000(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: void* ebx = arg2
    void* ebx = arg2
    int32_t eax_1 = *(*(*(arg1[0x10] + 4) + 0x1c) + 0xb20)
    int32_t* edi = *(ebx + 0x510)
    void* eax_2 = &arg1[1]
    int32_t* var_28 = edi
    
    if (sub_68b0a0(eax_2, 1) != 1)
        return 0
    
    int32_t* result = sub_649ad0(arg1, *(ebx + 0x504) * 4)
    int32_t eax_5 = *(ebx + 0x50c)
    uint32_t i = eax_5 - 1
    arg1 = result
    int32_t ecx_4 = 0
    
    if (eax_5 != 1)
        do
            ecx_4 += 1
            i u>>= 1
        while (i != 0)
    
    *result = sub_68b0a0(eax_2, ecx_4)
    int32_t eax_7 = *(ebx + 0x50c)
    uint32_t i_1 = eax_7 - 1
    int32_t ecx_5 = 0
    
    if (eax_7 != 1)
        do
            ecx_5 += 1
            i_1 u>>= 1
        while (i_1 != 0)
    
    result[1] = sub_68b0a0(eax_2, ecx_5)
    int32_t i_3 = 0
    int32_t var_14_1 = 2
    
    if (*edi s> 0)
        int32_t* var_18_1 = &edi[1]
        int32_t i_2
        
        do
            int32_t esi_1 = *var_18_1
            int32_t eax_10 = edi[esi_1 + 0x20]
            int32_t ecx_7 = edi[esi_1 + 0x30]
            int32_t eax_11 = 1 << ecx_7.b
            int32_t ebx_1 = 0
            int32_t var_20_1 = ecx_7
            
            if (ecx_7 != 0)
                ebx_1 = sub_6512a0(eax_1 + edi[esi_1 + 0x40] * 0x38, eax_2)
                
                if (ebx_1 == 0xffffffff)
                    return 0
                
                ecx_7 = var_20_1
            
            int32_t edx_9 = eax_10
            int32_t var_10_2 = 0
            
            if (edx_9 s> 0)
                void* esi_2 = &arg1[var_14_1]
                
                do
                    void* eax_19 = ((eax_11 - 1) & ebx_1) + (esi_1 << 3) + 0x50
                    ebx_1 s>>= ecx_7.b
                    int32_t eax_20 = edi[eax_19]
                    
                    if (eax_20 s< 0)
                        *esi_2 = 0
                    else
                        int32_t eax_22 = sub_6512a0(eax_1 + eax_20 * 0x38, eax_2)
                        *esi_2 = eax_22
                        
                        if (eax_22 == 0xffffffff)
                            return 0
                        
                        ecx_7 = var_20_1
                    
                    var_10_2 += 1
                    edx_9 = eax_10
                    esi_2 += 4
                while (var_10_2 s< edx_9)
            
            var_14_1 += edx_9
            var_18_1 = &var_18_1[1]
            i_2 = i_3 + 1
            i_3 = i_2
        while (i_2 s< *edi)
        result = arg1
        ebx = arg2
    
    int32_t var_8_1 = 2
    
    if (*(ebx + 0x504) s> 2)
        void* ecx_12 = ebx + 0x30c
        void* var_14_2 = ecx_12
        void* var_18_2 = &edi[0xd3]
        
        while (true)
            int32_t eax_24 = *(ecx_12 + 0xfc)
            int32_t edi_1 = edi[eax_24 + 0xd1]
            int32_t ebx_2 = *ecx_12
            int32_t esi_4 = result[eax_24] & 0x7fff
            int32_t ecx_15 = (arg1[ebx_2] & 0x7fff) - esi_4
            int32_t eax_27
            int32_t edx_11
            edx_11:eax_27 = sx.q(ecx_15)
            int32_t temp0_1 = divs.dp.d(sx.q(((eax_27 ^ edx_11) - edx_11) * (*var_18_2 - edi_1)), 
                var_28[ebx_2 + 0xd1] - edi_1)
            int32_t esi_5
            
            if (ecx_15 s>= 0)
                esi_5 = esi_4 + temp0_1
            else
                esi_5 = esi_4 - temp0_1
            
            int32_t ecx_17 = *(arg2 + 0x50c) - esi_5
            int32_t ebx_5 = ecx_17
            
            if (ecx_17 s>= esi_5)
                ebx_5 = esi_5
            
            int32_t eax_34 = arg1[var_8_1]
            void* ecx_19
            
            if (eax_34 == 0)
                ecx_19 = var_14_2
                arg1[var_8_1] = esi_5 | 0x8000
            else
                int32_t eax_35
                
                if (eax_34 s< ebx_5 * 2)
                    if ((eax_34.b & 1) == 0)
                        eax_35 = eax_34 s>> 1
                    else
                        eax_35 = neg.d((eax_34 + 1) s>> 1)
                else if (ecx_17 s<= esi_5)
                    eax_35 = ecx_17 - eax_34 - 1
                else
                    eax_35 = eax_34 - esi_5
                
                ecx_19 = var_14_2
                arg1[var_8_1] = (eax_35 + esi_5) & 0x7fff
                int32_t eax_40 = *(ecx_19 + 0xfc)
                arg1[eax_40] &= 0x7fff
                int32_t eax_41 = *ecx_19
                arg1[eax_41] &= 0x7fff
            
            var_18_2 += 4
            result = arg1
            int32_t edi_3 = var_8_1 + 1
            ecx_12 = ecx_19 + 4
            var_8_1 = edi_3
            var_14_2 = ecx_12
            
            if (edi_3 s>= *(arg2 + 0x504))
                break
            
            edi = var_28
    
    return result
}
