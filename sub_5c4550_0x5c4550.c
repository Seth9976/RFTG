// 函数名称: sub_5c4550
// 虚拟地址: 0x5c4550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c4550(int32_t* arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    int32_t ebx = arg1[0xb]
    int32_t edi = arg1[0xa]
    int32_t eax_1 = eax + edi
    int32_t eax_2 = eax_1 + arg3
    uint32_t eax_4 = adc.d(adc.d(adc.d(arg1[1], ebx, eax + edi u< eax), arg4, eax_1 + arg3 u< eax_1), 
        0xffffffff, eax_2 u>= 1)
    
    if (eax_4 u<= arg4 && (eax_4 u< arg4 || eax_2 - 1 u< arg3))
        zip_error_set(arg5, 0x12, 0)
        return 0xffffffff
    
    int32_t eax_8
    int32_t edx_3
    eax_8, edx_3 = __allmul(arg1[4], arg1[5], *arg1, arg1[1])
    int32_t ebx_1 = adc.d(ebx, arg4, edi + arg3 u< edi)
    
    if (ebx_1 u>= edx_3 && (ebx_1 u> edx_3 || edi + arg3 u> eax_8))
        uint32_t eax_11
        int32_t edx_5
        eax_11, edx_5 = __aulldiv(eax_2 - 1, eax_4, *arg1, arg1[1])
        ebx_1 = arg1[7]
        int32_t edi_2 = arg1[6]
        uint32_t var_14_1 = eax_11
        int32_t var_10_1 = edx_5
        
        if (edx_5 u>= ebx_1 && (edx_5 u> ebx_1 || eax_11 u> edi_2))
            if (ebx_1 u<= edx_5 && (ebx_1 u< edx_5 || edi_2 u< eax_11))
                while (true)
                    ebx_1 = ebx_1 << 1 | edi_2 u>> 0xffffffe1
                    edi_2 *= 2
                    
                    if (ebx_1 u>= edx_5)
                        if (ebx_1 u> edx_5)
                            break
                        
                        if (edi_2 u>= eax_11)
                            break
            
            int32_t eax_13 = _realloc(arg1[2], edi_2 << 2)
            
            if (eax_13 == 0)
            label_5c4640:
                zip_error_set(arg5, 0xe, 0)
                return 0xffffffff
            
            edx_5 = var_10_1
            arg1[2] = eax_13
            eax_11 = var_14_1
            arg1[6] = edi_2
            arg1[7] = ebx_1
        
        int32_t temp12_1 = arg1[5]
        
        if (temp12_1 u<= edx_5 && (temp12_1 u< edx_5 || arg1[4] u< eax_11))
            while (true)
                int32_t eax_15 = sub_5a881a(*arg1)
                *(arg1[2] + (arg1[4] << 2)) = eax_15
                
                if (eax_15 == 0)
                    goto label_5c4640
                
                int32_t temp17_1 = arg1[4]
                arg1[4] += 1
                arg1[5] = adc.d(arg1[5], 0, temp17_1 u>= 0xffffffff)
                int32_t eax_16 = arg1[5]
                
                if (eax_16 u>= var_10_1)
                    if (eax_16 u> var_10_1)
                        break
                    
                    if (arg1[4] u>= var_14_1)
                        break
    
    uint32_t eax_18
    int32_t ecx_11
    int32_t edx_10
    eax_18, ecx_11, edx_10 = __aulldvrm(arg1[0xa], arg1[0xb], *arg1, arg1[1])
    int32_t var_24 = ecx_11
    int32_t ecx_12 = ebx_1
    void* result = nullptr
    int32_t edi_5 = 0
    uint32_t var_14_2 = eax_18
    int32_t var_10_2 = edx_10
    int32_t var_18 = 0
    
    if (arg4 u>= 0 && (arg4 u> 0 || arg3 u> 0))
        while (true)
            int32_t edx_11 = *arg1
            void* edx_12 = edx_11 - var_24
            int32_t eax_20 = sbb.d(arg1[1], ecx_12, edx_11 u< var_24)
            void* ecx_14 = arg3 - result
            int32_t ecx_16 = sbb.d(arg4, edi_5, arg3 u< result)
            
            if (ecx_16 u<= eax_20 && ecx_16 u>= eax_20)
                edi_5 = var_18
            
            void* var_c_1
            int32_t var_8_1
            
            if (ecx_16 u> eax_20 || (ecx_16 u>= eax_20 && ecx_14 u>= edx_12))
                var_c_1 = edx_12
                var_8_1 = eax_20
            else
                var_c_1 = ecx_14
                var_8_1 = ecx_16
            
            sub_5ab990(*(arg1[2] + (var_14_2 << 2)) + var_24, result + arg2, var_c_1)
            void* result_1 = result
            result += var_c_1
            ecx_12 = 0
            edi_5 = adc.d(edi_5, var_8_1, result_1 + var_c_1 u< result_1)
            uint32_t temp15_1 = var_14_2
            var_14_2 += 1
            var_18 = edi_5
            var_24 = 0
            var_10_2 = adc.d(var_10_2, 0, temp15_1 u>= 0xffffffff)
            
            if (edi_5 u>= arg4)
                if (edi_5 u> arg4)
                    break
                
                if (result u>= arg3)
                    break
    
    int32_t temp7 = arg1[0xa]
    arg1[0xa] += result
    int32_t ecx_19 = arg1[0xa]
    arg1[0xb] = adc.d(arg1[0xb], edi_5, temp7 + result u< temp7)
    int32_t eax_25 = arg1[0xb]
    int32_t temp8 = arg1[9]
    
    if (eax_25 u>= temp8 && (eax_25 u> temp8 || ecx_19 u> arg1[8]))
        arg1[8] = ecx_19
        arg1[9] = eax_25
    
    return result
}
