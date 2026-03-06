// 函数名称: sub_65fd60
// 虚拟地址: 0x65fd60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65fd60(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    int32_t eax
    int32_t edx
    eax, edx = sub_65f810(esi, 0xffffffff)
    int32_t var_24 = eax
    int32_t var_20 = edx
    
    if (esi[0x16] s< 2)
        return 0xffffff7d
    
    if (esi[1] == 0)
        return 0xffffff76
    
    if (arg3 s< 0 || (arg3 s<= 0 && arg2 u< 0) || arg3 s> edx || (arg3 s>= edx && arg2 u> eax))
        return 0xffffff7d
    
    int32_t edi_1 = esi[0xd]
    int32_t* edi_2 = edi_1 - 1
    arg1 = edi_2
    
    if (edi_1 - 1 s>= 0)
        int32_t* ecx_4 = esi[0x11] + edi_2 * 0x10 + 8
        int32_t* temp19_1
        
        do
            int32_t temp8_1 = eax
            eax -= *ecx_4
            edx = sbb.d(edx, ecx_4[1], temp8_1 u< *ecx_4)
            
            if (arg3 s> edx)
                break
            
            if (arg3 s>= edx && arg2 u>= eax)
                break
            
            ecx_4 -= 0x10
            temp19_1 = edi_2
            edi_2 -= 1
        while (temp19_1 - 1 s>= 0)
        arg1 = edi_2
        var_20 = edx
        var_24 = eax
    
    int32_t edx_1 = esi[0xe]
    int32_t* ecx_5 = edx_1 + (edi_2 << 3)
    int32_t* edi_4 = (edi_2 << 4) + esi[0x11]
    int32_t result_2 = *(edx_1 + (edi_2 << 3) + 8)
    int32_t ebx_2 = edi_4[2]
    int32_t ecx_6 = ecx_5[1]
    int32_t result_13 = *ecx_5
    int32_t eax_5 = *edi_4
    int32_t var_18 = ecx_5[3]
    int32_t edx_3 = edi_4[1]
    int32_t var_40 = adc.d(edi_4[3], edx_3, ebx_2 + eax_5 u< ebx_2)
    int32_t edi_8 = eax_5 - var_24
    int32_t var_3c = eax_5
    int32_t edi_9 = edi_8 + arg2
    int32_t var_8 = ecx_6
    int32_t eax_8 = adc.d(sbb.d(edx_3, var_20, eax_5 u< var_24), arg3, edi_8 + arg2 u< edi_8)
    int32_t var_38 = edx_3
    int32_t var_44 = ebx_2 + eax_5
    int32_t result_1 = result_13
    int32_t var_30 = ecx_6
    int32_t result
    
    if (ecx_6 s> var_18 || (ecx_6 s>= var_18 && result_13 u>= result_2))
    label_660163:
        int32_t var_ac_7 = var_30
        int32_t result_10 = result_1
        int32_t result_6
        int32_t edx_21
        edx_21:result_6 = sx.q(sub_65e460(esi, result_1, var_30))
        result = result_6
        esi[0x14] = 0xffffffff
        esi[0x15] = 0xffffffff
        
        if ((result_6 | edx_21) == 0)
            void var_5c
            int32_t result_7
            int32_t edx_22
            result_7, edx_22 = sub_65e4c0(esi, &var_5c, 0xffffffff, 0xffffffff)
            result = result_7
            
            if (edx_22 s>= 0 && (edx_22 s> 0 || result_7 u>= 0))
                if (arg1 == esi[0x18])
                    sub_64a430(&esi[0x78])
                else
                    sub_65f310(esi)
                    int32_t ecx_33 = esi[0x10]
                    esi[0x18] = arg1
                    esi[0x17] = *(ecx_33 + (arg1 << 2))
                    esi[0x16] = 3
                
                sub_6462e0(&esi[0x1e], esi[0x17])
                sub_645f20(&esi[0x1e], &var_5c)
                void var_9c
                int32_t eax_43
                int32_t edx_24
                edx_24:eax_43 = sx.q(sub_646450(&esi[0x1e], &var_9c))
                int32_t ecx_36 = eax_43 | edx_24
                
                if (ecx_36 == 0)
                label_660257:
                    int32_t var_ac_10 = var_30
                    int32_t result_11 = result_1
                    int32_t result_8
                    int32_t edx_27
                    edx_27:result_8 = sx.q(sub_65e460(esi, var_30, ecx_36))
                    result = result_8
                    
                    if (edx_27 s>= 0 && (edx_27 s> 0 || result_8 u>= 0))
                        int32_t result_14
                        int32_t edx_28
                        result_14, edx_28 = sub_65e5d0(esi, &var_5c)
                        int32_t edi_18 = edx_28
                        int32_t result_9 = result_14
                        result = result_9
                        
                        if (edi_18 s>= 0 && (edi_18 s> 0 || result_9 u>= 0))
                            while (true)
                                if (sub_6455f0(&var_5c) == esi[0x17])
                                    int32_t eax_52
                                    int32_t edx_29
                                    eax_52, edx_29 = sub_645560(&var_5c)
                                    int32_t eax_53
                                    
                                    if (edx_29 s<= 0xffffffff
                                            && (edx_29 s< 0xffffffff || eax_52 u<= 0xffffffff))
                                        eax_53 = sub_645500(&var_5c)
                                    
                                    if (edx_29 s> 0xffffffff
                                            || (edx_29 s>= 0xffffffff && eax_52 u> 0xffffffff)
                                            || eax_53 == 0)
                                        int32_t result_12 = result_9
                                        return sub_65f8a0(esi, result_9, edi_18)
                                
                                esi[3] = edi_18
                                esi[2] = result_9
                                int32_t result_15
                                int32_t edx_30
                                result_15, edx_30 = sub_65e5d0(esi, &var_5c)
                                edi_18 = edx_30
                                result_9 = result_15
                                
                                if (edi_18 s<= 0)
                                    if (edi_18 s< 0)
                                        break
                                    
                                    if (result_9 u< 0)
                                        break
                            
                            result = result_9
                else
                    while (true)
                        int32_t var_8c
                        int32_t var_88
                        
                        if (edx_24 s< 0 || (edx_24 s<= 0 && eax_43 u< 0))
                            result = 0xffffff78
                        else if ((var_8c & var_88) != 0xffffffff)
                            int32_t edi_20 = esi[0x11]
                            int32_t eax_57 = esi[0x18] * 2
                            int32_t ecx_39 = var_8c - *(edi_20 + (eax_57 << 3))
                            int32_t edx_31 = sbb.d(var_88, *(edi_20 + (eax_57 << 3) + 4), 
                                var_8c u< *(edi_20 + (eax_57 << 3)))
                            esi[0x14] = ecx_39
                            esi[0x15] = edx_31
                            
                            if (edx_31 s<= 0 && (edx_31 s< 0 || ecx_39 u< 0))
                                esi[0x14] = 0
                                esi[0x15] = 0
                            
                            int32_t temp29_1 = esi[0x14]
                            esi[0x14] += var_24
                            esi[0x15] = adc.d(esi[0x15], var_20, temp29_1 + var_24 u< temp29_1)
                            int32_t temp30_1 = esi[0x15]
                            
                            if (temp30_1 s<= arg3 && (temp30_1 s< arg3 || esi[0x14] u<= arg2))
                                int32_t eax_58
                                int32_t edx_33
                                eax_58, edx_33 = sub_65f810(esi, 0xffffffff)
                                
                                if (arg3 s<= edx_33 && (arg3 s< edx_33 || arg2 u<= eax_58))
                                    long double x87_r7_4 = float.t(0)
                                    *(esi + 0x68) = fconvert.d(x87_r7_4)
                                    *(esi + 0x70) = fconvert.d(x87_r7_4)
                                    return 0
                            
                            result = 0xffffff7f
                        else
                            sub_646420(&esi[0x1e], nullptr)
                            edx_24:eax_43 = sx.q(sub_646450(&esi[0x1e], &var_9c))
                            ecx_36 = eax_43 | edx_24
                            
                            if (ecx_36 == 0)
                                goto label_660257
                            
                            continue
                        int32_t var_10_2 = 0xffffffff
                        break
    else
        while (true)
            int32_t ecx_9 = result_2 - result_13
            int32_t eax_11 = sbb.d(var_18, var_8, result_2 u< result_13)
            int32_t var_60_1 = eax_11
            int32_t result_16
            int32_t edi_14
            
            if (eax_11 s> 0 || (eax_11 s>= 0 && ecx_9 u>= 0x10000))
                int32_t var_68_1 = sbb.d(eax_8, var_38, edi_9 u< var_3c)
                int32_t var_50_1 = sbb.d(var_40, var_38, var_44 u< var_3c)
                int32_t eax_15
                int32_t edx_8
                eax_15, edx_8 = __ftol2(float.t((edi_9 - var_3c).q) * float.t(ecx_9.q)
                    / float.t((var_44 - var_3c).q))
                int32_t ebx_5 = eax_15 + result_13
                result_16 = ebx_5 - 0x10000
                edi_14 = sbb.d(adc.d(edx_8, var_8, eax_15 + result_13 u< eax_15), 0, ebx_5 u< 0x10000)
                int32_t eax_17 = adc.d(var_8, 0, result_13 u>= 0xffff0000)
                
                if (edi_14 s<= eax_17 && (edi_14 s< eax_17 || result_16 u< result_13 + 0x10000))
                    edi_14 = var_8
                    result_16 = result_13
            else
                edi_14 = var_8
                result_16 = result_13
            
            if (result_16 != esi[2] || edi_14 != esi[3])
                int32_t ecx_13 = *esi
                int32_t eax_20
                
                if (ecx_13 == 0)
                    eax_20 = 0xffffff7f
                else
                    int32_t eax_18 = esi[0xb1]
                    int32_t eax_19
                    
                    if (eax_18 != 0)
                        eax_19 = eax_18(ecx_13, result_16, edi_14, 0)
                    
                    if (eax_18 == 0 || eax_19 == 0xffffffff)
                        eax_20 = 0xffffff80
                    else
                        esi[2] = result_16
                        esi[3] = edi_14
                        sub_646250(&esi[6])
                        eax_20 = 0
                
                int32_t result_3
                int32_t edx_9
                edx_9:result_3 = sx.q(eax_20)
                result = result_3
                
                if ((result_3 | edx_9) != 0)
                    break
            
            while (true)
                void var_7c
                int32_t result_4
                int32_t edx_12
                result_4, edx_12 = sub_65e4c0(esi, &var_7c, result_2 - esi[2], 
                    sbb.d(var_18, esi[3], result_2 u< esi[2]))
                result = result_4
                
                if (result_4 == 0xffffff80 && edx_12 == 0xffffffff)
                    goto label_6603a2
                
                int32_t eax_29
                
                if (edx_12 s<= 0 && (edx_12 s< 0 || result u< 0))
                    int32_t eax_25 = adc.d(var_8, 0, result_13 u>= 0xffffffff)
                    
                    if (edi_14 s< eax_25)
                        goto label_660163
                    
                    if (edi_14 s<= eax_25 && result_16 u<= result_13 + 1)
                        goto label_660163
                    
                    if ((result_16 | edi_14) == 0)
                        goto label_6603a2
                    
                    int32_t result_18 = result_16
                    result_16 -= 0x10000
                    edi_14 = adc.d(edi_14, 0xffffffff, result_18 u>= 0x10000)
                    
                    if (edi_14 s<= var_8 && (edi_14 s< var_8 || result_16 u<= result_13))
                        result_16 = result_13 + 1
                        edi_14 = eax_25
                    
                    int32_t ecx_17 = *esi
                    
                    if (ecx_17 == 0)
                        eax_29 = 0xffffff7f
                    else
                        int32_t eax_26 = esi[0xb1]
                        int32_t eax_27
                        
                        if (eax_26 != 0)
                            eax_27 = eax_26(ecx_17, result_16, edi_14, 0)
                        
                        if (eax_26 == 0 || eax_27 == 0xffffffff)
                            eax_29 = 0xffffff80
                        else
                            esi[2] = result_16
                            esi[3] = edi_14
                            sub_646250(&esi[6])
                            eax_29 = 0
                    
                    goto label_660110
                
                if (sub_6455f0(&var_7c) == *(esi[0x10] + (arg1 << 2)))
                    int32_t eax_31
                    int32_t edx_16
                    eax_31, edx_16 = sub_645560(&var_7c)
                    
                    if ((eax_31 & edx_16) != 0xffffffff)
                        if (edx_16 s> eax_8 || (edx_16 s>= eax_8 && eax_31 u>= edi_9))
                            int32_t ecx_28 = adc.d(var_8, 0, result_13 u>= 0xffffffff)
                            
                            if (edi_14 s< ecx_28)
                                goto label_660163
                            
                            if (edi_14 s<= ecx_28 && result_16 u<= result_13 + 1)
                                goto label_660163
                            
                            int32_t ecx_30
                            
                            if (result_2 == esi[2])
                                ecx_30 = var_18
                            
                            if (result_2 != esi[2] || ecx_30 != esi[3])
                                var_18 = edi_14
                                edi_14 = var_8
                                result_2 = result_16
                                var_44 = eax_31
                                var_40 = edx_16
                            label_660146:
                                
                                if (edi_14 s< var_18)
                                    break
                                
                                if (edi_14 s> var_18)
                                    goto label_660163
                                
                                if (result_13 u< result_2)
                                    break
                                
                                goto label_660163
                            
                            int32_t result_19 = result_16
                            result_16 -= 0x10000
                            edi_14 = adc.d(edi_14, 0xffffffff, result_19 u>= 0x10000)
                            result_2 = result
                            var_18 = edx_12
                            
                            if (edi_14 s<= var_8 && (edi_14 s< var_8 || result_16 u<= result_13))
                                result_16 = result_13 + 1
                                edi_14 = ecx_28
                            
                            int32_t var_ac_6 = edi_14
                            int32_t result_17 = result_16
                            eax_29 = sub_65e460(esi, result, ecx_30)
                        label_660110:
                            int32_t result_5
                            int32_t edx_18
                            edx_18:result_5 = sx.q(eax_29)
                            result = result_5
                            
                            if ((result_5 | edx_18) != 0)
                                goto label_6603a2
                        else
                            result_16 = esi[2]
                            edi_14 = esi[3]
                            result_1 = result
                            var_30 = edx_12
                            var_3c = eax_31
                            int32_t eax_33 = sbb.d(eax_8, edx_16, edi_9 u< eax_31)
                            result_13 = result_16
                            var_8 = edi_14
                            var_38 = edx_16
                            
                            if (eax_33 s> 0 || (eax_33 s>= 0 && edi_9 - eax_31 u> 0xac44))
                                goto label_660146
                
                if (var_8 s> var_18)
                    goto label_660163
                
                if (var_8 s>= var_18)
                    if (result_13 u>= result_2)
                        goto label_660163
    
    label_6603a2:
    esi[0x14] = 0xffffffff
    esi[0x15] = 0xffffffff
    sub_649c30(&esi[0x78])
    sub_649bb0(&esi[0x94])
    esi[0x16] = 2
    return result
}
