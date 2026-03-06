// 函数名称: sub_64f290
// 虚拟地址: 0x64f290
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_64f290(void* arg1, void* arg2, int32_t* arg3, void* arg4, int32_t arg5, int32_t arg6, int128_t* arg7, int32_t arg8, void* arg9)
{
    // 第一条实际指令: void* ecx = *arg3
    void* ecx = *arg3
    int32_t* eax_1 = arg3[1]
    bool cond:0 = eax_1[0x7d] == 0
    int32_t* edi
    int32_t* var_a8 = edi
    void* var_44
    
    if (cond:0)
        var_44 = 0x10
    else
        var_44 = eax_1[0x7f]
    
    int32_t edx_6 = *(arg2 + ((*eax_1 * 0xf + arg1) << 2) + 0x84)
    float var_90 = fconvert.s(fconvert.t(*((*(arg2 + (arg1 << 2) + 0xfc) << 3) + &data_825d48)))
    void* eax_6 = *(arg2 + (arg1 << 2) + 0x138) * 4
    float var_74 = fconvert.s(fconvert.t(*(eax_6 * 2 + &data_825d48)))
    void* edi_3 = arg9 * 4
    __alloca_probe_16(edi_3)
    int32_t* var_4c = &var_a8
    __alloca_probe_16(edi_3)
    int32_t* var_68 = &var_a8
    __alloca_probe_16(edi_3)
    int32_t* ebx = &var_a8
    int32_t* var_38 = &var_a8
    __alloca_probe_16(edi_3)
    int32_t* var_30 = &var_a8
    __alloca_probe_16(edi_3)
    void* eax_15 = *(arg4 + 0x484) + arg9
    int32_t* var_6c = &var_a8
    __alloca_probe_16(eax_15 * 4)
    int32_t* var_70 = &var_a8
    
    if (ecx s> 0x3e8)
        var_74 = fconvert.s(fconvert.t(*(eax_6 * 2 + 0x825d90)))
    
    void* edi_7 = var_44 * arg9 * 4
    __alloca_probe_16(edi_7)
    *var_4c = &var_a8
    __alloca_probe_16(edi_7)
    var_a8 = &var_a8
    __alloca_probe_16(edi_7)
    var_a8 = &var_a8
    __alloca_probe_16(edi_7)
    *var_30 = &var_a8
    
    if (arg9 s> 1)
        int32_t eax_25 = var_44 * 4
        int32_t* edx_10 = var_4c - &var_a8
        int32_t var_8_1 = eax_25
        int32_t __saved_esi
        int32_t* ecx_3 = &__saved_esi
        arg2 = edx_10
        arg1 = arg9 - 1
        
        while (true)
            *(edx_10 + ecx_3) = *var_4c + eax_25
            *ecx_3 = var_a8 + eax_25
            *ecx_3 = var_a8 + eax_25
            int32_t edx_17 = *var_30 + eax_25
            eax_25 += var_8_1
            *(var_30 - &var_a8 + ecx_3) = edx_17
            ecx_3 = &ecx_3[1]
            void* temp1_1 = arg1
            arg1 -= 1
            
            if (temp1_1 == 1)
                break
            
            edx_10 = arg2
    
    if (eax_15 s> 0)
        __builtin_memset(var_70, 0, eax_15 << 2)
    
    void* var_20 = nullptr
    
    if (ecx s> 0)
        int128_t* ecx_5 = *var_30
        void* var_54_1 = ecx
        void* eax_128
        
        do
            arg1 = var_54_1
            
            if (var_44 s<= var_54_1)
                arg1 = var_44
            
            void* esi_1 = nullptr
            sub_5ab990(var_6c, arg7, arg9 << 2)
            sub_5abfc0(ecx_5, 0, edi_7)
            long double x87_r7_3
            
            if (arg9 s<= 0)
                x87_r7_3 = float.t(0)
            else
                x87_r7_3 = fconvert.t(1.00000001e-10f)
                long double x87_r6_1 = float.t(0)
                void* eax_38 = arg5 - ebx
                int32_t* eax_40 = var_4c - ebx
                float** eax_42 = var_68 - ebx
                int32_t** eax_44 = var_30 - ebx
                float* eax_46 = var_70 - ebx
                int32_t* esi_2 = ebx
                void* i_3 = arg9
                void* i
                
                do
                    void* eax_50 = eax_38 + esi_2 + var_6c - arg5
                    void* edi_21 = *(eax_50 + arg6 - var_6c) + var_20 * 4
                    void* var_28_1 = edi_21
                    
                    if (*eax_50 == 0)
                        if (arg1 s> 0)
                            void* eax_71 = *(eax_40 + esi_2)
                            float* ecx_38 = *esi_2 - eax_71
                            void* edx_38 = *(eax_42 + esi_2) - eax_71
                            void* ebx_23 = *(eax_44 + esi_2) - eax_71
                            void* edi_38 = edi_21 - eax_71
                            arg2 = arg1
                            void* j
                            
                            do
                                *(ecx_38 + eax_71) = fconvert.s(x87_r7_3)
                                eax_71 += 4
                                j = arg2
                                arg2 -= 1
                                *(eax_71 - 4) = fconvert.s(x87_r6_1)
                                *(edx_38 + eax_71 - 4) = fconvert.s(x87_r6_1)
                                *(ebx_23 + eax_71 - 4) = 0
                                *(edi_38 + eax_71 - 4) = 0
                            while (j != 1)
                        
                        *(eax_46 + esi_2) = fconvert.s(x87_r6_1)
                    else
                        void* ebx_1 = nullptr
                        
                        if (arg1 s>= 4)
                            void* ecx_17 = *esi_2
                            int32_t* eax_51 = ecx_17 + 4
                            int32_t j_5 = ((arg1 - 4) u>> 2) + 1
                            void* edx_21 = edi_21 + 0xc
                            arg2 = j_5 << 2
                            int32_t j_1
                            
                            do
                                eax_51[-1] =
                                    fconvert.s(fconvert.t(*((*(edx_21 - 0xc) << 2) + &data_8bb900)))
                                long double x87_r7_5 =
                                    fconvert.t(*((*(eax_51 + edi_21 - ecx_17) << 2) + &data_8bb900))
                                eax_51 = &eax_51[4]
                                eax_51[-4] = fconvert.s(x87_r7_5)
                                long double x87_r7_6 =
                                    fconvert.t(*((*(edx_21 - 4) << 2) + &data_8bb900))
                                edx_21 += 0x10
                                j_1 = j_5
                                j_5 -= 1
                                eax_51[-3] = fconvert.s(x87_r7_6)
                                eax_51[-2] =
                                    fconvert.s(fconvert.t(*((*(edx_21 - 0x10) << 2) + &data_8bb900)))
                            while (j_1 != 1)
                            ebx_1 = arg2
                        
                        if (ebx_1 s< arg1)
                            int32_t ecx_21 = *esi_2
                            int32_t* eax_52 = ecx_21 + (ebx_1 << 2)
                            void* j_6 = arg1 - ebx_1
                            void* j_2
                            
                            do
                                long double x87_r7_8 =
                                    fconvert.t(*((*(eax_52 + edi_21 - ecx_21) << 2) + &data_8bb900))
                                eax_52 = &eax_52[1]
                                j_2 = j_6
                                j_6 -= 1
                                eax_52[-1] = fconvert.s(x87_r7_8)
                            while (j_2 != 1)
                        
                        void* edx_25 = eax_38 + esi_2
                        int32_t ebx_11 = var_20 << 2
                        sub_64ef50(*esi_2, eax_44, *(eax_44 + esi_2), edx_6, 
                            fconvert.s(fconvert.t(var_90)), fconvert.s(fconvert.t(var_74)), 
                            *edx_25 + ebx_11, var_20, arg1)
                        void* edx_29 = nullptr
                        long double x87_r6_2
                        long double x87_r7_11
                        
                        if (arg1 s< 4)
                            x87_r7_11 = fconvert.t(-1.0)
                            x87_r6_2 = float.t(0)
                        else
                            x87_r7_11 = fconvert.t(-1.0)
                            int32_t edi_22 = *edx_25
                            x87_r6_2 = float.t(0)
                            void* eax_55 = *(eax_42 + esi_2)
                            float* var_1c_1 = ebx_11 + edi_22 + 4
                            int32_t edi_25 = *(eax_40 + esi_2)
                            float* ebx_15 = *esi_2 - edi_25
                            void* var_24_1 = eax_55
                            float* eax_56 = eax_55 - *esi_2
                            void* edx_32 = *esi_2 + 8
                            void* ecx_31 = *(eax_40 + esi_2) + 4
                            int32_t j_7 = ((arg1 - 4) u>> 2) + 1
                            void* ebx_16 = ebx_11 + edi_22 + 8
                            arg2 = j_7 << 2
                            int32_t j_3
                            
                            do
                                long double x87_r5_1 = fconvert.t(*(ebx_16 - 8))
                                long double x87_r5_3 = fconvert.t(fconvert.s(x87_r5_1 * x87_r5_1))
                                *(ecx_31 - 4) = fconvert.s(x87_r5_3)
                                *var_24_1 = fconvert.s(x87_r5_3)
                                long double temp6_1 = fconvert.t(*(ebx_16 - 8))
                                x87_r6_2 - temp6_1
                                void* eax_58
                                eax_58.w = (x87_r6_2 < temp6_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, temp6_1) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == temp6_1 ? 1 : 0) << 0xe | 0x3000
                                
                                if ((eax_58:1.b & 0x41) == 0)
                                    *(ecx_31 - 4) = fconvert.s(fconvert.t(*(ecx_31 - 4)) * x87_r7_11)
                                
                                long double x87_r5_6 = fconvert.t(*(edx_32 - 8))
                                *(edx_32 - 8) = fconvert.s(x87_r5_6 * x87_r5_6)
                                long double x87_r5_8 = fconvert.t(*var_1c_1)
                                long double x87_r5_10 = fconvert.t(fconvert.s(x87_r5_8 * x87_r5_8))
                                *ecx_31 = fconvert.s(x87_r5_10)
                                *(eax_55 - edi_25 + ecx_31) = fconvert.s(x87_r5_10)
                                long double temp7_1 = fconvert.t(*var_1c_1)
                                x87_r6_2 - temp7_1
                                float* eax_61
                                eax_61.w = (x87_r6_2 < temp7_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, temp7_1) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == temp7_1 ? 1 : 0) << 0xe | 0x3000
                                
                                if ((eax_61:1.b & 0x41) == 0)
                                    *ecx_31 = fconvert.s(fconvert.t(*ecx_31) * x87_r7_11)
                                
                                long double x87_r5_13 = fconvert.t(*(ebx_15 + ecx_31))
                                *(ebx_15 + ecx_31) = fconvert.s(x87_r5_13 * x87_r5_13)
                                long double x87_r5_15 = fconvert.t(*ebx_16)
                                long double x87_r5_17 = fconvert.t(fconvert.s(x87_r5_15 * x87_r5_15))
                                *(ecx_31 + 4) = fconvert.s(x87_r5_17)
                                *(eax_56 + edx_32) = fconvert.s(x87_r5_17)
                                long double temp9_1 = fconvert.t(*ebx_16)
                                x87_r6_2 - temp9_1
                                float* eax_63
                                eax_63.w = (x87_r6_2 < temp9_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, temp9_1) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == temp9_1 ? 1 : 0) << 0xe | 0x3000
                                
                                if ((eax_63:1.b & 0x41) == 0)
                                    *(ecx_31 + 4) = fconvert.s(fconvert.t(*(ecx_31 + 4)) * x87_r7_11)
                                
                                long double x87_r5_20 = fconvert.t(*edx_32)
                                *edx_32 = fconvert.s(x87_r5_20 * x87_r5_20)
                                long double x87_r5_22 = fconvert.t(*(ebx_16 + 4))
                                long double x87_r5_24 = fconvert.t(fconvert.s(x87_r5_22 * x87_r5_22))
                                *(ecx_31 + 8) = fconvert.s(x87_r5_24)
                                *(var_24_1 + 0xc) = fconvert.s(x87_r5_24)
                                long double temp11_1 = fconvert.t(*(ebx_16 + 4))
                                x87_r6_2 - temp11_1
                                void* eax_64
                                eax_64.w = (x87_r6_2 < temp11_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, temp11_1) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == temp11_1 ? 1 : 0) << 0xe | 0x3000
                                
                                if ((eax_64:1.b & 0x41) == 0)
                                    *(ecx_31 + 8) = fconvert.s(fconvert.t(*(ecx_31 + 8)) * x87_r7_11)
                                
                                long double x87_r5_27 = fconvert.t(*(edx_32 + 4))
                                var_24_1 += 0x10
                                var_1c_1 = &var_1c_1[4]
                                ecx_31 += 0x10
                                ebx_16 += 0x10
                                *(edx_32 + 4) = fconvert.s(x87_r5_27 * x87_r5_27)
                                edx_32 += 0x10
                                j_3 = j_7
                                j_7 -= 1
                            while (j_3 != 1)
                            edi_21 = var_28_1
                            edx_29 = arg2
                        
                        if (edx_29 s< arg1)
                            int32_t eax_65 = *(eax_40 + esi_2)
                            float* edi_35 = *(eax_42 + esi_2) - eax_65
                            float* ebx_19 = *esi_2 - eax_65
                            float* ecx_33 = eax_65 + (edx_29 << 2)
                            void* j_8 = arg1 - edx_29
                            void* edx_33 = *(eax_38 + esi_2) + ((edx_29 + var_20) << 2)
                            void* j_4
                            
                            do
                                long double x87_r5_29 = fconvert.t(*edx_33)
                                long double x87_r5_31 = fconvert.t(fconvert.s(x87_r5_29 * x87_r5_29))
                                *ecx_33 = fconvert.s(x87_r5_31)
                                *(edi_35 + ecx_33) = fconvert.s(x87_r5_31)
                                long double temp8_1 = fconvert.t(*edx_33)
                                x87_r6_2 - temp8_1
                                float* eax_66
                                eax_66.w = (x87_r6_2 < temp8_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, temp8_1) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == temp8_1 ? 1 : 0) << 0xe | 0x3000
                                
                                if ((eax_66:1.b & 0x41) == 0)
                                    *ecx_33 = fconvert.s(fconvert.t(*ecx_33) * x87_r7_11)
                                
                                long double x87_r5_34 = fconvert.t(*(ebx_19 + ecx_33))
                                edx_33 += 4
                                ecx_33 = &ecx_33[1]
                                j_4 = j_8
                                j_8 -= 1
                                *(ebx_19 + ecx_33 - 4) = fconvert.s(x87_r5_34 * x87_r5_34)
                            while (j_4 != 1)
                            edi_21 = var_28_1
                        
                        void* var_ac_3 = edi_21
                        void* var_b0_3 = arg1
                        void* var_b4_3 = var_20
                        void* var_b8_3 = arg1
                        int32_t ecx_35 = *(eax_40 + esi_2)
                        *(eax_46 + esi_2) = fconvert.s(sub_64efd0(arg3, *(eax_42 + esi_2), edx_6, 
                            ecx_35, edx_6, ecx_35, *esi_2, 0, 
                            fconvert.s(fconvert.t(*(eax_46 + esi_2)))))
                        x87_r7_3 = fconvert.t(1.00000001e-10f)
                        x87_r6_1 = float.t(0)
                    
                    esi_2 = &esi_2[1]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                esi_1 = arg9
                ebx = var_38
            
            int32_t i_4 = 0
            
            if (*(arg4 + 0x484) s> 0)
                void* var_24_2 = &var_70[esi_1]
                void* var_18_2 = arg4 + 0x888
                int32_t i_1
                
                do
                    int32_t eax_74 = *(var_18_2 - 0x400)
                    int32_t ecx_42 = *var_18_2
                    int32_t esi_5 = var_20 * 4
                    int32_t edi_42 = *(arg6 + (eax_74 << 2)) + esi_5
                    int32_t edx_42 = *(arg6 + (ecx_42 << 2)) + esi_5
                    float* esi_6 = var_4c[eax_74]
                    int32_t ebx_25 = var_4c[ecx_42]
                    float* ebx_27 = var_68[eax_74]
                    int32_t ebx_29 = var_68[ecx_42]
                    int32_t ebx_31 = var_38[eax_74]
                    int32_t ebx_33 = var_38[ecx_42]
                    int32_t ebx_35 = var_30[eax_74]
                    int32_t ebx_37 = var_30[ecx_42]
                    
                    if (var_6c[eax_74] != 0 || var_6c[ecx_42] != 0)
                        var_6c[ecx_42] = 1
                        var_6c[eax_74] = 1
                        arg2 = nullptr
                        
                        if (arg1 s> 0)
                            long double x87_r6_4 = float.t(0)
                            float* eax_78 = ebx_25 - esi_6
                            float* eax_80 = ebx_29 - esi_6
                            void* eax_82 = ebx_27 - esi_6
                            int32_t* eax_84 = ebx_37 - esi_6
                            int32_t* eax_86 = ebx_35 - esi_6
                            float* eax_88 = ebx_33 - esi_6
                            int32_t* ebx_40 = edx_42 - esi_6
                            int32_t* edi_43 = edi_42 - esi_6
                            void* eax_90 = ebx_31 - esi_6
                            float* ecx_43 = esi_6
                            int32_t* var_34_3 = ebx_40
                            int32_t* var_50_2 = edi_43
                            
                            while (true)
                                long double x87_r6_5
                                long double x87_r7_16
                                
                                if (arg2 s>= arg8 - ecx + var_54_1)
                                    x87_r6_5 = x87_r7_3
                                    x87_r7_16 = x87_r6_4
                                else if (*(eax_86 + ecx_43) != 0 || *(eax_84 + ecx_43) != 0)
                                    *ecx_43 = fconvert.s(fabs(fconvert.t(*(eax_78 + ecx_43)))
                                        + fabs(fconvert.t(*ecx_43)))
                                    float* eax_97 = eax_82
                                    *(eax_97 + ecx_43) = fconvert.s(fconvert.t(*(eax_80 + ecx_43))
                                        + fconvert.t(*(eax_97 + ecx_43)))
                                    *(eax_84 + ecx_43) = 1
                                    *(eax_86 + ecx_43) = 1
                                    int32_t ebx_41 = *(ebx_40 + ecx_43)
                                    int32_t edi_44 = *(edi_43 + ecx_43)
                                    int32_t eax_100
                                    int32_t edx_49
                                    edx_49:eax_100 = sx.q(ebx_41)
                                    int32_t eax_102
                                    int32_t edx_50
                                    edx_50:eax_102 = sx.q(edi_44)
                                    
                                    if ((eax_102 ^ edx_50) - edx_50 s<= (eax_100 ^ edx_49) - edx_49)
                                        int32_t eax_107
                                        
                                        if (ebx_41 s<= 0)
                                            eax_107 = ebx_41 - edi_44
                                        else
                                            eax_107 = edi_44 - ebx_41
                                        
                                        ebx_40 = var_34_3
                                        edi_43 = var_50_2
                                        *(ebx_40 + ecx_43) = eax_107
                                        *(edi_43 + ecx_43) = ebx_41
                                    else if (edi_44 s<= 0)
                                        ebx_40 = var_34_3
                                        *(ebx_40 + ecx_43) = ebx_41 - edi_44
                                        edi_43 = var_50_2
                                    else
                                        ebx_40 = var_34_3
                                        *(ebx_40 + ecx_43) = edi_44 - ebx_41
                                        edi_43 = var_50_2
                                    
                                    int32_t edx_52 = *(ebx_40 + ecx_43)
                                    x87_r6_5 = x87_r7_3
                                    x87_r7_16 = x87_r6_4
                                    int32_t eax_110
                                    int32_t edx_53
                                    edx_53:eax_110 = sx.q(*(edi_43 + ecx_43))
                                    
                                    if (edx_52 s>= ((eax_110 ^ edx_53) - edx_53) * 2)
                                        *(ebx_40 + ecx_43) = neg.d(edx_52)
                                        *(edi_43 + ecx_43) = neg.d(*(edi_43 + ecx_43))
                                else
                                    long double x87_r5_37 =
                                        fconvert.t(*(eax_78 + ecx_43)) + fconvert.t(*ecx_43)
                                    
                                    if (arg2 s>= edx_6 - ecx + var_54_1)
                                        x87_r5_37 - x87_r6_4
                                        bool p_1 = unimplemented  {test ah, 0x5}
                                        long double x87_r5_43 = fconvert.t(fconvert.s(
                                            fabs(fconvert.t(*(eax_78 + ecx_43)))
                                            + fabs(fconvert.t(*ecx_43))))
                                        *(eax_82 + ecx_43) = fconvert.s(x87_r5_43)
                                        
                                        if (not(p_1))
                                            x87_r5_43 = fneg(x87_r5_43)
                                        
                                        *ecx_43 = fconvert.s(x87_r5_43)
                                    else
                                        long double x87_r5_38 = fconvert.t(fconvert.s(x87_r5_37))
                                        *ecx_43 = fconvert.s(x87_r5_38)
                                        *(eax_82 + ecx_43) = fconvert.s(fabs(x87_r5_38))
                                    
                                    x87_r6_5 = x87_r7_3
                                    x87_r7_16 = x87_r6_4
                                    *(eax_80 + ecx_43) = fconvert.s(x87_r6_5)
                                    *(eax_78 + ecx_43) = fconvert.s(x87_r6_5)
                                    *(eax_84 + ecx_43) = 1
                                    *(ebx_40 + ecx_43) = 0
                                
                                long double x87_r5_50 =
                                    fconvert.t(*(eax_88 + ecx_43)) + fconvert.t(*(eax_90 + ecx_43))
                                ecx_43 = &ecx_43[1]
                                long double x87_r5_51 = fconvert.t(fconvert.s(x87_r5_50))
                                *(eax_88 + ecx_43 - 4) = fconvert.s(x87_r5_51)
                                void* eax_120 = arg2 + 1
                                *(eax_90 + ecx_43 - 4) = fconvert.s(x87_r5_51)
                                arg2 = eax_120
                                
                                if (eax_120 s>= arg1)
                                    break
                                
                                x87_r6_4 = x87_r7_16
                                x87_r7_3 = x87_r6_5
                        
                        ebx = var_38
                        int32_t var_ac_4 = edi_42
                        void* var_b0_4 = arg1
                        void* var_b4_4 = var_20
                        void* var_b8_5 = arg1
                        *var_24_2 = fconvert.s(sub_64efd0(arg3, ebx_27, ebx_31, ebx_35, edx_6, esi_6, 
                            ebx_31, ebx_35, fconvert.s(fconvert.t(*var_24_2))))
                        x87_r7_3 = float.t(0)
                        var_24_2 += 4
                    else
                        ebx = var_38
                    
                    var_18_2 += 4
                    i_1 = i_4 + 1
                    i_4 = i_1
                while (i_1 s< *(arg4 + 0x484))
            
            eax_128 = var_20 + var_44
            var_54_1 += neg.d(var_44)
            var_20 = eax_128
        while (eax_128 s< ecx)
    
    int32_t i_2 = 0
    
    if (*(arg4 + 0x484) s<= 0)
        return 
    
    void* eax_129 = arg4 + 0x888
    
    do
        int32_t ecx_47 = *(eax_129 - 0x400)
        
        if (*(arg7 + (ecx_47 << 2)) != 0 || *(arg7 + (*eax_129 << 2)) != 0)
            *(arg7 + (ecx_47 << 2)) = 1
            *(arg7 + (*eax_129 << 2)) = 1
        
        i_2 += 1
        eax_129 += 4
    while (i_2 s< *(arg4 + 0x484))
}
