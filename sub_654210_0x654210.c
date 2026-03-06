// 函数名称: sub_654210
// 虚拟地址: 0x654210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_654210(float* arg1, int32_t arg2, float* arg3, int32_t arg4, void* arg5, float* arg6)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(data_8bbd1c)
    long double x87_r7 = fconvert.t(data_8bbd1c)
    long double x87_r6 = fconvert.t(data_8bbd20)
    float* i_4 = arg3
    int32_t ecx_1 = arg2 * i_4
    int32_t ecx_3 = arg2 * 2
    int32_t edx_1 = arg2 * 3
    int32_t edx_2 = 0
    int32_t esi = 0
    int32_t var_20 = 0
    
    if (i_4 s>= 4)
        float* var_8_1 = arg4 + ecx_1 * 8
        float* ebx_1 = arg4 + (ecx_1 << 2)
        int32_t var_30_1 = (&arg3[-1] u>> 2) + 1
        var_20 = ((&arg3[-1] u>> 2) + 1) * 4
        
        while (true)
            long double x87_r5_1 = fconvert.t(arg1[ecx_3 - 1])
            long double x87_r4_1 = fconvert.t(fconvert.s(x87_r5_1 + x87_r5_1))
            float var_c_2 = fconvert.s(x87_r7 * x87_r4_1 + fconvert.t(arg1[edx_2]))
            *(arg4 + (esi << 2)) = fconvert.s(x87_r4_1 + fconvert.t(arg1[edx_2]))
            long double x87_r5_8 = fconvert.t(arg1[ecx_3])
            long double x87_r5_11 = fconvert.t(var_c_2)
            long double x87_r3_3 = fconvert.t(fconvert.s((x87_r5_8 + x87_r5_8) * x87_r6))
            *ebx_1 = fconvert.s(x87_r5_11 - x87_r3_3)
            *var_8_1 = fconvert.s(x87_r5_11 + x87_r3_3)
            int32_t esi_1 = esi + arg2
            int32_t edi_14 = arg2 * 4
            void* ebx_2 = &ebx_1[arg2]
            int32_t ecx_4 = ecx_3 + edx_1
            long double x87_r5_13 = fconvert.t(arg1[ecx_4 - 1])
            int32_t edx_3 = edx_2 + edx_1
            void* var_8_2 = &var_8_1[arg2]
            long double x87_r4_6 = fconvert.t(fconvert.s(x87_r5_13 + x87_r5_13))
            float var_c_4 = fconvert.s(x87_r7 * x87_r4_6 + fconvert.t(arg1[edx_3]))
            *(arg4 + (esi_1 << 2)) = fconvert.s(x87_r4_6 + fconvert.t(arg1[edx_3]))
            long double x87_r5_20 = fconvert.t(arg1[ecx_4])
            int32_t esi_2 = esi_1 + arg2
            void* var_14_2 = ebx_2 + edi_14
            long double x87_r5_23 = fconvert.t(var_c_4)
            long double x87_r3_7 = fconvert.t(fconvert.s((x87_r5_20 + x87_r5_20) * x87_r6))
            *ebx_2 = fconvert.s(x87_r5_23 - x87_r3_7)
            void* var_8_3 = var_8_2 + edi_14
            *var_8_2 = fconvert.s(x87_r5_23 + x87_r3_7)
            int32_t ecx_5 = ecx_4 + edx_1
            long double x87_r5_25 = fconvert.t(arg1[ecx_5 - 1])
            int32_t edx_4 = edx_3 + edx_1
            long double x87_r4_11 = fconvert.t(fconvert.s(x87_r5_25 + x87_r5_25))
            float var_c_6 = fconvert.s(x87_r7 * x87_r4_11 + fconvert.t(arg1[edx_4]))
            *(arg4 + (esi_2 << 2)) = fconvert.s(x87_r4_11 + fconvert.t(arg1[edx_4]))
            long double x87_r5_32 = fconvert.t(arg1[ecx_5])
            int32_t esi_3 = esi_2 + arg2
            void* var_14_3 = var_14_2 + edi_14
            long double x87_r5_35 = fconvert.t(var_c_6)
            long double x87_r3_11 = fconvert.t(fconvert.s((x87_r5_32 + x87_r5_32) * x87_r6))
            *var_14_2 = fconvert.s(x87_r5_35 - x87_r3_11)
            void* var_8_4 = var_8_3 + edi_14
            *var_8_3 = fconvert.s(x87_r5_35 + x87_r3_11)
            int32_t ecx_6 = ecx_5 + edx_1
            long double x87_r5_37 = fconvert.t(arg1[ecx_6 - 1])
            int32_t edx_5 = edx_4 + edx_1
            long double x87_r4_16 = fconvert.t(fconvert.s(x87_r5_37 + x87_r5_37))
            float var_c_8 = fconvert.s(x87_r7 * x87_r4_16 + fconvert.t(arg1[edx_5]))
            *(arg4 + (esi_3 << 2)) = fconvert.s(x87_r4_16 + fconvert.t(arg1[edx_5]))
            long double x87_r5_44 = fconvert.t(arg1[ecx_6])
            esi = esi_3 + arg2
            long double x87_r5_47 = fconvert.t(var_c_8)
            long double x87_r3_15 = fconvert.t(fconvert.s((x87_r5_44 + x87_r5_44) * x87_r6))
            *var_14_3 = fconvert.s(x87_r5_47 - x87_r3_15)
            var_8_1 = var_8_4 + edi_14
            ecx_3 = ecx_6 + edx_1
            edx_2 = edx_5 + edx_1
            int32_t temp1_1 = var_30_1
            var_30_1 -= 1
            *var_8_4 = fconvert.s(x87_r5_47 + x87_r3_15)
            
            if (temp1_1 == 1)
                break
            
            ebx_1 = var_14_3 + edi_14
        
        i_4 = arg3
    
    int32_t edi_16 = arg2
    
    if (var_20 s< i_4)
        float* var_24_1 = &arg1[edx_2]
        void* var_30_2 = arg4 + (esi << 2)
        void* i_3 = arg3 - var_20
        float* var_14_5 = arg4 + ((esi + ecx_1) << 2)
        float* edx_10 = var_24_1
        void* ecx_7 = &arg1[ecx_3]
        float* var_8_5 = arg4 + ((ecx_1 * 2 + esi) << 2)
        void* i
        
        do
            long double x87_r5_49 = fconvert.t(*(ecx_7 - 4))
            float* ebx_20 = var_30_2
            long double x87_r4_21 = fconvert.t(fconvert.s(x87_r5_49 + x87_r5_49))
            float var_c_10 = fconvert.s(x87_r7 * x87_r4_21 + fconvert.t(*edx_10))
            *ebx_20 = fconvert.s(x87_r4_21 + fconvert.t(*edx_10))
            long double x87_r5_56 = fconvert.t(*ecx_7)
            long double x87_r5_59 = fconvert.t(var_c_10)
            long double x87_r3_19 = fconvert.t(fconvert.s((x87_r5_56 + x87_r5_56) * x87_r6))
            *var_14_5 = fconvert.s(x87_r5_59 - x87_r3_19)
            *var_8_5 = fconvert.s(x87_r5_59 + x87_r3_19)
            var_14_5 = &var_14_5[edi_16]
            var_8_5 = &var_8_5[edi_16]
            var_30_2 = &ebx_20[edi_16]
            edx_10 = &var_24_1[edx_1]
            ecx_7 += edx_1 * 4
            i = i_3
            i_3 -= 1
            var_24_1 = edx_10
        while (i != 1)
        i_4 = arg3
    
    if (edi_16 == 1 || i_4 s<= 0)
        return 
    
    int32_t var_30_3 = 0
    int32_t var_8_6 = 0
    float* var_28_1 = arg1
    arg1 = &arg1[edi_16 * 2]
    int32_t ecx_10 = edi_16 * 0xc
    int32_t var_48_1 = ecx_10
    float* var_38_1 = arg1
    float* var_2c_1 = arg4 + (ecx_1 << 3)
    float* i_2 = i_4
    float* i_1
    
    do
        if (edi_16 s> 2)
            int32_t edi_18 = var_8_6 - var_30_3
            float* esi_7 = var_28_1
            float* var_24_2 = arg4 + (edi_18 << 2)
            float* edx_18 = arg1
            float* var_20_1 = arg4 + ((edi_18 + ecx_1) << 2)
            void* edi_24 = arg6 - arg5
            arg3 = var_2c_1
            float* ecx_12 = arg1
            float* var_14_6 = arg6
            void* eax_2 = arg5 + 4
            int32_t j_1 = ((arg2 - 3) u>> 1) + 1
            int32_t j
            
            do
                var_24_2 = &var_24_2[2]
                long double x87_r5_62 = fconvert.t(edx_18[-3]) + fconvert.t(ecx_12[1])
                edx_18 -= 8
                ecx_12 = &ecx_12[2]
                esi_7 = &esi_7[2]
                var_20_1 = &var_20_1[2]
                long double x87_r4_26 = fconvert.t(fconvert.s(x87_r5_62))
                arg3 = &arg3[2]
                float var_c_12 = fconvert.s(x87_r7 * x87_r4_26 + fconvert.t(esi_7[-1]))
                var_24_2[-1] = fconvert.s(x87_r4_26 + fconvert.t(esi_7[-1]))
                long double x87_r4_28 =
                    fconvert.t(fconvert.s(fconvert.t(*ecx_12) - fconvert.t(*edx_18)))
                float var_44_1 = fconvert.s(x87_r7 * x87_r4_28 + fconvert.t(*esi_7))
                *var_24_2 = fconvert.s(x87_r4_28 + fconvert.t(*esi_7))
                long double x87_r5_81 = fconvert.t(var_c_12)
                long double x87_r3_25 =
                    fconvert.t(fconvert.s((fconvert.t(*ecx_12) + fconvert.t(*edx_18)) * x87_r6))
                long double x87_r5_83 =
                    fconvert.t(fconvert.s((fconvert.t(ecx_12[-1]) - fconvert.t(edx_18[-1])) * x87_r6))
                long double x87_r3_27 = fconvert.t(var_44_1)
                long double x87_r4_36 = fconvert.t(fconvert.s(x87_r5_81 - x87_r3_25))
                long double x87_r2_8 = fconvert.t(fconvert.s(x87_r5_83 + x87_r3_27))
                var_20_1[-1] =
                    fconvert.s(fconvert.t(*(eax_2 - 4)) * x87_r4_36 - fconvert.t(*eax_2) * x87_r2_8)
                *var_20_1 =
                    fconvert.s(x87_r2_8 * fconvert.t(*(eax_2 - 4)) + x87_r4_36 * fconvert.t(*eax_2))
                long double x87_r4_38 = fconvert.t(fconvert.s(x87_r5_81 + x87_r3_25))
                long double x87_r3_35 = fconvert.t(fconvert.s(x87_r3_27 - x87_r5_83))
                eax_2 += 8
                arg3[-1] = fconvert.s(fconvert.t(*var_14_6) * x87_r4_38
                    - x87_r3_35 * fconvert.t(*(eax_2 + edi_24 - 8)))
                long double x87_r3_37 = fconvert.t(*var_14_6)
                var_14_6 = &var_14_6[2]
                j = j_1
                j_1 -= 1
                *arg3 =
                    fconvert.s(x87_r3_35 * x87_r3_37 + x87_r4_38 * fconvert.t(*(eax_2 + edi_24 - 8)))
            while (j != 1)
            arg1 = var_38_1
            ecx_10 = var_48_1
            edi_16 = arg2
        
        var_8_6 += edx_1
        var_28_1 += ecx_10
        var_2c_1 = &var_2c_1[edi_16]
        var_30_3 += edi_16 * 2
        arg1 += ecx_10
        i_1 = i_2
        i_2 -= 1
        var_38_1 = arg1
    while (i_1 != 1)
}
