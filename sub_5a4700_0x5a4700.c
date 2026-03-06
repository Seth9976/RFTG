// 函数名称: sub_5a4700
// 虚拟地址: 0x5a4700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5a4700(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4)
{
    // 第一条实际指令: int32_t edx = *(arg4 + 0x70)
    int32_t edx = *(arg4 + 0x70)
    int32_t edx_1 = *(arg4 + 0x40)
    int32_t edx_2 = *(arg4 + 0x8c)
    float* edx_4 = *(arg4 + 0x60) + (*(arg4 + 0x4c) << 1)
    int32_t edx_5 = *(arg4 + 0xb0)
    uint32_t edx_7 = *(arg4 + 0xa0) u>> 2
    int32_t edx_9 = *(arg4 + 0x84) * arg3
    int128_t* esi = *(arg4 + 0xb4)
    float* i_22 = *(arg4 + 0x14)
    int32_t edx_10 = *(arg4 + 0x6c)
    int32_t eax_2 = *(arg4 + 0x1c) * arg3
    float* i_21 = *(edx_10 + (arg3 << 3))
    int32_t edx_11 = *(edx_10 + (arg3 << 3) + 4)
    float* i_23 = i_22
    float* i_13 = sub_5abfc0(esi, 0, edx_1 * i_22 * 4)
    int32_t ebx_1 = 0
    
    if (edx_1 - 1 u> 3)
        i_13 = i_21
        float* i_19 = i_21
        
        if (i_21 s<= edx_11)
            void* ecx_23 = *(arg4 + 0xac) - *(arg4 + 0xa4)
            
            do
                int32_t ecx_25 = ebx_1 + edx_9
                ebx_1 += 1
                void* edx_48 = edx_5 + ((mods.dp.d(sx.q(ecx_23 + i_13), edx_2) * edx_7) << 2)
                
                if (i_22 s> 0)
                    long double x87_r7_10 = fconvert.t(fconvert.s(fconvert.t(*(edx + (ecx_25 << 2)))))
                    void* eax_64 = esi + 4
                    void* edx_49 = edx_48 + 8
                    int32_t var_34_7 = 0
                    void* var_3c_5 = eax_64
                    void* var_38_1 = edx_49
                    float* i_9 = i_22
                    float* i
                    
                    do
                        int32_t ecx_28 = edx_1
                        int32_t ebx_10 = 0
                        
                        if (ecx_28 s>= 4)
                            int32_t j_2 = ((ecx_28 - 4) u>> 2) + 1
                            ebx_10 = j_2 << 2
                            int32_t j
                            
                            do
                                eax_64 += 0x10
                                long double x87_r6_152 = fconvert.t(*(edx_49 - 8)) * x87_r7_10
                                edx_49 += 0x10
                                j = j_2
                                j_2 -= 1
                                *(eax_64 - 0x14) = fconvert.s(x87_r6_152 + fconvert.t(*(eax_64 - 0x14)))
                                *(eax_64 - 0x10) = fconvert.s(
                                    fconvert.t(*(edx_48 - esi + eax_64 - 0x10)) * x87_r7_10
                                    + fconvert.t(*(eax_64 - 0x10)))
                                *(eax_64 - 0xc) = fconvert.s(fconvert.t(*(edx_49 - 0x10)) * x87_r7_10
                                    + fconvert.t(*(eax_64 - 0xc)))
                                *(eax_64 - 8) = fconvert.s(fconvert.t(*(edx_49 - 0xc)) * x87_r7_10
                                    + fconvert.t(*(eax_64 - 8)))
                            while (j != 1)
                            i_22 = i_23
                            ecx_28 = edx_1
                        
                        if (ebx_10 s< ecx_28)
                            float* eax_65 = esi + ((var_34_7 + ebx_10) << 2)
                            int32_t j_3 = ecx_28 - ebx_10
                            int32_t j_1
                            
                            do
                                long double x87_r6_163 = fconvert.t(*(eax_65 + edx_48 - esi))
                                eax_65 = &eax_65[1]
                                j_1 = j_3
                                j_3 -= 1
                                eax_65[-1] = fconvert.s(x87_r6_163 * x87_r7_10 + fconvert.t(eax_65[-1]))
                            while (j_1 != 1)
                            ecx_28 = edx_1
                        
                        var_34_7 += ecx_28
                        int32_t ecx_30 = ecx_28 * 4
                        edx_49 = var_38_1 + ecx_30
                        eax_64 = var_3c_5 + ecx_30
                        i = i_9
                        i_9 -= 1
                        var_38_1 = edx_49
                        var_3c_5 = eax_64
                    while (i != 1)
                
                i_13 = i_19 + 1
                i_19 = i_13
            while (i_13 s<= edx_11)
    else
        switch (edx_1)
            case 1
                float* i_24 = i_21
                
                if (i_21 s<= edx_11)
                    void* eax_11 = *(arg4 + 0xac) - *(arg4 + 0xa4)
                    void* var_14_1 = eax_11
                    
                    while (true)
                        int32_t ecx_2 = ebx_1 + edx_9
                        ebx_1 += 1
                        i_13 = edx_5 + ((mods.dp.d(sx.q(eax_11 + i_24), edx_2) * edx_7) << 2)
                        int32_t eax_16 = 0
                        int32_t var_c_1 = 0
                        long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*(edx + (ecx_2 << 2)))))
                        
                        if (i_22 s>= 4)
                            void* ecx_3 = &i_13[3]
                            int32_t i_14 = (&i_22[-1] u>> 2) + 1
                            var_c_1 = i_14 << 2
                            void* eax_17 = esi + 4
                            int32_t i_1
                            
                            do
                                eax_17 += 0x10
                                long double x87_r6_2 = fconvert.t(*(ecx_3 - 0xc)) * x87_r7_2
                                ecx_3 += 0x10
                                i_1 = i_14
                                i_14 -= 1
                                *(eax_17 - 0x14) = fconvert.s(x87_r6_2 + fconvert.t(*(eax_17 - 0x14)))
                                *(eax_17 - 0x10) = fconvert.s(
                                    fconvert.t(*(i_13 - esi + eax_17 - 0x10)) * x87_r7_2
                                    + fconvert.t(*(eax_17 - 0x10)))
                                *(eax_17 - 0xc) = fconvert.s(fconvert.t(*(ecx_3 - 0x14)) * x87_r7_2
                                    + fconvert.t(*(eax_17 - 0xc)))
                                *(eax_17 - 8) = fconvert.s(fconvert.t(*(ecx_3 - 0x10)) * x87_r7_2
                                    + fconvert.t(*(eax_17 - 8)))
                            while (i_1 != 1)
                            eax_16 = var_c_1
                        
                        if (eax_16 s< i_22)
                            i_13 -= esi
                            void* i_11 = i_22 - var_c_1
                            float* eax_18 = esi + (eax_16 << 2)
                            void* i_2
                            
                            do
                                long double x87_r6_13 = fconvert.t(*(eax_18 + i_13))
                                eax_18 = &eax_18[1]
                                i_2 = i_11
                                i_11 -= 1
                                eax_18[-1] = fconvert.s(x87_r6_13 * x87_r7_2 + fconvert.t(eax_18[-1]))
                            while (i_2 != 1)
                        
                        void* i_28 = i_24 + 1
                        i_24 = i_28
                        
                        if (i_28 s> edx_11)
                            break
                        
                        eax_11 = var_14_1
            case 2
                float* i_25 = i_21
                
                if (i_21 s<= edx_11)
                    int32_t edx_19 = *(arg4 + 0xac) - *(arg4 + 0xa4)
                    int32_t var_14_2 = edx_19
                    
                    while (true)
                        int32_t ecx_6 = ebx_1 + edx_9
                        ebx_1 += 1
                        i_13 = edx_5 + ((mods.dp.d(sx.q(i_25 + edx_19), edx_2) * edx_7) << 2)
                        int32_t ecx_7 = 0
                        long double x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(*(edx + (ecx_6 << 2)))))
                        
                        if (i_22 s>= 4)
                            void* ecx_8 = &i_13[7]
                            int32_t i_15 = (&i_22[-1] u>> 2) + 1
                            int32_t ebx_4 = i_15 << 2
                            void* eax_27 = esi + 0xc
                            int32_t i_3
                            
                            do
                                long double x87_r6_16 = fconvert.t(*(ecx_8 - 0x1c))
                                ecx_8 += 0x20
                                eax_27 += 0x20
                                i_3 = i_15
                                i_15 -= 1
                                *(eax_27 - 0x2c) =
                                    fconvert.s(x87_r6_16 * x87_r7_4 + fconvert.t(*(eax_27 - 0x2c)))
                                *(eax_27 - 0x28) = fconvert.s(fconvert.t(*(ecx_8 - 0x38)) * x87_r7_4
                                    + fconvert.t(*(eax_27 - 0x28)))
                                *(eax_27 - 0x24) = fconvert.s(fconvert.t(*(ecx_8 - 0x34)) * x87_r7_4
                                    + fconvert.t(*(eax_27 - 0x24)))
                                *(eax_27 - 0x20) = fconvert.s(
                                    fconvert.t(*(i_13 - esi + eax_27 - 0x20)) * x87_r7_4
                                    + fconvert.t(*(eax_27 - 0x20)))
                                *(eax_27 - 0x1c) = fconvert.s(fconvert.t(*(ecx_8 - 0x2c)) * x87_r7_4
                                    + fconvert.t(*(eax_27 - 0x1c)))
                                *(eax_27 - 0x18) = fconvert.s(fconvert.t(*(ecx_8 - 0x28)) * x87_r7_4
                                    + fconvert.t(*(eax_27 - 0x18)))
                                *(eax_27 - 0x14) = fconvert.s(fconvert.t(*(ecx_8 - 0x24)) * x87_r7_4
                                    + fconvert.t(*(eax_27 - 0x14)))
                                *(eax_27 - 0x10) = fconvert.s(fconvert.t(*(ecx_8 - 0x20)) * x87_r7_4
                                    + fconvert.t(*(eax_27 - 0x10)))
                            while (i_3 != 1)
                            ecx_7 = ebx_4
                        
                        if (ecx_7 s< i_22)
                            int32_t edx_26 = i_13 - esi
                            void* var_18_3 = &i_13[ecx_7 * 2]
                            void* eax_29 = esi + (ecx_7 << 3) + 4
                            i_13 = i_22 - ecx_7
                            float* i_4
                            
                            do
                                long double x87_r6_40 = fconvert.t(*var_18_3)
                                var_18_3 += 8
                                eax_29 += 8
                                i_4 = i_13
                                i_13 -= 1
                                *(eax_29 - 0xc) =
                                    fconvert.s(x87_r6_40 * x87_r7_4 + fconvert.t(*(eax_29 - 0xc)))
                                *(eax_29 - 8) = fconvert.s(fconvert.t(*(eax_29 + edx_26 - 8)) * x87_r7_4
                                    + fconvert.t(*(eax_29 - 8)))
                            while (i_4 != 1)
                        
                        void* i_29 = i_25 + 1
                        i_25 = i_29
                        
                        if (i_29 s> edx_11)
                            break
                        
                        edx_19 = var_14_2
            case 3
                float* i_26 = i_21
                
                if (i_21 s<= edx_11)
                    void* eax_33 = *(arg4 + 0xac) - *(arg4 + 0xa4)
                    void* var_14_3 = eax_33
                    
                    while (true)
                        int32_t ecx_13 = ebx_1 + edx_9
                        ebx_1 += 1
                        i_13 = edx_5 + ((mods.dp.d(sx.q(eax_33 + i_26), edx_2) * edx_7) << 2)
                        int32_t eax_38 = 0
                        int32_t var_c_3 = 0
                        long double x87_r7_6 =
                            fconvert.t(fconvert.s(fconvert.t(*(edx + (ecx_13 << 2)))))
                        
                        if (i_22 s>= 4)
                            void* ecx_14 = &i_13[7]
                            int32_t i_16 = (&i_22[-1] u>> 2) + 1
                            var_c_3 = i_16 << 2
                            void* eax_39 = &esi[1]
                            int32_t i_5
                            
                            do
                                long double x87_r6_46 = fconvert.t(*(ecx_14 - 0x1c))
                                ecx_14 += 0x30
                                eax_39 += 0x30
                                i_5 = i_16
                                i_16 -= 1
                                *(eax_39 - 0x40) =
                                    fconvert.s(x87_r6_46 * x87_r7_6 + fconvert.t(*(eax_39 - 0x40)))
                                *(eax_39 - 0x3c) = fconvert.s(fconvert.t(*(ecx_14 - 0x48)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x3c)))
                                *(eax_39 - 0x38) = fconvert.s(fconvert.t(*(ecx_14 - 0x44)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x38)))
                                *(eax_39 - 0x34) = fconvert.s(fconvert.t(*(ecx_14 - 0x40)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x34)))
                                *(eax_39 - 0x30) = fconvert.s(
                                    fconvert.t(*(eax_39 + i_13 - esi - 0x30)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x30)))
                                *(eax_39 - 0x2c) = fconvert.s(fconvert.t(*(ecx_14 - 0x38)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x2c)))
                                *(eax_39 - 0x28) = fconvert.s(fconvert.t(*(ecx_14 - 0x34)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x28)))
                                *(eax_39 - 0x24) = fconvert.s(fconvert.t(*(ecx_14 - 0x30)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x24)))
                                *(eax_39 - 0x20) = fconvert.s(fconvert.t(*(ecx_14 - 0x2c)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x20)))
                                *(eax_39 - 0x1c) = fconvert.s(fconvert.t(*(ecx_14 - 0x28)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x1c)))
                                *(eax_39 - 0x18) = fconvert.s(fconvert.t(*(ecx_14 - 0x24)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x18)))
                                *(eax_39 - 0x14) = fconvert.s(fconvert.t(*(ecx_14 - 0x20)) * x87_r7_6
                                    + fconvert.t(*(eax_39 - 0x14)))
                            while (i_5 != 1)
                            eax_38 = var_c_3
                        
                        if (eax_38 s< i_22)
                            float* i_18 = &i_13[eax_38 * 3]
                            int32_t edx_34 = i_13 - esi
                            void* i_12 = i_22 - var_c_3
                            i_13 = i_18
                            void* eax_43 = eax_38 * 0xc + esi + 4
                            void* i_6
                            
                            do
                                eax_43 += 0xc
                                *(eax_43 - 0x10) = fconvert.s(fconvert.t(*i_13) * x87_r7_6
                                    + fconvert.t(*(eax_43 - 0x10)))
                                i_13 = &i_18[3]
                                i_6 = i_12
                                i_12 -= 1
                                i_18 = i_13
                                *(eax_43 - 0xc) = fconvert.s(
                                    fconvert.t(*(edx_34 + eax_43 - 0xc)) * x87_r7_6
                                    + fconvert.t(*(eax_43 - 0xc)))
                                *(eax_43 - 8) = fconvert.s(fconvert.t(i_13[-1]) * x87_r7_6
                                    + fconvert.t(*(eax_43 - 8)))
                            while (i_6 != 1)
                        
                        void* i_30 = i_26 + 1
                        i_26 = i_30
                        
                        if (i_30 s> edx_11)
                            break
                        
                        eax_33 = var_14_3
            case 4
                float* i_27 = i_21
                
                if (i_21 s<= edx_11)
                    void* eax_47 = *(arg4 + 0xac) - *(arg4 + 0xa4)
                    void* var_14_4 = eax_47
                    
                    while (true)
                        int32_t ecx_19 = ebx_1 + edx_9
                        ebx_1 += 1
                        i_13 = edx_5 + ((mods.dp.d(sx.q(eax_47 + i_27), edx_2) * edx_7) << 2)
                        int32_t eax_52 = 0
                        int32_t var_c_4 = 0
                        long double x87_r7_8 =
                            fconvert.t(fconvert.s(fconvert.t(*(edx + (ecx_19 << 2)))))
                        
                        if (i_22 s>= 4)
                            void* ecx_20 = &i_13[7]
                            int32_t i_17 = (&i_22[-1] u>> 2) + 1
                            var_c_4 = i_17 << 2
                            void* eax_53 = esi + 0x14
                            int32_t i_7
                            
                            do
                                eax_53 += 0x40
                                long double x87_r6_92 = fconvert.t(*(ecx_20 - 0x1c)) * x87_r7_8
                                ecx_20 += 0x40
                                i_7 = i_17
                                i_17 -= 1
                                *(eax_53 - 0x54) = fconvert.s(x87_r6_92 + fconvert.t(*(eax_53 - 0x54)))
                                *(eax_53 - 0x50) = fconvert.s(fconvert.t(*(ecx_20 - 0x58)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x50)))
                                *(eax_53 - 0x4c) = fconvert.s(fconvert.t(*(ecx_20 - 0x54)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x4c)))
                                *(eax_53 - 0x48) = fconvert.s(fconvert.t(*(ecx_20 - 0x50)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x48)))
                                *(eax_53 - 0x44) = fconvert.s(fconvert.t(*(ecx_20 - 0x4c)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x44)))
                                *(eax_53 - 0x40) = fconvert.s(
                                    fconvert.t(*(eax_53 + i_13 - esi - 0x40)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x40)))
                                *(eax_53 - 0x3c) = fconvert.s(fconvert.t(*(ecx_20 - 0x44)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x3c)))
                                *(eax_53 - 0x38) = fconvert.s(x87_r7_8 * fconvert.t(*(ecx_20 - 0x40))
                                    + fconvert.t(*(eax_53 - 0x38)))
                                *(eax_53 - 0x34) = fconvert.s(fconvert.t(*(ecx_20 - 0x3c)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x34)))
                                *(eax_53 - 0x30) = fconvert.s(fconvert.t(*(ecx_20 - 0x38)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x30)))
                                *(eax_53 - 0x2c) = fconvert.s(fconvert.t(*(ecx_20 - 0x34)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x2c)))
                                *(eax_53 - 0x28) = fconvert.s(fconvert.t(*(ecx_20 - 0x30)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x28)))
                                *(eax_53 - 0x24) = fconvert.s(fconvert.t(*(ecx_20 - 0x2c)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x24)))
                                *(eax_53 - 0x20) = fconvert.s(fconvert.t(*(ecx_20 - 0x28)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x20)))
                                *(eax_53 - 0x1c) = fconvert.s(fconvert.t(*(ecx_20 - 0x24)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x1c)))
                                *(eax_53 - 0x18) = fconvert.s(fconvert.t(*(ecx_20 - 0x20)) * x87_r7_8
                                    + fconvert.t(*(eax_53 - 0x18)))
                            while (i_7 != 1)
                            eax_52 = var_c_4
                        
                        if (eax_52 s< i_22)
                            int32_t eax_54 = eax_52 * 2
                            void* ecx_21 = &i_13[eax_54 * 2 + 3]
                            float* i_20 = i_13 - esi
                            void* eax_55 = esi + (eax_54 << 3) + 4
                            void* i_10 = i_22 - var_c_4
                            void* i_8
                            
                            do
                                i_13 = i_20
                                long double x87_r6_140 = fconvert.t(*(ecx_21 - 0xc)) * x87_r7_8
                                eax_55 += 0x10
                                ecx_21 += 0x10
                                i_8 = i_10
                                i_10 -= 1
                                *(eax_55 - 0x14) = fconvert.s(x87_r6_140 + fconvert.t(*(eax_55 - 0x14)))
                                *(eax_55 - 0x10) = fconvert.s(
                                    fconvert.t(*(eax_55 + i_13 - 0x10)) * x87_r7_8
                                    + fconvert.t(*(eax_55 - 0x10)))
                                *(eax_55 - 0xc) = fconvert.s(fconvert.t(*(ecx_21 - 0x14)) * x87_r7_8
                                    + fconvert.t(*(eax_55 - 0xc)))
                                *(eax_55 - 8) = fconvert.s(fconvert.t(*(ecx_21 - 0x10)) * x87_r7_8
                                    + fconvert.t(*(eax_55 - 8)))
                            while (i_8 != 1)
                        
                        void* i_31 = i_27 + 1
                        i_27 = i_31
                        
                        if (i_31 s> edx_11)
                            break
                        
                        eax_47 = var_14_4
    
    int16_t x87control
    sub_5a37e0(arg4, i_13, *(arg4 + 0x10) + eax_2, x87control, arg4, i_22, esi, edx_1, *(arg4 + 0x44), 
        edx_4)
}
