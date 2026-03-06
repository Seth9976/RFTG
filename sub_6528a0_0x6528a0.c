// 函数名称: sub_6528a0
// 虚拟地址: 0x6528a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_6528a0(void* arg1, int32_t arg2, float* arg3, int32_t arg4, int32_t arg5, void* arg6, void* arg7, void* arg8, void* arg9, int32_t arg10)
{
    // 第一条实际指令: float var_4c = fconvert.s(fconvert.t(data_8bbd18) / float.t(arg4))
    float var_4c = fconvert.s(fconvert.t(data_8bbd18) / float.t(arg4))
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    long double st0
    st0, x87control_1 = sub_686860(mxcsr, x87control, fconvert.t(var_4c))
    float var_64 = fconvert.s(sub_686ea0(mxcsr, x87control_1, fconvert.t(var_4c)))
    int32_t ecx_1 = (arg4 + 1) s>> 1
    int32_t entry_ebx
    int32_t ecx_3 = (entry_ebx - 1) s>> 1
    void* edx = arg6
    int32_t ecx_5 = entry_ebx * arg5
    int32_t ecx_7 = entry_ebx * arg4
    
    if (entry_ebx != 1)
        int32_t eax_1 = 0
        int32_t var_30_1 = 0
        
        if (edx s>= 4)
            void* var_48_1 = arg8 + 0xc
            int32_t i_28 = ((edx - 4) u>> 2) + 1
            void* eax_10 = arg9 + 4
            var_30_1 = (((edx - 4) u>> 2) + 1) << 2
            int32_t i
            
            do
                *(eax_10 - 4) = fconvert.s(fconvert.t(*(var_48_1 - 0xc)))
                eax_10 += 0x10
                *(eax_10 - 0x10) = fconvert.s(fconvert.t(*(arg8 - arg9 + eax_10 - 0x10)))
                void* ecx_13 = var_48_1 + 0x10
                i = i_28
                i_28 -= 1
                *(eax_10 - 0xc) = fconvert.s(fconvert.t(*(ecx_13 - 0x14)))
                var_48_1 = ecx_13
                *(eax_10 - 8) = fconvert.s(fconvert.t(*(ecx_13 - 0x10)))
            while (i != 1)
            eax_1 = var_30_1
        
        if (eax_1 s< edx)
            void* i_24 = edx - var_30_1
            float* eax_16 = arg9 + (eax_1 << 2)
            void* i_1
            
            do
                long double x87_r7_10 = fconvert.t(*(eax_16 + arg8 - arg9))
                eax_16 = &eax_16[1]
                i_1 = i_24
                i_24 -= 1
                eax_16[-1] = fconvert.s(x87_r7_10)
            while (i_1 != 1)
        
        int32_t eax_17 = 0
        int32_t ecx_18
        
        if (arg4 s<= 1)
            ecx_18 = arg5
        else
            int32_t var_44_3 = arg4 - 1
            
            while (true)
                int32_t eax_18 = eax_17 + ecx_5
                ecx_18 = arg5
                int32_t var_18_1 = eax_18
                int32_t var_14_1 = eax_18
                int32_t var_c_1 = 0
                
                if (ecx_18 s>= 4)
                    var_c_1 = (((ecx_18 - 4) u>> 2) + 1) * 4
                    int32_t i_33 = ((ecx_18 - 4) u>> 2) + 1
                    int32_t i_2
                    
                    do
                        *(arg1 + (eax_18 << 2)) = fconvert.s(fconvert.t(arg3[eax_18]))
                        int32_t eax_19 = eax_18 + entry_ebx
                        *(arg1 + (eax_19 << 2)) = fconvert.s(fconvert.t(arg3[eax_19]))
                        int32_t eax_20 = eax_19 + entry_ebx
                        *(arg1 + (eax_20 << 2)) = fconvert.s(fconvert.t(arg3[eax_20]))
                        int32_t eax_21 = eax_20 + entry_ebx
                        *(arg1 + (eax_21 << 2)) = fconvert.s(fconvert.t(arg3[eax_21]))
                        eax_18 = eax_21 + entry_ebx
                        i_2 = i_33
                        i_33 -= 1
                    while (i_2 != 1)
                    ecx_18 = arg5
                    var_14_1 = eax_18
                
                if (var_c_1 s< ecx_18)
                    int32_t i_25 = ecx_18 - var_c_1
                    float* eax_28 = arg1 + (var_14_1 << 2)
                    int32_t i_3
                    
                    do
                        *eax_28 = fconvert.s(fconvert.t(*(arg3 - arg1 + eax_28)))
                        eax_28 = &eax_28[entry_ebx]
                        i_3 = i_25
                        i_25 -= 1
                    while (i_3 != 1)
                    ecx_18 = arg5
                
                int32_t temp7_1 = var_44_3
                var_44_3 -= 1
                
                if (temp7_1 == 1)
                    break
                
                eax_17 = var_18_1
        
        int32_t eax_30 = neg.d(entry_ebx)
        int32_t var_5c_1 = eax_30
        int32_t var_18_2 = 0
        
        if (ecx_3 s<= ecx_18)
            if (arg4 s> 1)
                int32_t var_48_3 = eax_30 - 1
                float* var_44_5 = arg10 + (eax_30 << 2) - 4
                int32_t var_30_4 = arg4 - 1
                
                while (true)
                    var_48_3 += entry_ebx
                    int32_t eax_45 = eax_30 + entry_ebx
                    var_44_5 = &var_44_5[entry_ebx]
                    int32_t eax_48 = var_18_2 + ecx_5
                    var_18_2 = eax_48
                    
                    if (entry_ebx s> 2)
                        float* ecx_47 = var_44_5
                        int32_t eax_49 = var_48_3 - eax_45 + eax_48 + 1
                        int32_t var_34_2 = ((entry_ebx - 3) u>> 1) + 1
                        
                        while (true)
                            int32_t eax_50 = eax_49 + 2
                            ecx_47 = &ecx_47[2]
                            int32_t var_68_5 = eax_50
                            int32_t var_c_2 = 0
                            
                            if (arg5 s>= 4)
                                var_c_2 = (((arg5 - 4) u>> 2) + 1) * 4
                                int32_t i_34 = ((arg5 - 4) u>> 2) + 1
                                int32_t i_4
                                
                                do
                                    *(arg1 + (eax_50 << 2) - 4) = fconvert.s(
                                        fconvert.t(arg3[eax_50 - 1]) * fconvert.t(ecx_47[-1])
                                        + fconvert.t(arg3[eax_50]) * fconvert.t(*ecx_47))
                                    *(arg1 + (eax_50 << 2)) = fconvert.s(
                                        fconvert.t(arg3[eax_50]) * fconvert.t(ecx_47[-1])
                                        - fconvert.t(arg3[eax_50 - 1]) * fconvert.t(*ecx_47))
                                    int32_t eax_51 = eax_50 + entry_ebx
                                    *(arg1 + (eax_51 << 2) - 4) = fconvert.s(
                                        fconvert.t(arg3[eax_51 - 1]) * fconvert.t(ecx_47[-1])
                                        + fconvert.t(arg3[eax_51]) * fconvert.t(*ecx_47))
                                    *(arg1 + (eax_51 << 2)) = fconvert.s(
                                        fconvert.t(arg3[eax_51]) * fconvert.t(ecx_47[-1])
                                        - fconvert.t(arg3[eax_51 - 1]) * fconvert.t(*ecx_47))
                                    int32_t eax_52 = eax_51 + entry_ebx
                                    *(arg1 + (eax_52 << 2) - 4) = fconvert.s(
                                        fconvert.t(arg3[eax_52 - 1]) * fconvert.t(ecx_47[-1])
                                        + fconvert.t(arg3[eax_52]) * fconvert.t(*ecx_47))
                                    *(arg1 + (eax_52 << 2)) = fconvert.s(
                                        fconvert.t(arg3[eax_52]) * fconvert.t(ecx_47[-1])
                                        - fconvert.t(arg3[eax_52 - 1]) * fconvert.t(*ecx_47))
                                    int32_t eax_53 = eax_52 + entry_ebx
                                    *(arg1 + (eax_53 << 2) - 4) = fconvert.s(
                                        fconvert.t(arg3[eax_53 - 1]) * fconvert.t(ecx_47[-1])
                                        + fconvert.t(arg3[eax_53]) * fconvert.t(*ecx_47))
                                    *(arg1 + (eax_53 << 2)) = fconvert.s(
                                        fconvert.t(arg3[eax_53]) * fconvert.t(ecx_47[-1])
                                        - fconvert.t(arg3[eax_53 - 1]) * fconvert.t(*ecx_47))
                                    eax_50 = eax_53 + entry_ebx
                                    i_4 = i_34
                                    i_34 -= 1
                                while (i_4 != 1)
                            
                            if (var_c_2 s< arg5)
                                float* var_40_2 = arg1 + (eax_50 << 2)
                                float* eax_54 = &arg3[eax_50 - 1]
                                int32_t var_38_2 = arg5 - var_c_2
                                
                                while (true)
                                    *(eax_54 + arg1 - arg3) = fconvert.s(
                                        fconvert.t(*ecx_47) * fconvert.t(eax_54[1])
                                        + fconvert.t(*eax_54) * fconvert.t(ecx_47[-1]))
                                    *var_40_2 = fconvert.s(
                                        fconvert.t(ecx_47[-1]) * fconvert.t(eax_54[1])
                                        - fconvert.t(*ecx_47) * fconvert.t(*eax_54))
                                    var_40_2 = &var_40_2[entry_ebx]
                                    int32_t temp35_1 = var_38_2
                                    var_38_2 -= 1
                                    
                                    if (temp35_1 == 1)
                                        break
                                    
                                    eax_54 = &eax_54[entry_ebx]
                            
                            int32_t temp28_1 = var_34_2
                            var_34_2 -= 1
                            
                            if (temp28_1 == 1)
                                break
                            
                            eax_49 = var_68_5
                        
                        edx = arg6
                    
                    int32_t temp15_1 = var_30_4
                    var_30_4 -= 1
                    
                    if (temp15_1 == 1)
                        break
                    
                    eax_30 = eax_45
        else if (arg4 s> 1)
            float* var_38_1 = arg10 + (eax_30 << 2) - 4
            int32_t ecx_27 = entry_ebx << 2
            float* var_48_2 = arg1 - ecx_27
            float* var_44_4 = arg3 - ecx_27 - 4
            int32_t i_31 = arg4 - 1
            int32_t i_5
            
            do
                var_48_2 = &var_48_2[ecx_5]
                var_44_4 = &var_44_4[ecx_5]
                var_38_1 = &var_38_1[entry_ebx]
                
                if (arg5 s> 0)
                    float* var_40_1 = var_48_2
                    float* var_34_1 = var_44_4
                    int32_t j_16 = arg5
                    int32_t j
                    
                    do
                        var_40_1 = &var_40_1[entry_ebx]
                        var_34_1 = &var_34_1[entry_ebx]
                        
                        if (entry_ebx s> 2)
                            float* var_3c_1 = var_38_1
                            float* var_30_3 = var_40_1
                            float* eax_44 = var_34_1
                            int32_t k_2 = ((entry_ebx - 3) u>> 1) + 1
                            int32_t k
                            
                            do
                                var_3c_1 = &var_3c_1[2]
                                long double x87_r7_17 = fconvert.t(eax_44[3]) * fconvert.t(*var_3c_1)
                                var_30_3 = &var_30_3[2]
                                long double x87_r6_2 = fconvert.t(var_3c_1[-1]) * fconvert.t(eax_44[2])
                                eax_44 = &eax_44[2]
                                k = k_2
                                k_2 -= 1
                                *(eax_44 + arg1 - arg3) = fconvert.s(x87_r7_17 + x87_r6_2)
                                *var_30_3 = fconvert.s(fconvert.t(eax_44[1]) * fconvert.t(var_3c_1[-1])
                                    - fconvert.t(*var_3c_1) * fconvert.t(*eax_44))
                            while (k != 1)
                        
                        j = j_16
                        j_16 -= 1
                    while (j != 1)
                
                i_5 = i_31
                i_31 -= 1
            while (i_5 != 1)
        
        int32_t eax_57 = ecx_5 * arg4
        int32_t var_18_3 = 0
        int32_t var_14_2 = eax_57
        
        if (ecx_3 s>= arg5)
            if (ecx_1 s> 1)
                void* var_3c_4 = arg1 + (eax_57 << 2) - 4
                float* var_40_4 = &arg3[eax_57]
                float* var_48_5 = arg3
                float* var_44_7 = arg1 - 4
                int32_t i_32 = ecx_1 - 1
                int32_t i_6
                
                do
                    int32_t eax_73 = ecx_5 * 4
                    var_48_5 = &var_48_5[ecx_5]
                    var_44_7 = &var_44_7[ecx_5]
                    var_40_4 -= eax_73
                    var_3c_4 -= eax_73
                    
                    if (arg5 s> 0)
                        float* var_24_3 = var_48_5
                        float* var_1c_2 = var_44_7
                        float* var_18_4 = var_40_4
                        void* var_10_1 = var_3c_4
                        int32_t j_17 = arg5
                        float* ecx_72 = var_3c_4
                        int32_t j_1
                        
                        do
                            if (entry_ebx s> 2)
                                float* var_38_3 = var_24_3
                                void* edx_35 = arg3 - arg1
                                float* var_34_4 = var_18_4
                                float* eax_77 = var_1c_2
                                int32_t k_3 = ((entry_ebx - 3) u>> 1) + 1
                                int32_t k_1
                                
                                do
                                    long double x87_r7_93 =
                                        fconvert.t(ecx_72[2]) + fconvert.t(eax_77[2])
                                    var_38_3 = &var_38_3[2]
                                    var_34_4 = &var_34_4[2]
                                    ecx_72 = &ecx_72[2]
                                    eax_77 = &eax_77[2]
                                    k_1 = k_3
                                    k_3 -= 1
                                    *(edx_35 + eax_77) = fconvert.s(x87_r7_93)
                                    *(edx_35 + ecx_72) =
                                        fconvert.s(fconvert.t(eax_77[1]) - fconvert.t(ecx_72[1]))
                                    *var_38_3 =
                                        fconvert.s(fconvert.t(ecx_72[1]) + fconvert.t(eax_77[1]))
                                    *var_34_4 = fconvert.s(fconvert.t(*ecx_72) - fconvert.t(*eax_77))
                                while (k_1 != 1)
                                edx = arg6
                            
                            var_24_3 = &var_24_3[entry_ebx]
                            var_1c_2 = &var_1c_2[entry_ebx]
                            var_18_4 = &var_18_4[entry_ebx]
                            ecx_72 = var_10_1 + (entry_ebx << 2)
                            j_1 = j_17
                            j_17 -= 1
                            var_10_1 = ecx_72
                        while (j_1 != 1)
                    
                    i_6 = i_32
                    i_32 -= 1
                while (i_6 != 1)
        else if (ecx_1 s> 1)
            int32_t var_48_4 = var_5c_1
            int32_t i_30 = ecx_1 - 1
            int32_t i_7
            
            do
                var_18_3 += ecx_5
                var_48_4 += ecx_5
                var_14_2 -= ecx_5
                
                if (entry_ebx s> 2)
                    int32_t edx_22 = var_14_2 - var_18_3
                    int32_t ecx_51 = var_48_4
                    int32_t var_68_6 = edx_22
                    int32_t var_34_3 = ((entry_ebx - 3) u>> 1) + 1
                    
                    while (true)
                        int32_t eax_63 = ecx_51 + 2
                        int32_t ecx_53 = ecx_51 + 2 + edx_22
                        int32_t var_1c_1 = ecx_53
                        int32_t var_c_3 = 0
                        
                        if (arg5 s>= 4)
                            var_c_3 = (((arg5 - 4) u>> 2) + 1) * 4
                            int32_t j_23 = ((arg5 - 4) u>> 2) + 1
                            int32_t j_2
                            
                            do
                                int32_t ecx_54 = ecx_53 + entry_ebx
                                int32_t eax_64 = eax_63 + entry_ebx
                                arg3[eax_64 - 1] = fconvert.s(fconvert.t(*(arg1 + (ecx_54 << 2) - 4))
                                    + fconvert.t(*(arg1 + (eax_64 << 2) - 4)))
                                arg3[ecx_54 - 1] = fconvert.s(fconvert.t(*(arg1 + (eax_64 << 2)))
                                    - fconvert.t(*(arg1 + (ecx_54 << 2))))
                                arg3[eax_64] = fconvert.s(fconvert.t(*(arg1 + (eax_64 << 2)))
                                    + fconvert.t(*(arg1 + (ecx_54 << 2))))
                                int32_t eax_65 = eax_64 + entry_ebx
                                arg3[ecx_54] = fconvert.s(fconvert.t(*(arg1 + (ecx_54 << 2) - 4))
                                    - fconvert.t(*(arg1 + (eax_64 << 2) - 4)))
                                int32_t ecx_55 = ecx_54 + entry_ebx
                                arg3[eax_65 - 1] = fconvert.s(fconvert.t(*(arg1 + (ecx_55 << 2) - 4))
                                    + fconvert.t(*(arg1 + (eax_65 << 2) - 4)))
                                arg3[ecx_55 - 1] = fconvert.s(fconvert.t(*(arg1 + (eax_65 << 2)))
                                    - fconvert.t(*(arg1 + (ecx_55 << 2))))
                                arg3[eax_65] = fconvert.s(fconvert.t(*(arg1 + (eax_65 << 2)))
                                    + fconvert.t(*(arg1 + (ecx_55 << 2))))
                                int32_t eax_66 = eax_65 + entry_ebx
                                arg3[ecx_55] = fconvert.s(fconvert.t(*(arg1 + (ecx_55 << 2) - 4))
                                    - fconvert.t(*(arg1 + (eax_65 << 2) - 4)))
                                int32_t ecx_56 = ecx_55 + entry_ebx
                                arg3[eax_66 - 1] = fconvert.s(fconvert.t(*(arg1 + (ecx_56 << 2) - 4))
                                    + fconvert.t(*(arg1 + (eax_66 << 2) - 4)))
                                arg3[ecx_56 - 1] = fconvert.s(fconvert.t(*(arg1 + (eax_66 << 2)))
                                    - fconvert.t(*(arg1 + (ecx_56 << 2))))
                                arg3[eax_66] = fconvert.s(fconvert.t(*(arg1 + (eax_66 << 2)))
                                    + fconvert.t(*(arg1 + (ecx_56 << 2))))
                                eax_63 = eax_66 + entry_ebx
                                arg3[ecx_56] = fconvert.s(fconvert.t(*(arg1 + (ecx_56 << 2) - 4))
                                    - fconvert.t(*(arg1 + (eax_66 << 2) - 4)))
                                ecx_53 = ecx_56 + entry_ebx
                                j_2 = j_23
                                j_23 -= 1
                                arg3[eax_63 - 1] = fconvert.s(fconvert.t(*(arg1 + (ecx_53 << 2) - 4))
                                    + fconvert.t(*(arg1 + (eax_63 << 2) - 4)))
                                arg3[ecx_53 - 1] = fconvert.s(fconvert.t(*(arg1 + (eax_63 << 2)))
                                    - fconvert.t(*(arg1 + (ecx_53 << 2))))
                                arg3[eax_63] = fconvert.s(fconvert.t(*(arg1 + (eax_63 << 2)))
                                    + fconvert.t(*(arg1 + (ecx_53 << 2))))
                                arg3[ecx_53] = fconvert.s(fconvert.t(*(arg1 + (ecx_53 << 2) - 4))
                                    - fconvert.t(*(arg1 + (eax_63 << 2) - 4)))
                            while (j_2 != 1)
                            var_1c_1 = ecx_53
                        
                        if (var_c_3 s< arg5)
                            float* var_40_3 = &arg3[eax_63]
                            float* var_44_6 = arg1 + (var_1c_1 << 2) - 4
                            float* ecx_61 = arg3 - arg1
                            float* var_3c_3 = &arg3[var_1c_1]
                            float* eax_67 = arg1 + (eax_63 << 2) - 4
                            int32_t j_15 = arg5 - var_c_3
                            int32_t j_3
                            
                            do
                                var_40_3 = &var_40_3[entry_ebx]
                                var_44_6 = &var_44_6[entry_ebx]
                                var_3c_3 = &var_3c_3[entry_ebx]
                                eax_67 = &eax_67[entry_ebx]
                                j_3 = j_15
                                j_15 -= 1
                                *(eax_67 + ecx_61) =
                                    fconvert.s(fconvert.t(*var_44_6) + fconvert.t(*eax_67))
                                *(ecx_61 + var_44_6) =
                                    fconvert.s(fconvert.t(eax_67[1]) - fconvert.t(var_44_6[1]))
                                *var_40_3 = fconvert.s(fconvert.t(var_44_6[1]) + fconvert.t(eax_67[1]))
                                *var_3c_3 = fconvert.s(fconvert.t(*var_44_6) - fconvert.t(*eax_67))
                            while (j_3 != 1)
                        
                        int32_t temp38_1 = var_34_3
                        var_34_3 -= 1
                        
                        if (temp38_1 == 1)
                            break
                        
                        ecx_51 += 2
                        edx_22 = var_68_6
                    
                    edx = arg6
                
                i_7 = i_30
                i_30 -= 1
            while (i_7 != 1)
    
    int32_t eax_87 = 0
    int32_t var_30_7 = 0
    
    if (edx s>= 4)
        void* var_48_6 = arg9 + 0xc
        int32_t i_29 = ((edx - 4) u>> 2) + 1
        var_30_7 = (((edx - 4) u>> 2) + 1) * 4
        void* eax_86 = arg8 + 4
        int32_t i_8
        
        do
            *(eax_86 - 4) = fconvert.s(fconvert.t(*(var_48_6 - 0xc)))
            eax_86 += 0x10
            *(eax_86 - 0x10) = fconvert.s(fconvert.t(*(arg9 - arg8 + eax_86 - 0x10)))
            void* ecx_80 = var_48_6 + 0x10
            i_8 = i_29
            i_29 -= 1
            *(eax_86 - 0xc) = fconvert.s(fconvert.t(*(ecx_80 - 0x14)))
            var_48_6 = ecx_80
            *(eax_86 - 8) = fconvert.s(fconvert.t(*(ecx_80 - 0x10)))
        while (i_8 != 1)
        eax_87 = var_30_7
    
    if (eax_87 s< edx)
        void* i_26 = edx - var_30_7
        float* eax_93 = arg8 + (eax_87 << 2)
        void* i_9
        
        do
            long double x87_r7_104 = fconvert.t(*(eax_93 + arg9 - arg8))
            eax_93 = &eax_93[1]
            i_9 = i_26
            i_26 -= 1
            eax_93[-1] = fconvert.s(x87_r7_104)
        while (i_9 != 1)
    
    void* ecx_84 = arg4 * edx
    
    if (ecx_1 s> 1)
        void* ecx_85 = ecx_84 - entry_ebx
        int32_t eax_95 = neg.d(entry_ebx)
        int32_t var_44_10 = ecx_1 - 1
        
        while (true)
            int32_t eax_96 = eax_95 + ecx_5
            void* ecx_86 = ecx_85 - ecx_5
            int32_t var_68_8 = eax_96
            void* var_60_4 = ecx_86
            int32_t var_c_4 = 0
            
            if (arg5 s>= 4)
                var_c_4 = (((arg5 - 4) u>> 2) + 1) * 4
                int32_t i_35 = ((arg5 - 4) u>> 2) + 1
                int32_t i_10
                
                do
                    int32_t eax_97 = eax_96 + entry_ebx
                    void* ecx_87 = ecx_86 + entry_ebx
                    arg3[eax_97] = fconvert.s(fconvert.t(*(arg1 + (eax_97 << 2)))
                        + fconvert.t(*(arg1 + (ecx_87 << 2))))
                    int32_t eax_98 = eax_97 + entry_ebx
                    arg3[ecx_87] = fconvert.s(fconvert.t(*(arg1 + (ecx_87 << 2)))
                        - fconvert.t(*(arg1 + (eax_97 << 2))))
                    void* ecx_88 = ecx_87 + entry_ebx
                    arg3[eax_98] = fconvert.s(fconvert.t(*(arg1 + (eax_98 << 2)))
                        + fconvert.t(*(arg1 + (ecx_88 << 2))))
                    int32_t eax_99 = eax_98 + entry_ebx
                    arg3[ecx_88] = fconvert.s(fconvert.t(*(arg1 + (ecx_88 << 2)))
                        - fconvert.t(*(arg1 + (eax_98 << 2))))
                    void* ecx_89 = ecx_88 + entry_ebx
                    arg3[eax_99] = fconvert.s(fconvert.t(*(arg1 + (eax_99 << 2)))
                        + fconvert.t(*(arg1 + (ecx_89 << 2))))
                    eax_96 = eax_99 + entry_ebx
                    arg3[ecx_89] = fconvert.s(fconvert.t(*(arg1 + (ecx_89 << 2)))
                        - fconvert.t(*(arg1 + (eax_99 << 2))))
                    ecx_86 = ecx_89 + entry_ebx
                    i_10 = i_35
                    i_35 -= 1
                    arg3[eax_96] = fconvert.s(fconvert.t(*(arg1 + (eax_96 << 2)))
                        + fconvert.t(*(arg1 + (ecx_86 << 2))))
                    arg3[ecx_86] = fconvert.s(fconvert.t(*(arg1 + (ecx_86 << 2)))
                        - fconvert.t(*(arg1 + (eax_96 << 2))))
                while (i_10 != 1)
            
            if (var_c_4 s< arg5)
                float* edx_53 = arg3 - arg1
                float* eax_100 = arg1 + (eax_96 << 2)
                float* ecx_90 = arg1 + (ecx_86 << 2)
                int32_t i_27 = arg5 - var_c_4
                int32_t i_11
                
                do
                    long double x87_r7_121 = fconvert.t(ecx_90[entry_ebx])
                    ecx_90 = &ecx_90[entry_ebx]
                    long double x87_r7_122 = x87_r7_121 + fconvert.t(eax_100[entry_ebx])
                    eax_100 = &eax_100[entry_ebx]
                    i_11 = i_27
                    i_27 -= 1
                    *(edx_53 + eax_100) = fconvert.s(x87_r7_122)
                    *(edx_53 + ecx_90) = fconvert.s(fconvert.t(*ecx_90) - fconvert.t(*eax_100))
                while (i_11 != 1)
            
            int32_t temp5_1 = var_44_10
            var_44_10 -= 1
            
            if (temp5_1 == 1)
                break
            
            ecx_85 = var_60_4
            eax_95 = var_68_8
        
        edx = arg6
    
    float var_50 = fconvert.s(float.t(1))
    void* eax_103 = (arg4 - 1) * edx
    void* var_18_5 = nullptr
    void* var_14_3 = ecx_84
    
    if (ecx_1 s> 1)
        long double x87_r7_127 = fconvert.t(fconvert.s(st0))
        long double x87_r6_25 = fconvert.t(var_64)
        long double x87_r5_1 = fconvert.t(fconvert.s(float.t(0)))
        void* var_48_7 = arg9 + 8
        void* var_44_11 = arg9 + (ecx_84 << 2) + 8
        int32_t i_19 = ecx_1 - 1
        int32_t i_12
        
        do
            long double x87_r4_1 = fconvert.t(var_50)
            var_14_3 -= edx
            void* edi_2 = eax_103
            int32_t eax_106 = edx << 2
            var_48_7 += eax_106
            var_44_11 -= eax_106
            void* ecx_94 = var_18_5 + edx
            void* var_30_9 = var_14_3
            int32_t eax_108 = 0
            var_18_5 = ecx_94
            void* var_24_4 = ecx_94
            void* var_8_1 = edx
            long double x87_r5_4 = fconvert.t(fconvert.s(x87_r4_1 * x87_r7_127 - x87_r5_1 * x87_r6_25))
            var_50 = fconvert.s(x87_r5_4)
            long double x87_r4_3 = fconvert.t(fconvert.s(x87_r5_1 * x87_r7_127 + x87_r4_1 * x87_r6_25))
            
            if (edx s>= 4)
                void* var_c_5 = var_44_11
                void* var_34_5 = arg8 + (edi_2 << 2) + 8
                void* var_10_2 = var_48_7
                void* var_3c_7 = arg8 + 8
                int32_t j_24 = ((edx - 4) u>> 2) + 1
                void* var_38_4 = arg8 + (edx << 2) + 8
                eax_108 = j_24 << 2
                var_24_4 = ecx_94 + eax_108
                var_30_9 = var_14_3 + eax_108
                var_8_1 = eax_108 + edx
                int32_t j_4
                
                do
                    *(var_10_2 - 8) =
                        fconvert.s(fconvert.t(*(var_38_4 - 8)) * x87_r5_4 + fconvert.t(*(var_3c_7 - 8)))
                    *(var_c_5 - 8) = fconvert.s(fconvert.t(*(var_34_5 - 8)) * x87_r4_3)
                    *(var_10_2 - 4) =
                        fconvert.s(fconvert.t(*(var_38_4 - 4)) * x87_r5_4 + fconvert.t(*(var_3c_7 - 4)))
                    *(var_c_5 - 4) = fconvert.s(fconvert.t(*(var_34_5 - 4)) * x87_r4_3)
                    *var_10_2 = fconvert.s(fconvert.t(*var_38_4) * x87_r5_4 + fconvert.t(*var_3c_7))
                    *var_c_5 = fconvert.s(fconvert.t(*var_34_5) * x87_r4_3)
                    long double x87_r3_20 = fconvert.t(*(var_38_4 + 4))
                    void* ecx_117 = var_3c_7
                    var_38_4 += 0x10
                    var_3c_7 += 0x10
                    void* ecx_118 = var_10_2
                    var_10_2 += 0x10
                    *(ecx_118 + 4) = fconvert.s(x87_r3_20 * x87_r5_4 + fconvert.t(*(ecx_117 + 4)))
                    void* ecx_120 = var_c_5
                    var_c_5 += 0x10
                    long double x87_r3_24 = fconvert.t(*(var_34_5 + 4)) * x87_r4_3
                    var_34_5 += 0x10
                    j_4 = j_24
                    j_24 -= 1
                    *(ecx_120 + 4) = fconvert.s(x87_r3_24)
                while (j_4 != 1)
                edi_2 = eax_103 + eax_108
            
            if (eax_108 s< edx)
                float* var_34_6 = arg8 + (edi_2 << 2)
                void* var_30_10 = arg9 + (var_30_9 << 2)
                void* var_38_5 = arg9 + (var_24_4 << 2)
                float* var_3c_8 = arg8 + (eax_108 << 2)
                float* edi_12 = arg8 + (var_8_1 << 2)
                void* j_20 = edx - eax_108
                void* j_5
                
                do
                    float* eax_112 = var_3c_8
                    var_3c_8 = &var_3c_8[1]
                    long double x87_r3_26 = fconvert.t(*edi_12) * x87_r5_4
                    edi_12 = &edi_12[1]
                    void* eax_113 = var_38_5
                    var_38_5 += 4
                    *eax_113 = fconvert.s(x87_r3_26 + fconvert.t(*eax_112))
                    long double x87_r3_28 = fconvert.t(*var_34_6)
                    void* eax_115 = var_30_10
                    var_34_6 = &var_34_6[1]
                    var_30_10 += 4
                    j_5 = j_20
                    j_20 -= 1
                    *eax_115 = fconvert.s(x87_r3_28 * x87_r4_3)
                while (j_5 != 1)
            
            void* ecx_128 = eax_103
            float var_54_1 = fconvert.s(x87_r5_4)
            x87_r5_1 = x87_r5_4
            void* var_24_5 = edx
            
            if (ecx_1 s<= 2)
                x87_r6_25 = x87_r4_3
            else
                x87_r7_127 = x87_r4_3
                long double x87_r4_6 = fconvert.t(fconvert.s(x87_r4_3))
                void* var_34_7 = arg8 + (ecx_128 << 2) + 8
                void* var_c_6 = arg8 + (edx << 2) + 8
                int32_t var_60_6 = ecx_1 - 2
                
                while (true)
                    long double x87_r3_30 = fconvert.t(var_54_1)
                    var_24_5 += edx
                    int32_t eax_120 = edx << 2
                    var_c_6 += eax_120
                    var_34_7 -= eax_120
                    void* ecx_129 = ecx_128 - edx
                    void* var_1c_4 = var_18_5
                    void* eax_122 = var_14_3
                    void* var_10_3 = ecx_129
                    float var_3c_10 = fconvert.s(x87_r4_6 * x87_r5_1 + x87_r3_30 * x87_r6_25)
                    x87_r4_6 = fconvert.t(fconvert.s(x87_r3_30 * x87_r5_1 - x87_r4_6 * x87_r6_25))
                    void* var_5c_5 = var_24_5
                    int32_t edi_15 = 0
                    var_54_1 = fconvert.s(x87_r4_6)
                    long double x87_r3_32 = fconvert.t(var_3c_10)
                    
                    if (edx s>= 4)
                        void* ecx_130 = var_44_11
                        int32_t j_14 = ((edx - 4) u>> 2) + 1
                        void* var_3c_11 = var_c_6
                        edi_15 = (((edx - 4) u>> 2) + 1) << 2
                        var_1c_4 = var_18_5 + edi_15
                        var_5c_5 = var_24_5 + edi_15
                        void* var_38_6 = var_34_7
                        void* eax_124 = var_48_7
                        var_10_3 = ecx_129 + edi_15
                        int32_t j_6
                        
                        do
                            eax_124 += 0x10
                            ecx_130 += 0x10
                            *(eax_124 - 0x18) = fconvert.s(fconvert.t(*(var_3c_11 - 8)) * x87_r4_6
                                + fconvert.t(*(eax_124 - 0x18)))
                            *(ecx_130 - 0x18) = fconvert.s(fconvert.t(*(var_38_6 - 8)) * x87_r3_32
                                + fconvert.t(*(ecx_130 - 0x18)))
                            *(eax_124 - 0x14) = fconvert.s(fconvert.t(*(var_3c_11 - 4)) * x87_r4_6
                                + fconvert.t(*(eax_124 - 0x14)))
                            *(ecx_130 - 0x14) = fconvert.s(fconvert.t(*(var_38_6 - 4)) * x87_r3_32
                                + fconvert.t(*(ecx_130 - 0x14)))
                            *(eax_124 - 0x10) = fconvert.s(fconvert.t(*var_3c_11) * x87_r4_6
                                + fconvert.t(*(eax_124 - 0x10)))
                            void* edx_75 = var_3c_11
                            var_3c_11 += 0x10
                            *(ecx_130 - 0x10) = fconvert.s(fconvert.t(*var_38_6) * x87_r3_32
                                + fconvert.t(*(ecx_130 - 0x10)))
                            void* edx_76 = var_38_6
                            var_38_6 += 0x10
                            j_6 = j_14
                            j_14 -= 1
                            *(eax_124 - 0xc) = fconvert.s(fconvert.t(*(edx_75 + 4)) * x87_r4_6
                                + fconvert.t(*(eax_124 - 0xc)))
                            *(ecx_130 - 0xc) = fconvert.s(fconvert.t(*(edx_76 + 4)) * x87_r3_32
                                + fconvert.t(*(ecx_130 - 0xc)))
                        while (j_6 != 1)
                        edx = arg6
                        eax_122 = var_14_3 + edi_15
                    
                    if (edi_15 s< edx)
                        void* var_8_3 = arg9 + (eax_122 << 2)
                        void* var_3c_12 = arg8 + (var_5c_5 << 2)
                        void* var_38_7 = arg8 + (var_10_3 << 2)
                        void* j_18 = edx - edi_15
                        void* edi_17 = arg9 + (var_1c_4 << 2)
                        void* j_7
                        
                        do
                            long double x87_r2_31 = fconvert.t(*var_3c_12)
                            void* ecx_137 = var_38_7
                            var_3c_12 += 4
                            var_38_7 += 4
                            edi_17 += 4
                            *(edi_17 - 4) = fconvert.s(x87_r2_31 * x87_r4_6 + fconvert.t(*(edi_17 - 4)))
                            void* ecx_138 = var_8_3
                            var_8_3 += 4
                            j_7 = j_18
                            j_18 -= 1
                            *ecx_138 =
                                fconvert.s(fconvert.t(*ecx_137) * x87_r3_32 + fconvert.t(*ecx_138))
                        while (j_7 != 1)
                    
                    int32_t temp26_1 = var_60_6
                    var_60_6 -= 1
                    x87_r5_1 = x87_r3_32
                    
                    if (temp26_1 == 1)
                        break
                    
                    ecx_128 = ecx_129
                
                x87_r5_1 = x87_r4_6
                x87_r6_25 = fconvert.t(var_64)
            
            i_12 = i_19
            i_19 -= 1
        while (i_12 != 1)
    
    void* edi_18 = nullptr
    
    if (ecx_1 s> 1)
        arg6 = arg8 + 8
        int32_t i_21 = ecx_1 - 1
        int32_t i_13
        
        do
            arg6 += edx << 2
            edi_18 += edx
            int32_t ecx_141 = 0
            void* var_18_6 = edi_18
            void* eax_133 = edi_18
            
            if (edx s>= 4)
                int32_t var_68_9 = ((edx - 4) u>> 2) + 1
                ecx_141 = (((edx - 4) u>> 2) + 1) * 4
                void* eax_135 = arg9 + 8
                void* edi_19 = edi_18 + ecx_141
                void* edi_20 = arg6
                
                while (true)
                    long double x87_r7_131 = fconvert.t(*(edi_20 - 8)) + fconvert.t(*(eax_135 - 8))
                    eax_135 += 0x10
                    int32_t temp13_1 = var_68_9
                    var_68_9 -= 1
                    *(eax_135 - 0x18) = fconvert.s(x87_r7_131)
                    *(eax_135 - 0x14) =
                        fconvert.s(fconvert.t(*(edi_20 - 4)) + fconvert.t(*(eax_135 - 0x14)))
                    *(eax_135 - 0x10) = fconvert.s(fconvert.t(*edi_20) + fconvert.t(*(eax_135 - 0x10)))
                    *(eax_135 - 0xc) =
                        fconvert.s(fconvert.t(*(edi_20 + 4)) + fconvert.t(*(eax_135 - 0xc)))
                    
                    if (temp13_1 == 1)
                        break
                    
                    edi_20 += 0x10
                
                edi_18 = var_18_6
                eax_133 = edi_19
            
            if (ecx_141 s< edx)
                float* eax_136 = arg8 + (eax_133 << 2)
                
                do
                    long double x87_r7_139 = fconvert.t(*eax_136) + fconvert.t(*(arg9 + (ecx_141 << 2)))
                    ecx_141 += 1
                    eax_136 = &eax_136[1]
                    *(arg9 + (ecx_141 << 2) - 4) = fconvert.s(x87_r7_139)
                while (ecx_141 s< edx)
                
                edi_18 = var_18_6
            
            i_13 = i_21
            i_21 -= 1
        while (i_13 != 1)
    
    void* eax_137
    
    if (entry_ebx s>= arg5)
        void* var_18_7 = nullptr
        int32_t var_14_6 = 0
        
        if (arg5 s<= 0)
            eax_137 = arg7
        else
            void* var_44_13 = arg1 + 8
            eax_137 = arg7
            void* var_40_6 = eax_137 + 8
            int32_t i_20 = arg5
            int32_t i_14
            
            do
                void* ecx_156 = var_18_7
                int32_t edx_88 = var_14_6
                int32_t edi_34 = 0
                
                if (entry_ebx s>= 4)
                    int32_t j_21 = ((entry_ebx - 4) u>> 2) + 1
                    int32_t edx_89 = j_21 << 2
                    void* edi_37 = var_40_6
                    void* edx_91 = var_44_13
                    int32_t j_8
                    
                    do
                        long double x87_r7_145 = fconvert.t(*(edx_91 - 8))
                        edx_91 += 0x10
                        *(edi_37 - 8) = fconvert.s(x87_r7_145)
                        edi_37 += 0x10
                        j_8 = j_21
                        j_21 -= 1
                        *(edi_37 - 0x14) = fconvert.s(fconvert.t(*(edx_91 - 0x14)))
                        *(edi_37 - 0x10) = fconvert.s(fconvert.t(*(edx_91 - 0x10)))
                        *(edi_37 - 0xc) = fconvert.s(fconvert.t(*(edx_91 - 0xc)))
                    while (j_8 != 1)
                    edi_34 = edx_89
                    ecx_156 = var_18_7 + edx_89
                    edx_88 = edx_89 + var_14_6
                
                if (edi_34 s< entry_ebx)
                    void* edx_93 = arg1 + (ecx_156 << 2)
                    int32_t j_22 = entry_ebx - edi_34
                    float* edi_38 = eax_137 + (edx_88 << 2)
                    int32_t j_9
                    
                    do
                        long double x87_r7_149 = fconvert.t(*edx_93)
                        edx_93 += 4
                        *edi_38 = fconvert.s(x87_r7_149)
                        edi_38 = &edi_38[1]
                        j_9 = j_22
                        j_22 -= 1
                    while (j_9 != 1)
                
                var_18_7 += entry_ebx
                var_44_13 += entry_ebx << 2
                var_14_6 += ecx_7
                var_40_6 += ecx_7 * 4
                i_14 = i_20
                i_20 -= 1
            while (i_14 != 1)
    else
        int32_t ecx_147 = 0
        int32_t var_48_9 = 0
        
        if (entry_ebx s<= 0)
            eax_137 = arg7
        else
            eax_137 = arg7
            
            do
                int32_t edi_30 = arg5
                int32_t edx_77 = ecx_147
                int32_t var_14_5 = ecx_147
                int32_t var_c_7 = 0
                
                if (edi_30 s>= 4)
                    arg6 = ((edi_30 - 4) u>> 2) + 1
                    var_c_7 = (((edi_30 - 4) u>> 2) + 1) * 4
                    void* i_15
                    
                    do
                        *(eax_137 + (edx_77 << 2)) = fconvert.s(fconvert.t(*(arg1 + (ecx_147 << 2))))
                        int32_t ecx_148 = ecx_147 + entry_ebx
                        int32_t edx_78 = edx_77 + ecx_7
                        *(eax_137 + (edx_78 << 2)) = fconvert.s(fconvert.t(*(arg1 + (ecx_148 << 2))))
                        int32_t ecx_149 = ecx_148 + entry_ebx
                        int32_t edx_79 = edx_78 + ecx_7
                        *(eax_137 + (edx_79 << 2)) = fconvert.s(fconvert.t(*(arg1 + (ecx_149 << 2))))
                        int32_t ecx_150 = ecx_149 + entry_ebx
                        int32_t edx_80 = edx_79 + ecx_7
                        *(eax_137 + (edx_80 << 2)) = fconvert.s(fconvert.t(*(arg1 + (ecx_150 << 2))))
                        ecx_147 = ecx_150 + entry_ebx
                        edx_77 = edx_80 + ecx_7
                        i_15 = arg6
                        arg6 -= 1
                    while (i_15 != 1)
                    edi_30 = arg5
                    var_14_5 = edx_77
                
                if (var_c_7 s< edi_30)
                    void* edi_31 = eax_137 + (var_14_5 << 2)
                    int32_t edx_86 = arg5 - var_c_7
                    arg6 = edi_31
                    void* ecx_151 = arg1 + (ecx_147 << 2)
                    
                    while (true)
                        *edi_31 = fconvert.s(fconvert.t(*ecx_151))
                        edi_31 = arg6 + ecx_7 * 4
                        int32_t temp25_1 = edx_86
                        edx_86 -= 1
                        arg6 = edi_31
                        
                        if (temp25_1 == 1)
                            break
                        
                        ecx_151 += entry_ebx << 2
                
                ecx_147 = var_48_9 + 1
                var_48_9 = ecx_147
            while (ecx_147 s< entry_ebx)
    
    int32_t ecx_163 = ecx_5 * arg4
    int32_t edx_94 = 0
    arg6 = nullptr
    int32_t var_24_7 = ecx_163
    
    if (ecx_1 s> 1)
        int32_t var_68_11 = ecx_1 - 1
        
        while (true)
            arg6 += ecx_5
            int32_t edi_40 = var_24_7 - ecx_5
            int32_t edx_95 = edx_94 + (entry_ebx << 1)
            var_24_7 = edi_40
            int32_t var_8_4 = edi_40
            int32_t edi_41 = arg5
            int32_t ecx_167 = edx_95
            void* edx_96 = arg6
            int32_t var_c_8 = 0
            
            if (edi_41 s>= 4)
                arg4 = ((edi_41 - 4) u>> 2) + 1
                var_c_8 = (((edi_41 - 4) u>> 2) + 1) * 4
                int32_t i_16
                
                do
                    *(eax_137 + (ecx_167 << 2) - 4) = fconvert.s(fconvert.t(*(arg1 + (edx_96 << 2))))
                    void* edx_97 = edx_96 + entry_ebx
                    int32_t edi_48 = var_8_4 + entry_ebx
                    *(eax_137 + (ecx_167 << 2)) = fconvert.s(fconvert.t(*(arg1 + (var_8_4 << 2))))
                    int32_t ecx_168 = ecx_167 + ecx_7
                    void* edx_98 = edx_97 + entry_ebx
                    *(eax_137 + (ecx_168 << 2) - 4) = fconvert.s(fconvert.t(*(arg1 + (edx_97 << 2))))
                    int32_t var_8_5 = edi_48
                    int32_t edi_49 = edi_48 + entry_ebx
                    *(eax_137 + (ecx_168 << 2)) = fconvert.s(fconvert.t(*(arg1 + (edi_48 << 2))))
                    int32_t ecx_169 = ecx_168 + ecx_7
                    void* edx_99 = edx_98 + entry_ebx
                    *(eax_137 + (ecx_169 << 2) - 4) = fconvert.s(fconvert.t(*(arg1 + (edx_98 << 2))))
                    int32_t var_8_6 = edi_49
                    int32_t edi_50 = edi_49 + entry_ebx
                    *(eax_137 + (ecx_169 << 2)) = fconvert.s(fconvert.t(*(arg1 + (edi_49 << 2))))
                    int32_t ecx_170 = ecx_169 + ecx_7
                    var_8_4 = edi_50 + entry_ebx
                    *(eax_137 + (ecx_170 << 2) - 4) = fconvert.s(fconvert.t(*(arg1 + (edx_99 << 2))))
                    edx_96 = edx_99 + entry_ebx
                    *(eax_137 + (ecx_170 << 2)) = fconvert.s(fconvert.t(*(arg1 + (edi_50 << 2))))
                    ecx_167 = ecx_170 + ecx_7
                    i_16 = arg4
                    arg4 -= 1
                while (i_16 != 1)
                edi_41 = arg5
            
            if (var_c_8 s< edi_41)
                arg4 = arg1 + (edx_96 << 2)
                int32_t edx_102 = arg5 - var_c_8
                float* ecx_171 = eax_137 + (ecx_167 << 2)
                void* var_48_11 = arg1 + (var_8_4 << 2)
                
                while (true)
                    ecx_171[-1] = fconvert.s(fconvert.t(*arg4))
                    *ecx_171 = fconvert.s(fconvert.t(*var_48_11))
                    int32_t ecx_173 = entry_ebx << 2
                    arg4 += ecx_173
                    var_48_11 += ecx_173
                    int32_t temp36_1 = edx_102
                    edx_102 -= 1
                    
                    if (temp36_1 == 1)
                        break
                    
                    ecx_171 = &ecx_171[ecx_7]
            
            int32_t temp31_1 = var_68_11
            var_68_11 -= 1
            
            if (temp31_1 == 1)
                break
            
            edx_94 = edx_95
    
    if (entry_ebx == 1)
        return 
    
    int32_t edi_59 = neg.d(entry_ebx)
    
    if (ecx_3 s< arg5)
        int32_t var_30_12 = ecx_163
        int32_t edx_104 = 0
        arg6 = nullptr
        
        if (ecx_1 s> 1)
            int32_t var_4c_2 = edi_59 + entry_ebx - 2
            int32_t i_22 = ecx_1 - 1
            int32_t i_17
            
            do
                int32_t ecx_177 = entry_ebx * 2
                var_4c_2 += ecx_177
                arg6 += ecx_177
                var_30_12 -= ecx_5
                edx_104 += ecx_5
                
                if (entry_ebx s> 2)
                    int32_t var_3c_13 = var_4c_2
                    int32_t ecx_179 = edx_104 + 2
                    int32_t edi_65 = var_30_12 - edx_104
                    int32_t var_64_2 = ecx_179
                    int32_t var_58_2 = edi_65
                    int32_t var_60_8 = ((entry_ebx - 3) u>> 1) + 1
                    
                    while (true)
                        int32_t var_1c_5 = var_3c_13
                        void* var_8_8 = arg6 - edx_104 + ecx_179
                        int32_t edx_111 = arg5
                        int32_t var_10_4 = edi_65 + ecx_179
                        int32_t var_c_9 = 0
                        
                        if (edx_111 s>= 4)
                            arg4 = ((edx_111 - 4) u>> 2) + 1
                            var_c_9 = (((edx_111 - 4) u>> 2) + 1) * 4
                            int32_t j_10
                            
                            do
                                *(eax_137 + (var_8_8 << 2) - 4) = fconvert.s(
                                    fconvert.t(*(arg1 + (var_10_4 << 2) - 4))
                                    + fconvert.t(*(arg1 + (ecx_179 << 2) - 4)))
                                *(eax_137 + (var_1c_5 << 2) - 4) = fconvert.s(
                                    fconvert.t(*(arg1 + (ecx_179 << 2) - 4))
                                    - fconvert.t(*(arg1 + (var_10_4 << 2) - 4)))
                                void* var_8_9 = var_8_8 + ecx_7
                                *(eax_137 + (var_8_8 << 2)) = fconvert.s(
                                    fconvert.t(*(arg1 + (ecx_179 << 2)))
                                    + fconvert.t(*(arg1 + (var_10_4 << 2))))
                                int32_t ecx_180 = ecx_179 + entry_ebx
                                *(eax_137 + (var_1c_5 << 2)) = fconvert.s(
                                    fconvert.t(*(arg1 + (var_10_4 << 2)))
                                    - fconvert.t(*(arg1 + (ecx_179 << 2))))
                                int32_t edi_75 = var_1c_5 + ecx_7
                                int32_t edi_77 = var_10_4 + entry_ebx
                                *(eax_137 + (var_8_9 << 2) - 4) = fconvert.s(
                                    fconvert.t(*(arg1 + (edi_77 << 2) - 4))
                                    + fconvert.t(*(arg1 + (ecx_180 << 2) - 4)))
                                *(eax_137 + (edi_75 << 2) - 4) = fconvert.s(
                                    fconvert.t(*(arg1 + (ecx_180 << 2) - 4))
                                    - fconvert.t(*(arg1 + (edi_77 << 2) - 4)))
                                void* var_8_10 = var_8_9 + ecx_7
                                *(eax_137 + (var_8_9 << 2)) = fconvert.s(
                                    fconvert.t(*(arg1 + (ecx_180 << 2)))
                                    + fconvert.t(*(arg1 + (edi_77 << 2))))
                                int32_t ecx_181 = ecx_180 + entry_ebx
                                *(eax_137 + (edi_75 << 2)) = fconvert.s(
                                    fconvert.t(*(arg1 + (edi_77 << 2)))
                                    - fconvert.t(*(arg1 + (ecx_180 << 2))))
                                int32_t edi_85 = edi_75 + ecx_7
                                int32_t edi_87 = edi_77 + entry_ebx
                                *(eax_137 + (var_8_10 << 2) - 4) = fconvert.s(
                                    fconvert.t(*(arg1 + (edi_87 << 2) - 4))
                                    + fconvert.t(*(arg1 + (ecx_181 << 2) - 4)))
                                *(eax_137 + (edi_85 << 2) - 4) = fconvert.s(
                                    fconvert.t(*(arg1 + (ecx_181 << 2) - 4))
                                    - fconvert.t(*(arg1 + (edi_87 << 2) - 4)))
                                void* var_8_11 = var_8_10 + ecx_7
                                *(eax_137 + (var_8_10 << 2)) = fconvert.s(
                                    fconvert.t(*(arg1 + (ecx_181 << 2)))
                                    + fconvert.t(*(arg1 + (edi_87 << 2))))
                                int32_t ecx_182 = ecx_181 + entry_ebx
                                *(eax_137 + (edi_85 << 2)) = fconvert.s(
                                    fconvert.t(*(arg1 + (edi_87 << 2)))
                                    - fconvert.t(*(arg1 + (ecx_181 << 2))))
                                int32_t edi_95 = edi_85 + ecx_7
                                int32_t edi_97 = edi_87 + entry_ebx
                                *(eax_137 + (var_8_11 << 2) - 4) = fconvert.s(
                                    fconvert.t(*(arg1 + (edi_97 << 2) - 4))
                                    + fconvert.t(*(arg1 + (ecx_182 << 2) - 4)))
                                *(eax_137 + (edi_95 << 2) - 4) = fconvert.s(
                                    fconvert.t(*(arg1 + (ecx_182 << 2) - 4))
                                    - fconvert.t(*(arg1 + (edi_97 << 2) - 4)))
                                var_8_8 = var_8_11 + ecx_7
                                *(eax_137 + (var_8_11 << 2)) = fconvert.s(
                                    fconvert.t(*(arg1 + (ecx_182 << 2)))
                                    + fconvert.t(*(arg1 + (edi_97 << 2))))
                                var_10_4 = edi_97 + entry_ebx
                                ecx_179 = ecx_182 + entry_ebx
                                *(eax_137 + (edi_95 << 2)) = fconvert.s(
                                    fconvert.t(*(arg1 + (edi_97 << 2)))
                                    - fconvert.t(*(arg1 + (ecx_182 << 2))))
                                j_10 = arg4
                                arg4 -= 1
                                var_1c_5 = edi_95 + ecx_7
                            while (j_10 != 1)
                            edx_111 = arg5
                        
                        if (var_c_9 s< edx_111)
                            int32_t edi_108 = ecx_7 * 4
                            void* var_48_12 = eax_137 + (var_1c_5 << 2)
                            float* var_40_7 = arg1 + (var_10_4 << 2)
                            int32_t j_13 = edx_111 - var_c_9
                            float* edx_119 = var_40_7
                            void* ecx_183 = arg1 + (ecx_179 << 2)
                            arg4 = eax_137 + (var_8_8 << 2)
                            int32_t j_11
                            
                            do
                                *(arg4 - 4) =
                                    fconvert.s(fconvert.t(edx_119[-1]) + fconvert.t(*(ecx_183 - 4)))
                                *(var_48_12 - 4) =
                                    fconvert.s(fconvert.t(*(ecx_183 - 4)) - fconvert.t(edx_119[-1]))
                                *arg4 = fconvert.s(fconvert.t(*edx_119) + fconvert.t(*ecx_183))
                                arg4 += edi_108
                                *var_48_12 = fconvert.s(fconvert.t(*edx_119) - fconvert.t(*ecx_183))
                                var_48_12 += edi_108
                                edx_119 = &var_40_7[entry_ebx]
                                ecx_183 += entry_ebx << 2
                                j_11 = j_13
                                j_13 -= 1
                                var_40_7 = edx_119
                            while (j_11 != 1)
                        
                        var_3c_13 -= 2
                        ecx_179 = var_64_2 + 2
                        int32_t temp45_1 = var_60_8
                        var_60_8 -= 1
                        var_64_2 = ecx_179
                        
                        if (temp45_1 == 1)
                            break
                        
                        edi_65 = var_58_2
                
                i_17 = i_22
                i_22 -= 1
            while (i_17 != 1)
    else if (ecx_1 s> 1)
        int32_t edx_125 = ecx_5 * 4
        arg4 = arg1 + (ecx_163 << 2) + 8
        void* ecx_186 = eax_137 + 8
        void* edi_121 = eax_137 + ((edi_59 + entry_ebx) << 2) - 8
        int32_t edx_128 = entry_ebx * 8
        void* esi_1 = arg1 + 8
        int32_t var_54_3 = edx_128
        int32_t var_58_3 = ecx_1 - 1
        
        while (true)
            arg4 -= edx_125
            edi_121 += edx_128
            ecx_186 += edx_128
            esi_1 += edx_125
            void* var_4c_3 = edi_121
            
            if (arg5 s> 0)
                void* edx_129 = esi_1
                void* var_64_3 = esi_1
                void* esi_2 = ecx_186
                arg6 = ecx_186
                int32_t ecx_187 = arg4
                void* var_68_12 = edi_121
                int32_t var_60_9 = ecx_187
                int32_t i_23 = arg5
                int32_t i_18
                
                do
                    if (entry_ebx s> 2)
                        int32_t j_19 = ((entry_ebx - 3) u>> 1) + 1
                        int32_t j_12
                        
                        do
                            esi_2 += 8
                            long double x87_r7_201 =
                                fconvert.t(*(ecx_187 - 4)) + fconvert.t(*(edx_129 - 4))
                            ecx_187 += 8
                            edx_129 += 8
                            edi_121 -= 8
                            j_12 = j_19
                            j_19 -= 1
                            *(esi_2 - 0xc) = fconvert.s(x87_r7_201)
                            *(edi_121 + 4) =
                                fconvert.s(fconvert.t(*(edx_129 - 0xc)) - fconvert.t(*(ecx_187 - 0xc)))
                            *(esi_2 - 8) =
                                fconvert.s(fconvert.t(*(edx_129 - 8)) + fconvert.t(*(ecx_187 - 8)))
                            *(edi_121 + 8) =
                                fconvert.s(fconvert.t(*(ecx_187 - 8)) - fconvert.t(*(edx_129 - 8)))
                        while (j_12 != 1)
                    
                    int32_t eax_147 = ecx_7 * 4
                    esi_2 = arg6 + eax_147
                    edi_121 = var_68_12 + eax_147
                    int32_t eax_148 = entry_ebx << 2
                    edx_129 = var_64_3 + eax_148
                    ecx_187 = var_60_9 + eax_148
                    i_18 = i_23
                    i_23 -= 1
                    arg6 = esi_2
                    var_68_12 = edi_121
                    var_64_3 = edx_129
                    var_60_9 = ecx_187
                while (i_18 != 1)
                edi_121 = var_4c_3
            
            int32_t temp40_1 = var_58_3
            var_58_3 -= 1
            
            if (temp40_1 == 1)
                break
            
            edx_128 = var_54_3
}
