// 函数名称: sub_652050
// 虚拟地址: 0x652050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_652050(float* arg1, float* arg2, int32_t arg3, int32_t arg4, void* arg5, int32_t arg6, void* arg7)
{
    // 第一条实际指令: int32_t ebx = arg4
    int32_t ebx = arg4
    int32_t edi_1 = arg3 * arg4
    int32_t var_8 = edi_1 * 2
    int32_t var_c = edi_1 * 3
    int32_t esi_2 = 0
    int32_t var_30 = edi_1
    int32_t var_14 = edi_1
    int32_t var_28 = 0
    
    if (ebx s>= 4)
        int32_t i_7 = ((ebx - 4) u>> 2) + 1
        var_28 = (((ebx - 4) u>> 2) + 1) * 4
        int32_t i
        
        do
            int32_t edi_4 = esi_2 << 2
            long double x87_r7_5 =
                fconvert.t(fconvert.s(fconvert.t(arg1[var_8]) + fconvert.t(arg1[esi_2])))
            long double x87_r5_1 =
                fconvert.t(fconvert.s(fconvert.t(arg1[edi_1]) + fconvert.t(arg1[var_c])))
            arg2[edi_4] = fconvert.s(x87_r7_5 + x87_r5_1)
            int32_t edi_5 = edi_4 + (arg3 << 1)
            arg2[edi_4 + (arg3 << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_5 - x87_r5_1)))
            int32_t esi_3 = esi_2 + arg3
            int32_t var_c_1 = var_c + arg3
            arg2[edi_5 - 1] = fconvert.s(fconvert.t(arg1[esi_2]) - fconvert.t(arg1[var_8]))
            int32_t ebx_10 = var_14 + arg3
            arg2[edi_5] = fconvert.s(fconvert.t(arg1[var_c]) - fconvert.t(arg1[var_14]))
            int32_t edi_7 = var_8 + arg3
            int32_t ebx_12 = esi_3 << 2
            long double x87_r7_16 =
                fconvert.t(fconvert.s(fconvert.t(arg1[edi_7]) + fconvert.t(arg1[esi_3])))
            long double x87_r5_3 =
                fconvert.t(fconvert.s(fconvert.t(arg1[ebx_10]) + fconvert.t(arg1[var_c_1])))
            arg2[ebx_12] = fconvert.s(x87_r7_16 + x87_r5_3)
            int32_t ebx_13 = ebx_12 + (arg3 << 1)
            arg2[ebx_12 + (arg3 << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_16 - x87_r5_3)))
            int32_t edi_9 = arg3 * 2
            int32_t esi_4 = esi_3 + arg3
            arg2[ebx_13 - 1] = fconvert.s(fconvert.t(arg1[esi_3]) - fconvert.t(arg1[edi_7]))
            int32_t var_14_2 = ebx_10 + arg3
            int32_t var_c_2 = var_c_1 + arg3
            int32_t var_8_2 = edi_7 + arg3
            arg2[ebx_13] = fconvert.s(fconvert.t(arg1[var_c_1]) - fconvert.t(arg1[ebx_10]))
            int32_t ebx_22 = esi_4 << 2
            int32_t var_20_3 = ebx_22 + edi_9
            long double x87_r7_27 =
                fconvert.t(fconvert.s(fconvert.t(arg1[var_8_2]) + fconvert.t(arg1[esi_4])))
            long double x87_r5_5 =
                fconvert.t(fconvert.s(fconvert.t(arg1[var_14_2]) + fconvert.t(arg1[var_c_2])))
            arg2[ebx_22] = fconvert.s(x87_r7_27 + x87_r5_5)
            arg2[ebx_22 + (arg3 << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_27 - x87_r5_5)))
            int32_t var_8_3 = var_8_2 + arg3
            int32_t esi_5 = esi_4 + arg3
            arg2[var_20_3 - 1] = fconvert.s(fconvert.t(arg1[esi_4]) - fconvert.t(arg1[var_8_2]))
            int32_t var_14_3 = var_14_2 + arg3
            int32_t var_c_3 = var_c_2 + arg3
            arg2[var_20_3] = fconvert.s(fconvert.t(arg1[var_c_2]) - fconvert.t(arg1[var_14_2]))
            int32_t ebx_32 = esi_5 << 2
            long double x87_r7_38 =
                fconvert.t(fconvert.s(fconvert.t(arg1[var_8_3]) + fconvert.t(arg1[esi_5])))
            long double x87_r5_7 =
                fconvert.t(fconvert.s(fconvert.t(arg1[var_14_3]) + fconvert.t(arg1[var_c_3])))
            arg2[ebx_32] = fconvert.s(x87_r7_38 + x87_r5_7)
            arg2[ebx_32 + (arg3 << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_38 - x87_r5_7)))
            int32_t ebx_35 = ebx_32 + edi_9
            var_c = var_c_3 + arg3
            var_8 = var_8_3 + arg3
            arg2[ebx_35 - 1] = fconvert.s(fconvert.t(arg1[esi_5]) - fconvert.t(arg1[var_8_3]))
            esi_2 = esi_5 + arg3
            edi_1 = var_14_3 + arg3
            i = i_7
            i_7 -= 1
            var_14 = edi_1
            arg2[ebx_35] = fconvert.s(fconvert.t(arg1[var_c_3]) - fconvert.t(arg1[var_14_3]))
        while (i != 1)
        ebx = arg4
    
    if (var_28 s< ebx)
        float* var_20_5 = &arg1[var_14]
        float* var_24_1 = &arg1[var_c]
        float* var_2c_1 = &arg1[var_8]
        int32_t i_8 = ebx - var_28
        int32_t i_1
        
        do
            int32_t edi_24 = esi_2 << 2
            long double x87_r7_49 =
                fconvert.t(fconvert.s(fconvert.t(*var_2c_1) + fconvert.t(arg1[esi_2])))
            long double x87_r5_9 = fconvert.t(fconvert.s(fconvert.t(*var_20_5) + fconvert.t(*var_24_1)))
            arg2[edi_24] = fconvert.s(x87_r7_49 + x87_r5_9)
            int32_t edi_25 = edi_24 + (arg3 << 1)
            arg2[edi_24 + (arg3 << 2) - 1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_49 - x87_r5_9)))
            long double x87_r7_52 = fconvert.t(arg1[esi_2])
            esi_2 += arg3
            arg2[edi_25 - 1] = fconvert.s(x87_r7_52 - fconvert.t(*var_2c_1))
            arg2[edi_25] = fconvert.s(fconvert.t(*var_24_1) - fconvert.t(*var_20_5))
            var_2c_1 = &var_2c_1[arg3]
            var_24_1 = &var_24_1[arg3]
            var_20_5 = &var_20_5[arg3]
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
        ebx = arg4
    
    if (arg3 s< 2)
        return 
    
    if (arg3 != 2)
        int32_t edi_27 = 0
        int32_t var_14_4 = 0
        
        if (ebx s> 0)
            void* var_3c_1 = &arg1[var_30]
            float* var_38_1 = arg2
            void* var_40_1 = &arg1[var_30 * 3]
            int32_t i_5 = arg4
            int32_t i_2
            
            do
                int32_t esi_12 = arg3 * 2 + (edi_27 << 2)
                
                if (arg3 s> 2)
                    float* var_c_4 = &arg2[esi_12]
                    float* var_24_2 = &arg1[edi_27]
                    int32_t ebx_44 = arg3 * 2
                    float* var_8_4 = &arg2[ebx_44 + (edi_27 << 2)]
                    float* var_2c_2 = &arg1[edi_27 + (var_30 << 1)]
                    float* var_28_1 = var_40_1
                    void* edi_32 = arg6 - arg5
                    void* edi_34 = arg7 - arg5
                    void* var_34_1 = &arg2[esi_12 + ebx_44]
                    void* edi_36 = arg6 - arg7
                    float* var_20_6 = var_38_1
                    void* var_58_1 = arg7
                    void* var_44_1 = var_3c_1
                    void* esi_19 = arg5 + 4
                    int32_t j_1 = ((arg3 - 3) u>> 1) + 1
                    int32_t j
                    
                    do
                        long double x87_r7_57 = fconvert.t(*(esi_19 - 4)) * fconvert.t(*(var_44_1 + 4))
                        var_2c_2 = &var_2c_2[2]
                        void* edi_42 = var_44_1 + 8
                        long double x87_r6_17 = fconvert.t(*(var_44_1 + 8)) * fconvert.t(*esi_19)
                        var_44_1 = edi_42
                        var_28_1 = &var_28_1[2]
                        var_24_2 = &var_24_2[2]
                        var_20_6 = &var_20_6[2]
                        var_8_4 = &var_8_4[2]
                        var_c_4 -= 8
                        var_34_1 -= 8
                        float* edi_44 = var_58_1
                        float var_68_1 = fconvert.s(
                            fconvert.t(var_2c_2[-1]) * fconvert.t(*(edi_44 + edi_36))
                            + fconvert.t(*(esi_19 + edi_32)) * fconvert.t(*var_2c_2))
                        long double x87_r7_74 = fconvert.t(fconvert.s(
                            fconvert.t(*var_28_1) * fconvert.t(*(esi_19 + edi_34))
                            + fconvert.t(var_28_1[-1]) * fconvert.t(*edi_44)))
                        long double x87_r5_11 = fconvert.t(fconvert.s(x87_r7_57 + x87_r6_17))
                        float var_58_3 = fconvert.s(x87_r7_74 - x87_r5_11)
                        long double x87_r7_76 = fconvert.t(fconvert.s(
                            fconvert.t(*var_28_1) * fconvert.t(*edi_44)
                            - fconvert.t(var_28_1[-1]) * fconvert.t(*(esi_19 + edi_34))))
                        long double x87_r5_13 = fconvert.t(fconvert.s(
                            fconvert.t(*edi_42) * fconvert.t(*(esi_19 - 4))
                            - fconvert.t(*(edi_42 - 4)) * fconvert.t(*esi_19)))
                        long double x87_r6_34 = fconvert.t(fconvert.s(
                            fconvert.t(*var_2c_2) * fconvert.t(*(edi_44 + edi_36))
                            - fconvert.t(*(esi_19 + edi_32)) * fconvert.t(var_2c_2[-1])))
                        float var_64_2 = fconvert.s(fconvert.t(*var_24_2) + x87_r6_34)
                        esi_19 += 8
                        j = j_1
                        j_1 -= 1
                        float var_54_2 = fconvert.s(fconvert.t(*var_24_2) - x87_r6_34)
                        long double x87_r6_36 = fconvert.t(var_68_1)
                        float var_68_2 = fconvert.s(fconvert.t(var_24_2[-1]) - x87_r6_36)
                        long double x87_r7_86 =
                            fconvert.t(fconvert.s(fconvert.t(var_24_2[-1]) + x87_r6_36))
                        long double x87_r5_17 = fconvert.t(fconvert.s(x87_r7_74 + x87_r5_11))
                        var_20_6[-1] = fconvert.s(x87_r7_86 + x87_r5_17)
                        long double x87_r5_19 = fconvert.t(var_64_2)
                        long double x87_r3_1 = fconvert.t(fconvert.s(x87_r7_76 + x87_r5_13))
                        *var_20_6 = fconvert.s(x87_r5_19 + x87_r3_1)
                        long double x87_r3_3 = fconvert.t(var_68_2)
                        long double x87_r1_1 = fconvert.t(fconvert.s(x87_r5_13 - x87_r7_76))
                        var_c_4[-1] = fconvert.s(x87_r3_3 - x87_r1_1)
                        *var_c_4 = fconvert.s(fconvert.t(var_58_3) - fconvert.t(var_54_2))
                        var_8_4[-1] = fconvert.s(x87_r3_3 + x87_r1_1)
                        var_58_1 = &edi_44[2]
                        *var_8_4 = fconvert.s(fconvert.t(var_54_2) + fconvert.t(var_58_3))
                        *(var_34_1 - 4) = fconvert.s(x87_r7_86 - x87_r5_17)
                        *var_34_1 = fconvert.s(x87_r3_1 - x87_r5_19)
                    while (j != 1)
                    edi_27 = var_14_4
                
                var_38_1 = &var_38_1[arg3 * 4]
                int32_t esi_21 = arg3 << 2
                var_3c_1 += esi_21
                var_40_1 += esi_21
                edi_27 += arg3
                i_2 = i_5
                i_5 -= 1
                var_14_4 = edi_27
            while (i_2 != 1)
    
    if (arg3 != 2 && (arg3.b & 1) != 0)
        return 
    
    long double x87_r7_89 = fconvert.t(data_8bbd14)
    int32_t esi_22 = var_30 + arg3 - 1
    int32_t var_c_5 = esi_22 + (var_30 << 1)
    int32_t var_8_5 = arg3
    int32_t var_24_3 = arg3
    int32_t var_28_2 = 0
    
    if (arg4 s>= 4)
        void* var_14_5 = &arg2[arg3 * 3]
        long double x87_r6_45 = fconvert.t(fconvert.s(fneg(x87_r7_89)))
        int32_t edi_50 = arg3 * 0x10
        void* var_18_8 = &arg1[var_30 + esi_22]
        int32_t edi_51 = arg3 << 2
        void* var_20_7 = edi_51 + arg1 - 4
        int32_t i_6 = ((arg4 - 4) u>> 2) + 1
        var_28_2 = (((arg4 - 4) u>> 2) + 1) * 4
        int32_t i_3
        
        do
            int32_t var_c_6 = var_c_5 + arg3
            float var_1c_3 =
                fconvert.s((fconvert.t(arg1[esi_22]) + fconvert.t(arg1[var_c_5])) * x87_r6_45)
            int32_t esi_23 = esi_22 + arg3
            long double x87_r4_13 = fconvert.t(fconvert.s((fconvert.t(arg1[esi_22])
                - fconvert.t(arg1[var_c_5])) * x87_r7_89))
            arg2[var_8_5 - 1] = fconvert.s(fconvert.t(*var_20_7) + x87_r4_13)
            *(var_14_5 - 4) = fconvert.s(fconvert.t(*var_20_7) - x87_r4_13)
            long double x87_r5_31 = fconvert.t(var_1c_3)
            arg2[var_8_5] = fconvert.s(x87_r5_31 - fconvert.t(*var_18_8))
            void* var_18_9 = var_18_8 + edi_51
            int32_t var_8_6 = var_8_5 + (arg3 << 2)
            *var_14_5 = fconvert.s(x87_r5_31 + fconvert.t(*var_18_8))
            void* var_14_6 = var_14_5 + edi_50
            void* edi_55 = var_20_7 + (arg3 << 2)
            int32_t var_c_7 = var_c_6 + arg3
            float var_1c_4 =
                fconvert.s((fconvert.t(arg1[esi_23]) + fconvert.t(arg1[var_c_6])) * x87_r6_45)
            int32_t esi_24 = esi_23 + arg3
            long double x87_r4_17 = fconvert.t(fconvert.s((fconvert.t(arg1[esi_23])
                - fconvert.t(arg1[var_c_6])) * x87_r7_89))
            arg2[var_8_6 - 1] = fconvert.s(fconvert.t(*edi_55) + x87_r4_17)
            *(var_14_6 - 4) = fconvert.s(fconvert.t(*edi_55) - x87_r4_17)
            long double x87_r5_43 = fconvert.t(var_1c_4)
            arg2[var_8_6] = fconvert.s(x87_r5_43 - fconvert.t(*var_18_9))
            *var_14_6 = fconvert.s(x87_r5_43 + fconvert.t(*var_18_9))
            void* edi_58 = var_18_9 + (arg3 << 2)
            int32_t var_8_7 = var_8_6 + (arg3 << 2)
            void* var_14_7 = var_14_6 + edi_50
            void* edi_62 = edi_55 + (arg3 << 2)
            int32_t var_c_8 = var_c_7 + arg3
            float var_1c_5 =
                fconvert.s((fconvert.t(arg1[esi_24]) + fconvert.t(arg1[var_c_7])) * x87_r6_45)
            int32_t esi_25 = esi_24 + arg3
            long double x87_r4_21 = fconvert.t(fconvert.s((fconvert.t(arg1[esi_24])
                - fconvert.t(arg1[var_c_7])) * x87_r7_89))
            arg2[var_8_7 - 1] = fconvert.s(fconvert.t(*edi_62) + x87_r4_21)
            *(var_14_7 - 4) = fconvert.s(fconvert.t(*edi_62) - x87_r4_21)
            long double x87_r5_55 = fconvert.t(var_1c_5)
            arg2[var_8_7] = fconvert.s(x87_r5_55 - fconvert.t(*edi_58))
            *var_14_7 = fconvert.s(x87_r5_55 + fconvert.t(*edi_58))
            int32_t var_8_8 = var_8_7 + (arg3 << 2)
            void* var_14_8 = var_14_7 + edi_50
            void* edi_69 = edi_62 + (arg3 << 2)
            var_c_5 = var_c_8 + arg3
            float var_1c_6 =
                fconvert.s((fconvert.t(arg1[esi_25]) + fconvert.t(arg1[var_c_8])) * x87_r6_45)
            esi_22 = esi_25 + arg3
            long double x87_r4_25 = fconvert.t(fconvert.s((fconvert.t(arg1[esi_25])
                - fconvert.t(arg1[var_c_8])) * x87_r7_89))
            arg2[var_8_8 - 1] = fconvert.s(fconvert.t(*edi_69) + x87_r4_25)
            *(var_14_8 - 4) = fconvert.s(fconvert.t(*edi_69) - x87_r4_25)
            float* edi_71 = edi_58 + (arg3 << 2)
            long double x87_r5_67 = fconvert.t(var_1c_6)
            arg2[var_8_8] = fconvert.s(x87_r5_67 - fconvert.t(*edi_71))
            *var_14_8 = fconvert.s(x87_r5_67 + fconvert.t(*edi_71))
            var_18_8 = &edi_71[arg3]
            var_8_5 = var_8_8 + (arg3 << 2)
            var_14_5 = var_14_8 + edi_50
            var_24_3 += arg3 * 4
            edi_51 = arg3 << 2
            var_20_7 = edi_69 + edi_51
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)
        x87_r7_89 = x87_r6_45
    
    if (var_28_2 s>= arg4)
        return 
    
    void* var_60_6 = &arg2[var_8_5]
    float* var_20_11 = &arg1[esi_22]
    void* edx = &arg2[var_8_5 + (arg3 << 1)]
    float* esi_27 = &arg1[esi_22 + var_30]
    float* ecx_2 = &arg1[var_c_5]
    arg1 = &arg1[var_24_3 - 1]
    void* var_5c_1 = edx
    arg4 -= var_28_2
    int32_t i_4
    
    do
        float* ebx_107 = var_20_11
        var_20_11 = &var_20_11[arg3]
        float var_1c_7 = fconvert.s((fconvert.t(*ecx_2) + fconvert.t(*ebx_107))
            * fconvert.t(fconvert.s(fneg(x87_r7_89))))
        float* ebx_108 = var_60_6
        long double x87_r5_73 = fconvert.t(*ebx_107) - fconvert.t(*ecx_2)
        ecx_2 = &ecx_2[arg3]
        long double x87_r4_29 = fconvert.t(fconvert.s(x87_r5_73 * x87_r7_89))
        ebx_108[-1] = fconvert.s(fconvert.t(*arg1) + x87_r4_29)
        long double x87_r5_78 = fconvert.t(*arg1) - x87_r4_29
        arg1 = &arg1[arg3]
        *(edx - 4) = fconvert.s(x87_r5_78)
        long double x87_r5_79 = fconvert.t(var_1c_7)
        *ebx_108 = fconvert.s(x87_r5_79 - fconvert.t(*esi_27))
        long double x87_r5_80 = x87_r5_79 + fconvert.t(*esi_27)
        esi_27 = &esi_27[arg3]
        var_60_6 = &ebx_108[arg3 << 2]
        *edx = fconvert.s(x87_r5_80)
        edx = var_5c_1 + arg3 * 0x10
        i_4 = arg4
        arg4 -= 1
        var_5c_1 = edx
    while (i_4 != 1)
}
