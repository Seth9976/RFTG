// 函数名称: sub_5a4e60
// 虚拟地址: 0x5a4e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_5a4e60(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x6c)
    int32_t edx = *(arg1 + 0x6c)
    int32_t ecx_1 = *(arg1 + 0x40)
    int32_t ecx_2 = *(arg1 + 0x8c)
    int32_t i_18 = *(arg1 + 0x14)
    int32_t esi = *(arg1 + 0xb0)
    int32_t ecx_5 = *(arg1 + 0x94) + arg2
    void* edi = *(arg1 + 0x7c)
    uint32_t eax_1 = *(arg1 + 0xa0) u>> 2
    int32_t eax_2 = *(edx + (ecx_5 << 3))
    int32_t edx_1 = *(edx + (ecx_5 << 3) + 4)
    int32_t i_19 = i_18
    int32_t var_20 = eax_2
    
    if (eax_2 s> edx_1)
        return 
    
    int32_t eax_5 = *(arg1 + 0xac) - *(arg1 + 0xa4)
    float* var_24_1 = *(arg1 + 0x70) + ((ecx_5 * *(arg1 + 0x84)) << 2)
    int32_t var_30_1 = eax_5
    
    while (true)
        float var_8_1 = fconvert.s(fconvert.t(*var_24_1))
        int32_t ecx_8 = ecx_1
        void* edx_6 = esi + ((mods.dp.d(sx.q(eax_5 + var_20), ecx_2) * eax_1) << 2)
        long double x87_r7_2
        
        if (ecx_8 - 1 u<= 3)
            switch (ecx_8)
                case 1
                    x87_r7_2 = fconvert.t(var_8_1)
                    int32_t eax_10 = 0
                    arg2 = 0
                    
                    if (i_18 s>= 4)
                        int32_t i_14 = ((i_18 - 4) u>> 2) + 1
                        arg2 = i_14 << 2
                        void* ecx_9 = edi + 0xc
                        void* eax_11 = edx_6 + 4
                        int32_t i
                        
                        do
                            eax_11 += 0x10
                            long double x87_r6_2 = fconvert.t(*(ecx_9 - 0xc)) * x87_r7_2
                            ecx_9 += 0x10
                            i = i_14
                            i_14 -= 1
                            *(eax_11 - 0x14) = fconvert.s(x87_r6_2 + fconvert.t(*(eax_11 - 0x14)))
                            *(eax_11 - 0x10) = fconvert.s(
                                fconvert.t(*(edi - edx_6 + eax_11 - 0x10)) * x87_r7_2
                                + fconvert.t(*(eax_11 - 0x10)))
                            *(eax_11 - 0xc) = fconvert.s(fconvert.t(*(ecx_9 - 0x14)) * x87_r7_2
                                + fconvert.t(*(eax_11 - 0xc)))
                            *(eax_11 - 8) = fconvert.s(fconvert.t(*(ecx_9 - 0x10)) * x87_r7_2
                                + fconvert.t(*(eax_11 - 8)))
                        while (i != 1)
                        i_18 = i_19
                        eax_10 = arg2
                    
                    if (eax_10 s< i_18)
                        int32_t i_10 = i_18 - arg2
                        void* eax_12 = edx_6 + (eax_10 << 2)
                        int32_t i_1
                        
                        do
                            long double x87_r6_13 = fconvert.t(*(edi - edx_6 + eax_12))
                            eax_12 += 4
                            i_1 = i_10
                            i_10 -= 1
                            *(eax_12 - 4) = fconvert.s(x87_r6_13 * x87_r7_2 + fconvert.t(*(eax_12 - 4)))
                        while (i_1 != 1)
                case 2
                    x87_r7_2 = fconvert.t(var_8_1)
                    int32_t eax_13 = 0
                    arg2 = 0
                    
                    if (i_18 s>= 4)
                        int32_t i_15 = ((i_18 - 4) u>> 2) + 1
                        arg2 = i_15 << 2
                        void* ecx_11 = edi + 0x1c
                        void* eax_14 = edx_6 + 0xc
                        int32_t i_2
                        
                        do
                            long double x87_r6_16 = fconvert.t(*(ecx_11 - 0x1c))
                            ecx_11 += 0x20
                            eax_14 += 0x20
                            i_2 = i_15
                            i_15 -= 1
                            *(eax_14 - 0x2c) =
                                fconvert.s(x87_r6_16 * x87_r7_2 + fconvert.t(*(eax_14 - 0x2c)))
                            *(eax_14 - 0x28) = fconvert.s(fconvert.t(*(ecx_11 - 0x38)) * x87_r7_2
                                + fconvert.t(*(eax_14 - 0x28)))
                            *(eax_14 - 0x24) = fconvert.s(fconvert.t(*(ecx_11 - 0x34)) * x87_r7_2
                                + fconvert.t(*(eax_14 - 0x24)))
                            *(eax_14 - 0x20) = fconvert.s(
                                fconvert.t(*(edi - edx_6 + eax_14 - 0x20)) * x87_r7_2
                                + fconvert.t(*(eax_14 - 0x20)))
                            *(eax_14 - 0x1c) = fconvert.s(fconvert.t(*(ecx_11 - 0x2c)) * x87_r7_2
                                + fconvert.t(*(eax_14 - 0x1c)))
                            *(eax_14 - 0x18) = fconvert.s(fconvert.t(*(ecx_11 - 0x28)) * x87_r7_2
                                + fconvert.t(*(eax_14 - 0x18)))
                            *(eax_14 - 0x14) = fconvert.s(fconvert.t(*(ecx_11 - 0x24)) * x87_r7_2
                                + fconvert.t(*(eax_14 - 0x14)))
                            *(eax_14 - 0x10) = fconvert.s(x87_r7_2 * fconvert.t(*(ecx_11 - 0x20))
                                + fconvert.t(*(eax_14 - 0x10)))
                        while (i_2 != 1)
                        i_18 = i_19
                        eax_13 = arg2
                    
                    if (eax_13 s< i_18)
                        int32_t i_11 = i_18 - arg2
                        void* esi_13 = edi + (eax_13 << 3)
                        void* eax_15 = edx_6 + (eax_13 << 3) + 4
                        int32_t i_3
                        
                        do
                            long double x87_r6_41 = fconvert.t(*esi_13) * x87_r7_2
                            esi_13 += 8
                            eax_15 += 8
                            i_3 = i_11
                            i_11 -= 1
                            *(eax_15 - 0xc) = fconvert.s(x87_r6_41 + fconvert.t(*(eax_15 - 0xc)))
                            *(eax_15 - 8) = fconvert.s(
                                fconvert.t(*(eax_15 + edi - edx_6 - 8)) * x87_r7_2
                                + fconvert.t(*(eax_15 - 8)))
                        while (i_3 != 1)
                case 3
                    x87_r7_2 = fconvert.t(var_8_1)
                    int32_t eax_16 = 0
                    arg2 = 0
                    
                    if (i_18 s>= 4)
                        int32_t i_16 = ((i_18 - 4) u>> 2) + 1
                        arg2 = i_16 << 2
                        void* ecx_15 = edi + 0x1c
                        void* eax_17 = edx_6 + 0x10
                        int32_t i_4
                        
                        do
                            long double x87_r6_46 = fconvert.t(*(ecx_15 - 0x1c))
                            ecx_15 += 0x30
                            eax_17 += 0x30
                            i_4 = i_16
                            i_16 -= 1
                            *(eax_17 - 0x40) =
                                fconvert.s(x87_r6_46 * x87_r7_2 + fconvert.t(*(eax_17 - 0x40)))
                            *(eax_17 - 0x3c) = fconvert.s(fconvert.t(*(ecx_15 - 0x48)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x3c)))
                            *(eax_17 - 0x38) = fconvert.s(fconvert.t(*(ecx_15 - 0x44)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x38)))
                            *(eax_17 - 0x34) = fconvert.s(fconvert.t(*(ecx_15 - 0x40)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x34)))
                            *(eax_17 - 0x30) = fconvert.s(
                                fconvert.t(*(eax_17 + edi - edx_6 - 0x30)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x30)))
                            *(eax_17 - 0x2c) = fconvert.s(fconvert.t(*(ecx_15 - 0x38)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x2c)))
                            *(eax_17 - 0x28) = fconvert.s(fconvert.t(*(ecx_15 - 0x34)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x28)))
                            *(eax_17 - 0x24) = fconvert.s(fconvert.t(*(ecx_15 - 0x30)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x24)))
                            *(eax_17 - 0x20) = fconvert.s(fconvert.t(*(ecx_15 - 0x2c)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x20)))
                            *(eax_17 - 0x1c) = fconvert.s(fconvert.t(*(ecx_15 - 0x28)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x1c)))
                            *(eax_17 - 0x18) = fconvert.s(fconvert.t(*(ecx_15 - 0x24)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x18)))
                            *(eax_17 - 0x14) = fconvert.s(fconvert.t(*(ecx_15 - 0x20)) * x87_r7_2
                                + fconvert.t(*(eax_17 - 0x14)))
                        while (i_4 != 1)
                        i_18 = i_19
                        eax_16 = arg2
                    
                    if (eax_16 s< i_18)
                        int32_t eax_20 = eax_16 * 0xc
                        void* esi_19 = edi - edx_6
                        void* ecx_16 = eax_20 + edi
                        void* eax_21 = eax_20 + edx_6 + 4
                        int32_t i_12 = i_18 - arg2
                        void* var_8_6 = esi_19
                        int32_t i_5
                        
                        do
                            long double x87_r6_82 = fconvert.t(*ecx_16)
                            ecx_16 += 0xc
                            eax_21 += 0xc
                            i_5 = i_12
                            i_12 -= 1
                            *(eax_21 - 0x10) =
                                fconvert.s(x87_r6_82 * x87_r7_2 + fconvert.t(*(eax_21 - 0x10)))
                            *(eax_21 - 0xc) = fconvert.s(fconvert.t(*(eax_21 + esi_19 - 0xc)) * x87_r7_2
                                + fconvert.t(*(eax_21 - 0xc)))
                            *(eax_21 - 8) = fconvert.s(fconvert.t(*(ecx_16 - 4)) * x87_r7_2
                                + fconvert.t(*(eax_21 - 8)))
                        while (i_5 != 1)
                case 4
                    x87_r7_2 = fconvert.t(var_8_1)
                    int32_t eax_22 = 0
                    arg2 = 0
                    
                    if (i_18 s>= 4)
                        int32_t i_17 = ((i_18 - 4) u>> 2) + 1
                        arg2 = i_17 << 2
                        void* ecx_17 = edi + 0x1c
                        void* eax_23 = edx_6 + 0x14
                        int32_t i_6
                        
                        do
                            eax_23 += 0x40
                            long double x87_r6_92 = fconvert.t(*(ecx_17 - 0x1c)) * x87_r7_2
                            ecx_17 += 0x40
                            i_6 = i_17
                            i_17 -= 1
                            *(eax_23 - 0x54) = fconvert.s(x87_r6_92 + fconvert.t(*(eax_23 - 0x54)))
                            *(eax_23 - 0x50) = fconvert.s(fconvert.t(*(ecx_17 - 0x58)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x50)))
                            *(eax_23 - 0x4c) = fconvert.s(fconvert.t(*(ecx_17 - 0x54)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x4c)))
                            *(eax_23 - 0x48) = fconvert.s(fconvert.t(*(ecx_17 - 0x50)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x48)))
                            *(eax_23 - 0x44) = fconvert.s(fconvert.t(*(ecx_17 - 0x4c)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x44)))
                            *(eax_23 - 0x40) = fconvert.s(
                                fconvert.t(*(eax_23 + edi - edx_6 - 0x40)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x40)))
                            *(eax_23 - 0x3c) = fconvert.s(fconvert.t(*(ecx_17 - 0x44)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x3c)))
                            *(eax_23 - 0x38) = fconvert.s(fconvert.t(*(ecx_17 - 0x40)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x38)))
                            *(eax_23 - 0x34) = fconvert.s(fconvert.t(*(ecx_17 - 0x3c)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x34)))
                            *(eax_23 - 0x30) = fconvert.s(fconvert.t(*(ecx_17 - 0x38)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x30)))
                            *(eax_23 - 0x2c) = fconvert.s(fconvert.t(*(ecx_17 - 0x34)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x2c)))
                            *(eax_23 - 0x28) = fconvert.s(fconvert.t(*(ecx_17 - 0x30)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x28)))
                            *(eax_23 - 0x24) = fconvert.s(fconvert.t(*(ecx_17 - 0x2c)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x24)))
                            *(eax_23 - 0x20) = fconvert.s(fconvert.t(*(ecx_17 - 0x28)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x20)))
                            *(eax_23 - 0x1c) = fconvert.s(fconvert.t(*(ecx_17 - 0x24)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x1c)))
                            *(eax_23 - 0x18) = fconvert.s(fconvert.t(*(ecx_17 - 0x20)) * x87_r7_2
                                + fconvert.t(*(eax_23 - 0x18)))
                        while (i_6 != 1)
                        i_18 = i_19
                        eax_22 = arg2
                    
                    if (eax_22 s< i_18)
                        int32_t eax_24 = eax_22 * 2
                        void* esi_25 = edi - edx_6
                        void* ecx_18 = edi + (eax_24 << 3) + 0xc
                        void* eax_25 = edx_6 + (eax_24 << 3) + 4
                        int32_t i_13 = i_18 - arg2
                        void* var_8_8 = esi_25
                        int32_t i_7
                        
                        do
                            eax_25 += 0x10
                            long double x87_r6_140 = fconvert.t(*(ecx_18 - 0xc)) * x87_r7_2
                            ecx_18 += 0x10
                            i_7 = i_13
                            i_13 -= 1
                            *(eax_25 - 0x14) = fconvert.s(x87_r6_140 + fconvert.t(*(eax_25 - 0x14)))
                            *(eax_25 - 0x10) = fconvert.s(
                                fconvert.t(*(esi_25 + eax_25 - 0x10)) * x87_r7_2
                                + fconvert.t(*(eax_25 - 0x10)))
                            *(eax_25 - 0xc) = fconvert.s(fconvert.t(*(ecx_18 - 0x14)) * x87_r7_2
                                + fconvert.t(*(eax_25 - 0xc)))
                            *(eax_25 - 8) = fconvert.s(fconvert.t(*(ecx_18 - 0x10)) * x87_r7_2
                                + fconvert.t(*(eax_25 - 8)))
                        while (i_7 != 1)
        else if (i_18 s> 0)
            x87_r7_2 = fconvert.t(var_8_1)
            void* var_1c_1 = edx_6 + 4
            int32_t var_14_1 = 0
            void* var_18_1 = edi + 8
            int32_t i_9 = i_18
            int32_t i_8
            
            do
                int32_t eax_29 = 0
                arg2 = 0
                
                if (ecx_8 s>= 4)
                    void* esi_26 = var_18_1
                    void* eax_28 = var_1c_1
                    int32_t j_2 = ((ecx_1 - 4) u>> 2) + 1
                    arg2 = j_2 << 2
                    int32_t j
                    
                    do
                        eax_28 += 0x10
                        long double x87_r6_152 = fconvert.t(*(esi_26 - 8)) * x87_r7_2
                        esi_26 += 0x10
                        j = j_2
                        j_2 -= 1
                        *(eax_28 - 0x14) = fconvert.s(x87_r6_152 + fconvert.t(*(eax_28 - 0x14)))
                        *(eax_28 - 0x10) = fconvert.s(
                            fconvert.t(*(eax_28 + edi - edx_6 - 0x10)) * x87_r7_2
                            + fconvert.t(*(eax_28 - 0x10)))
                        *(eax_28 - 0xc) = fconvert.s(fconvert.t(*(esi_26 - 0x10)) * x87_r7_2
                            + fconvert.t(*(eax_28 - 0xc)))
                        *(eax_28 - 8) = fconvert.s(fconvert.t(*(esi_26 - 0xc)) * x87_r7_2
                            + fconvert.t(*(eax_28 - 8)))
                    while (j != 1)
                    eax_29 = arg2
                    i_18 = i_19
                    ecx_8 = ecx_1
                
                if (eax_29 s< ecx_8)
                    void* eax_30 = edx_6 + ((var_14_1 + eax_29) << 2)
                    int32_t j_3 = ecx_1 - arg2
                    int32_t j_1
                    
                    do
                        long double x87_r6_163 = fconvert.t(*(edi - edx_6 + eax_30))
                        eax_30 += 4
                        j_1 = j_3
                        j_3 -= 1
                        *(eax_30 - 4) = fconvert.s(x87_r6_163 * x87_r7_2 + fconvert.t(*(eax_30 - 4)))
                    while (j_1 != 1)
                    ecx_8 = ecx_1
                
                var_14_1 += ecx_8
                int32_t eax_31 = ecx_8 << 2
                var_18_1 += eax_31
                var_1c_1 += eax_31
                i_8 = i_9
                i_9 -= 1
            while (i_8 != 1)
        var_24_1 = &var_24_1[1]
        int32_t eax_33 = var_20 + 1
        var_20 = eax_33
        
        if (eax_33 s> edx_1)
            break
        
        eax_5 = var_30_1
}
