// 函数名称: sub_653e90
// 虚拟地址: 0x653e90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_653e90(float* arg1, int32_t arg2, int32_t arg3, float* arg4, void* arg5)
{
    // 第一条实际指令: int32_t i_10 = arg3
    int32_t i_10 = arg3
    int32_t ecx_1 = arg2 * i_10
    int32_t ecx_2 = 0
    int32_t edi = 0
    int32_t var_c = 0
    
    if (i_10 s>= 4)
        float* esi_2 = &arg4[ecx_1]
        int32_t i_7 = ((arg3 - 4) u>> 2) + 1
        var_c = (((arg3 - 4) u>> 2) + 1) * 4
        int32_t i
        
        do
            arg4[ecx_2] = fconvert.s(fconvert.t(arg1[edi]) + fconvert.t(arg1[edi + (arg2 << 1) - 1]))
            int32_t ecx_3 = ecx_2 + arg2
            *esi_2 = fconvert.s(fconvert.t(arg1[edi]) - fconvert.t(arg1[edi + (arg2 << 1) - 1]))
            void* esi_3 = &esi_2[arg2]
            int32_t edi_3 = ecx_3 * 2
            arg4[ecx_3] =
                fconvert.s(fconvert.t(arg1[edi_3]) + fconvert.t(arg1[edi_3 + (arg2 << 1) - 1]))
            int32_t ecx_4 = ecx_3 + arg2
            *esi_3 = fconvert.s(fconvert.t(arg1[edi_3]) - fconvert.t(arg1[edi_3 + (arg2 << 1) - 1]))
            void* esi_4 = esi_3 + (arg2 << 2)
            int32_t edi_7 = ecx_4 * 2
            arg4[ecx_4] =
                fconvert.s(fconvert.t(arg1[edi_7]) + fconvert.t(arg1[edi_7 + (arg2 << 1) - 1]))
            int32_t ecx_5 = ecx_4 + arg2
            *esi_4 = fconvert.s(fconvert.t(arg1[edi_7]) - fconvert.t(arg1[edi_7 + (arg2 << 1) - 1]))
            void* esi_5 = esi_4 + (arg2 << 2)
            int32_t edi_11 = ecx_5 * 2
            arg4[ecx_5] =
                fconvert.s(fconvert.t(arg1[edi_11]) + fconvert.t(arg1[edi_11 + (arg2 << 1) - 1]))
            ecx_2 = ecx_5 + arg2
            *esi_5 = fconvert.s(fconvert.t(arg1[edi_11]) - fconvert.t(arg1[edi_11 + (arg2 << 1) - 1]))
            esi_2 = esi_5 + (arg2 << 2)
            i = i_7
            i_7 -= 1
            edi = ecx_2 * 2
        while (i != 1)
        i_10 = arg3
    
    if (var_c s< i_10)
        void* var_18_1 = &arg4[ecx_1 + ecx_2]
        int32_t i_8 = arg3 - var_c
        int32_t i_1
        
        do
            arg4[ecx_2] = fconvert.s(fconvert.t(arg1[edi]) + fconvert.t(arg1[edi + (arg2 << 1) - 1]))
            ecx_2 += arg2
            float* esi_13 = var_18_1
            *esi_13 = fconvert.s(fconvert.t(arg1[edi]) - fconvert.t(arg1[edi + (arg2 << 1) - 1]))
            i_1 = i_8
            i_8 -= 1
            var_18_1 = &esi_13[arg2]
            edi = ecx_2 * 2
        while (i_1 != 1)
        i_10 = arg3
    
    if (arg2 s< 2)
        return 
    
    int32_t ecx_10
    
    if (arg2 != 2)
        int32_t ecx_6 = 0
        int32_t var_20_1 = 0
        
        if (i_10 s> 0)
            float* var_18_2 = arg4
            float* var_14_1 = &arg4[ecx_1]
            int32_t i_5 = i_10
            int32_t i_2
            
            do
                if (arg2 s> 2)
                    float* var_c_1 = var_18_2
                    float* var_8_4 = var_14_1
                    void* edi_19 = arg5 + 4
                    float* esi_18 = &arg1[ecx_6 + (arg2 << 1)]
                    float* ecx_7 = &arg1[ecx_6]
                    int32_t j_1 = ((arg2 - 3) u>> 1) + 1
                    int32_t j
                    
                    do
                        var_c_1 = &var_c_1[2]
                        long double x87_r7_22 = fconvert.t(ecx_7[1]) + fconvert.t(esi_18[-3])
                        ecx_7 = &ecx_7[2]
                        esi_18 -= 8
                        var_c_1[-1] = fconvert.s(x87_r7_22)
                        var_8_4 = &var_8_4[2]
                        edi_19 += 8
                        j = j_1
                        j_1 -= 1
                        float var_28_1 = fconvert.s(fconvert.t(ecx_7[-1]) - fconvert.t(esi_18[-1]))
                        *var_c_1 = fconvert.s(fconvert.t(*ecx_7) - fconvert.t(*esi_18))
                        long double x87_r6_1 = fconvert.t(var_28_1)
                        long double x87_r4_1 =
                            fconvert.t(fconvert.s(fconvert.t(*esi_18) + fconvert.t(*ecx_7)))
                        var_8_4[-1] = fconvert.s(fconvert.t(*(edi_19 - 0xc)) * x87_r6_1
                            - fconvert.t(*(edi_19 - 8)) * x87_r4_1)
                        *var_8_4 = fconvert.s(x87_r4_1 * fconvert.t(*(edi_19 - 0xc))
                            + x87_r6_1 * fconvert.t(*(edi_19 - 8)))
                    while (j != 1)
                    i_10 = arg3
                
                var_14_1 = &var_14_1[arg2]
                var_18_2 = &var_18_2[arg2]
                int32_t esi_20 = var_20_1 + arg2
                i_2 = i_5
                i_5 -= 1
                var_20_1 = esi_20
                ecx_6 = esi_20 * 2
            while (i_2 != 1)
        
        ecx_10 = arg2 & 0x80000001
        
        if (ecx_10 s< 0)
            ecx_10 = ((ecx_10 - 1) | 0xfffffffe) + 1
    
    if (arg2 != 2 && ecx_10 == 1)
        return 
    
    int32_t esi_21 = arg2 - 1
    int32_t ecx_13 = esi_21
    int32_t var_c_2 = 0
    
    if (i_10 s>= 4)
        float* edi_22 = &arg4[ecx_1 + esi_21]
        int32_t i_6 = ((arg3 - 4) u>> 2) + 1
        var_c_2 = (((arg3 - 4) u>> 2) + 1) * 4
        int32_t i_3
        
        do
            long double x87_r7_34 = fconvert.t(arg1[ecx_13])
            arg4[esi_21] = fconvert.s(x87_r7_34 + x87_r7_34)
            int32_t esi_22 = esi_21 + arg2
            long double x87_r7_36 = fconvert.t(arg1[ecx_13 + 1])
            int32_t ecx_14 = ecx_13 + (arg2 << 1)
            *edi_22 = fconvert.s(fneg(x87_r7_36 + x87_r7_36))
            void* edi_23 = &edi_22[arg2]
            long double x87_r7_39 = fconvert.t(arg1[ecx_14])
            arg4[esi_22] = fconvert.s(x87_r7_39 + x87_r7_39)
            long double x87_r7_41 = fconvert.t(arg1[ecx_14 + 1])
            int32_t ecx_15 = ecx_14 + (arg2 << 1)
            int32_t esi_23 = esi_22 + arg2
            *edi_23 = fconvert.s(fneg(x87_r7_41 + x87_r7_41))
            void* edi_24 = edi_23 + (arg2 << 2)
            long double x87_r7_44 = fconvert.t(arg1[ecx_15])
            arg4[esi_23] = fconvert.s(x87_r7_44 + x87_r7_44)
            long double x87_r7_46 = fconvert.t(arg1[ecx_15 + 1])
            int32_t ecx_16 = ecx_15 + (arg2 << 1)
            int32_t esi_24 = esi_23 + arg2
            *edi_24 = fconvert.s(fneg(x87_r7_46 + x87_r7_46))
            void* edi_25 = edi_24 + (arg2 << 2)
            long double x87_r7_49 = fconvert.t(arg1[ecx_16])
            arg4[esi_24] = fconvert.s(x87_r7_49 + x87_r7_49)
            long double x87_r7_51 = fconvert.t(arg1[ecx_16 + 1])
            esi_21 = esi_24 + arg2
            ecx_13 = ecx_16 + (arg2 << 1)
            *edi_25 = fconvert.s(fneg(x87_r7_51 + x87_r7_51))
            edi_22 = edi_25 + (arg2 << 2)
            i_3 = i_6
            i_6 -= 1
        while (i_3 != 1)
        i_10 = arg3
    
    if (var_c_2 s>= i_10)
        return 
    
    arg1 = &arg1[ecx_13]
    float* ecx_18 = &arg4[esi_21]
    int32_t i_9 = i_10 - var_c_2
    float* esi_26 = &arg4[esi_21 + ecx_1]
    int32_t i_4
    
    do
        long double x87_r7_54 = fconvert.t(*arg1)
        *ecx_18 = fconvert.s(x87_r7_54 + x87_r7_54)
        ecx_18 = &ecx_18[arg2]
        long double x87_r7_56 = fconvert.t(arg1[1])
        arg1 = &arg1[arg2 * 2]
        *esi_26 = fconvert.s(fneg(x87_r7_56 + x87_r7_56))
        esi_26 = &esi_26[arg2]
        i_4 = i_9
        i_9 -= 1
    while (i_4 != 1)
}
