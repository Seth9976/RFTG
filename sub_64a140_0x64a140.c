// 函数名称: sub_64a140
// 虚拟地址: 0x64a140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64a140(int32_t arg1, float arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 4)
    int32_t eax = *(arg1 + 4)
    int32_t* ecx = *(eax + 0x1c)
    int32_t* eax_1 = *(arg1 + 0x68)
    float* eax_2 = eax_1[0xf]
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(ecx[*(arg1 + 0x28)])
    int32_t* edi = arg2
    int32_t* ebx = edi[0x1a]
    int32_t eax_7 = *(arg1 + 0x30) - ((eax_4 - edx_1) s>> 1)
    
    if (*(arg1 + 0x1c) != 0 && *(arg1 + 0x20) != 0xffffffff)
        int32_t eax_9 = sub_657f50(arg1)
        int32_t* ecx_3
        
        if (eax_9 != 0xffffffff)
            ecx_3 = ecx
            
            if (*ecx_3 != ecx_3[1])
                *(arg1 + 0x2c) = eax_9
            else
                *(arg1 + 0x2c) = 0
            
            goto label_64a1d0
        
        if (*(arg1 + 0x20) != 0)
            ecx_3 = ecx
            *(arg1 + 0x2c) = 0
        label_64a1d0:
            float edx_3 = ecx_3[*(arg1 + 0x2c)]
            int32_t eax_13
            int32_t edx_4
            edx_4:eax_13 = sx.q(ecx_3[*(arg1 + 0x28)])
            int32_t eax_15
            int32_t edx_6
            edx_6:eax_15 = sx.q(edx_3)
            int32_t ecx_7 =
                (((edx_4 & 3) + eax_13) s>> 2) + ((eax_15 + (edx_6 & 3)) s>> 2) + *(arg1 + 0x30)
            int32_t eax_19
            int32_t edx_8
            edx_8:eax_19 = sx.q(edx_3)
            
            if (*(arg1 + 0x14) s>= ((eax_19 - edx_8) s>> 1) + ecx_7)
                sub_649b40(edi)
                edi[6] = *(arg1 + 0x24)
                edi[7] = *(arg1 + 0x28)
                edi[8] = *(arg1 + 0x2c)
                
                if (*(arg1 + 0x28) == 0)
                    int32_t eax_24 = sub_658150(arg1)
                    int32_t eax_25 = neg.d(eax_24)
                    ebx[2] = sbb.d(eax_25, eax_25, eax_24 != 0) + 1
                else if (*(arg1 + 0x24) == 0 || *(arg1 + 0x2c) == 0)
                    ebx[2] = 0
                else
                    ebx[2] = 1
                
                edi[0x10] = arg1
                edi[0xe] = *(arg1 + 0x40)
                edi[0xf] = *(arg1 + 0x44)
                int32_t temp1 = *(arg1 + 0x40)
                *(arg1 + 0x40) += 1
                int32_t eax_28 = *(arg1 + 0x38)
                *(arg1 + 0x44) = adc.d(*(arg1 + 0x44), 0, temp1 u>= 0xffffffff)
                edi[0xc] = eax_28
                edi[0xd] = *(arg1 + 0x3c)
                edi[9] = ecx[*(arg1 + 0x28)]
                long double x87_r7 = fconvert.t(ebx[1])
                long double x87_r6 = fconvert.t(*eax_2)
                x87_r6 - x87_r7
                int32_t* eax_29
                eax_29.w = (x87_r6 < x87_r7 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
                    | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
                bool p = unimplemented  {test ah, 0x5}
                
                if (not(p))
                    *eax_2 = fconvert.s(fconvert.t(ebx[1]))
                
                float* var_30 = eax_2
                long double x87_r7_4 =
                    fconvert.t(fconvert.s(sub_64eea0(fconvert.s(fconvert.t(*eax_2)), arg1)))
                *eax_2 = fconvert.s(x87_r7_4)
                ebx[1] = fconvert.s(x87_r7_4)
                *edi = sub_649ad0(edi, *(eax + 4) * 4)
                *ebx = sub_649ad0(edi, *(eax + 4) * 4)
                int32_t i = 0
                
                if (*(eax + 4) s> 0)
                    do
                        *(*ebx + (i << 2)) = sub_649ad0(edi, (edi[9] + eax_7) * 4)
                        sub_5ab990(*(*ebx + (i << 2)), *(*(arg1 + 8) + (i << 2)), (edi[9] + eax_7) * 4)
                        *(*edi + (i << 2)) = *(*ebx + (i << 2)) + eax_7 * 4
                        i += 1
                    while (i s< *(eax + 4))
                
                int32_t eax_47 = *(arg1 + 0x20)
                
                if (eax_47 != 0 && *(arg1 + 0x30) s>= eax_47)
                    *(arg1 + 0x20) = 0xffffffff
                    edi[0xb] = 1
                    return 1
                
                int32_t eax_49
                int32_t edx_24
                edx_24:eax_49 = sx.q(ecx[1])
                float eax_51 = (eax_49 - edx_24) s>> 1
                int32_t edi_2 = ecx_7 i- eax_51
                
                if (edi_2 s> 0)
                    sub_658210(*eax_1, edi_2)
                    *(arg1 + 0x14) -= edi_2
                    int32_t i_1 = 0
                    
                    if (*(eax + 4) s> 0)
                        do
                            int128_t* eax_54 = *(*(arg1 + 8) + (i_1 << 2))
                            sub_5a6c10(eax_54, eax_54 + (edi_2 << 2), *(arg1 + 0x14) * 4)
                            i_1 += 1
                        while (i_1 s< *(eax + 4))
                    
                    int32_t eax_56 = *(arg1 + 0x20)
                    int32_t edx_27 = *(arg1 + 0x2c)
                    *(arg1 + 0x24) = *(arg1 + 0x28)
                    *(arg1 + 0x28) = edx_27
                    *(arg1 + 0x30) = eax_51
                    
                    if (eax_56 != 0)
                        int32_t eax_57 = eax_56 - edi_2
                        *(arg1 + 0x20) = eax_57
                        
                        if (eax_57 s<= 0)
                            *(arg1 + 0x20) = 0xffffffff
                        
                        int32_t eax_58 = *(arg1 + 0x20)
                        
                        if (eax_51 s>= eax_58)
                            int32_t eax_61
                            int32_t edx_28
                            edx_28:eax_61 = sx.q(eax_58 i- eax_51 + edi_2)
                            int32_t temp3 = *(arg1 + 0x38)
                            *(arg1 + 0x38) += eax_61
                            *(arg1 + 0x3c) = adc.d(*(arg1 + 0x3c), edx_28, temp3 + eax_61 u< temp3)
                            return 1
                    
                    int32_t eax_64
                    int32_t edx_29
                    edx_29:eax_64 = sx.q(edi_2)
                    int32_t temp2_1 = *(arg1 + 0x38)
                    *(arg1 + 0x38) += eax_64
                    *(arg1 + 0x3c) = adc.d(*(arg1 + 0x3c), edx_29, temp2_1 + eax_64 u< temp2_1)
                
                return 1
    
    return 0
}
