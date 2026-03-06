// 函数名称: sub_651960
// 虚拟地址: 0x651960
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_651960(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t esi = 0
    int32_t var_c = 0
    
    if (edi[2] s> 0)
        int32_t temp0_1 = divs.dp.d(sx.q(arg3), arg4)
        int32_t temp0_2 = divs.dp.d(sx.q(arg6 + arg3), arg4)
        int32_t var_10_1 = temp0_1
        
        if (temp0_1 s< temp0_2)
            do
                int32_t var_8_1 = edi[0xa]
                int32_t eax_9 = sub_68af80(arg5, edi[9])
                int32_t ebx_4
                int32_t esi_3
                int32_t edi_2
                
                if (eax_9 s< 0)
                    edi_2 = edi[2]
                    esi_3 = 0
                label_6519fc:
                    int32_t ebx_5 = var_8_1
                    int32_t i = sub_68af80(arg5, ebx_5)
                    
                    if (i s< 0)
                        do
                            if (ebx_5 s<= 1)
                                var_8_1 = ebx_5
                                
                                if (i s< 0)
                                    goto label_651b6a_1
                                
                                goto label_651a37
                            
                            ebx_5 -= 1
                            i = sub_68af80(arg5, ebx_5)
                        while (i s< 0)
                        
                        var_8_1 = ebx_5
                    
                label_651a37:
                    int32_t eax_12 = rol.d(i, 0x10)
                    int32_t eax_16 = ((eax_12 u>> 8 ^ eax_12 << 8) & 0xff00ff) ^ eax_12 << 8
                    int32_t ecx_11 = ((eax_16 u>> 4 ^ eax_16 << 4) & 0xf0f0f0f) ^ eax_16 << 4
                    int32_t eax_22 = ((ecx_11 u>> 2 ^ ecx_11 << 2) & 0x33333333) ^ (ecx_11 * 4)
                    int32_t i_1 = edi_2 - esi_3
                    
                    if (i_1 s> 1)
                        do
                            int32_t edx_16 = i_1 s>> 1
                            int32_t eax_25 = edx_16 + esi_3
                            int32_t eax_27 = neg.d(sbb.d(eax_25, eax_25, 
                                (((eax_22 u>> 1 ^ (eax_22 * 2)) & 0x55555555) ^ (eax_22 * 2))
                                    u< *(arg1[5] + (eax_25 << 2))))
                            edi_2 -= neg.d(eax_27) & edx_16
                            esi_3 += (eax_27 - 1) & edx_16
                            i_1 = edi_2 - esi_3
                        while (i_1 s> 1)
                        
                        ebx_5 = var_8_1
                    
                    int32_t eax_31 = sx.d(*(arg1[7] + esi_3))
                    
                    if (eax_31 s> ebx_5)
                        sub_68b040(arg5, ebx_5)
                    label_651b6a:
                        return 0xffffffff
                    
                    sub_68b040(arg5, eax_31)
                    edi = arg1
                    ebx_4 = esi_3
                    esi = var_c
                else
                    int32_t ebx_2 = *(edi[8] + (eax_9 << 2))
                    
                    if (ebx_2 s< 0)
                        esi_3 = ebx_2 s>> 0xf & 0x7fff
                        edi_2 = edi[2] - (ebx_2 & 0x7fff)
                        goto label_6519fc
                    
                    sub_68b040(arg5, sx.d(*(edi[7] + ebx_2 - 1)))
                    ebx_4 = ebx_2 - 1
                
                if (ebx_4 == 0xffffffff)
                label_651b6a_1:
                    return 0xffffffff
                
                int32_t eax_33 = *edi
                int32_t edx_19 = edi[4] + ((eax_33 * ebx_4) << 2)
                int32_t i_2 = 0
                
                if (eax_33 s> 0)
                    do
                        int32_t eax_35 = *(arg2 + (esi << 2))
                        esi += 1
                        var_c = esi
                        *(eax_35 + (var_10_1 << 2)) = fconvert.s(fconvert.t(*(edx_19 + (i_2 << 2)))
                            + fconvert.t(*(eax_35 + (var_10_1 << 2))))
                        
                        if (esi == arg4)
                            var_10_1 += 1
                            var_c = 0
                            esi = 0
                        
                        i_2 += 1
                    while (i_2 s< *edi)
            while (var_10_1 s< temp0_2)
    
    return 0
}
