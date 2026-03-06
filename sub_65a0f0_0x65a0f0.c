// 函数名称: sub_65a0f0
// 虚拟地址: 0x65a0f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65a0f0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    int32_t edx = eax[0xd]
    int32_t ecx = *eax
    int32_t ebx = eax[0xb]
    int32_t esi = eax[0xc]
    int32_t edi = 0
    int32_t ebx_1 = ebx s>> 1
    int32_t var_14 = ecx
    int32_t result_1 = 0
    int32_t var_6c
    __builtin_memset(&var_6c, 0, 0x20)
    int32_t __saved_ebp
    
    if (edx == 1)
        if (ecx s> 0)
            int32_t eax_11 = arg2 - &var_6c
            void* edx_5 = &(&__saved_ebp)[ecx - 0x1a]
            int32_t var_1c_2 = eax_11
            int32_t var_20_2 = ecx
            
            while (true)
                int32_t eax_12 = *(edx_5 + eax_11 - 4)
                edx_5 -= 4
                int32_t eax_13 = eax_12 - esi
                int32_t ecx_11
                
                if (eax_13 s>= ebx_1)
                    ecx_11 = (eax_13 - ebx_1) * 2
                else
                    ecx_11 = (ebx_1 - eax_13) * 2 - 1
                
                int32_t var_18_2
                
                if (ecx_11 s>= 0)
                    if (ecx_11 s>= ebx)
                        ecx_11 = ebx - 1
                    
                    var_18_2 = ecx_11
                else
                    var_18_2 = 0
                
                int32_t temp2_1 = var_20_2
                var_20_2 -= 1
                result_1 = result_1 * ebx + var_18_2
                *edx_5 = eax_13 + esi
                
                if (temp2_1 == 1)
                    break
                
                eax_11 = var_1c_2
            
        label_65a21f:
            eax = arg1
            ecx = var_14
            edi = 0
    else if (ecx s> 0)
        void* eax_2 = arg2 - &var_6c
        void* edi_1 = &(&__saved_ebp)[ecx - 0x1a]
        void* var_1c_1 = eax_2
        int32_t var_20_1 = ecx
        
        while (true)
            int32_t eax_3 = *(eax_2 + edi_1 - 4)
            edi_1 -= 4
            int32_t temp0_1 = divs.dp.d(sx.q(eax_3 - esi + (edx s>> 1)), edx)
            int32_t ecx_3
            
            if (temp0_1 s>= ebx_1)
                ecx_3 = (temp0_1 - ebx_1) * 2
            else
                ecx_3 = (ebx_1 - temp0_1) * 2 - 1
            
            int32_t var_18_1
            
            if (ecx_3 s>= 0)
                if (ecx_3 s>= ebx)
                    ecx_3 = ebx - 1
                
                var_18_1 = ecx_3
            else
                var_18_1 = 0
            
            int32_t temp3_1 = var_20_1
            var_20_1 -= 1
            result_1 = result_1 * ebx + var_18_1
            *edi_1 = temp0_1 * edx + esi
            
            if (temp3_1 == 1)
                break
            
            eax_2 = var_1c_1
        
        goto label_65a21f
    
    int32_t* edx_6 = eax[3]
    int32_t result = result_1
    
    if (*(edx_6[2] + (result << 2)) s<= 0)
        int32_t eax_15 = eax[1]
        int32_t i_1 = (ebx - 1) * edx + esi
        int32_t result_2 = 0
        void* var_20_3 = 0xffffffff
        int32_t var_4c
        __builtin_memset(&var_4c, 0, 0x20)
        int32_t i_2 = i_1
        int32_t result_3 = 0
        
        if (eax_15 s> 0)
            int32_t* var_1c_3 = edx_6[2]
            
            do
                if (*var_1c_3 s> 0)
                    void* const eax_19 = nullptr
                    int32_t esi_1 = 0
                    arg1 = nullptr
                    
                    if (ecx s>= 2)
                        int32_t* eax_20 = arg2
                        int32_t var_48
                        void* esi_2 = &var_48 - eax_20
                        int32_t i_3 = ((ecx - 2) u>> 1) + 1
                        int32_t ecx_17 = i_3 * 2
                        int32_t i
                        
                        do
                            int32_t ecx_19 = *(esi_2 + eax_20 - 4) - *eax_20
                            eax_20 = &eax_20[2]
                            edi += ecx_19 * ecx_19
                            int32_t ecx_22 = *(esi_2 + eax_20 - 8) - eax_20[-1]
                            arg1 += ecx_22 * ecx_22
                            i = i_3
                            i_3 -= 1
                        while (i != 1)
                        result_2 = result_3
                        i_1 = i_2
                        eax_19 = nullptr
                        esi_1 = ecx_17
                        ecx = var_14
                    
                    if (esi_1 s< ecx)
                        int32_t eax_22 = (&var_4c)[esi_1] - arg2[esi_1]
                        eax_19 = eax_22 * eax_22
                    
                    void* eax_23 = eax_19 + arg1 + edi
                    
                    if (var_20_3 == 0xffffffff || eax_23 s< var_20_3)
                        __builtin_memcpy(&var_6c, &var_4c, 0x20)
                        var_20_3 = eax_23
                        result_1 = result_2
                
                int32_t ecx_28 = 0
                
                if (var_4c s>= i_1)
                    int32_t* eax_24 = &var_4c
                    
                    do
                        ecx_28 += 1
                        *eax_24 = 0
                        eax_24 = &(&__saved_ebp)[ecx_28 - 0x12]
                    while ((&var_4c)[ecx_28] s>= i_1)
                
                int32_t eax_25 = (&var_4c)[ecx_28]
                
                if (eax_25 s>= 0)
                    (&__saved_ebp)[ecx_28 - 0x12] = eax_25 + edx
                
                var_1c_3 = &var_1c_3[1]
                result_2 += 1
                edi = 0
                (&__saved_ebp)[ecx_28 - 0x12] = neg.d((&__saved_ebp)[ecx_28 - 0x12])
                ecx = var_14
                result_3 = result_2
            while (result_2 s< eax_15)
        
        result = result_1
    
    int32_t* eax_29 = arg2
    
    if (result s> 0xffffffff && ecx s> 0)
        do
            *eax_29 -= (&var_6c)[edi]
            edi += 1
            eax_29 = &eax_29[1]
        while (edi s< ecx)
    
    return result
}
