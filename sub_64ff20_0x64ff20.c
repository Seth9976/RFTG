// 函数名称: sub_64ff20
// 虚拟地址: 0x64ff20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64ff20(int32_t arg1 @ esi, int32_t* arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* edi = arg2
    int32_t* edi = arg2
    int32_t eax = edi[3]
    
    if (eax != 1 && eax != 2)
        return 0
    
    int32_t ecx = edi[4]
    long double x87_r7 = float.t(ecx & 0x1fffff)
    
    if (ecx s< 0)
        x87_r7 = fneg(x87_r7)
    
    int32_t edx
    long double st0 = sub_5ab269((ecx s>> 0x15 & 0x3ff) - 0x314, edx, ecx, fconvert.d(x87_r7), 
        (ecx s>> 0x15 & 0x3ff) - 0x314)
    int32_t ecx_1 = edi[5]
    float var_10 = fconvert.s(st0)
    int32_t edx_2 = ecx_1 & 0x1fffff
    long double x87_r7_2 = float.t(edx_2)
    
    if (ecx_1 s< 0)
        x87_r7_2 = fneg(x87_r7_2)
    
    double var_38
    var_38:4.d = arg1
    var_38.d = (ecx_1 s>> 0x15 & 0x3ff) - 0x314
    int32_t ecx_2
    int32_t edx_3
    long double st0_1
    st0_1, ecx_2, edx_3 =
        sub_5ab269((ecx_1 s>> 0x15 & 0x3ff) - 0x314, edx_2, ecx_1, fconvert.d(x87_r7_2), var_38.d)
    int32_t ebx = *edi
    float var_8 = fconvert.s(st0_1)
    int32_t eax_13 = ebx * arg3
    int32_t result = _calloc(eax_13, edx_3, ecx_2, eax_13, 4)
    int32_t eax_15 = edi[3]
    int32_t result_1 = result
    
    if (eax_15 == 1)
        var_38.d = edi
        long double x87_r0
        int32_t eax_19 = sub_64fea0(x87_r0, var_38.d)
        int32_t ecx_23 = arg2[1]
        int32_t eax_20 = 0
        int32_t var_14_2 = 0
        int32_t var_28_2 = ecx_23
        
        if (ecx_23 s> 0)
            long double x87_r0_3 = fconvert.t(var_10)
            long double x87_r7_6 = fconvert.t(var_8)
            int32_t var_20_2 = 0
            int32_t* var_1c_2 = arg4
            
            do
                if (arg4 == 0 || *(arg2[2] + (eax_20 << 2)) != 0)
                    int32_t i = 0
                    float var_10_6 = fconvert.s(float.t(0))
                    int32_t ecx_24 = 1
                    
                    if (ebx s>= 4)
                        int32_t edx_18 = arg2[8]
                        int32_t eax_22 = arg2[7]
                        
                        do
                            long double x87_r5_7 = fconvert.t(fconvert.s(fabs(float.t(*(edx_18
                                + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_14_2), ecx_24)), eax_19) << 2))))
                                * x87_r7_6 + x87_r0_3 + fconvert.t(var_10_6)))
                            
                            if (eax_22 != 0)
                                var_10_6 = fconvert.s(x87_r5_7)
                            
                            int32_t eax_29
                            
                            if (arg4 == 0)
                                eax_29 = var_20_2
                            else
                                eax_29 = *var_1c_2 * ebx
                            
                            int32_t ecx_25 = ecx_24 * eax_19
                            *(result_1 + ((eax_29 + i) << 2)) = fconvert.s(x87_r5_7)
                            long double x87_r5_13 = fconvert.t(fconvert.s(fabs(float.t(*(edx_18
                                + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_14_2), ecx_25)), eax_19) << 2))))
                                * x87_r7_6 + x87_r0_3 + fconvert.t(var_10_6)))
                            
                            if (eax_22 != 0)
                                var_10_6 = fconvert.s(x87_r5_13)
                            
                            int32_t eax_37
                            
                            if (arg4 == 0)
                                eax_37 = var_20_2
                            else
                                eax_37 = *var_1c_2 * ebx
                            
                            int32_t ecx_26 = ecx_25 * eax_19
                            *(result_1 + ((eax_37 + i) << 2) + 4) = fconvert.s(x87_r5_13)
                            long double x87_r5_19 = fconvert.t(fconvert.s(fabs(float.t(*(edx_18
                                + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_14_2), ecx_26)), eax_19) << 2))))
                                * x87_r7_6 + x87_r0_3 + fconvert.t(var_10_6)))
                            
                            if (eax_22 != 0)
                                var_10_6 = fconvert.s(x87_r5_19)
                            
                            int32_t eax_45
                            
                            if (arg4 == 0)
                                eax_45 = var_20_2
                            else
                                eax_45 = *var_1c_2 * ebx
                            
                            int32_t ecx_27 = ecx_26 * eax_19
                            *(result_1 + ((eax_45 + i) << 2) + 8) = fconvert.s(x87_r5_19)
                            long double x87_r5_25 = fconvert.t(fconvert.s(fabs(float.t(*(edx_18
                                + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_14_2), ecx_27)), eax_19) << 2))))
                                * x87_r7_6 + x87_r0_3 + fconvert.t(var_10_6)))
                            
                            if (eax_22 != 0)
                                var_10_6 = fconvert.s(x87_r5_25)
                            
                            int32_t eax_53
                            
                            if (arg4 == 0)
                                eax_53 = var_20_2
                            else
                                eax_53 = *var_1c_2 * ebx
                            
                            ecx_24 = ecx_27 * eax_19
                            int32_t eax_54 = eax_53 + i
                            i += 4
                            *(result_1 + (eax_54 << 2) + 0xc) = fconvert.s(x87_r5_25)
                        while (i s< ebx - 3)
                    
                    if (i s< ebx)
                        int32_t edx_39 = arg2[8]
                        int32_t eax_57 = arg2[7]
                        
                        do
                            long double x87_r5_31 = fconvert.t(fconvert.s(fabs(float.t(*(edx_39
                                + (mods.dp.d(sx.q(divs.dp.d(sx.q(var_14_2), ecx_24)), eax_19) << 2))))
                                * x87_r7_6 + x87_r0_3 + fconvert.t(var_10_6)))
                            
                            if (eax_57 != 0)
                                var_10_6 = fconvert.s(x87_r5_31)
                            
                            int32_t eax_64
                            
                            if (arg4 == 0)
                                eax_64 = var_20_2
                            else
                                eax_64 = *var_1c_2 * ebx
                            
                            ecx_24 *= eax_19
                            int32_t eax_65 = eax_64 + i
                            i += 1
                            *(result_1 + (eax_65 << 2)) = fconvert.s(x87_r5_31)
                        while (i s< ebx)
                    
                    var_1c_2 = &var_1c_2[1]
                    var_20_2 += ebx
                    ecx_23 = var_28_2
                    eax_20 = var_14_2
                    result = result_1
                
                eax_20 += 1
                var_14_2 = eax_20
            while (eax_20 s< ecx_23)
    else
        int32_t eax_17 = eax_15 - 2
        
        if (eax_15 == 2)
            int32_t ecx_3 = edi[1]
            int32_t var_14_1 = eax_17
            int32_t var_28_1 = ecx_3
            
            if (ecx_3 s> eax_17)
                long double x87_r7_4 = fconvert.t(var_10)
                long double x87_r6_1 = fconvert.t(var_8)
                int32_t var_18_1 = eax_17
                int32_t var_24_2 = eax_17
                int32_t* var_20_1 = arg4
                
                do
                    if (arg4 == 0 || *(edi[2] + (eax_17 << 2)) != 0)
                        int32_t i_1 = 0
                        float var_c = fconvert.s(float.t(0))
                        
                        if (ebx s>= 4)
                            int32_t edx_6 = edi[7]
                            int32_t ecx_4 = edi[8]
                            void* edx_8 = ecx_4 + (var_24_2 << 2) + 8
                            int32_t* var_1c_1 = ecx_4 + (var_24_2 << 2) + 4
                            
                            do
                                long double x87_r4_6 = fconvert.t(fconvert.s(
                                    fabs(float.t(*(edx_8 - 8))) * x87_r6_1 + x87_r7_4
                                    + fconvert.t(var_c)))
                                
                                if (edx_6 != 0)
                                    var_c = fconvert.s(x87_r4_6)
                                
                                int32_t ecx_7
                                
                                if (arg4 == 0)
                                    ecx_7 = var_18_1
                                else
                                    ecx_7 = *var_20_1 * ebx
                                
                                *(result + ((ecx_7 + i_1) << 2)) = fconvert.s(x87_r4_6)
                                long double x87_r4_12 = fconvert.t(fconvert.s(
                                    fabs(float.t(*var_1c_1)) * x87_r6_1 + x87_r7_4 + fconvert.t(var_c)))
                                
                                if (edx_6 != 0)
                                    var_c = fconvert.s(x87_r4_12)
                                
                                int32_t ecx_11
                                
                                if (arg4 == 0)
                                    ecx_11 = var_18_1
                                else
                                    ecx_11 = *var_20_1 * ebx
                                
                                *(result + ((ecx_11 + i_1) << 2) + 4) = fconvert.s(x87_r4_12)
                                long double x87_r4_18 = fconvert.t(fconvert.s(
                                    fabs(float.t(*edx_8)) * x87_r6_1 + x87_r7_4 + fconvert.t(var_c)))
                                
                                if (edx_6 != 0)
                                    var_c = fconvert.s(x87_r4_18)
                                
                                int32_t ecx_14
                                
                                if (arg4 == 0)
                                    ecx_14 = var_18_1
                                else
                                    ecx_14 = *var_20_1 * ebx
                                
                                *(result + ((ecx_14 + i_1) << 2) + 8) = fconvert.s(x87_r4_18)
                                long double x87_r4_24 = fconvert.t(fconvert.s(
                                    fabs(float.t(*(edx_8 + 4))) * x87_r6_1 + x87_r7_4
                                    + fconvert.t(var_c)))
                                
                                if (edx_6 != 0)
                                    var_c = fconvert.s(x87_r4_24)
                                
                                int32_t ecx_17
                                
                                if (arg4 == 0)
                                    ecx_17 = var_18_1
                                else
                                    ecx_17 = *var_20_1 * ebx
                                
                                var_1c_1 = &var_1c_1[4]
                                *(result + ((ecx_17 + i_1) << 2) + 0xc) = fconvert.s(x87_r4_24)
                                i_1 += 4
                                edx_8 += 0x10
                            while (i_1 s< ebx - 3)
                            
                            edi = arg2
                        
                        if (i_1 s< ebx)
                            int32_t* ecx_21 = edi[8] + ((var_24_2 + i_1) << 2)
                            
                            do
                                long double x87_r4_30 = fconvert.t(fconvert.s(
                                    fabs(float.t(*ecx_21)) * x87_r6_1 + x87_r7_4 + fconvert.t(var_c)))
                                
                                if (edi[7] != 0)
                                    var_c = fconvert.s(x87_r4_30)
                                
                                int32_t edx_13
                                
                                if (arg4 == 0)
                                    edx_13 = var_18_1
                                else
                                    edx_13 = *var_20_1 * ebx
                                
                                int32_t edx_14 = edx_13 + i_1
                                i_1 += 1
                                *(result + (edx_14 << 2)) = fconvert.s(x87_r4_30)
                                ecx_21 = &ecx_21[1]
                            while (i_1 s< ebx)
                        
                        var_20_1 = &var_20_1[1]
                        var_18_1 += ebx
                        ecx_3 = var_28_1
                        eax_17 = var_14_1
                    
                    var_24_2 += ebx
                    eax_17 += 1
                    var_14_1 = eax_17
                while (eax_17 s< ecx_3)
    
    return result
}
