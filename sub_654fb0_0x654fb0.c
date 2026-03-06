// 函数名称: sub_654fb0
// 虚拟地址: 0x654fb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_654fb0(float* arg1, float* arg2 @ esi, float arg3, int32_t arg4, int32_t arg5, float* arg6, void* arg7, void* arg8, int32_t arg9)
{
    // 第一条实际指令: int32_t eax_1 = arg3 i* arg4
    int32_t eax_1 = arg3 i* arg4
    int32_t ecx_1 = arg3 i* arg5
    float var_50 = fconvert.s(fconvert.t(data_8bbd28) / float.t(arg4))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686860(mxcsr, x87control, fconvert.t(var_50))
    float var_64 = fconvert.s(sub_686ea0(mxcsr, x87control_1, fconvert.t(var_50)))
    int32_t eax_3 = (arg3 - 1) s>> 1
    int32_t eax_6 = (arg4 + 1) s>> 1
    int32_t eax_7 = 0
    int32_t var_8 = 0
    
    if (arg3 s>= arg5)
        int32_t var_10_1 = 0
        
        if (arg5 s> 0)
            float eax_18 = arg3
            void* var_38_1 = &arg1[2]
            void* var_3c_1 = &arg2[2]
            int32_t i_25 = arg5
            int32_t i
            
            do
                int32_t edx_13 = 0
                int32_t var_14_2 = var_8
                int32_t ecx_13 = var_10_1
                
                if (eax_18 s>= 4)
                    int32_t j_24 = ((eax_18 - 4) u>> 2) + 1
                    int32_t ecx_14 = j_24 << 2
                    var_14_2 = var_8 + ecx_14
                    void* edx_18 = var_38_1
                    void* ecx_15 = var_3c_1
                    int32_t j
                    
                    do
                        ecx_15 += 0x10
                        *(ecx_15 - 0x18) = fconvert.s(fconvert.t(*(edx_18 - 8)))
                        edx_18 += 0x10
                        j = j_24
                        j_24 -= 1
                        *(ecx_15 - 0x14) = fconvert.s(fconvert.t(*(edx_18 - 0x14)))
                        *(ecx_15 - 0x10) = fconvert.s(fconvert.t(*(edx_18 - 0x10)))
                        *(ecx_15 - 0xc) = fconvert.s(fconvert.t(*(edx_18 - 0xc)))
                    while (j != 1)
                    eax_18 = arg3
                    edx_13 = ecx_14
                    ecx_13 = var_10_1 + ecx_14
                
                if (edx_13 s< eax_18)
                    void* var_44_1 = &arg1[ecx_13]
                    float* var_40_1 = &arg2[var_14_2]
                    int32_t j_26 = eax_18 i- edx_13
                    int32_t j_1
                    
                    do
                        long double x87_r7_15 = fconvert.t(*var_44_1)
                        var_44_1 += 4
                        *var_40_1 = fconvert.s(x87_r7_15)
                        var_40_1 = &var_40_1[1]
                        j_1 = j_26
                        j_26 -= 1
                    while (j_1 != 1)
                
                var_8 += eax_18
                var_3c_1 += eax_18 << 2
                var_10_1 += eax_1
                var_38_1 += eax_1 * 4
                i = i_25
                i_25 -= 1
            while (i != 1)
    else if (arg3 s> 0)
        do
            int32_t edx_7 = arg5
            int32_t var_14_1 = eax_7
            int32_t var_18_1 = 0
            
            if (edx_7 s>= 4)
                int32_t i_24 = ((edx_7 - 4) u>> 2) + 1
                var_18_1 = (((edx_7 - 4) u>> 2) + 1) * 4
                int32_t ecx_4 = eax_7
                int32_t i_1
                
                do
                    arg2[eax_7] = fconvert.s(fconvert.t(arg1[ecx_4]))
                    int32_t eax_8 = eax_7 i+ arg3
                    int32_t ecx_5 = ecx_4 + eax_1
                    int32_t ecx_6 = ecx_5 + eax_1
                    arg2[eax_8] = fconvert.s(fconvert.t(arg1[ecx_5]))
                    int32_t eax_9 = eax_8 i+ arg3
                    int32_t ecx_7 = ecx_6 + eax_1
                    arg2[eax_9] = fconvert.s(fconvert.t(arg1[ecx_6]))
                    int32_t eax_10 = eax_9 i+ arg3
                    ecx_4 = ecx_7 + eax_1
                    arg2[eax_10] = fconvert.s(fconvert.t(arg1[ecx_7]))
                    eax_7 = eax_10 i+ arg3
                    i_1 = i_24
                    i_24 -= 1
                while (i_1 != 1)
                edx_7 = arg5
                var_14_1 = ecx_4
            
            if (var_18_1 s< edx_7)
                int32_t ecx_10 = arg5 - var_18_1
                float* edx_9 = &arg2[eax_7]
                float* eax_12 = &arg1[var_14_1]
                float* var_4c_1 = eax_12
                
                while (true)
                    *edx_9 = fconvert.s(fconvert.t(*eax_12))
                    eax_12 = &var_4c_1[eax_1]
                    int32_t temp4_1 = ecx_10
                    ecx_10 -= 1
                    var_4c_1 = eax_12
                    
                    if (temp4_1 == 1)
                        break
                    
                    edx_9 = &edx_9[arg3]
            
            eax_7 = var_8 + 1
            var_8 = eax_7
        while (eax_7 s< arg3)
    
    int32_t eax_22 = ecx_1 * arg4
    float edx_21 = arg3
    int32_t var_10_2 = eax_22
    int32_t eax_23 = edx_21 i* 2
    int32_t var_20 = eax_23
    int32_t var_8_1 = 0
    
    if (eax_6 s> 1)
        int32_t i_26 = eax_6 - 1
        int32_t i_2
        
        do
            var_8_1 += ecx_1
            int32_t eax_27 = var_10_2 - ecx_1
            int32_t var_14_3 = var_8_1
            int32_t ecx_26 = arg5
            var_10_2 = eax_27
            int32_t var_1c_3 = eax_27
            int32_t eax_28 = var_20
            int32_t var_c_1 = eax_28
            int32_t var_18_2 = 0
            
            if (ecx_26 s>= 4)
                int32_t j_20 = ((ecx_26 - 4) u>> 2) + 1
                var_18_2 = (((ecx_26 - 4) u>> 2) + 1) * 4
                int32_t j_2
                
                do
                    long double x87_r7_16 = fconvert.t(arg1[eax_28 - 1])
                    int32_t var_14_4 = var_14_3 i+ edx_21
                    arg2[var_14_3] = fconvert.s(x87_r7_16 + x87_r7_16)
                    long double x87_r7_18 = fconvert.t(arg1[eax_28])
                    int32_t eax_29 = eax_28 + eax_1
                    int32_t var_1c_4 = var_1c_3 i+ edx_21
                    arg2[var_1c_3] = fconvert.s(x87_r7_18 + x87_r7_18)
                    long double x87_r7_20 = fconvert.t(arg1[eax_29 - 1])
                    int32_t var_14_5 = var_14_4 i+ edx_21
                    arg2[var_14_4] = fconvert.s(x87_r7_20 + x87_r7_20)
                    long double x87_r7_22 = fconvert.t(arg1[eax_29])
                    int32_t eax_30 = eax_29 + eax_1
                    int32_t var_1c_5 = var_1c_4 i+ edx_21
                    arg2[var_1c_4] = fconvert.s(x87_r7_22 + x87_r7_22)
                    long double x87_r7_24 = fconvert.t(arg1[eax_30 - 1])
                    int32_t var_14_6 = var_14_5 i+ edx_21
                    arg2[var_14_5] = fconvert.s(x87_r7_24 + x87_r7_24)
                    long double x87_r7_26 = fconvert.t(arg1[eax_30])
                    int32_t eax_31 = eax_30 + eax_1
                    int32_t var_1c_6 = var_1c_5 i+ edx_21
                    arg2[var_1c_5] = fconvert.s(x87_r7_26 + x87_r7_26)
                    long double x87_r7_28 = fconvert.t(arg1[eax_31 - 1])
                    var_14_3 = var_14_6 i+ edx_21
                    arg2[var_14_6] = fconvert.s(x87_r7_28 + x87_r7_28)
                    long double x87_r7_30 = fconvert.t(arg1[eax_31])
                    var_1c_3 = var_1c_6 i+ edx_21
                    eax_28 = eax_31 + eax_1
                    j_2 = j_20
                    j_20 -= 1
                    arg2[var_1c_6] = fconvert.s(x87_r7_30 + x87_r7_30)
                while (j_2 != 1)
                ecx_26 = arg5
                var_c_1 = eax_28
            
            if (var_18_2 s< ecx_26)
                float* var_40_2 = &arg1[var_c_1]
                void* var_4c_2 = &arg2[var_14_3]
                float* var_44_2 = &arg2[var_1c_3]
                int32_t j_22 = ecx_26 - var_18_2
                float* eax_40 = var_40_2
                int32_t j_3
                
                do
                    long double x87_r7_32 = fconvert.t(eax_40[-1])
                    float* ecx_40 = var_4c_2
                    *ecx_40 = fconvert.s(x87_r7_32 + x87_r7_32)
                    long double x87_r7_34 = fconvert.t(*eax_40)
                    *var_44_2 = fconvert.s(x87_r7_34 + x87_r7_34)
                    var_44_2 = &var_44_2[edx_21]
                    var_4c_2 = &ecx_40[edx_21]
                    eax_40 = &var_40_2[eax_1]
                    j_3 = j_22
                    j_22 -= 1
                    var_40_2 = eax_40
                while (j_3 != 1)
            
            var_20 += eax_23
            i_2 = i_26
            i_26 -= 1
        while (i_2 != 1)
    
    if (edx_21 != 1)
        if (eax_3 s< arg5)
            int32_t var_8_2 = 0
            int32_t var_30_1 = 0
            int32_t var_10_3 = eax_22
            
            if (eax_6 s> 1)
                int32_t i_23 = eax_6 - 1
                int32_t i_3
                
                do
                    var_8_2 += ecx_1
                    var_10_3 -= ecx_1
                    int32_t eax_49 = var_30_1 + edx_21 i* 2
                    var_30_1 = eax_49
                    int32_t var_40_3 = eax_49
                    
                    if (edx_21 s> 2)
                        int32_t var_44_3 = eax_49
                        int32_t j_23 = ((edx_21 - 3) u>> 1) + 1
                        int32_t j_4
                        
                        do
                            var_40_3 -= 2
                            int32_t eax_54 = var_44_3 + 2
                            int32_t var_20_1 = var_8_2 - eax_49 + eax_54
                            int32_t var_c_2 = var_10_3 - eax_49 + eax_54
                            var_44_3 = eax_54
                            int32_t var_24_1 = var_40_3
                            int32_t var_18_3 = 0
                            
                            if (arg5 s>= 4)
                                int32_t var_4c_3 = ((arg5 - 4) u>> 2) + 1
                                var_18_3 = (((arg5 - 4) u>> 2) + 1) * 4
                                
                                while (true)
                                    arg2[var_20_1 - 1] = fconvert.s(fconvert.t(arg1[var_24_1 - 1])
                                        + fconvert.t(arg1[eax_54 - 1]))
                                    arg2[var_c_2 - 1] = fconvert.s(fconvert.t(arg1[eax_54 - 1])
                                        - fconvert.t(arg1[var_24_1 - 1]))
                                    int32_t var_20_2 = var_20_1 i+ edx_21
                                    arg2[var_20_1] = fconvert.s(fconvert.t(arg1[eax_54])
                                        - fconvert.t(arg1[var_24_1]))
                                    int32_t var_c_3 = var_c_2 i+ edx_21
                                    arg2[var_c_2] = fconvert.s(fconvert.t(arg1[eax_54])
                                        + fconvert.t(arg1[var_24_1]))
                                    int32_t ecx_72 = var_24_1 + eax_1
                                    int32_t eax_55 = eax_54 + eax_1
                                    arg2[var_20_2 - 1] = fconvert.s(fconvert.t(arg1[ecx_72 - 1])
                                        + fconvert.t(arg1[eax_55 - 1]))
                                    arg2[var_c_3 - 1] = fconvert.s(fconvert.t(arg1[eax_55 - 1])
                                        - fconvert.t(arg1[ecx_72 - 1]))
                                    arg2[var_20_2] =
                                        fconvert.s(fconvert.t(arg1[eax_55]) - fconvert.t(arg1[ecx_72]))
                                    arg2[var_c_3] =
                                        fconvert.s(fconvert.t(arg1[eax_55]) + fconvert.t(arg1[ecx_72]))
                                    int32_t var_c_4 = var_c_3 i+ arg3
                                    int32_t edx_26 = var_20_2 i+ arg3
                                    int32_t ecx_76 = ecx_72 + eax_1
                                    int32_t eax_56 = eax_55 + eax_1
                                    arg2[edx_26 - 1] = fconvert.s(fconvert.t(arg1[ecx_76 - 1])
                                        + fconvert.t(arg1[eax_56 - 1]))
                                    arg2[var_c_4 - 1] = fconvert.s(fconvert.t(arg1[eax_56 - 1])
                                        - fconvert.t(arg1[ecx_76 - 1]))
                                    arg2[edx_26] =
                                        fconvert.s(fconvert.t(arg1[eax_56]) - fconvert.t(arg1[ecx_76]))
                                    arg2[var_c_4] =
                                        fconvert.s(fconvert.t(arg1[eax_56]) + fconvert.t(arg1[ecx_76]))
                                    int32_t var_c_5 = var_c_4 i+ arg3
                                    int32_t edx_31 = edx_26 i+ arg3
                                    int32_t eax_57 = eax_56 + eax_1
                                    int32_t ecx_80 = ecx_76 + eax_1
                                    arg2[edx_31 - 1] = fconvert.s(fconvert.t(arg1[ecx_80 - 1])
                                        + fconvert.t(arg1[eax_57 - 1]))
                                    arg2[var_c_5 - 1] = fconvert.s(fconvert.t(arg1[eax_57 - 1])
                                        - fconvert.t(arg1[ecx_80 - 1]))
                                    arg2[edx_31] =
                                        fconvert.s(fconvert.t(arg1[eax_57]) - fconvert.t(arg1[ecx_80]))
                                    arg2[var_c_5] =
                                        fconvert.s(fconvert.t(arg1[eax_57]) + fconvert.t(arg1[ecx_80]))
                                    var_c_2 = var_c_5 i+ arg3
                                    var_24_1 = ecx_80 + eax_1
                                    eax_54 = eax_57 + eax_1
                                    int32_t temp21_1 = var_4c_3
                                    var_4c_3 -= 1
                                    var_20_1 = edx_31 i+ arg3
                                    
                                    if (temp21_1 == 1)
                                        break
                                    
                                    edx_21 = arg3
                            
                            if (var_18_3 s>= arg5)
                                edx_21 = arg3
                            else
                                float* var_14_7 = &arg1[eax_54]
                                void* var_38_2 = &arg2[var_20_1]
                                void* var_20_5 = &arg2[var_c_2]
                                float* var_24_5 = &arg1[var_24_1]
                                edx_21 = arg3
                                int32_t k_7 = arg5 - var_18_3
                                float* eax_64 = var_14_7
                                int32_t k
                                
                                do
                                    *(var_38_2 - 4) =
                                        fconvert.s(fconvert.t(var_24_5[-1]) + fconvert.t(eax_64[-1]))
                                    *(var_20_5 - 4) =
                                        fconvert.s(fconvert.t(eax_64[-1]) - fconvert.t(var_24_5[-1]))
                                    *var_38_2 = fconvert.s(fconvert.t(*eax_64) - fconvert.t(*var_24_5))
                                    long double x87_r7_75 = fconvert.t(*var_24_5) + fconvert.t(*eax_64)
                                    var_24_5 = &var_24_5[eax_1]
                                    *var_20_5 = fconvert.s(x87_r7_75)
                                    int32_t eax_66 = edx_21 << 2
                                    var_38_2 += eax_66
                                    var_20_5 += eax_66
                                    eax_64 = &var_14_7[eax_1]
                                    k = k_7
                                    k_7 -= 1
                                    var_14_7 = eax_64
                                while (k != 1)
                            
                            j_4 = j_23
                            j_23 -= 1
                        while (j_4 != 1)
                    
                    i_3 = i_23
                    i_23 -= 1
                while (i_3 != 1)
        else if (eax_6 s> 1)
            float* var_44_4 = arg1
            int32_t ecx_98 = ecx_1 * 4
            void* var_40_4 = &arg2[eax_22]
            int32_t var_4c_4 = ecx_98
            float* eax_70 = arg2
            int32_t var_1c_8 = eax_6 - 1
            
            while (true)
                var_40_4 -= ecx_98
                eax_70 += ecx_98
                var_44_4 = &var_44_4[edx_21 i* 2]
                
                if (arg5 s> 0)
                    float* var_24_6 = eax_70
                    float* eax_71 = var_44_4
                    void* var_30_2 = var_40_4
                    float* var_48_1 = eax_71
                    int32_t i_27 = arg5
                    int32_t i_4
                    
                    do
                        if (edx_21 s> 2)
                            void* var_38_3 = var_30_2
                            arg3 = var_24_6
                            float* edi_3 = eax_71
                            int32_t j_19 = ((edx_21 - 3) u>> 1) + 1
                            int32_t j_5
                            
                            do
                                arg3 += 8
                                long double x87_r7_77 = fconvert.t(edi_3[-3]) + fconvert.t(eax_71[1])
                                var_38_3 += 8
                                edi_3 -= 8
                                *(arg3 - 4) = fconvert.s(x87_r7_77)
                                long double x87_r7_78 = fconvert.t(eax_71[1])
                                eax_71 = &eax_71[2]
                                j_5 = j_19
                                j_19 -= 1
                                *(var_38_3 - 4) = fconvert.s(x87_r7_78 - fconvert.t(edi_3[-1]))
                                *arg3 = fconvert.s(fconvert.t(*eax_71) - fconvert.t(*edi_3))
                                *var_38_3 = fconvert.s(fconvert.t(*eax_71) + fconvert.t(*edi_3))
                            while (j_5 != 1)
                            eax_71 = var_48_1
                        
                        var_30_2 += edx_21 << 2
                        var_24_6 = &var_24_6[edx_21]
                        eax_71 = &eax_71[eax_1]
                        i_4 = i_27
                        i_27 -= 1
                        var_48_1 = eax_71
                    while (i_4 != 1)
                
                int32_t temp10_1 = var_1c_8
                var_1c_8 -= 1
                
                if (temp10_1 == 1)
                    break
                
                ecx_98 = var_4c_4
    
    float* ecx_115 = arg6
    float var_54_1 = fconvert.s(float.t(1))
    void* eax_73 = arg4 * ecx_115
    int32_t edi_6 = (arg4 - 1) * ecx_115
    void* var_8_3 = nullptr
    void* var_10_4 = eax_73
    
    if (eax_6 s> 1)
        long double x87_r7_86 = fconvert.t(fconvert.s(st0))
        long double x87_r6_1 = fconvert.t(var_64)
        void* edi_8 = eax_73 - ecx_115
        long double x87_r5_1 = fconvert.t(fconvert.s(float.t(0)))
        void* var_44_5 = arg7 + 8
        void* var_40_5 = arg7 + (eax_73 << 2) + 8
        int32_t i_15 = eax_6 - 1
        int32_t i_5
        
        do
            long double x87_r4_1 = fconvert.t(var_54_1)
            var_8_3 += ecx_115
            var_10_4 -= ecx_115
            int32_t eax_77 = ecx_115 << 2
            var_44_5 += eax_77
            var_40_5 -= eax_77
            void* var_1c_9 = var_8_3
            void* var_20_6 = var_10_4
            float var_c_6 = 0f
            void* var_30_3 = ecx_115
            int32_t var_48_2 = edi_6
            long double x87_r5_4 = fconvert.t(fconvert.s(x87_r4_1 * x87_r7_86 - x87_r5_1 * x87_r6_1))
            arg3 = 0f
            var_54_1 = fconvert.s(x87_r5_4)
            long double x87_r4_3 = fconvert.t(fconvert.s(x87_r5_1 * x87_r7_86 + x87_r4_1 * x87_r6_1))
            
            if (ecx_115 s>= 4)
                void* var_38_6 = var_40_5
                void* var_18_4 = arg8 + (edi_6 << 2) + 8
                void* var_2c_1 = arg8 + (ecx_115 << 2) + 8
                void* var_24_7 = arg8 + 8
                int32_t j_21 = (&ecx_115[-1] u>> 2) + 1
                float eax_87 = ((&ecx_115[-1] u>> 2) + 1) * 4
                var_1c_9 = var_8_3 i+ eax_87
                var_30_3 = &ecx_115[(&ecx_115[-1] u>> 2) + 1]
                var_20_6 = var_10_4 i+ eax_87
                var_c_6 = eax_87
                arg3 = eax_87
                void* eax_88 = var_44_5
                var_48_2 = edi_6 i+ eax_87
                int32_t j_6
                
                do
                    eax_88 += 0x10
                    *(eax_88 - 0x18) =
                        fconvert.s(fconvert.t(*(var_2c_1 - 8)) * x87_r5_4 + fconvert.t(*(var_24_7 - 8)))
                    *(var_38_6 - 8) = fconvert.s(fconvert.t(*(var_18_4 - 8)) * x87_r4_3)
                    *(eax_88 - 0x14) =
                        fconvert.s(fconvert.t(*(var_2c_1 - 4)) * x87_r5_4 + fconvert.t(*(var_24_7 - 4)))
                    *(var_38_6 - 4) = fconvert.s(fconvert.t(*(var_18_4 - 4)) * x87_r4_3)
                    *(eax_88 - 0x10) =
                        fconvert.s(fconvert.t(*var_2c_1) * x87_r5_4 + fconvert.t(*var_24_7))
                    *var_38_6 = fconvert.s(fconvert.t(*var_18_4) * x87_r4_3)
                    long double x87_r3_20 = fconvert.t(*(var_2c_1 + 4))
                    void* edi_35 = var_24_7
                    var_2c_1 += 0x10
                    var_24_7 += 0x10
                    void* edi_36 = var_18_4
                    var_18_4 += 0x10
                    *(eax_88 - 0xc) = fconvert.s(x87_r3_20 * x87_r5_4 + fconvert.t(*(edi_35 + 4)))
                    void* edi_38 = var_38_6 + 0x10
                    j_6 = j_21
                    j_21 -= 1
                    var_38_6 = edi_38
                    *(edi_38 - 0xc) = fconvert.s(fconvert.t(*(edi_36 + 4)) * x87_r4_3)
                while (j_6 != 1)
            
            if (arg3 s< ecx_115)
                float* var_24_8 = arg8 + (var_48_2 << 2)
                float* var_38_7 = arg7 + (var_1c_9 << 2)
                void* var_20_7 = arg7 + (var_20_6 << 2)
                float* var_2c_2 = arg8 + (var_c_6 << 2)
                float* var_30_4 = arg8 + (var_30_3 << 2)
                void* j_25 = ecx_115 i- arg3
                void* j_7
                
                do
                    long double x87_r3_25 = fconvert.t(*var_30_4)
                    float* edi_47 = var_2c_2
                    var_30_4 = &var_30_4[1]
                    var_2c_2 = &var_2c_2[1]
                    float* edi_48 = var_38_7
                    var_38_7 = &var_38_7[1]
                    *edi_48 = fconvert.s(x87_r3_25 * x87_r5_4 + fconvert.t(*edi_47))
                    float* edi_49 = var_24_8
                    var_24_8 = &var_24_8[1]
                    void* edi_50 = var_20_7
                    var_20_7 += 4
                    j_7 = j_25
                    j_25 -= 1
                    *edi_50 = fconvert.s(x87_r4_3 * fconvert.t(*edi_49))
                while (j_7 != 1)
            
            float var_58_1 = fconvert.s(x87_r5_4)
            x87_r5_1 = x87_r5_4
            void* var_c_7 = ecx_115
            void* var_30_5 = edi_8
            
            if (eax_6 s<= 2)
                x87_r6_1 = x87_r4_3
            else
                x87_r7_86 = x87_r4_3
                long double x87_r4_6 = fconvert.t(fconvert.s(x87_r4_3))
                void* var_4c_5 = arg8 + (ecx_115 << 2) + 8
                void* var_48_3 = arg8 + (var_30_5 << 2) + 8
                int32_t j_18 = eax_6 - 2
                int32_t j_8
                
                do
                    long double x87_r3_30 = fconvert.t(var_58_1)
                    var_c_7 += ecx_115
                    var_30_5 -= ecx_115
                    int32_t eax_101 = ecx_115 << 2
                    var_4c_5 += eax_101
                    var_48_3 -= eax_101
                    void* var_1c_10 = var_8_3
                    void* var_20_8 = var_10_4
                    void* var_5c_2 = var_c_7
                    void* eax_105 = var_30_5
                    float var_38_9 = fconvert.s(x87_r4_6 * x87_r5_1 + x87_r3_30 * x87_r6_1)
                    x87_r4_6 = fconvert.t(fconvert.s(x87_r3_30 * x87_r5_1 - x87_r4_6 * x87_r6_1))
                    arg3 = 0f
                    var_58_1 = fconvert.s(x87_r4_6)
                    long double x87_r3_32 = fconvert.t(var_38_9)
                    
                    if (ecx_115 s>= 4)
                        void* var_2c_3 = var_4c_5
                        int32_t k_8 = (&ecx_115[-1] u>> 2) + 1
                        float ecx_120 = ((&ecx_115[-1] u>> 2) + 1) * 4
                        var_1c_10 = var_8_3 i+ ecx_120
                        var_20_8 = var_10_4 i+ ecx_120
                        var_5c_2 = var_c_7 i+ ecx_120
                        void* var_18_5 = var_48_3
                        void* eax_107 = var_44_5
                        arg3 = ecx_120
                        void* ecx_121 = var_40_5
                        int32_t k_1
                        
                        do
                            eax_107 += 0x10
                            ecx_121 += 0x10
                            *(eax_107 - 0x18) = fconvert.s(fconvert.t(*(var_2c_3 - 8)) * x87_r4_6
                                + fconvert.t(*(eax_107 - 0x18)))
                            *(ecx_121 - 0x18) = fconvert.s(fconvert.t(*(var_18_5 - 8)) * x87_r3_32
                                + fconvert.t(*(ecx_121 - 0x18)))
                            *(eax_107 - 0x14) = fconvert.s(fconvert.t(*(var_2c_3 - 4)) * x87_r4_6
                                + fconvert.t(*(eax_107 - 0x14)))
                            *(ecx_121 - 0x14) = fconvert.s(fconvert.t(*(var_18_5 - 4)) * x87_r3_32
                                + fconvert.t(*(ecx_121 - 0x14)))
                            *(eax_107 - 0x10) = fconvert.s(fconvert.t(*var_2c_3) * x87_r4_6
                                + fconvert.t(*(eax_107 - 0x10)))
                            void* edi_68 = var_2c_3
                            var_2c_3 += 0x10
                            *(ecx_121 - 0x10) = fconvert.s(fconvert.t(*var_18_5) * x87_r3_32
                                + fconvert.t(*(ecx_121 - 0x10)))
                            void* edi_69 = var_18_5
                            var_18_5 += 0x10
                            k_1 = k_8
                            k_8 -= 1
                            *(eax_107 - 0xc) = fconvert.s(fconvert.t(*(edi_68 + 4)) * x87_r4_6
                                + fconvert.t(*(eax_107 - 0xc)))
                            *(ecx_121 - 0xc) = fconvert.s(fconvert.t(*(edi_69 + 4)) * x87_r3_32
                                + fconvert.t(*(ecx_121 - 0xc)))
                        while (k_1 != 1)
                        ecx_115 = arg6
                        eax_105 = var_30_5 i+ ecx_120
                    
                    if (arg3 s< ecx_115)
                        void* var_24_10 = arg8 + (eax_105 << 2)
                        void* var_20_9 = arg7 + (var_20_8 << 2)
                        float* var_2c_4 = arg7 + (var_1c_10 << 2)
                        float* var_38_10 = arg8 + (var_5c_2 << 2)
                        void* k_9 = ecx_115 i- arg3
                        void* k_2
                        
                        do
                            long double x87_r2_31 = fconvert.t(*var_38_10)
                            float* edi_76 = var_2c_4
                            var_38_10 = &var_38_10[1]
                            var_2c_4 = &var_2c_4[1]
                            *edi_76 = fconvert.s(x87_r2_31 * x87_r4_6 + fconvert.t(*edi_76))
                            long double x87_r2_34 = fconvert.t(*var_24_10)
                            void* edi_78 = var_20_9
                            var_24_10 += 4
                            var_20_9 += 4
                            k_2 = k_9
                            k_9 -= 1
                            *edi_78 = fconvert.s(x87_r2_34 * x87_r3_32 + fconvert.t(*edi_78))
                        while (k_2 != 1)
                    
                    j_8 = j_18
                    j_18 -= 1
                    x87_r5_1 = x87_r3_32
                while (j_8 != 1)
                x87_r5_1 = x87_r4_6
                x87_r6_1 = fconvert.t(var_64)
            
            i_5 = i_15
            i_15 -= 1
        while (i_5 != 1)
    
    void* var_8_4 = nullptr
    
    if (eax_6 s> 1)
        void* var_4c_6 = arg8 + 8
        int32_t i_17 = eax_6 - 1
        int32_t i_6
        
        do
            var_8_4 += ecx_115
            var_4c_6 += ecx_115 << 2
            void* eax_119 = var_8_4
            arg3 = 0f
            
            if (ecx_115 s>= 4)
                int32_t var_68_4 = (&ecx_115[-1] u>> 2) + 1
                float eax_126 = ((&ecx_115[-1] u>> 2) + 1) * 4
                void* edi_81 = var_4c_6
                arg3 = eax_126
                void* eax_127 = arg8 + 8
                
                while (true)
                    long double x87_r7_90 = fconvert.t(*(edi_81 - 8)) + fconvert.t(*(eax_127 - 8))
                    eax_127 += 0x10
                    int32_t temp13_1 = var_68_4
                    var_68_4 -= 1
                    *(eax_127 - 0x18) = fconvert.s(x87_r7_90)
                    *(eax_127 - 0x14) =
                        fconvert.s(fconvert.t(*(edi_81 - 4)) + fconvert.t(*(eax_127 - 0x14)))
                    *(eax_127 - 0x10) = fconvert.s(fconvert.t(*edi_81) + fconvert.t(*(eax_127 - 0x10)))
                    *(eax_127 - 0xc) =
                        fconvert.s(fconvert.t(*(edi_81 + 4)) + fconvert.t(*(eax_127 - 0xc)))
                    
                    if (temp13_1 == 1)
                        break
                    
                    edi_81 += 0x10
                
                eax_119 = var_8_4 i+ eax_126
            
            if (arg3 s< ecx_115)
                void* var_48_5 = arg8 + (eax_119 << 2)
                float eax_129 = arg3
                
                do
                    long double x87_r7_98 = fconvert.t(*var_48_5) + fconvert.t(*(arg8 + (eax_129 << 2)))
                    var_48_5 += 4
                    eax_129 += 1
                    *(arg8 + (eax_129 << 2) - 4) = fconvert.s(x87_r7_98)
                while (eax_129 s< ecx_115)
            
            i_6 = i_17
            i_17 -= 1
        while (i_6 != 1)
    
    int32_t var_8_5 = 0
    int32_t var_10_6 = eax_22
    float entry_ebx
    
    if (eax_6 s> 1)
        int32_t i_18 = eax_6 - 1
        int32_t i_7
        
        do
            var_8_5 += ecx_1
            int32_t eax_134 = var_10_6 - ecx_1
            int32_t edi_87 = var_8_5
            var_10_6 = eax_134
            int32_t var_14_9 = edi_87
            int32_t var_1c_11 = eax_134
            int32_t var_18_6 = 0
            
            if (arg5 s>= 4)
                arg3 = ((arg5 - 4) u>> 2) + 1
                var_18_6 = (((arg5 - 4) u>> 2) + 1) i* 4
                float j_9
                
                do
                    arg2[edi_87] = fconvert.s(fconvert.t(*(entry_ebx i+ (edi_87 << 2)))
                        - fconvert.t(*(entry_ebx i+ (var_1c_11 << 2))))
                    int32_t edi_88 = edi_87 i+ edx_21
                    arg2[var_1c_11] = fconvert.s(fconvert.t(*(entry_ebx i+ (var_1c_11 << 2)))
                        + fconvert.t(*(entry_ebx i+ (edi_87 << 2))))
                    int32_t eax_142 = var_1c_11 i+ edx_21
                    arg2[edi_88] = fconvert.s(fconvert.t(*(entry_ebx i+ (edi_88 << 2)))
                        - fconvert.t(*(entry_ebx i+ (eax_142 << 2))))
                    int32_t edi_89 = edi_88 i+ edx_21
                    arg2[eax_142] = fconvert.s(fconvert.t(*(entry_ebx i+ (eax_142 << 2)))
                        + fconvert.t(*(entry_ebx i+ (edi_88 << 2))))
                    int32_t eax_143 = eax_142 i+ edx_21
                    arg2[edi_89] = fconvert.s(fconvert.t(*(entry_ebx i+ (edi_89 << 2)))
                        - fconvert.t(*(entry_ebx i+ (eax_143 << 2))))
                    int32_t edi_90 = edi_89 i+ edx_21
                    arg2[eax_143] = fconvert.s(fconvert.t(*(entry_ebx i+ (eax_143 << 2)))
                        + fconvert.t(*(entry_ebx i+ (edi_89 << 2))))
                    int32_t eax_144 = eax_143 i+ edx_21
                    arg2[edi_90] = fconvert.s(fconvert.t(*(entry_ebx i+ (edi_90 << 2)))
                        - fconvert.t(*(entry_ebx i+ (eax_144 << 2))))
                    edi_87 = edi_90 i+ edx_21
                    arg2[eax_144] = fconvert.s(fconvert.t(*(entry_ebx i+ (eax_144 << 2)))
                        + fconvert.t(*(entry_ebx i+ (edi_90 << 2))))
                    j_9 = arg3
                    arg3 -= 1
                    var_1c_11 = eax_144 i+ edx_21
                while (j_9 != 1)
                var_14_9 = edi_87
            
            if (var_18_6 s< arg5)
                float* var_4c_7 = entry_ebx i+ (var_14_9 << 2)
                float* var_44_6 = entry_ebx i+ (var_1c_11 << 2)
                float eax_151 = arg2 i- entry_ebx
                int32_t j_15 = arg5 - var_18_6
                int32_t j_10
                
                do
                    *(eax_151 i+ var_4c_7) = fconvert.s(fconvert.t(*var_4c_7) - fconvert.t(*var_44_6))
                    *(eax_151 + var_44_6) = fconvert.s(fconvert.t(*var_44_6) + fconvert.t(*var_4c_7))
                    var_4c_7 = &var_4c_7[edx_21]
                    var_44_6 = &var_44_6[edx_21]
                    j_10 = j_15
                    j_15 -= 1
                while (j_10 != 1)
            
            i_7 = i_18
            i_18 -= 1
        while (i_7 != 1)
    
    if (edx_21 == 1)
        return 
    
    if (eax_3 s< arg5)
        int32_t var_10_7 = eax_22
        int32_t eax_158 = 0
        
        if (eax_6 s> 1)
            int32_t i_22 = eax_6 - 1
            int32_t i_8
            
            do
                var_10_7 -= ecx_1
                eax_158 += ecx_1
                int32_t var_8_6 = eax_158
                
                if (edx_21 s> 2)
                    int32_t ecx_123 = var_10_7 - eax_158
                    int32_t var_70_2 = ecx_123
                    int32_t var_60_2 = ((edx_21 - 3) u>> 1) + 1
                    
                    while (true)
                        int32_t edi_107 = arg5
                        int32_t eax_159 = eax_158 + 2
                        int32_t ecx_124 = ecx_123 + eax_159
                        int32_t var_14_10 = eax_159
                        int32_t var_18_7 = 0
                        
                        if (edi_107 s>= 4)
                            var_18_7 = (((edi_107 - 4) u>> 2) + 1) i* 4
                            float j_28 = ((edi_107 - 4) u>> 2) + 1
                            float j_11
                            
                            do
                                arg2[eax_159 - 1] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (eax_159 << 2) - 4))
                                    - fconvert.t(*(entry_ebx i+ (ecx_124 << 2))))
                                arg2[ecx_124 - 1] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (eax_159 << 2) - 4))
                                    + fconvert.t(*(entry_ebx i+ (ecx_124 << 2))))
                                arg2[eax_159] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (ecx_124 << 2) - 4))
                                    + fconvert.t(*(entry_ebx i+ (eax_159 << 2))))
                                int32_t eax_160 = eax_159 i+ edx_21
                                arg2[ecx_124] = fconvert.s(fconvert.t(*(entry_ebx i+ (eax_159 << 2)))
                                    - fconvert.t(*(entry_ebx i+ (ecx_124 << 2) - 4)))
                                int32_t ecx_125 = ecx_124 i+ edx_21
                                arg2[eax_160 - 1] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (eax_160 << 2) - 4))
                                    - fconvert.t(*(entry_ebx i+ (ecx_125 << 2))))
                                arg2[ecx_125 - 1] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (eax_160 << 2) - 4))
                                    + fconvert.t(*(entry_ebx i+ (ecx_125 << 2))))
                                arg2[eax_160] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (ecx_125 << 2) - 4))
                                    + fconvert.t(*(entry_ebx i+ (eax_160 << 2))))
                                int32_t eax_161 = eax_160 i+ edx_21
                                arg2[ecx_125] = fconvert.s(fconvert.t(*(entry_ebx i+ (eax_160 << 2)))
                                    - fconvert.t(*(entry_ebx i+ (ecx_125 << 2) - 4)))
                                int32_t ecx_126 = ecx_125 i+ edx_21
                                arg2[eax_161 - 1] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (eax_161 << 2) - 4))
                                    - fconvert.t(*(entry_ebx i+ (ecx_126 << 2))))
                                arg2[ecx_126 - 1] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (eax_161 << 2) - 4))
                                    + fconvert.t(*(entry_ebx i+ (ecx_126 << 2))))
                                arg2[eax_161] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (ecx_126 << 2) - 4))
                                    + fconvert.t(*(entry_ebx i+ (eax_161 << 2))))
                                int32_t eax_162 = eax_161 i+ edx_21
                                arg2[ecx_126] = fconvert.s(fconvert.t(*(entry_ebx i+ (eax_161 << 2)))
                                    - fconvert.t(*(entry_ebx i+ (ecx_126 << 2) - 4)))
                                int32_t ecx_127 = ecx_126 i+ edx_21
                                arg2[eax_162 - 1] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (eax_162 << 2) - 4))
                                    - fconvert.t(*(entry_ebx i+ (ecx_127 << 2))))
                                arg2[ecx_127 - 1] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (eax_162 << 2) - 4))
                                    + fconvert.t(*(entry_ebx i+ (ecx_127 << 2))))
                                arg2[eax_162] = fconvert.s(
                                    fconvert.t(*(entry_ebx i+ (ecx_127 << 2) - 4))
                                    + fconvert.t(*(entry_ebx i+ (eax_162 << 2))))
                                eax_159 = eax_162 i+ edx_21
                                arg2[ecx_127] = fconvert.s(fconvert.t(*(entry_ebx i+ (eax_162 << 2)))
                                    - fconvert.t(*(entry_ebx i+ (ecx_127 << 2) - 4)))
                                ecx_124 = ecx_127 i+ edx_21
                                j_11 = j_28
                                j_28 -= 1
                            while (j_11 != 1)
                            edi_107 = arg5
                        
                        if (var_18_7 s< edi_107)
                            float* var_48_6 = &arg2[ecx_124]
                            void* var_68_5 = &arg2[eax_159]
                            float edi_111 = arg2 i- entry_ebx
                            float* ecx_128 = entry_ebx i+ (ecx_124 << 2) - 4
                            float* var_4c_8 = ecx_128
                            float* eax_163 = entry_ebx i+ (eax_159 << 2) - 4
                            int32_t var_64_1 = arg5 - var_18_7
                            
                            while (true)
                                *(eax_163 i+ edi_111) =
                                    fconvert.s(fconvert.t(*eax_163) - fconvert.t(ecx_128[1]))
                                *(ecx_128 i+ edi_111) =
                                    fconvert.s(fconvert.t(ecx_128[1]) + fconvert.t(*eax_163))
                                float* edi_115 = var_68_5
                                *edi_115 = fconvert.s(fconvert.t(*ecx_128) + fconvert.t(eax_163[1]))
                                *var_48_6 = fconvert.s(fconvert.t(eax_163[1]) - fconvert.t(*ecx_128))
                                var_4c_8 = &var_4c_8[edx_21]
                                var_48_6 = &var_48_6[edx_21]
                                eax_163 = &eax_163[edx_21]
                                int32_t temp37_1 = var_64_1
                                var_64_1 -= 1
                                var_68_5 = &edi_115[edx_21]
                                
                                if (temp37_1 == 1)
                                    break
                                
                                ecx_128 = var_4c_8
                        
                        int32_t temp33_1 = var_60_2
                        var_60_2 -= 1
                        
                        if (temp33_1 == 1)
                            break
                        
                        ecx_123 = var_70_2
                        eax_158 = var_14_10
                    
                    ecx_115 = arg6
                    eax_158 = var_8_6
                
                i_8 = i_22
                i_22 -= 1
            while (i_8 != 1)
    else if (eax_6 s> 1)
        float* var_40_6 = entry_ebx i+ (eax_22 << 2) - 4
        float* var_48_7 = entry_ebx - 4
        float* var_44_7 = &arg2[eax_22]
        float* var_4c_9 = arg2
        int32_t i_20 = eax_6 - 1
        int32_t i_9
        
        do
            int32_t eax_171 = ecx_1 * 4
            var_4c_9 = &var_4c_9[ecx_1]
            var_48_7 = &var_48_7[ecx_1]
            var_44_7 -= eax_171
            var_40_6 -= eax_171
            
            if (arg5 s> 0)
                float* var_30_6 = var_4c_9
                float* var_2c_5 = var_48_7
                float* var_28_1 = var_44_7
                float* var_24_11 = var_40_6
                int32_t j_16 = arg5
                int32_t j_12
                
                do
                    if (edx_21 s> 2)
                        arg6 = var_24_11
                        arg3 = arg2 i- entry_ebx
                        float* var_3c_3 = var_30_6
                        float* var_38_11 = var_28_1
                        float* eax_179 = var_2c_5
                        int32_t k_5 = ((edx_21 - 3) u>> 1) + 1
                        int32_t k_3
                        
                        do
                            arg6 = &arg6[2]
                            var_3c_3 = &var_3c_3[2]
                            *(&eax_179[2] i+ arg3) =
                                fconvert.s(fconvert.t(eax_179[2]) - fconvert.t(arg6[1]))
                            var_38_11 = &var_38_11[2]
                            k_3 = k_5
                            k_5 -= 1
                            *(arg6 i+ arg3) = fconvert.s(fconvert.t(eax_179[2]) + fconvert.t(arg6[1]))
                            eax_179 = &eax_179[2]
                            *var_3c_3 = fconvert.s(fconvert.t(eax_179[1]) + fconvert.t(*arg6))
                            *var_38_11 = fconvert.s(fconvert.t(eax_179[1]) - fconvert.t(*arg6))
                        while (k_3 != 1)
                    
                    var_30_6 = &var_30_6[edx_21]
                    var_2c_5 = &var_2c_5[edx_21]
                    var_28_1 = &var_28_1[edx_21]
                    var_24_11 = &var_24_11[edx_21]
                    j_12 = j_16
                    j_16 -= 1
                while (j_12 != 1)
            
            i_9 = i_20
            i_20 -= 1
        while (i_9 != 1)
    
    float eax_191 = 0f
    arg3 = 0f
    
    if (ecx_115 s>= 4)
        arg6 = arg8 + 0xc
        int32_t i_16 = (&ecx_115[-1] u>> 2) + 1
        arg3 = ((&ecx_115[-1] u>> 2) + 1) * 4
        void* eax_190 = arg7 + 4
        int32_t i_10
        
        do
            *(eax_190 - 4) = fconvert.s(fconvert.t(arg6[-3]))
            eax_190 += 0x10
            *(eax_190 - 0x10) = fconvert.s(fconvert.t(*(arg8 - arg7 + eax_190 - 0x10)))
            float* edi_136 = &arg6[4]
            i_10 = i_16
            i_16 -= 1
            *(eax_190 - 0xc) = fconvert.s(fconvert.t(edi_136[-5]))
            arg6 = edi_136
            *(eax_190 - 8) = fconvert.s(fconvert.t(edi_136[-4]))
        while (i_10 != 1)
        eax_191 = arg3
    
    if (eax_191 s< ecx_115)
        float* eax_192 = arg7 + (eax_191 << 2)
        void* i_28 = ecx_115 i- arg3
        arg6 = eax_192
        void* i_11
        
        do
            long double x87_r7_171 = fconvert.t(*(eax_192 + arg8 - arg7))
            eax_192 = &eax_192[1]
            i_11 = i_28
            i_28 -= 1
            eax_192[-1] = fconvert.s(x87_r7_171)
        while (i_11 != 1)
    
    int32_t edi_147 = arg4
    int32_t ecx_131 = arg5
    int32_t eax_193 = 0
    
    if (edi_147 s> 1)
        arg6 = edi_147 - 1
        
        while (true)
            int32_t eax_194 = eax_193 + ecx_1
            int32_t var_18_8 = 0
            int32_t var_8_7 = eax_194
            
            if (ecx_131 s>= 4)
                int32_t i_29 = ((ecx_131 - 4) u>> 2) + 1
                var_18_8 = i_29 << 2
                int32_t i_12
                
                do
                    *(entry_ebx i+ (eax_194 << 2)) = fconvert.s(fconvert.t(arg2[eax_194]))
                    int32_t eax_195 = eax_194 i+ edx_21
                    *(entry_ebx i+ (eax_195 << 2)) = fconvert.s(fconvert.t(arg2[eax_195]))
                    int32_t eax_196 = eax_195 i+ edx_21
                    *(entry_ebx i+ (eax_196 << 2)) = fconvert.s(fconvert.t(arg2[eax_196]))
                    int32_t eax_197 = eax_196 i+ edx_21
                    *(entry_ebx i+ (eax_197 << 2)) = fconvert.s(fconvert.t(arg2[eax_197]))
                    eax_194 = eax_197 i+ edx_21
                    i_12 = i_29
                    i_29 -= 1
                while (i_12 != 1)
                ecx_131 = arg5
            
            if (var_18_8 s< ecx_131)
                float edi_145 = arg2 i- entry_ebx
                int32_t ecx_133 = ecx_131 - var_18_8
                float* eax_198 = entry_ebx i+ (eax_194 << 2)
                arg3 = edi_145
                
                while (true)
                    *eax_198 = fconvert.s(fconvert.t(*(edi_145 i+ eax_198)))
                    eax_198 = &eax_198[edx_21]
                    int32_t temp40_1 = ecx_133
                    ecx_133 -= 1
                    
                    if (temp40_1 == 1)
                        break
                    
                    edi_145 = arg3
                
                ecx_131 = arg5
            
            float* temp35_1 = arg6
            arg6 -= 1
            
            if (temp35_1 == 1)
                break
            
            eax_193 = var_8_7
        
        edi_147 = arg4
    
    if (eax_3 s<= ecx_131)
        int32_t eax_203 = 0
        
        if (edi_147 s> 1)
            float* edi_160 = arg9 + ((0xffffffff i- edx_21) << 2)
            int32_t i_19 = arg4 - 1
            int32_t i_13
            
            do
                eax_203 += ecx_1
                edi_160 = &edi_160[edx_21]
                float* var_6c_3 = edi_160
                int32_t var_8_8 = eax_203
                
                if (edx_21 s> 2)
                    int32_t var_68_6 = ((edx_21 - 3) u>> 1) + 1
                    
                    while (true)
                        int32_t ecx_155 = arg5
                        int32_t eax_204 = eax_203 + 2
                        int32_t var_70_4 = eax_204
                        int32_t var_18_9 = 0
                        
                        if (ecx_155 s>= 4)
                            var_18_9 = (((ecx_155 - 4) u>> 2) + 1) i* 4
                            float j_27 = ((ecx_155 - 4) u>> 2) + 1
                            float j_13
                            
                            do
                                *(entry_ebx i+ (eax_204 << 2) - 4) = fconvert.s(
                                    fconvert.t(arg2[eax_204 - 1]) * fconvert.t(edi_160[1])
                                    - fconvert.t(arg2[eax_204]) * fconvert.t(edi_160[2]))
                                *(entry_ebx i+ (eax_204 << 2)) = fconvert.s(
                                    fconvert.t(arg2[eax_204 - 1]) * fconvert.t(edi_160[2])
                                    + fconvert.t(arg2[eax_204]) * fconvert.t(edi_160[1]))
                                int32_t eax_205 = eax_204 i+ edx_21
                                *(entry_ebx i+ (eax_205 << 2) - 4) = fconvert.s(
                                    fconvert.t(arg2[eax_205 - 1]) * fconvert.t(edi_160[1])
                                    - fconvert.t(arg2[eax_205]) * fconvert.t(edi_160[2]))
                                *(entry_ebx i+ (eax_205 << 2)) = fconvert.s(
                                    fconvert.t(arg2[eax_205 - 1]) * fconvert.t(edi_160[2])
                                    + fconvert.t(arg2[eax_205]) * fconvert.t(edi_160[1]))
                                int32_t eax_206 = eax_205 i+ edx_21
                                *(entry_ebx i+ (eax_206 << 2) - 4) = fconvert.s(
                                    fconvert.t(arg2[eax_206 - 1]) * fconvert.t(edi_160[1])
                                    - fconvert.t(arg2[eax_206]) * fconvert.t(edi_160[2]))
                                *(entry_ebx i+ (eax_206 << 2)) = fconvert.s(
                                    fconvert.t(arg2[eax_206 - 1]) * fconvert.t(edi_160[2])
                                    + fconvert.t(arg2[eax_206]) * fconvert.t(edi_160[1]))
                                int32_t eax_207 = eax_206 i+ edx_21
                                *(entry_ebx i+ (eax_207 << 2) - 4) = fconvert.s(
                                    fconvert.t(arg2[eax_207 - 1]) * fconvert.t(edi_160[1])
                                    - fconvert.t(arg2[eax_207]) * fconvert.t(edi_160[2]))
                                *(entry_ebx i+ (eax_207 << 2)) = fconvert.s(
                                    fconvert.t(arg2[eax_207 - 1]) * fconvert.t(edi_160[2])
                                    + fconvert.t(arg2[eax_207]) * fconvert.t(edi_160[1]))
                                eax_204 = eax_207 i+ edx_21
                                j_13 = j_27
                                j_27 -= 1
                            while (j_13 != 1)
                            ecx_155 = arg5
                        
                        if (var_18_9 s>= ecx_155)
                            edi_160 = &edi_160[2]
                        else
                            arg3 = entry_ebx i+ (eax_204 << 2)
                            float* ecx_158 = entry_ebx i- arg2
                            float* eax_208 = &arg2[eax_204 - 1]
                            arg4 = arg5 - var_18_9
                            edi_160 = &edi_160[2]
                            float* var_40_8 = ecx_158
                            
                            while (true)
                                *(ecx_158 + eax_208) = fconvert.s(
                                    fconvert.t(edi_160[-1]) * fconvert.t(*eax_208)
                                    - fconvert.t(*edi_160) * fconvert.t(eax_208[1]))
                                *arg3 = fconvert.s(fconvert.t(edi_160[-1]) * fconvert.t(eax_208[1])
                                    + fconvert.t(*edi_160) * fconvert.t(*eax_208))
                                arg3 += edx_21 << 2
                                int32_t temp45_1 = arg4
                                arg4 -= 1
                                
                                if (temp45_1 == 1)
                                    break
                                
                                eax_208 = &eax_208[edx_21]
                                ecx_158 = var_40_8
                        
                        int32_t temp44_1 = var_68_6
                        var_68_6 -= 1
                        
                        if (temp44_1 == 1)
                            break
                        
                        eax_203 = var_70_4
                    
                    edi_160 = var_6c_3
                    eax_203 = var_8_8
                
                i_13 = i_19
                i_19 -= 1
            while (i_13 != 1)
    else if (edi_147 s> 1)
        float* var_50_2 = arg9 + ((0xffffffff i- edx_21) << 2)
        arg6 = &arg2[-1]
        int32_t eax_199 = edx_21 << 2
        arg3 = entry_ebx
        int32_t i_21 = arg4 - 1
        int32_t i_14
        
        do
            arg3 += ecx_1 * 4
            arg6 = &arg6[ecx_1]
            var_50_2 += eax_199
            
            if (arg5 s> 0)
                float var_48_8 = arg3
                float* var_44_8 = arg6
                int32_t j_17 = arg5
                int32_t j_14
                
                do
                    if (edx_21 s> 2)
                        float* eax_202 = var_44_8
                        arg4 = var_48_8
                        float* ecx_142 = var_50_2
                        int32_t k_6 = ((edx_21 - 3) u>> 1) + 1
                        int32_t k_4
                        
                        do
                            long double x87_r7_178 = fconvert.t(ecx_142[1]) * fconvert.t(eax_202[2])
                            arg4 += 8
                            long double x87_r6_3 = fconvert.t(ecx_142[2])
                            ecx_142 = &ecx_142[2]
                            long double x87_r6_4 = x87_r6_3 * fconvert.t(eax_202[3])
                            eax_202 = &eax_202[2]
                            k_4 = k_6
                            k_6 -= 1
                            *(entry_ebx i- arg2 + eax_202) = fconvert.s(x87_r7_178 - x87_r6_4)
                            *arg4 = fconvert.s(fconvert.t(*eax_202) * fconvert.t(*ecx_142)
                                + fconvert.t(ecx_142[-1]) * fconvert.t(eax_202[1]))
                        while (k_4 != 1)
                    
                    eax_199 = edx_21 << 2
                    var_48_8 += eax_199
                    var_44_8 += eax_199
                    j_14 = j_17
                    j_17 -= 1
                while (j_14 != 1)
            
            i_14 = i_21
            i_21 -= 1
        while (i_14 != 1)
}
