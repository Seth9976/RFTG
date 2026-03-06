// 函数名称: sub_65a390
// 虚拟地址: 0x65a390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65a390(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* esi = arg4
    int32_t* esi = arg4
    int32_t ecx = *esi
    int32_t temp0 = divs.dp.d(sx.q(arg3), ecx)
    int32_t result = 0
    
    if (temp0 s<= 0)
        return 0
    
    int32_t* var_18 = arg2
    int32_t var_88
    void* var_24 = arg2 - &var_88
    int32_t var_64
    void* var_28 = &var_64 - arg2
    int32_t var_34 = temp0
    
    while (true)
        int32_t ecx_5 = *esi
        int32_t edx_4 = esi[0xd]
        int32_t edi_2 = esi[0xb]
        int32_t ecx_6 = esi[0xc]
        int32_t* var_30_1 = var_18
        int32_t eax_4 = 0
        int32_t ebx_1 = 0
        int32_t esi_2 = edi_2 s>> 1
        int32_t var_20_1 = 0
        __builtin_memset(&var_88, 0, 0x20)
        int32_t __saved_ebp
        
        if (edx_4 == 1)
            if (ecx_5 s> 0)
                void* eax_14 = &(&__saved_ebp)[ecx_5 - 0x21]
                int32_t var_8_2 = ecx_5
                
                while (true)
                    int32_t eax_17 = *(var_24 + eax_14 - 4) - ecx_6
                    int32_t edx_17
                    
                    if (eax_17 s>= esi_2)
                        edx_17 = (eax_17 - esi_2) * 2
                    else
                        edx_17 = (esi_2 - eax_17) * 2 - 1
                    
                    if (edx_17 s< 0)
                        edx_17 = 0
                    else if (edx_17 s>= edi_2)
                        edx_17 = edi_2 - 1
                    
                    ebx_1 = ebx_1 * edi_2 + edx_17
                    int32_t temp3_1 = var_8_2
                    var_8_2 -= 1
                    *(eax_14 - 4) = eax_17 + ecx_6
                    
                    if (temp3_1 == 1)
                        break
                    
                    eax_14 -= 4
                
                var_20_1 = ebx_1
                eax_4 = 0
        else if (ecx_5 s> 0)
            int32_t edx_5 = edx_4 s>> 1
            int32_t var_14_1 = edx_5
            void* edi_3 = &(&__saved_ebp)[ecx_5 - 0x21]
            int32_t var_c_1 = ecx_5
            
            while (true)
                int32_t eax_7 = *(var_24 + edi_3 - 4)
                edi_3 -= 4
                int32_t temp0_1 = divs.dp.d(sx.q(eax_7 - ecx_6 + edx_5), edx_4)
                int32_t edx_10
                
                if (temp0_1 s>= esi_2)
                    edx_10 = (temp0_1 - esi_2) * 2
                else
                    edx_10 = (esi_2 - temp0_1) * 2 - 1
                
                int32_t var_10_1
                
                if (edx_10 s>= 0)
                    if (edx_10 s>= edi_2)
                        edx_10 = edi_2 - 1
                    
                    var_10_1 = edx_10
                else
                    var_10_1 = 0
                
                ebx_1 = edi_2 * var_20_1 + var_10_1
                int32_t temp4_1 = var_c_1
                var_c_1 -= 1
                var_20_1 = ebx_1
                *edi_3 = temp0_1 * edx_4 + ecx_6
                
                if (temp4_1 == 1)
                    break
                
                edx_5 = var_14_1
            
            eax_4 = 0
        
        int32_t* esi_3 = arg4
        
        if (*(*(esi_3[3] + 8) + (ebx_1 << 2)) s<= 0)
            int32_t i_1 = (edi_2 - 1) * edx_4 + ecx_6
            int32_t ecx_7 = esi_3[1]
            int32_t var_c_3 = 0xffffffff
            int32_t var_68
            __builtin_memset(&var_68, 0, 0x20)
            int32_t i_2 = i_1
            int32_t var_8_3 = 0
            
            if (ecx_7 s> 0)
                int32_t* var_10_2 = *(esi_3[3] + 8)
                int32_t ecx_25
                
                do
                    if (*var_10_2 s> 0)
                        int32_t ebx_5 = ecx_5
                        int32_t esi_4 = 0
                        int32_t edi_4 = 0
                        int32_t ecx_11 = 0
                        
                        if (ebx_5 s>= 2)
                            int32_t* eax_19 = var_18
                            int32_t i_3 = ((ebx_5 - 2) u>> 1) + 1
                            int32_t ecx_12 = i_3 * 2
                            int32_t i
                            
                            do
                                int32_t ecx_15 = *(eax_19 + var_28 - 4) - *eax_19
                                eax_19 = &eax_19[2]
                                esi_4 += ecx_15 * ecx_15
                                int32_t ecx_19 = *(eax_19 + var_28 - 8) - eax_19[-1]
                                edi_4 += ecx_19 * ecx_19
                                i = i_3
                                i_3 -= 1
                            while (i != 1)
                            i_1 = i_2
                            eax_4 = 0
                            ecx_11 = ecx_12
                            ebx_5 = ecx_5
                        
                        if (ecx_11 s< ebx_5)
                            int32_t eax_21 = (&var_68)[ecx_11] - var_18[ecx_11]
                            eax_4 = eax_21 * eax_21
                        
                        int32_t eax_22 = eax_4 + edi_4 + esi_4
                        
                        if (var_c_3 == 0xffffffff || eax_22 s< var_c_3)
                            ebx_1 = var_8_3
                            __builtin_memcpy(&var_88, &var_68, 0x20)
                            var_c_3 = eax_22
                            var_20_1 = ebx_1
                        else
                            ebx_1 = var_20_1
                        
                        eax_4 = 0
                    
                    int32_t ecx_22 = 0
                    
                    if (var_68 s>= i_1)
                        int32_t* eax_23 = &var_68
                        
                        do
                            ecx_22 += 1
                            *eax_23 = 0
                            eax_23 = &(&__saved_ebp)[ecx_22 - 0x19]
                        while ((&var_68)[ecx_22] s>= i_1)
                        
                        eax_4 = 0
                    
                    int32_t esi_5 = (&var_68)[ecx_22]
                    
                    if (esi_5 s>= 0)
                        (&__saved_ebp)[ecx_22 - 0x19] = esi_5 + edx_4
                    
                    var_10_2 = &var_10_2[1]
                    (&__saved_ebp)[ecx_22 - 0x19] = neg.d((&__saved_ebp)[ecx_22 - 0x19])
                    ecx_25 = var_8_3 + 1
                    var_8_3 = ecx_25
                while (ecx_25 s< ecx_7)
                esi_3 = arg4
        
        if (ebx_1 s> 0xffffffff)
            int32_t ecx_26 = 0
            
            if (ecx_5 s> 0)
                do
                    *var_30_1 -= (&var_88)[ecx_26]
                    ecx_26 += 1
                    var_30_1 = &var_30_1[1]
                while (ecx_26 s< ecx_5)
        
        result += sub_6510c0(esi_3, ebx_1, arg1)
        var_18 = &var_18[ecx]
        var_28 += neg.d(ecx) * 4
        var_24 += ecx << 2
        int32_t temp2_1 = var_34
        var_34 -= 1
        
        if (temp2_1 == 1)
            break
        
        esi = arg4
    
    return result
}
