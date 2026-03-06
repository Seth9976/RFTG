// 函数名称: sub_6515a0
// 虚拟地址: 0x6515a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6515a0(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1[2] s> 0)
    if (arg1[2] s> 0)
        int32_t esi_1 = 0
        
        if (*arg1 s<= 8)
            if (arg4 s> 0)
                while (true)
                    int32_t eax_6 = sub_651170(arg1, arg3)
                    
                    if (eax_6 == 0xffffffff)
                        return 0xffffffff
                    
                    int32_t edx_4 = *arg1
                    float* ecx_5 = arg1[4] + ((edx_4 * eax_6) << 2)
                    int32_t eax_8 = 0
                    
                    if (edx_4 - 1 u<= 7)
                        switch (edx_4)
                            case 2
                                goto label_651699
                            case 3
                                goto label_65168d
                            case 4
                                goto label_651681
                            case 5
                                goto label_651675
                            case 6
                                goto label_651669
                            case 7
                                goto label_65165d
                            case 8
                                eax_8 = 1
                                long double x87_r7_4 =
                                    fconvert.t(*ecx_5) + fconvert.t(*(arg2 + (esi_1 << 2)))
                                esi_1 += 1
                                *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_4)
                            label_65165d:
                                long double x87_r7_5 = fconvert.t(ecx_5[eax_8])
                                eax_8 += 1
                                long double x87_r7_6 = x87_r7_5 + fconvert.t(*(arg2 + (esi_1 << 2)))
                                esi_1 += 1
                                *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_6)
                            label_651669:
                                long double x87_r7_7 = fconvert.t(ecx_5[eax_8])
                                eax_8 += 1
                                long double x87_r7_8 = x87_r7_7 + fconvert.t(*(arg2 + (esi_1 << 2)))
                                esi_1 += 1
                                *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_8)
                            label_651675:
                                long double x87_r7_9 = fconvert.t(ecx_5[eax_8])
                                eax_8 += 1
                                long double x87_r7_10 = x87_r7_9 + fconvert.t(*(arg2 + (esi_1 << 2)))
                                esi_1 += 1
                                *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_10)
                            label_651681:
                                long double x87_r7_11 = fconvert.t(ecx_5[eax_8])
                                eax_8 += 1
                                long double x87_r7_12 = x87_r7_11 + fconvert.t(*(arg2 + (esi_1 << 2)))
                                esi_1 += 1
                                *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_12)
                            label_65168d:
                                long double x87_r7_13 = fconvert.t(ecx_5[eax_8])
                                eax_8 += 1
                                long double x87_r7_14 = x87_r7_13 + fconvert.t(*(arg2 + (esi_1 << 2)))
                                esi_1 += 1
                                *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_14)
                            label_651699:
                                long double x87_r7_15 = fconvert.t(ecx_5[eax_8])
                                eax_8 += 1
                                long double x87_r7_16 = x87_r7_15 + fconvert.t(*(arg2 + (esi_1 << 2)))
                                esi_1 += 1
                                *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_16)
                        
                        esi_1 += 1
                        *(arg2 + (esi_1 << 2) - 4) = fconvert.s(fconvert.t(ecx_5[eax_8])
                            + fconvert.t(*(arg2 + (esi_1 << 2) - 4)))
                    
                    if (esi_1 s>= arg4)
                        return 0
        else if (arg4 s> 0)
            do
                int32_t eax_2 = sub_651170(arg1, arg3)
                
                if (eax_2 == 0xffffffff)
                    return 0xffffffff
                
                int32_t ecx_1 = *arg1
                int32_t edx_3 = arg1[4] + ((ecx_1 * eax_2) << 2)
                int32_t i = 0
                
                if (ecx_1 s> 0)
                    do
                        long double x87_r7_1 = fconvert.t(*(edx_3 + (i << 2)))
                        i += 1
                        long double x87_r7_2 = x87_r7_1 + fconvert.t(*(arg2 + (esi_1 << 2)))
                        esi_1 += 1
                        *(arg2 + (esi_1 << 2) - 4) = fconvert.s(x87_r7_2)
                    while (i s< *arg1)
            while (esi_1 s< arg4)
    
    return 0
}
