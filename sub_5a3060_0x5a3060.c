// 函数名称: sub_5a3060
// 虚拟地址: 0x5a3060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5a3060(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t eax = *(arg3 + 0x90)
    int32_t eax = *(arg3 + 0x90)
    int32_t ebx = *(arg3 + 0x64)
    int32_t edi = *(arg3 + 0x40)
    int32_t edx_2 = *(arg3 + 0x78) + ((eax * edi) << 2)
    void* esi_1 = *(arg3 + 0x68)
    int32_t esi_2 = *(arg3 + 0x80)
    int32_t ecx_1 = *(arg3 + 4) + (eax << 1)
    int32_t var_28 = edx_2
    int32_t var_14 = ebx
    
    if (edi - 1 u<= 3)
        switch (edi)
            case 1
                int32_t esi_4 = 0
                int32_t var_8 = 0
                
                if (ecx_1 s> 0)
                    float* edi_5 = edx_2 - eax * 4
                    int32_t ecx_3 = neg.d(eax)
                    int32_t var_20_1 = 0
                    int32_t var_30_1 = ecx_3
                    void* var_24_1 = esi_1 + 8
                    
                    while (true)
                        int32_t eax_6 = *(var_14 + (esi_4 << 3) + 4)
                        int32_t ebx_1 = *(ebx + (esi_4 << 3))
                        int32_t esi_5 = ebx_1
                        
                        if (ebx_1 s<= eax_6)
                            if (eax_6 - ebx_1 + 1 s>= 4)
                                int32_t i_9 = ((eax_6 - ebx_1 - 3) u>> 2) + 1
                                void* eax_9 = arg4 + (ebx_1 << 2) + 8
                                void* ecx_5 = var_24_1
                                esi_5 = ebx_1 + (i_9 << 2)
                                int32_t i
                                
                                do
                                    long double x87_r7_1 = fconvert.t(*(ecx_5 - 8))
                                    ecx_5 += 0x10
                                    eax_9 += 0x10
                                    i = i_9
                                    i_9 -= 1
                                    *(eax_9 - 0x18) = fconvert.s(x87_r7_1 * fconvert.t(*edi_5)
                                        + fconvert.t(*(eax_9 - 0x18)))
                                    *(eax_9 - 0x14) = fconvert.s(
                                        fconvert.t(*(ecx_5 - 0x14)) * fconvert.t(*edi_5)
                                        + fconvert.t(*(eax_9 - 0x14)))
                                    *(eax_9 - 0x10) = fconvert.s(
                                        fconvert.t(*edi_5) * fconvert.t(*(ecx_5 - 0x10))
                                        + fconvert.t(*(eax_9 - 0x10)))
                                    *(eax_9 - 0xc) = fconvert.s(
                                        fconvert.t(*(ecx_5 - 0xc)) * fconvert.t(*edi_5)
                                        + fconvert.t(*(eax_9 - 0xc)))
                                while (i != 1)
                                ecx_3 = var_30_1
                                edx_2 = var_28
                            
                            if (esi_5 s<= eax_6)
                                float* eax_13 = esi_1 + ((var_20_1 - ebx_1 + esi_5) << 2)
                                
                                do
                                    long double x87_r7_14 =
                                        fconvert.t(*eax_13) * fconvert.t(*(edx_2 + (ecx_3 << 2)))
                                    esi_5 += 1
                                    eax_13 = &eax_13[1]
                                    *(arg4 + (esi_5 << 2) - 4) =
                                        fconvert.s(x87_r7_14 + fconvert.t(*(arg4 + (esi_5 << 2) - 4)))
                                while (esi_5 s<= eax_6)
                        
                        var_20_1 += esi_2
                        var_24_1 += esi_2 * 4
                        int32_t eax_15 = var_8 + 1
                        ecx_3 += 1
                        edi_5 = &edi_5[1]
                        var_8 = eax_15
                        var_30_1 = ecx_3
                        
                        if (eax_15 s>= ecx_1)
                            break
                        
                        esi_4 = var_8
                        ebx = var_14
            case 2
                int32_t esi_8 = 0
                int32_t var_8_1 = 0
                
                if (ecx_1 s> 0)
                    void* var_20_2 = esi_1
                    int32_t var_24_2 = 0
                    float* ecx_7 = edx_2 - eax * 8 + 4
                    
                    while (true)
                        int32_t ebx_5 = *(ebx + (esi_8 << 3))
                        int32_t edi_6 = *(var_14 + (esi_8 << 3) + 4)
                        int32_t esi_9 = ebx_5
                        
                        if (ebx_5 s<= edi_6)
                            if (edi_6 - ebx_5 + 1 s>= 4)
                                float* esi_10 = var_20_2
                                void* eax_22 = arg4 + (ebx_5 << 3) + 0x14
                                int32_t i_10 = ((edi_6 - ebx_5 - 3) u>> 2) + 1
                                int32_t ebx_4 = ebx_5 + (i_10 << 2)
                                int32_t i_1
                                
                                do
                                    long double x87_r7_16 = fconvert.t(*esi_10)
                                    esi_10 = &esi_10[4]
                                    eax_22 += 0x20
                                    i_1 = i_10
                                    i_10 -= 1
                                    long double x87_r7_17 = fconvert.t(fconvert.s(x87_r7_16))
                                    *(eax_22 - 0x34) = fconvert.s(x87_r7_17 * fconvert.t(ecx_7[-1])
                                        + fconvert.t(*(eax_22 - 0x34)))
                                    *(eax_22 - 0x30) = fconvert.s(x87_r7_17 * fconvert.t(*ecx_7)
                                        + fconvert.t(*(eax_22 - 0x30)))
                                    long double x87_r7_21 =
                                        fconvert.t(fconvert.s(fconvert.t(esi_10[-3])))
                                    *(eax_22 - 0x2c) = fconvert.s(x87_r7_21 * fconvert.t(ecx_7[-1])
                                        + fconvert.t(*(eax_22 - 0x2c)))
                                    *(eax_22 - 0x28) = fconvert.s(x87_r7_21 * fconvert.t(*ecx_7)
                                        + fconvert.t(*(eax_22 - 0x28)))
                                    long double x87_r7_25 =
                                        fconvert.t(fconvert.s(fconvert.t(esi_10[-2])))
                                    *(eax_22 - 0x24) = fconvert.s(x87_r7_25 * fconvert.t(ecx_7[-1])
                                        + fconvert.t(*(eax_22 - 0x24)))
                                    *(eax_22 - 0x20) = fconvert.s(x87_r7_25 * fconvert.t(*ecx_7)
                                        + fconvert.t(*(eax_22 - 0x20)))
                                    long double x87_r7_29 =
                                        fconvert.t(fconvert.s(fconvert.t(esi_10[-1])))
                                    *(eax_22 - 0x1c) = fconvert.s(x87_r7_29 * fconvert.t(ecx_7[-1])
                                        + fconvert.t(*(eax_22 - 0x1c)))
                                    *(eax_22 - 0x18) = fconvert.s(x87_r7_29 * fconvert.t(*ecx_7)
                                        + fconvert.t(*(eax_22 - 0x18)))
                                while (i_1 != 1)
                                esi_9 = ebx_4
                            
                            if (esi_9 s<= edi_6)
                                void* eax_24 = arg4 + (esi_9 << 3)
                                float* edx_17 = esi_1 + ((var_24_2 - ebx_5 + esi_9) << 2)
                                int32_t i_14 = edi_6 - esi_9 + 1
                                int32_t i_2
                                
                                do
                                    long double x87_r7_32 = fconvert.t(*edx_17)
                                    edx_17 = &edx_17[1]
                                    eax_24 += 8
                                    i_2 = i_14
                                    i_14 -= 1
                                    long double x87_r6_13 = fconvert.t(fconvert.s(x87_r7_32))
                                    *(eax_24 - 8) = fconvert.s(fconvert.t(ecx_7[-1]) * x87_r6_13
                                        + fconvert.t(*(eax_24 - 8)))
                                    *(eax_24 - 4) = fconvert.s(x87_r6_13 * fconvert.t(*ecx_7)
                                        + fconvert.t(*(eax_24 - 4)))
                                while (i_2 != 1)
                        
                        var_24_2 += esi_2
                        var_20_2 += esi_2 * 4
                        int32_t edx_19 = var_8_1 + 1
                        ecx_7 = &ecx_7[2]
                        var_8_1 = edx_19
                        
                        if (edx_19 s>= ecx_1)
                            break
                        
                        esi_8 = var_8_1
                        ebx = var_14
            case 3
                int32_t esi_11 = 0
                int32_t var_8_2 = 0
                
                if (ecx_1 s> 0)
                    void* var_20_3 = esi_1
                    int32_t var_24_3 = 0
                    float* ecx_9 = edx_2 - eax * 0xc + 4
                    
                    while (true)
                        int32_t edx_24 = *(ebx + (esi_11 << 3) + 4)
                        int32_t edi_8 = *(ebx + (esi_11 << 3))
                        int32_t ebx_7 = edi_8
                        
                        if (edi_8 s<= edx_24)
                            if (edx_24 - edi_8 + 1 s>= 4)
                                float* esi_12 = var_20_3
                                int32_t i_11 = ((edx_24 - edi_8 - 3) u>> 2) + 1
                                void* eax_35 = arg4 + edi_8 * 0xc + 0x14
                                ebx_7 = edi_8 + (i_11 << 2)
                                int32_t i_3
                                
                                do
                                    long double x87_r7_39 = fconvert.t(*esi_12)
                                    esi_12 = &esi_12[4]
                                    eax_35 += 0x30
                                    i_3 = i_11
                                    i_11 -= 1
                                    long double x87_r6_15 = fconvert.t(fconvert.s(x87_r7_39))
                                    *(eax_35 - 0x44) = fconvert.s(fconvert.t(ecx_9[-1]) * x87_r6_15
                                        + fconvert.t(*(eax_35 - 0x44)))
                                    *(eax_35 - 0x40) = fconvert.s(fconvert.t(*ecx_9) * x87_r6_15
                                        + fconvert.t(*(eax_35 - 0x40)))
                                    *(eax_35 - 0x3c) = fconvert.s(x87_r6_15 * fconvert.t(ecx_9[1])
                                        + fconvert.t(*(eax_35 - 0x3c)))
                                    long double x87_r6_20 =
                                        fconvert.t(fconvert.s(fconvert.t(esi_12[-3])))
                                    *(eax_35 - 0x38) = fconvert.s(fconvert.t(ecx_9[-1]) * x87_r6_20
                                        + fconvert.t(*(eax_35 - 0x38)))
                                    *(eax_35 - 0x34) = fconvert.s(fconvert.t(*ecx_9) * x87_r6_20
                                        + fconvert.t(*(eax_35 - 0x34)))
                                    *(eax_35 - 0x30) = fconvert.s(x87_r6_20 * fconvert.t(ecx_9[1])
                                        + fconvert.t(*(eax_35 - 0x30)))
                                    long double x87_r6_25 =
                                        fconvert.t(fconvert.s(fconvert.t(esi_12[-2])))
                                    *(eax_35 - 0x2c) = fconvert.s(fconvert.t(ecx_9[-1]) * x87_r6_25
                                        + fconvert.t(*(eax_35 - 0x2c)))
                                    *(eax_35 - 0x28) = fconvert.s(fconvert.t(*ecx_9) * x87_r6_25
                                        + fconvert.t(*(eax_35 - 0x28)))
                                    *(eax_35 - 0x24) = fconvert.s(x87_r6_25 * fconvert.t(ecx_9[1])
                                        + fconvert.t(*(eax_35 - 0x24)))
                                    long double x87_r6_30 =
                                        fconvert.t(fconvert.s(fconvert.t(esi_12[-1])))
                                    *(eax_35 - 0x20) = fconvert.s(fconvert.t(ecx_9[-1]) * x87_r6_30
                                        + fconvert.t(*(eax_35 - 0x20)))
                                    *(eax_35 - 0x1c) = fconvert.s(fconvert.t(*ecx_9) * x87_r6_30
                                        + fconvert.t(*(eax_35 - 0x1c)))
                                    *(eax_35 - 0x18) = fconvert.s(x87_r6_30 * fconvert.t(ecx_9[1])
                                        + fconvert.t(*(eax_35 - 0x18)))
                                while (i_3 != 1)
                                esi_11 = var_8_2
                            
                            if (ebx_7 s<= edx_24)
                                float* edi_9 = esi_1 + ((var_24_3 - edi_8 + ebx_7) << 2)
                                void* eax_40 = arg4 + ebx_7 * 0xc + 8
                                int32_t i_12 = edx_24 - ebx_7 + 1
                                int32_t i_4
                                
                                do
                                    long double x87_r7_67 = fconvert.t(*edi_9)
                                    edi_9 = &edi_9[1]
                                    eax_40 += 0xc
                                    i_4 = i_12
                                    i_12 -= 1
                                    long double x87_r6_35 = fconvert.t(fconvert.s(x87_r7_67))
                                    *(eax_40 - 0x14) = fconvert.s(fconvert.t(ecx_9[-1]) * x87_r6_35
                                        + fconvert.t(*(eax_40 - 0x14)))
                                    *(eax_40 - 0x10) = fconvert.s(fconvert.t(*ecx_9) * x87_r6_35
                                        + fconvert.t(*(eax_40 - 0x10)))
                                    *(eax_40 - 0xc) = fconvert.s(x87_r6_35 * fconvert.t(ecx_9[1])
                                        + fconvert.t(*(eax_40 - 0xc)))
                                while (i_4 != 1)
                                esi_11 = var_8_2
                        
                        var_24_3 += esi_2
                        var_20_3 += esi_2 * 4
                        esi_11 += 1
                        ecx_9 = &ecx_9[3]
                        var_8_2 = esi_11
                        
                        if (esi_11 s>= ecx_1)
                            break
                        
                        ebx = var_14
            case 4
                int32_t esi_15 = 0
                int32_t var_8_3 = 0
                
                if (ecx_1 s> 0)
                    float* var_20_4 = esi_1
                    int32_t var_24_4 = 0
                    float* ecx_11 = edx_2 - (eax << 4) + 4
                    
                    while (true)
                        int32_t ebx_11 = *(ebx + (esi_15 << 3))
                        int32_t edi_10 = *(var_14 + (esi_15 << 3) + 4)
                        int32_t esi_16 = ebx_11
                        
                        if (ebx_11 s<= edi_10)
                            if (edi_10 - ebx_11 + 1 s>= 4)
                                float* esi_17 = var_20_4
                                float* eax_49 = arg4 + ebx_11 * 0x10 + 0x18
                                int32_t i_13 = ((edi_10 - ebx_11 - 3) u>> 2) + 1
                                int32_t ebx_9 = ebx_11 + (i_13 << 2)
                                int32_t i_5
                                
                                do
                                    long double x87_r6_40 = fconvert.t(fconvert.s(fconvert.t(*esi_17)))
                                    eax_49[-6] = fconvert.s(fconvert.t(ecx_11[-1]) * x87_r6_40
                                        + fconvert.t(eax_49[-6]))
                                    eax_49[-5] = fconvert.s(x87_r6_40 * fconvert.t(*ecx_11)
                                        + fconvert.t(eax_49[-5]))
                                    eax_49[-4] = fconvert.s(fconvert.t(ecx_11[1]) * x87_r6_40
                                        + fconvert.t(eax_49[-4]))
                                    eax_49[-3] = fconvert.s(x87_r6_40 * fconvert.t(ecx_11[2])
                                        + fconvert.t(eax_49[-3]))
                                    long double x87_r6_48 =
                                        fconvert.t(fconvert.s(fconvert.t(esi_17[1])))
                                    eax_49[-2] = fconvert.s(fconvert.t(ecx_11[-1]) * x87_r6_48
                                        + fconvert.t(eax_49[-2]))
                                    eax_49[-1] = fconvert.s(x87_r6_48 * fconvert.t(*ecx_11)
                                        + fconvert.t(eax_49[-1]))
                                    *eax_49 = fconvert.s(fconvert.t(ecx_11[1]) * x87_r6_48
                                        + fconvert.t(*eax_49))
                                    eax_49[1] = fconvert.s(x87_r6_48 * fconvert.t(ecx_11[2])
                                        + fconvert.t(eax_49[1]))
                                    long double x87_r6_56 =
                                        fconvert.t(fconvert.s(fconvert.t(esi_17[2])))
                                    eax_49[2] = fconvert.s(fconvert.t(ecx_11[-1]) * x87_r6_56
                                        + fconvert.t(eax_49[2]))
                                    eax_49[3] = fconvert.s(x87_r6_56 * fconvert.t(*ecx_11)
                                        + fconvert.t(eax_49[3]))
                                    eax_49[4] = fconvert.s(fconvert.t(ecx_11[1]) * x87_r6_56
                                        + fconvert.t(eax_49[4]))
                                    eax_49[5] = fconvert.s(x87_r6_56 * fconvert.t(ecx_11[2])
                                        + fconvert.t(eax_49[5]))
                                    long double x87_r6_64 =
                                        fconvert.t(fconvert.s(fconvert.t(esi_17[3])))
                                    eax_49[6] = fconvert.s(fconvert.t(ecx_11[-1]) * x87_r6_64
                                        + fconvert.t(eax_49[6]))
                                    eax_49[7] = fconvert.s(x87_r6_64 * fconvert.t(*ecx_11)
                                        + fconvert.t(eax_49[7]))
                                    eax_49[8] = fconvert.s(fconvert.t(ecx_11[1]) * x87_r6_64
                                        + fconvert.t(eax_49[8]))
                                    eax_49 = &eax_49[0x10]
                                    esi_17 = &esi_17[4]
                                    i_5 = i_13
                                    i_13 -= 1
                                    eax_49[-7] = fconvert.s(x87_r6_64 * fconvert.t(ecx_11[2])
                                        + fconvert.t(eax_49[-7]))
                                while (i_5 != 1)
                                esi_16 = ebx_9
                            
                            if (esi_16 s<= edi_10)
                                float* edx_37 = esi_1 + ((var_24_4 - ebx_11 + esi_16) << 2)
                                void* eax_53 = arg4 + esi_16 * 0x10 + 8
                                int32_t i_15 = edi_10 - esi_16 + 1
                                int32_t i_6
                                
                                do
                                    long double x87_r7_102 = fconvert.t(*edx_37)
                                    edx_37 = &edx_37[1]
                                    eax_53 += 0x10
                                    i_6 = i_15
                                    i_15 -= 1
                                    long double x87_r6_72 = fconvert.t(fconvert.s(x87_r7_102))
                                    *(eax_53 - 0x18) = fconvert.s(fconvert.t(ecx_11[-1]) * x87_r6_72
                                        + fconvert.t(*(eax_53 - 0x18)))
                                    *(eax_53 - 0x14) = fconvert.s(x87_r6_72 * fconvert.t(*ecx_11)
                                        + fconvert.t(*(eax_53 - 0x14)))
                                    *(eax_53 - 0x10) = fconvert.s(fconvert.t(ecx_11[1]) * x87_r6_72
                                        + fconvert.t(*(eax_53 - 0x10)))
                                    *(eax_53 - 0xc) = fconvert.s(x87_r6_72 * fconvert.t(ecx_11[2])
                                        + fconvert.t(*(eax_53 - 0xc)))
                                while (i_6 != 1)
                        
                        var_24_4 += esi_2
                        var_20_4 = &var_20_4[esi_2]
                        int32_t edx_39 = var_8_3 + 1
                        ecx_11 = &ecx_11[4]
                        var_8_3 = edx_39
                        
                        if (edx_39 s>= ecx_1)
                            break
                        
                        esi_15 = var_8_3
                        ebx = var_14
        
        return 
    
    int32_t ebx_13 = 0
    int32_t var_8_4 = 0
    
    if (ecx_1 s<= 0)
        return 
    
    int32_t ecx_13 = eax * edi
    int32_t var_c_17 = neg.d(ecx_13)
    void* var_10_1 = esi_1
    int32_t eax_63 = edi << 2
    void* var_18_1 = edx_2 - ecx_13 * 4
    
    do
        int32_t esi_19 = *(var_14 + (ebx_13 << 3))
        int32_t ecx_18 = *(var_14 + (ebx_13 << 3) + 4)
        
        if (esi_19 s<= ecx_18)
            int32_t eax_65 = esi_19 * edi
            int32_t var_20_5 = eax_65
            void* ebx_15 = arg4 + (eax_65 << 2)
            void* var_24_5 = var_10_1
            int32_t i_8 = ecx_18 - esi_19 + 1
            int32_t i_7
            
            do
                int32_t ecx_22 = 0
                long double x87_r7_110 = fconvert.t(fconvert.s(fconvert.t(*var_24_5)))
                
                if (edi s>= 4)
                    void* edx_40 = var_18_1
                    int32_t j_3 = ((edi - 4) u>> 2) + 1
                    void* eax_67 = ebx_15
                    ecx_22 = j_3 << 2
                    int32_t j
                    
                    do
                        edx_40 += 0x10
                        eax_67 += 0x10
                        j = j_3
                        j_3 -= 1
                        *(eax_67 - 0x10) = fconvert.s(x87_r7_110 * fconvert.t(*(edx_40 - 0x10))
                            + fconvert.t(*(eax_67 - 0x10)))
                        *(eax_67 - 0xc) = fconvert.s(fconvert.t(*(edx_40 - 0xc)) * x87_r7_110
                            + fconvert.t(*(eax_67 - 0xc)))
                        *(eax_67 - 8) = fconvert.s(fconvert.t(*(edx_40 - 8)) * x87_r7_110
                            + fconvert.t(*(eax_67 - 8)))
                        *(eax_67 - 4) = fconvert.s(fconvert.t(*(edx_40 - 4)) * x87_r7_110
                            + fconvert.t(*(eax_67 - 4)))
                    while (j != 1)
                    edx_2 = var_28
                
                if (ecx_22 s< edi)
                    void* eax_70 = arg4 + ((var_20_5 + ecx_22) << 2)
                    float* esi_25 = edx_2 + ((var_c_17 + ecx_22) << 2)
                    int32_t j_2 = edi - ecx_22
                    int32_t j_1
                    
                    do
                        long double x87_r6_92 = fconvert.t(*esi_25)
                        esi_25 = &esi_25[1]
                        eax_70 += 4
                        j_1 = j_2
                        j_2 -= 1
                        *(eax_70 - 4) = fconvert.s(x87_r6_92 * x87_r7_110 + fconvert.t(*(eax_70 - 4)))
                    while (j_1 != 1)
                    edx_2 = var_28
                
                var_24_5 += 4
                var_20_5 += edi
                eax_63 = edi << 2
                ebx_15 += eax_63
                i_7 = i_8
                i_8 -= 1
            while (i_7 != 1)
            ebx_13 = var_8_4
        
        var_c_17 += edi
        var_18_1 += eax_63
        var_10_1 += esi_2 * 4
        ebx_13 += 1
        var_8_4 = ebx_13
    while (ebx_13 s< ecx_1)
}
