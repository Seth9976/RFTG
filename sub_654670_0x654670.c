// 函数名称: sub_654670
// 虚拟地址: 0x654670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_654670(int32_t arg1, int32_t arg2, float* arg3, int32_t arg4, void* arg5, int32_t arg6, void* arg7)
{
    // 第一条实际指令: float* esi = arg3
    float* esi = arg3
    void* ebx_1 = esi * arg4
    int32_t ecx = esi << 2
    int32_t i_10 = arg4
    int32_t edi = 0
    void* var_10 = nullptr
    int32_t var_38 = 0
    
    if (i_10 s>= 4)
        float* var_18_1 = arg2 + (ebx_1 << 3)
        float* var_1c_1 = arg2 + ebx_1 * 0xc
        float* var_2c_1 = arg1 + esi * 0x10 - 4
        int32_t i_7 = ((arg4 - 4) u>> 2) + 1
        float* var_14_1 = arg2 + (ebx_1 << 2)
        var_38 = (((arg4 - 4) u>> 2) + 1) * 4
        float* ebx_14 = var_2c_1
        float* ecx_3 = arg1 + esi * 8
        int32_t i
        
        do
            long double x87_r7_1 = fconvert.t(ecx_3[-1])
            long double x87_r7_3 = fconvert.t(*ecx_3)
            float var_c_1 = fconvert.s(fconvert.t(*(arg1 + (edi << 2))) - fconvert.t(*ebx_14))
            void* var_10_1 = var_10 + esi
            long double x87_r7_9 =
                fconvert.t(fconvert.s(fconvert.t(*ebx_14) + fconvert.t(*(arg1 + (edi << 2)))))
            long double x87_r5_1 = fconvert.t(fconvert.s(x87_r7_1 + x87_r7_1))
            *(arg2 + (var_10 << 2)) = fconvert.s(x87_r7_9 + x87_r5_1)
            long double x87_r5_3 = fconvert.t(var_c_1)
            void* var_14_2 = &var_14_1[esi]
            long double x87_r3_1 = fconvert.t(fconvert.s(x87_r7_3 + x87_r7_3))
            *var_14_1 = fconvert.s(x87_r5_3 - x87_r3_1)
            void* var_18_2 = &var_18_1[esi]
            *var_18_1 = fconvert.s(x87_r7_9 - x87_r5_1)
            void* var_1c_2 = &var_1c_1[esi]
            int32_t edi_1 = edi + ecx
            *var_1c_1 = fconvert.s(x87_r3_1 + x87_r5_3)
            long double x87_r7_12 = fconvert.t(ecx_3[ecx - 1])
            void* ecx_4 = &ecx_3[ecx]
            void* esi_5 = &var_2c_1[ecx]
            long double x87_r7_14 = fconvert.t(*ecx_4)
            float var_c_2 = fconvert.s(fconvert.t(*(arg1 + (edi_1 << 2))) - fconvert.t(*esi_5))
            long double x87_r7_20 =
                fconvert.t(fconvert.s(fconvert.t(*esi_5) + fconvert.t(*(arg1 + (edi_1 << 2)))))
            long double x87_r5_5 = fconvert.t(fconvert.s(x87_r7_12 + x87_r7_12))
            *(arg2 + (var_10_1 << 2)) = fconvert.s(x87_r7_20 + x87_r5_5)
            long double x87_r5_7 = fconvert.t(var_c_2)
            long double x87_r3_3 = fconvert.t(fconvert.s(x87_r7_14 + x87_r7_14))
            *var_14_2 = fconvert.s(x87_r5_7 - x87_r3_3)
            *var_18_2 = fconvert.s(x87_r7_20 - x87_r5_5)
            *var_1c_2 = fconvert.s(x87_r3_3 + x87_r5_7)
            void* esi_7 = var_10_1 + arg3
            int32_t esi_8 = arg3 << 2
            void* var_14_3 = var_14_2 + esi_8
            void* var_18_3 = var_18_2 + esi_8
            void* var_1c_3 = var_1c_2 + esi_8
            int32_t ebx_24 = ecx << 2
            long double x87_r7_23 = fconvert.t(*(ecx_4 + ebx_24 - 4))
            void* ecx_5 = ecx_4 + ebx_24
            int32_t edi_2 = edi_1 + ecx
            void* esi_11 = esi_5 + ebx_24
            long double x87_r7_25 = fconvert.t(*ecx_5)
            float var_c_3 = fconvert.s(fconvert.t(*(arg1 + (edi_2 << 2))) - fconvert.t(*esi_11))
            long double x87_r7_31 =
                fconvert.t(fconvert.s(fconvert.t(*esi_11) + fconvert.t(*(arg1 + (edi_2 << 2)))))
            long double x87_r5_9 = fconvert.t(fconvert.s(x87_r7_23 + x87_r7_23))
            *(arg2 + (esi_7 << 2)) = fconvert.s(x87_r7_31 + x87_r5_9)
            long double x87_r5_11 = fconvert.t(var_c_3)
            long double x87_r3_5 = fconvert.t(fconvert.s(x87_r7_25 + x87_r7_25))
            *var_14_3 = fconvert.s(x87_r5_11 - x87_r3_5)
            *var_18_3 = fconvert.s(x87_r7_31 - x87_r5_9)
            *var_1c_3 = fconvert.s(x87_r3_5 + x87_r5_11)
            void* esi_13 = esi_7 + arg3
            int32_t esi_14 = arg3 << 2
            void* var_14_4 = var_14_3 + esi_14
            void* var_18_4 = var_18_3 + esi_14
            void* var_1c_4 = var_1c_3 + esi_14
            int32_t ebx_29 = ecx << 2
            long double x87_r7_34 = fconvert.t(*(ecx_5 + ebx_29 - 4))
            void* ecx_6 = ecx_5 + ebx_29
            int32_t edi_3 = edi_2 + ecx
            void* esi_17 = esi_11 + ebx_29
            long double x87_r7_36 = fconvert.t(*ecx_6)
            float var_c_4 = fconvert.s(fconvert.t(*(arg1 + (edi_3 << 2))) - fconvert.t(*esi_17))
            long double x87_r7_42 =
                fconvert.t(fconvert.s(fconvert.t(*esi_17) + fconvert.t(*(arg1 + (edi_3 << 2)))))
            long double x87_r5_13 = fconvert.t(fconvert.s(x87_r7_34 + x87_r7_34))
            *(arg2 + (esi_13 << 2)) = fconvert.s(x87_r7_42 + x87_r5_13)
            long double x87_r5_15 = fconvert.t(var_c_4)
            long double x87_r3_7 = fconvert.t(fconvert.s(x87_r7_36 + x87_r7_36))
            *var_14_4 = fconvert.s(x87_r5_15 - x87_r3_7)
            *var_18_4 = fconvert.s(x87_r7_42 - x87_r5_13)
            *var_1c_4 = fconvert.s(x87_r3_7 + x87_r5_15)
            var_10 = esi_13 + arg3
            int32_t esi_20 = arg3 << 2
            var_14_1 = var_14_4 + esi_20
            var_18_1 = var_18_4 + esi_20
            var_1c_1 = var_1c_4 + esi_20
            edi = edi_3 + ecx
            int32_t esi_23 = ecx * 4
            ebx_14 = esi_17 + esi_23
            ecx_3 = ecx_6 + esi_23
            i = i_7
            i_7 -= 1
            esi = arg3
            var_2c_1 = ebx_14
        while (i != 1)
        i_10 = arg4
    
    if (var_38 s< i_10)
        void* var_48_1 = arg2 + (var_10 << 2)
        float* var_14_5 = arg1 + (edi << 2)
        float* var_28_1 = arg2 + ((ebx_1 + var_10) << 2)
        float* var_2c_5 = arg1 + ((edi + (esi << 1)) << 2)
        float* var_1c_5 = arg2 + ((var_10 + (ebx_1 << 1)) << 2)
        float* ebx_46 = var_14_5
        float* var_18_5 = arg2 + ((ebx_1 * 3 + var_10) << 2)
        float* edi_4 = arg1 + ((edi + esi * 4) << 2) - 4
        int32_t i_8 = arg4 - var_38
        int32_t i_1
        
        do
            long double x87_r7_45 = fconvert.t(var_2c_5[-1])
            long double x87_r7_47 = fconvert.t(*var_2c_5)
            float var_c_5 = fconvert.s(fconvert.t(*ebx_46) - fconvert.t(*edi_4))
            float* ebx_47 = var_48_1
            long double x87_r7_53 = fconvert.t(fconvert.s(fconvert.t(*edi_4) + fconvert.t(*ebx_46)))
            long double x87_r5_17 = fconvert.t(fconvert.s(x87_r7_45 + x87_r7_45))
            *ebx_47 = fconvert.s(x87_r7_53 + x87_r5_17)
            long double x87_r5_19 = fconvert.t(var_c_5)
            long double x87_r3_9 = fconvert.t(fconvert.s(x87_r7_47 + x87_r7_47))
            *var_28_1 = fconvert.s(x87_r5_19 - x87_r3_9)
            *var_1c_5 = fconvert.s(x87_r7_53 - x87_r5_17)
            *var_18_5 = fconvert.s(x87_r3_9 + x87_r5_19)
            var_28_1 = &var_28_1[esi]
            var_1c_5 = &var_1c_5[esi]
            var_18_5 = &var_18_5[esi]
            var_2c_5 = &var_2c_5[ecx]
            var_48_1 = &ebx_47[esi]
            ebx_46 = &var_14_5[ecx]
            edi_4 = &edi_4[ecx]
            i_1 = i_8
            i_8 -= 1
            var_14_5 = ebx_46
        while (i_1 != 1)
        i_10 = arg4
    
    void* ebx_76 = ebx_1
    
    if (esi s< 2)
        return 
    
    if (esi == 2)
    label_654c7d:
        long double x87_r7_96 = fconvert.t(data_8bbd24)
        float* ecx_35 = esi
        void* var_10_5 = esi - 1
        void* esi_50 = esi * 3
        int32_t var_38_2 = 0
        
        if (arg4 s>= 4)
            void* var_1c_7 = arg2 + ((esi - 1 + ebx_76) << 2)
            long double x87_r6_46 = fconvert.t(fconvert.s(fneg(x87_r7_96)))
            float* var_18_7 = arg2 + ((var_10_5 + (ebx_76 << 1)) << 2)
            float* var_14_7 = arg2 + ((ebx_76 * 3 + var_10_5) << 2)
            int32_t i_6 = ((arg4 - 4) u>> 2) + 1
            var_38_2 = (((arg4 - 4) u>> 2) + 1) * 4
            int32_t i_2
            
            do
                float var_28_4 = fconvert.s(fconvert.t(*(arg1 + (esi_50 << 2)))
                    + fconvert.t(*(arg1 + (ecx_35 << 2))))
                float var_2c_8 = fconvert.s(fconvert.t(*(arg1 + (esi_50 << 2)))
                    - fconvert.t(*(arg1 + (ecx_35 << 2))))
                float var_c_7 = fconvert.s(fconvert.t(*(arg1 + (ecx_35 << 2) - 4))
                    - fconvert.t(*(arg1 + (esi_50 << 2) - 4)))
                long double x87_r5_51 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + (esi_50 << 2) - 4))
                    + fconvert.t(*(arg1 + (ecx_35 << 2) - 4))))
                *(arg2 + (var_10_5 << 2)) = fconvert.s(x87_r5_51 + x87_r5_51)
                long double x87_r5_53 = fconvert.t(var_c_7)
                long double x87_r3_13 = fconvert.t(var_28_4)
                *var_1c_7 = fconvert.s((x87_r5_53 - x87_r3_13) * x87_r7_96)
                long double x87_r3_15 = fconvert.t(var_2c_8)
                *var_18_7 = fconvert.s(x87_r3_15 + x87_r3_15)
                *var_14_7 = fconvert.s((x87_r5_53 + x87_r3_13) * x87_r6_46)
                void* edi_29 = var_10_5 + arg3
                void* var_1c_8 = var_1c_7 + (arg3 << 2)
                void* var_18_8 = &var_18_7[arg3]
                void* var_14_8 = &var_14_7[arg3]
                void* esi_51 = esi_50 + ecx
                void* ecx_36 = &ecx_35[esi]
                float var_28_5 = fconvert.s(fconvert.t(*(arg1 + (esi_51 << 2)))
                    + fconvert.t(*(arg1 + (ecx_36 << 2))))
                float var_2c_9 = fconvert.s(fconvert.t(*(arg1 + (esi_51 << 2)))
                    - fconvert.t(*(arg1 + (ecx_36 << 2))))
                float var_c_8 = fconvert.s(fconvert.t(*(arg1 + (ecx_36 << 2) - 4))
                    - fconvert.t(*(arg1 + (esi_51 << 2) - 4)))
                long double x87_r5_64 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + (esi_51 << 2) - 4))
                    + fconvert.t(*(arg1 + (ecx_36 << 2) - 4))))
                *(arg2 + (edi_29 << 2)) = fconvert.s(x87_r5_64 + x87_r5_64)
                long double x87_r5_66 = fconvert.t(var_c_8)
                long double x87_r3_17 = fconvert.t(var_28_5)
                *var_1c_8 = fconvert.s((x87_r5_66 - x87_r3_17) * x87_r7_96)
                long double x87_r3_19 = fconvert.t(var_2c_9)
                *var_18_8 = fconvert.s(x87_r3_19 + x87_r3_19)
                *var_14_8 = fconvert.s((x87_r5_66 + x87_r3_17) * x87_r6_46)
                void* edi_33 = edi_29 + arg3
                int32_t edi_34 = arg3 << 2
                void* var_1c_9 = var_1c_8 + edi_34
                void* var_18_9 = var_18_8 + edi_34
                void* var_14_9 = var_14_8 + edi_34
                void* esi_52 = esi_51 + ecx
                void* ecx_37 = ecx_36 + ecx
                float var_28_6 = fconvert.s(fconvert.t(*(arg1 + (esi_52 << 2)))
                    + fconvert.t(*(arg1 + (ecx_37 << 2))))
                float var_2c_10 = fconvert.s(fconvert.t(*(arg1 + (esi_52 << 2)))
                    - fconvert.t(*(arg1 + (ecx_37 << 2))))
                float var_c_9 = fconvert.s(fconvert.t(*(arg1 + (ecx_37 << 2) - 4))
                    - fconvert.t(*(arg1 + (esi_52 << 2) - 4)))
                long double x87_r5_77 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + (esi_52 << 2) - 4))
                    + fconvert.t(*(arg1 + (ecx_37 << 2) - 4))))
                *(arg2 + (edi_33 << 2)) = fconvert.s(x87_r5_77 + x87_r5_77)
                long double x87_r5_79 = fconvert.t(var_c_9)
                long double x87_r3_21 = fconvert.t(var_28_6)
                *var_1c_9 = fconvert.s((x87_r5_79 - x87_r3_21) * x87_r7_96)
                long double x87_r3_23 = fconvert.t(var_2c_10)
                *var_18_9 = fconvert.s(x87_r3_23 + x87_r3_23)
                *var_14_9 = fconvert.s((x87_r5_79 + x87_r3_21) * x87_r6_46)
                void* edi_37 = edi_33 + arg3
                int32_t edi_38 = arg3 << 2
                float* var_1c_10 = var_1c_9 + edi_38
                void* var_18_10 = var_18_9 + edi_38
                void* var_14_10 = var_14_9 + edi_38
                void* ecx_38 = ecx_37 + ecx
                void* esi_53 = esi_52 + ecx
                float var_28_7 = fconvert.s(fconvert.t(*(arg1 + (esi_53 << 2)))
                    + fconvert.t(*(arg1 + (ecx_38 << 2))))
                float var_2c_11 = fconvert.s(fconvert.t(*(arg1 + (esi_53 << 2)))
                    - fconvert.t(*(arg1 + (ecx_38 << 2))))
                float var_c_10 = fconvert.s(fconvert.t(*(arg1 + (ecx_38 << 2) - 4))
                    - fconvert.t(*(arg1 + (esi_53 << 2) - 4)))
                long double x87_r5_90 = fconvert.t(fconvert.s(fconvert.t(*(arg1 + (esi_53 << 2) - 4))
                    + fconvert.t(*(arg1 + (ecx_38 << 2) - 4))))
                *(arg2 + (edi_37 << 2)) = fconvert.s(x87_r5_90 + x87_r5_90)
                long double x87_r5_92 = fconvert.t(var_c_10)
                long double x87_r3_25 = fconvert.t(var_28_7)
                *var_1c_10 = fconvert.s((x87_r5_92 - x87_r3_25) * x87_r7_96)
                long double x87_r3_27 = fconvert.t(var_2c_11)
                *var_18_10 = fconvert.s(x87_r3_27 + x87_r3_27)
                *var_14_10 = fconvert.s((x87_r5_92 + x87_r3_25) * x87_r6_46)
                var_10_5 = edi_37 + arg3
                int32_t edi_42 = arg3 << 2
                var_1c_7 = &var_1c_10[arg3]
                var_18_7 = var_18_10 + edi_42
                var_14_7 = var_14_10 + edi_42
                ecx_35 = ecx_38 + ecx
                esi_50 = esi_53 + ecx
                i_2 = i_6
                i_6 -= 1
            while (i_2 != 1)
            x87_r7_96 = x87_r6_46
        
        if (var_38_2 s< arg4)
            float* edi_45 = arg3
            int32_t ebx_95 = ecx * 4
            arg3 = arg2 + (var_10_5 << 2)
            void* ecx_39 = arg1 + (ecx_35 << 2)
            void* eax = arg1 + (esi_50 << 2)
            float* var_44_2 = arg2 + ((var_10_5 + ebx_1) << 2)
            float* var_40_2 = arg2 + ((var_10_5 + (ebx_1 << 1)) << 2)
            int32_t i_9 = arg4 - var_38_2
            float* edx = arg2 + ((ebx_1 * 3 + var_10_5) << 2)
            int32_t i_3
            
            do
                float* ebx_107 = arg3
                arg3 = &arg3[edi_45]
                float var_28_8 = fconvert.s(fconvert.t(*eax) + fconvert.t(*ecx_39))
                float var_2c_12 = fconvert.s(fconvert.t(*eax) - fconvert.t(*ecx_39))
                float var_c_11 = fconvert.s(fconvert.t(*(ecx_39 - 4)) - fconvert.t(*(eax - 4)))
                long double x87_r5_103 =
                    fconvert.t(fconvert.s(fconvert.t(*(eax - 4)) + fconvert.t(*(ecx_39 - 4))))
                *ebx_107 = fconvert.s(x87_r5_103 + x87_r5_103)
                float* ebx_108 = var_44_2
                long double x87_r5_105 = fconvert.t(var_c_11)
                var_44_2 = &var_44_2[edi_45]
                long double x87_r3_29 = fconvert.t(var_28_8)
                *ebx_108 = fconvert.s((x87_r5_105 - x87_r3_29) * x87_r7_96)
                float* ebx_109 = var_40_2
                long double x87_r3_31 = fconvert.t(var_2c_12)
                var_40_2 = &var_40_2[edi_45]
                *ebx_109 = fconvert.s(x87_r3_31 + x87_r3_31)
                ecx_39 += ebx_95
                eax += ebx_95
                *edx = fconvert.s((x87_r5_105 + x87_r3_29) * fconvert.t(fconvert.s(fneg(x87_r7_96))))
                edx = &edx[edi_45]
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
    else
        void* var_10_4 = nullptr
        
        if (i_10 s> 0)
            void* edi_5 = esi * 3
            int32_t edi_8 = neg.d(esi * 3)
            void* var_14_6 = nullptr
            void* var_48_2 = ebx_76 * 3
            int32_t i_5 = i_10
            int32_t i_4
            
            do
                int32_t ebx_52 = var_10_4 * 4
                int32_t edi_10 = ebx_52 + (esi << 1)
                
                if (esi s> 2)
                    void* var_4c_1 = arg1 + (ebx_52 << 2)
                    void* esi_26 = ebx_52 - var_14_6
                    float* var_40_1 = arg2 + (esi_26 << 2)
                    float* var_44_1 = arg2 + ((esi_26 + ebx_1) << 2)
                    int32_t esi_31 = var_10_4 * 4
                    void* var_3c_2 = arg1 + ((edi_10 + (esi << 1)) << 2)
                    float* var_1c_6 = arg2 + ((ebx_1 * 2 - var_14_6 + esi_31) << 2)
                    float* var_18_6 = arg2 + ((var_48_2 + esi_31) << 2)
                    void* esi_34 = arg6 - arg5
                    void* esi_36 = arg7 - arg5
                    void* var_5c_1 = arg7
                    float* var_50_1 = arg6 - arg7
                    float* ecx_28 = arg5 + 4
                    float* edi_11 = arg1 + (edi_10 << 2)
                    float* var_38_1 = edi_11
                    int32_t j_1 = ((arg3 - 3) u>> 1) + 1
                    int32_t j
                    
                    do
                        var_38_1 -= 8
                        var_40_1 = &var_40_1[2]
                        var_44_1 = &var_44_1[2]
                        var_1c_6 = &var_1c_6[2]
                        float var_28_2 =
                            fconvert.s(fconvert.t(*(var_4c_1 + 8)) + fconvert.t(*(var_3c_2 - 8)))
                        var_18_6 = &var_18_6[2]
                        void* esi_44 = var_4c_1 + 8
                        long double x87_r7_59 =
                            fconvert.t(*(var_4c_1 + 8)) - fconvert.t(*(var_3c_2 - 8))
                        edi_11 = &edi_11[2]
                        var_3c_2 -= 8
                        var_4c_1 = esi_44
                        float var_68_1 = fconvert.s(fconvert.t(*edi_11) - fconvert.t(*var_38_1))
                        float var_24_6 = fconvert.s(fconvert.t(*edi_11) + fconvert.t(*var_38_1))
                        float var_c_6 =
                            fconvert.s(fconvert.t(*(esi_44 - 4)) - fconvert.t(*(var_3c_2 - 4)))
                        float var_6c_1 = fconvert.s(fconvert.t(edi_11[-1]) - fconvert.t(var_38_1[-1]))
                        long double x87_r7_72 = fconvert.t(fconvert.s(fconvert.t(*(esi_44 - 4))
                            + fconvert.t(*(var_3c_2 - 4))))
                        long double x87_r5_21 =
                            fconvert.t(fconvert.s(fconvert.t(edi_11[-1]) + fconvert.t(var_38_1[-1])))
                        var_40_1[-1] = fconvert.s(x87_r7_72 + x87_r5_21)
                        long double x87_r7_74 = fconvert.t(var_68_1)
                        long double x87_r5_23 = fconvert.t(fconvert.s(x87_r7_59))
                        *var_40_1 = fconvert.s(x87_r7_74 + x87_r5_23)
                        long double x87_r7_76 = fconvert.t(var_c_6)
                        long double x87_r5_25 = fconvert.t(var_24_6)
                        long double x87_r7_78 = fconvert.t(var_6c_1)
                        long double x87_r5_27 = fconvert.t(var_28_2)
                        long double x87_r6_38 = fconvert.t(fconvert.s(x87_r7_76 - x87_r5_25))
                        long double x87_r7_81 = fconvert.t(ecx_28[-1]) * x87_r6_38
                        long double x87_r4_30 = fconvert.t(fconvert.s(x87_r7_78 + x87_r5_27))
                        long double x87_r5_31 = fconvert.t(*ecx_28) * x87_r4_30
                        ecx_28 = &ecx_28[2]
                        var_44_1[-1] = fconvert.s(x87_r7_81 - x87_r5_31)
                        *var_44_1 = fconvert.s(x87_r4_30 * fconvert.t(ecx_28[-3])
                            + x87_r6_38 * fconvert.t(ecx_28[-2]))
                        long double x87_r6_40 = fconvert.t(fconvert.s(x87_r7_72 - x87_r5_21))
                        void* esi_49 = var_5c_1 + 8
                        j = j_1
                        j_1 -= 1
                        long double x87_r7_86 = fconvert.t(*(var_50_1 + var_5c_1)) * x87_r6_40
                        var_5c_1 = esi_49
                        long double x87_r5_35 = fconvert.t(fconvert.s(x87_r5_23 - x87_r7_74))
                        var_1c_6[-1] =
                            fconvert.s(x87_r7_86 - x87_r5_35 * fconvert.t(*(esi_34 + ecx_28 - 8)))
                        *var_1c_6 = fconvert.s(x87_r5_35 * fconvert.t(*(var_50_1 + esi_49 - 8))
                            + x87_r6_40 * fconvert.t(*(esi_34 + ecx_28 - 8)))
                        long double x87_r6_42 = fconvert.t(fconvert.s(x87_r7_76 + x87_r5_25))
                        long double x87_r4_34 = fconvert.t(fconvert.s(x87_r5_27 - x87_r7_78))
                        var_18_6[-1] = fconvert.s(fconvert.t(*(esi_49 - 8)) * x87_r6_42
                            - fconvert.t(*(esi_36 + ecx_28 - 8)) * x87_r4_34)
                        *var_18_6 = fconvert.s(x87_r4_34 * fconvert.t(*(esi_49 - 8))
                            + x87_r6_42 * fconvert.t(*(esi_36 + ecx_28 - 8)))
                    while (j != 1)
                    esi = arg3
                
                var_14_6 += edi_5
                var_10_4 += esi
                var_48_2 += edi_8
                i_4 = i_5
                i_5 -= 1
            while (i_4 != 1)
            ebx_76 = ebx_1
        
        void* ecx_32 = esi & 0x80000001
        
        if (ecx_32 s< 0)
            ecx_32 = ((ecx_32 - 1) | 0xfffffffe) + 1
        
        if (ecx_32 != 1)
            goto label_654c7d
}
