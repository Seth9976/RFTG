// 函数名称: sub_6603e0
// 虚拟地址: 0x6603e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6603e0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result_1 = 0
    int32_t result_1 = 0
    int32_t result = sub_65fd60(arg1, arg2, arg3)
    
    if (result s>= 0)
        result = sub_65f2a0(arg1)
        
        if (result == 0)
            while (true)
                void* ebx_1 = &arg1[0x1e]
                void var_40
                int32_t eax_1 = sub_646450(ebx_1, &var_40)
                
                if (eax_1 s> 0)
                    int32_t result_2 = sub_68b570((arg1[0x18] << 5) + arg1[0x12], &var_40)
                    
                    if (result_2 s>= 0)
                        if (result_1 != 0)
                            int32_t eax_6
                            int32_t edx_1
                            edx_1:eax_6 = sx.q((result_1 + result_2) s>> 2)
                            int32_t temp6_1 = arg1[0x14]
                            arg1[0x14] += eax_6
                            arg1[0x15] = adc.d(arg1[0x15], edx_1, temp6_1 + eax_6 u< temp6_1)
                        
                        int32_t eax_10
                        int32_t edx_3
                        edx_3:eax_10 = sx.q((sub_6469a0(arg1[0x12], 1) + result_2) s>> 2)
                        int32_t edx_4 = adc.d(edx_3, arg1[0x15], eax_10 + arg1[0x14] u< eax_10)
                        
                        if (edx_4 s<= arg3 && (edx_4 s< arg3 || eax_10 + arg1[0x14] u< arg2))
                            sub_646420(ebx_1, nullptr)
                            sub_68b490(&arg1[0x94], &var_40)
                            sub_64a4a0(&arg1[0x78], &arg1[0x94])
                            int32_t var_30
                            int32_t var_2c
                            
                            if (var_2c s>= 0xffffffff && (var_2c s> 0xffffffff || var_30 u> 0xffffffff))
                                int32_t edi_1 = arg1[0x18]
                                void* ebx_3 = arg1[0x11]
                                int32_t eax_13 = edi_1 * 2
                                int32_t edx_6 = var_30 - *(ebx_3 + (eax_13 << 3))
                                int32_t ecx_6 = sbb.d(var_2c, *(ebx_3 + (eax_13 << 3) + 4), 
                                    var_30 u< *(ebx_3 + (eax_13 << 3)))
                                arg1[0x14] = edx_6
                                arg1[0x15] = ecx_6
                                int32_t ecx_7 = 0
                                int32_t temp13_1 = arg1[0x15]
                                
                                if (temp13_1 s<= 0 && (temp13_1 s< 0 || edx_6 u< 0))
                                    arg1[0x14] = 0
                                    arg1[0x15] = 0
                                
                                if (edi_1 s> 0)
                                    int32_t* eax_14 = ebx_3 + 8
                                    
                                    do
                                        int32_t edx_7 = *eax_14
                                        int32_t temp14_1 = arg1[0x14]
                                        arg1[0x14] += edx_7
                                        arg1[0x15] =
                                            adc.d(arg1[0x15], eax_14[1], temp14_1 + edx_7 u< temp14_1)
                                        ecx_7 += 1
                                        eax_14 = &eax_14[4]
                                    while (ecx_7 s< edi_1)
                            
                            result_1 = result_2
                            continue
                    else
                        sub_646420(ebx_1, nullptr)
                        continue
                else if (eax_1 s>= 0 || eax_1 == 0xfffffffd)
                    void var_20
                    int32_t eax_15
                    int32_t edx_9
                    eax_15, edx_9 = sub_65e4c0(arg1, &var_20, 0xffffffff, 0xffffffff)
                    
                    if (edx_9 s>= 0 && (edx_9 s> 0 || eax_15 u>= 0))
                        if (sub_645520(&var_20) != 0)
                            sub_649c30(&arg1[0x78])
                            sub_649bb0(&arg1[0x94])
                            arg1[0x16] = 2
                        
                        if (arg1[0x16] s< 3)
                            uint32_t i = sub_6455f0(&var_20)
                            int32_t edx_11 = arg1[0xd]
                            int32_t eax_18 = 0
                            
                            if (edx_11 s> 0)
                                int32_t* ecx_9 = arg1[0x10]
                                
                                while (*ecx_9 != i)
                                    eax_18 += 1
                                    ecx_9 = &ecx_9[1]
                                    
                                    if (eax_18 s>= edx_11)
                                        break
                            
                            if (eax_18 == edx_11)
                                continue
                            else
                                arg1[0x18] = eax_18
                                arg1[0x16] = 3
                                ebx_1 = &arg1[0x1e]
                                arg1[0x17] = sub_6455f0(&var_20)
                                sub_6462e0(ebx_1, i)
                                result = sub_65f2a0(arg1)
                                
                                if (result != 0)
                                    break
                                
                                result_1 = result
                        
                        sub_645f20(ebx_1, &var_20)
                        continue
                
                long double x87_r7_1 = float.t(0)
                void* ecx_10 = arg1[0x12]
                *(arg1 + 0x68) = fconvert.d(x87_r7_1)
                *(arg1 + 0x70) = fconvert.d(x87_r7_1)
                int32_t ebx_4 = sub_68b620(ecx_10)
                int32_t var_10_2 = ebx_4
                int32_t eax_22
                int32_t edx_13
                eax_22, edx_13 = __allshr(arg2, arg3, ebx_4.b)
                int32_t eax_23
                int32_t edx_14
                eax_23, edx_14 = __allshl(eax_22, edx_13, ebx_4.b)
                int32_t temp2_1 = arg1[0x15]
                
                if (temp2_1 s<= edx_14 && (temp2_1 s< edx_14 || arg1[0x14] u< eax_23))
                    while (true)
                        int32_t eax_26
                        int32_t edx_17
                        eax_26, edx_17 = __allshr(arg2 - arg1[0x14], 
                            sbb.d(arg3, arg1[0x15], arg2 u< arg1[0x14]), ebx_4.b)
                        int32_t eax_28 = sub_64ae40(&arg1[0x78], nullptr)
                        int32_t edi_3 = eax_28
                        int32_t eax_29
                        int32_t edx_18
                        edx_18:eax_29 = sx.q(eax_28)
                        
                        if (edx_18 s>= edx_17 && (edx_18 s> edx_17 || eax_29 u> eax_26))
                            edi_3 = eax_26
                        
                        sub_64aea0(&arg1[0x78], edi_3)
                        int32_t eax_33
                        int32_t edx_19
                        edx_19:eax_33 = sx.q(edi_3 << var_10_2.b)
                        int32_t temp9_1 = arg1[0x14]
                        arg1[0x14] += eax_33
                        arg1[0x15] = adc.d(arg1[0x15], edx_19, temp9_1 + eax_33 u< temp9_1)
                        int32_t eax_35
                        void* edx_20
                        edx_20:eax_35 = sx.q(edi_3)
                        
                        if (edx_20 s<= edx_17 && (edx_20 s< edx_17 || eax_35 u< eax_26))
                            int32_t var_50_10 = 1
                            int32_t var_54_11 = 1
                            
                            if (sub_65f340(arg1, edx_20, var_10_2, 0) s<= 0)
                                int32_t eax_38
                                int32_t edx_21
                                eax_38, edx_21 = sub_65f810(arg1, 0xffffffff)
                                arg1[0x14] = eax_38
                                arg1[0x15] = edx_21
                        
                        int32_t eax_39 = arg1[0x15]
                        
                        if (eax_39 s>= edx_14)
                            if (eax_39 s> edx_14)
                                break
                            
                            if (arg1[0x14] u>= eax_23)
                                break
                        
                        ebx_4 = var_10_2
                
                return 0
    
    return result
}
