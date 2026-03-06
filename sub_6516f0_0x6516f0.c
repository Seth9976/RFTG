// 函数名称: sub_6516f0
// 虚拟地址: 0x6516f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6516f0(int32_t* arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    
    if (ebx[2] s> 0)
        int32_t esi_1 = arg4
        int32_t edi_1 = 0
        int32_t var_8_1 = 0
        
        if (esi_1 s> 0)
            while (true)
                int32_t i = ebx[0xa]
                int32_t eax_2 = sub_68af80(arg3, ebx[9])
                int32_t eax_7
                int32_t esi_4
                int32_t edi_3
                
                if (eax_2 s< 0)
                    edi_3 = ebx[2]
                    esi_4 = 0
                label_65177f:
                    int32_t eax_9 = sub_68af80(arg3, i)
                    
                    if (eax_9 s< 0)
                        while (i s> 1)
                            int32_t i_3 = i - 1
                            i = i_3
                            eax_9 = sub_68af80(arg3, i_3)
                            
                            if (eax_9 s>= 0)
                                goto label_6517b7
                        
                        if (eax_9 s< 0)
                            return 0xffffffff
                    
                label_6517b7:
                    int32_t eax_10 = rol.d(eax_9, 0x10)
                    int32_t eax_14 = ((eax_10 u>> 8 ^ eax_10 << 8) & 0xff00ff) ^ eax_10 << 8
                    int32_t ecx_12 = ((eax_14 u>> 4 ^ eax_14 << 4) & 0xf0f0f0f) ^ eax_14 << 4
                    int32_t eax_20 = ((ecx_12 u>> 2 ^ ecx_12 << 2) & 0x33333333) ^ (ecx_12 * 4)
                    int32_t i_1 = edi_3 - esi_4
                    
                    if (i_1 s> 1)
                        do
                            int32_t edx_12 = i_1 s>> 1
                            int32_t eax_23 = edx_12 + esi_4
                            int32_t eax_25 = neg.d(sbb.d(eax_23, eax_23, 
                                (((eax_20 u>> 1 ^ (eax_20 * 2)) & 0x55555555) ^ (eax_20 * 2))
                                    u< *(ebx[5] + (eax_23 << 2))))
                            edi_3 -= neg.d(eax_25) & edx_12
                            esi_4 += (eax_25 - 1) & edx_12
                            i_1 = edi_3 - esi_4
                        while (i_1 s> 1)
                        
                        ebx = arg1
                    
                    int32_t eax_29 = sx.d(*(ebx[7] + esi_4))
                    
                    if (eax_29 s> i)
                        sub_68b040(arg3, i)
                        return 0xffffffff
                    
                    sub_68b040(arg3, eax_29)
                    edi_1 = var_8_1
                    eax_7 = esi_4
                    esi_1 = arg4
                else
                    int32_t eax_3 = *(ebx[8] + (eax_2 << 2))
                    
                    if (eax_3 s< 0)
                        esi_4 = eax_3 s>> 0xf & 0x7fff
                        edi_3 = ebx[2] - (eax_3 & 0x7fff)
                        goto label_65177f
                    
                    sub_68b040(arg3, sx.d(*(ebx[7] + eax_3 - 1)))
                    eax_7 = eax_3 - 1
                
                if (eax_7 == 0xffffffff)
                    return 0xffffffff
                
                int32_t i_2 = 0
                int32_t edx_15 = ebx[4] + ((*ebx * eax_7) << 2)
                
                if (edi_1 s>= esi_1)
                    break
                
                if (esi_1 - edi_1 s>= 4)
                    void* ecx_27 = arg2 + (edi_1 << 2) + 8
                    
                    while (true)
                        if (i_2 s< *ebx)
                            *(ecx_27 - 8) = fconvert.s(fconvert.t(*(edx_15 + (i_2 << 2))))
                            
                            if (i_2 + 1 s>= *ebx)
                                edi_1 += 1
                            else
                                *(ecx_27 - 4) = fconvert.s(fconvert.t(*(edx_15 + ((i_2 + 1) << 2))))
                                
                                if (i_2 + 2 s>= *ebx)
                                    edi_1 += 2
                                else
                                    *ecx_27 = fconvert.s(fconvert.t(*(edx_15 + ((i_2 + 2) << 2))))
                                    
                                    if (i_2 + 3 s>= *ebx)
                                        edi_1 += 3
                                    else
                                        *(ecx_27 + 4) =
                                            fconvert.s(fconvert.t(*(edx_15 + ((i_2 + 3) << 2))))
                                        edi_1 += 4
                                        i_2 += 4
                                        ecx_27 += 0x10
                                        bool cond:1_1 = edi_1 s< esi_1 - 3
                                        esi_1 = arg4
                                        
                                        if (cond:1_1)
                                            continue
                                        
                                        var_8_1 = edi_1
                                        break
                        
                        var_8_1 = edi_1
                        goto label_651915
                
                if (edi_1 s>= esi_1)
                    break
                
                float* edx_16 = edx_15 + (i_2 << 2)
                
                while (i_2 s< *ebx)
                    *(arg2 + (edi_1 << 2)) = fconvert.s(fconvert.t(*edx_16))
                    edi_1 += 1
                    i_2 += 1
                    edx_16 = &edx_16[1]
                    var_8_1 = edi_1
                    
                    if (edi_1 s>= esi_1)
                        return 0
                
            label_651915:
                
                if (edi_1 s>= esi_1)
                    return 0
    else if (arg4 s> 0)
        __builtin_memset(arg2, 0, arg4 << 2)
    
    return 0
}
