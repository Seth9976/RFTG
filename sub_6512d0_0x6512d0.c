// 函数名称: sub_6512d0
// 虚拟地址: 0x6512d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6512d0(int32_t* arg1, float* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (ebx[2] s> 0)
        *ebx
        int32_t edi_1 = divs.dp.d(sx.q(arg4), *ebx)
        int32_t esi_1 = edi_1 << 2
        int32_t var_c_1 = edi_1
        __alloca_probe_16(esi_1)
        __alloca_probe_16(esi_1)
        int32_t __saved_edi
        int32_t* edx_3 = &__saved_edi
        int32_t* var_18_1 = &__saved_edi
        int32_t var_10_1 = 0
        
        if (edi_1 s> 0)
            int32_t* var_14_1 = &__saved_edi
            int32_t ecx_23
            
            do
                int32_t var_8_2 = ebx[0xa]
                int32_t eax_9 = sub_68af80(arg3, ebx[9])
                int32_t esi_5
                int32_t edi_3
                
                if (eax_9 s< 0)
                    edi_3 = ebx[2]
                    esi_5 = 0
                label_651391:
                    int32_t ebx_3 = var_8_2
                    int32_t i = sub_68af80(arg3, ebx_3)
                    
                    if (i s< 0)
                        do
                            if (ebx_3 s<= 1)
                                var_8_2 = ebx_3
                                
                                if (i s< 0)
                                    goto label_65148e
                                
                                goto label_6513cc
                            
                            ebx_3 -= 1
                            i = sub_68af80(arg3, ebx_3)
                        while (i s< 0)
                        
                        var_8_2 = ebx_3
                    
                label_6513cc:
                    int32_t eax_12 = rol.d(i, 0x10)
                    int32_t eax_16 = ((eax_12 u>> 8 ^ eax_12 << 8) & 0xff00ff) ^ eax_12 << 8
                    int32_t ecx_10 = ((eax_16 u>> 4 ^ eax_16 << 4) & 0xf0f0f0f) ^ eax_16 << 4
                    int32_t eax_22 = ((ecx_10 u>> 2 ^ ecx_10 << 2) & 0x33333333) ^ (ecx_10 * 4)
                    int32_t i_1 = edi_3 - esi_5
                    
                    if (i_1 s> 1)
                        do
                            int32_t edx_16 = i_1 s>> 1
                            int32_t eax_25 = edx_16 + esi_5
                            int32_t eax_27 = neg.d(sbb.d(eax_25, eax_25, 
                                (((eax_22 u>> 1 ^ (eax_22 * 2)) & 0x55555555) ^ (eax_22 * 2))
                                    u< *(arg1[5] + (eax_25 << 2))))
                            edi_3 -= neg.d(eax_27) & edx_16
                            esi_5 += (eax_27 - 1) & edx_16
                            i_1 = edi_3 - esi_5
                        while (i_1 s> 1)
                        
                        ebx_3 = var_8_2
                    
                    int32_t eax_31 = sx.d(*(arg1[7] + esi_5))
                    
                    if (eax_31 s> ebx_3)
                        sub_68b040(arg3, ebx_3)
                    label_65148e:
                        esi_5 = 0xffffffff
                    else
                        sub_68b040(arg3, eax_31)
                    
                    edi_1 = var_c_1
                else
                    int32_t ebx_1 = *(ebx[8] + (eax_9 << 2))
                    
                    if (ebx_1 s< 0)
                        esi_5 = ebx_1 s>> 0xf & 0x7fff
                        edi_3 = arg1[2] - (ebx_1 & 0x7fff)
                        goto label_651391
                    
                    sub_68b040(arg3, sx.d(*(arg1[7] + ebx_1 - 1)))
                    esi_5 = ebx_1 - 1
                *var_14_1 = esi_5
                
                if (esi_5 == 0xffffffff)
                    return 0xffffffff
                
                ebx = arg1
                ecx_23 = var_10_1 + 1
                *var_14_1 = arg1[4] + ((*arg1 * esi_5) << 2)
                var_10_1 = ecx_23
                var_14_1 = &var_14_1[1]
            while (ecx_23 s< edi_1)
            edx_3 = var_18_1
        
        int32_t i_2 = 0
        int32_t var_8_3 = 0
        
        if (*ebx s> 0)
            float* var_10_2 = arg2
            
            do
                int32_t esi_6 = 0
                
                if (edi_1 s>= 4)
                    float* eax_36 = var_10_2
                    void* edx_22 = &edx_3[2]
                    int32_t j_1 = ((edi_1 - 4) u>> 2) + 1
                    esi_6 = j_1 << 2
                    int32_t j
                    
                    do
                        int32_t ebx_8 = *(edx_22 - 4)
                        long double x87_r7_2 =
                            fconvert.t(*(*(edx_22 - 8) + (i_2 << 2))) + fconvert.t(*eax_36)
                        eax_36 = &eax_36[4]
                        edx_22 += 0x10
                        j = j_1
                        j_1 -= 1
                        eax_36[-4] = fconvert.s(x87_r7_2)
                        int32_t ebx_9 = *(edx_22 - 0x10)
                        eax_36[-3] =
                            fconvert.s(fconvert.t(*(ebx_8 + (i_2 << 2))) + fconvert.t(eax_36[-3]))
                        int32_t ebx_10 = *(edx_22 - 0xc)
                        eax_36[-2] =
                            fconvert.s(fconvert.t(*(ebx_9 + (i_2 << 2))) + fconvert.t(eax_36[-2]))
                        eax_36[-1] =
                            fconvert.s(fconvert.t(*(ebx_10 + (i_2 << 2))) + fconvert.t(eax_36[-1]))
                    while (j != 1)
                    edi_1 = var_c_1
                    ebx = arg1
                    edx_3 = var_18_1
                
                if (esi_6 s< edi_1)
                    void* eax_39 = &arg2[var_8_3 + esi_6]
                    
                    do
                        long double x87_r7_9 = fconvert.t(*(edx_3[esi_6] + (i_2 << 2)))
                        esi_6 += 1
                        long double x87_r7_10 = x87_r7_9 + fconvert.t(*eax_39)
                        eax_39 += 4
                        *(eax_39 - 4) = fconvert.s(x87_r7_10)
                    while (esi_6 s< edi_1)
                    
                    ebx = arg1
                
                var_8_3 += edi_1
                var_10_2 = &var_10_2[edi_1]
                i_2 += 1
            while (i_2 s< *ebx)
    
    return 0
}
