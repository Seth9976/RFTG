// 函数名称: sub_65f340
// 虚拟地址: 0x65f340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_65f340(int32_t* arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* edi
    void* edi
    void* var_5c = edi
    
    while (true)
        int32_t eax = arg1[0x16]
        
        if (eax == 3)
            void* var_60_1
            
            if (arg1[1] == 0)
                var_60_1 = arg1[0x12]
            else
                var_60_1 = (arg1[0x18] << 5) + arg1[0x12]
            
            if (sub_64b6b0(&arg1[0x78], var_60_1) != 0)
                return 0xffffff77
            
            sub_649a50(&arg1[0x78], &arg1[0x94])
            long double x87_r7_1 = float.t(0)
            *(arg1 + 0x68) = fconvert.d(x87_r7_1)
            *(arg1 + 0x70) = fconvert.d(x87_r7_1)
            arg1[0x16] = 4
            goto label_65f3b3
        
        int32_t* ecx
        
        if (eax == 4)
        label_65f3b3:
            char eax_6 = sub_68b620(arg1[0x12])
            
            while (true)
                void* edi_2 = arg2
                void var_50
                
                if (edi_2 == 0)
                    edi_2 = &var_50
                int32_t eax_8
                eax_8, ecx = sub_646420(&arg1[0x1e], edi_2)
                arg2 = nullptr
                
                if (eax_8 == 0xffffffff)
                    return 0xfffffffd
                
                if (eax_8 s<= 0)
                    break
                
                int32_t ebx_1 = *(edi_2 + 0x14)
                int32_t var_18_1 = *(edi_2 + 0x10)
                int32_t var_14_1 = ebx_1
                
                if (sub_68b2f0(&arg1[0x94], edi_2) == 0)
                    if (sub_64ae40(&arg1[0x78], nullptr) != 0)
                        return 0xffffff7f
                    
                    sub_64a4a0(&arg1[0x78], &arg1[0x94])
                    *(arg1 + 0x70) = fconvert.d(float.t(sub_64ae40(&arg1[0x78], nullptr) << eax_6)
                        + fconvert.t(*(arg1 + 0x70)))
                    int32_t edx_13 = var_18_1
                    *(arg1 + 0x68) = fconvert.d(float.t(*(edi_2 + 4) * 8) + fconvert.t(*(arg1 + 0x68)))
                    
                    if ((edx_13 & ebx_1) != 0xffffffff && *(edi_2 + 0xc) == 0)
                        int32_t edi_6 = arg1[1]
                        int32_t var_8_2
                        int32_t eax_28
                        
                        if (edi_6 == 0)
                            var_8_2 = 0
                            eax_28 = 0
                        else
                            eax_28 = arg1[0x18]
                            var_8_2 = eax_28
                        
                        if (edi_6 != 0 && eax_28 s> 0)
                            int32_t ecx_8 = arg1[0x11]
                            int32_t eax_29 = eax_28 * 2
                            int32_t temp2_1 = edx_13
                            edx_13 -= *(ecx_8 + (eax_29 << 3))
                            ebx_1 = sbb.d(ebx_1, *(ecx_8 + (eax_29 << 3) + 4), 
                                temp2_1 u< *(ecx_8 + (eax_29 << 3)))
                            var_18_1 = edx_13
                            var_14_1 = ebx_1
                        
                        if (ebx_1 s<= 0 && (ebx_1 s< 0 || edx_13 u< 0))
                            var_18_1 = 0
                            var_14_1 = 0
                        
                        int32_t var_20_1 = 0
                        int32_t var_1c_1 = 0
                        int32_t edi_7 = 0
                        int32_t ebx_2 = 0
                        int32_t ecx_11 = var_8_2
                        int32_t eax_33
                        int32_t edx_14
                        edx_14:eax_33 = sx.q(sub_64ae40(&arg1[0x78], nullptr) << eax_6)
                        int32_t var_18_2 = var_18_1 - eax_33
                        int32_t var_14_2 = sbb.d(var_14_1, edx_14, var_18_1 u< eax_33)
                        int32_t eax_34 = 0
                        
                        if (ecx_11 s>= 2)
                            void* eax_36 = arg1[0x11] + 0x18
                            int32_t i_2 = ((ecx_11 - 2) u>> 1) + 1
                            int32_t i
                            
                            do
                                int32_t ecx_15 = *(eax_36 - 0x10)
                                int32_t temp9_1 = var_20_1
                                var_20_1 += ecx_15
                                var_1c_1 = adc.d(var_1c_1, *(eax_36 - 0xc), temp9_1 + ecx_15 u< temp9_1)
                                int32_t temp10_1 = edi_7
                                edi_7 += *eax_36
                                ebx_2 = adc.d(ebx_2, *(eax_36 + 4), temp10_1 + *eax_36 u< temp10_1)
                                eax_36 += 0x20
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                            eax_34 = (((ecx_11 - 2) u>> 1) + 1) * 2
                            ecx_11 = var_8_2
                        
                        if (eax_34 s< ecx_11)
                            int32_t eax_37 = eax_34 * 2
                            int32_t ecx_17 = *(arg1[0x11] + (eax_37 << 3) + 8)
                            int32_t temp8_1 = var_18_2
                            var_18_2 += ecx_17
                            var_14_2 = adc.d(var_14_2, *(arg1[0x11] + (eax_37 << 3) + 0xc), 
                                temp8_1 + ecx_17 u< temp8_1)
                        
                        int32_t edi_8 = edi_7 + var_20_1
                        arg1[0x14] = edi_8 + var_18_2
                        arg1[0x15] = adc.d(adc.d(ebx_2, var_1c_1, edi_7 + var_20_1 u< edi_7), var_14_2, 
                            edi_8 + var_18_2 u< edi_8)
                    
                    return 1
        
        void var_30
        
        if (arg1[0x16] s>= 2)
            while (true)
                if (arg3 == 0)
                    return 0
                
                int32_t eax_13
                int32_t edx_3
                eax_13, edx_3 = sub_65e4c0(arg1, &var_30, 0xffffffff, 0xffffffff)
                
                if (edx_3 s>= 0 && (edx_3 s> 0 || eax_13 u>= 0))
                    int32_t* var_2c
                    ecx = var_2c
                    *(arg1 + 0x68) = fconvert.d(float.t(ecx << 3) + fconvert.t(*(arg1 + 0x68)))
                    
                    if (arg1[0x16] != 4)
                        break
                    
                    uint32_t eax_14
                    eax_14, ecx = sub_6455f0(&var_30)
                    
                    if (arg1[0x17] == eax_14)
                        goto label_65f4ec
                    
                    if (sub_645520(&var_30) == 0)
                        continue
                    else if (arg4 != 0)
                        sub_649c30(&arg1[0x78])
                        sub_649bb0(&arg1[0x94])
                        bool cond:2_1 = arg1[1] != 0
                        arg1[0x16] = 2
                        
                        if (cond:2_1)
                            goto label_65f509
                        
                        sub_646a00(arg1[0x12])
                        ecx = sub_646920(arg1[0x13])
                        goto label_65f4ec
                
                return 0xfffffffe
            
            goto label_65f4f5
        
    label_65f4ec:
        
        if (arg1[0x16] != 4)
        label_65f4f5:
            
            if (arg1[0x16] s< 3)
                if (arg1[1] == 0)
                    int32_t* edx_8 = arg1[0x13]
                    int32_t var_60_12 = 0
                    int32_t var_64_9 = 0
                    int32_t result = sub_65e940(&var_30, edx_8, ecx, arg1, arg1[0x12], edx_8)
                    
                    if (result != 0)
                        return result
                    
                    int32_t ecx_5 = arg1[0x72]
                    arg1[0x18] += 1
                    arg1[0x17] = ecx_5
                else
                label_65f509:
                    uint32_t i_1 = sub_6455f0(&var_30)
                    edi = arg1[0xd]
                    ecx = nullptr
                    
                    if (edi s> 0)
                        int32_t* edx_7 = arg1[0x10]
                        ecx = nullptr
                        
                        while (*edx_7 != i_1)
                            ecx += 1
                            edx_7 = &edx_7[1]
                            
                            if (ecx s>= edi)
                                break
                    
                    if (ecx == edi)
                        continue
                    else
                        arg1[0x18] = ecx
                        arg1[0x17] = i_1
                        sub_6462e0(&arg1[0x1e], i_1)
                        arg1[0x16] = 3
        
        ecx = sub_645f20(&arg1[0x1e], &var_30)
}
