// 函数名称: sub_64d5e0
// 虚拟地址: 0x64d5e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_64d5e0(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, float arg6)
{
    // 第一条实际指令: int32_t* ecx = arg1
    int32_t* ecx = arg1
    int32_t eax = *ecx
    int32_t ebx = 0
    int32_t var_c = 0
    
    if (eax s<= 0)
        return 
    
    long double x87_r7_2 = fconvert.t(fconvert.s(fconvert.t(*(ecx[1] + 0x1f0)) - fconvert.t(arg6)))
    long double x87_r4_1 = fconvert.t(0.10000000149011612)
    
    while (true)
        int32_t esi_1 = ecx[5]
        int32_t i = *(esi_1 + (ebx << 2))
        int32_t eax_1 = ebx << 2
        int32_t var_10_1 = eax_1
        int32_t eax_2 = ebx + 1
        long double x87_r3_2 = fconvert.t(fconvert.s(fconvert.t(*(eax_1 + arg3))))
        
        if (eax_2 s< eax)
            while (*(esi_1 + var_10_1 + 4) == i)
                int32_t ecx_2 = eax_2
                int32_t ebx_1 = ecx_2 << 2
                long double x87_r2_1 = fconvert.t(*(ebx_1 + arg3))
                var_c = ecx_2
                x87_r2_1 - x87_r3_2
                var_10_1 = ebx_1
                eax_2.w = (x87_r2_1 < x87_r3_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r2_1, x87_r3_2) ? 1 : 0) << 0xa
                    | (x87_r2_1 == x87_r3_2 ? 1 : 0) << 0xe | 0x1800
                
                if ((eax_2:1.b & 0x41) == 0)
                    x87_r4_1 = x87_r3_2
                    x87_r3_2 = fconvert.t(fconvert.s(fconvert.t(*(ebx_1 + arg3))))
                
                ebx = var_c
                eax_2 = ecx_2 + 1
                
                if (eax_2 s>= eax)
                    break
        
        long double x87_r2_3 = x87_r3_2 + fconvert.t(6.0)
        long double x87_r1_1 = fconvert.t(*(arg4 + (ebx << 2)))
        x87_r1_1 - x87_r2_3
        int32_t eax_3
        eax_3.w = (x87_r1_1 < x87_r2_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r1_1, x87_r2_3) ? 1 : 0) << 0xa
            | (x87_r1_1 == x87_r2_3 ? 1 : 0) << 0xe | 0x1800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (not(p_1))
            int32_t edx_1 = i s>> (arg1[8]).b
            
            if (edx_1 s>= 0x11)
                edx_1 = 0x10
            else if (edx_1 s< 0)
                edx_1 = 0
            
            int32_t edi_2 = *(arg2 + (edx_1 << 2))
            int32_t ecx_6 = *(esi_1 + (ebx << 2)) - arg1[7]
            int32_t edx_2 = arg1[0xa]
            float ebx_2 = arg1[9]
            int32_t eax_6 = sub_685f40((x87_r3_2 + x87_r7_2 - fconvert.t(30.0)) * x87_r4_1)
            int32_t ecx_7
            ecx_7.b = eax_6 s<= 0
            int32_t eax_7 = eax_6 & (ecx_7 - 1)
            
            if (eax_7 s>= 7)
                eax_7 = 7
            
            float* edi_3 = *(edi_2 + (eax_7 << 2))
            int32_t eax_8 = sub_685f40(fconvert.t(edi_3[1]))
            int32_t esi_2 = sub_685f40((fconvert.t(*edi_3) - fconvert.t(16.0)) * float.t(ebx_2)
                + float.t(ecx_6) - float.t(ebx_2 s>> 1))
            int32_t i_1 = sub_685f40(fconvert.t(*edi_3))
            
            if (i_1 s< eax_8)
                int32_t eax_12
                
                if (eax_8 - i_1 s>= 4)
                    void* edx_5 = &edi_3[i_1 + 4]
                    
                    do
                        if (esi_2 s> 0)
                            long double x87_r2_17 = fconvert.t(*(arg5 + (esi_2 << 2)))
                            long double x87_r1_2 =
                                fconvert.t(fconvert.s(fconvert.t(*(edx_5 - 8)) + x87_r3_2))
                            x87_r1_2 - x87_r2_17
                            eax_12.w = (x87_r1_2 < x87_r2_17 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_2, x87_r2_17) ? 1 : 0) << 0xa
                                | (x87_r1_2 == x87_r2_17 ? 1 : 0) << 0xe | 0x800
                            x87_r3_2 = x87_r1_2
                            
                            if ((eax_12:1.b & 0x41) != 0)
                                x87_r3_2 = x87_r2_17
                            else
                                *(arg5 + (esi_2 << 2)) = fconvert.s(x87_r2_17)
                        
                        int32_t esi_3 = esi_2 i+ ebx_2
                        
                        if (esi_3 s>= edx_2)
                            goto label_64d84f
                        
                        if (esi_3 s> 0)
                            long double x87_r2_20 = fconvert.t(*(arg5 + (esi_3 << 2)))
                            long double x87_r1_3 =
                                fconvert.t(fconvert.s(fconvert.t(*(edx_5 - 4)) + x87_r3_2))
                            x87_r1_3 - x87_r2_20
                            eax_12.w = (x87_r1_3 < x87_r2_20 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_3, x87_r2_20) ? 1 : 0) << 0xa
                                | (x87_r1_3 == x87_r2_20 ? 1 : 0) << 0xe | 0x800
                            x87_r3_2 = x87_r1_3
                            
                            if ((eax_12:1.b & 0x41) != 0)
                                x87_r3_2 = x87_r2_20
                            else
                                *(arg5 + (esi_3 << 2)) = fconvert.s(x87_r2_20)
                        
                        int32_t esi_4 = esi_3 i+ ebx_2
                        
                        if (esi_4 s>= edx_2)
                            goto label_64d84f
                        
                        if (esi_4 s> 0)
                            long double x87_r2_23 = fconvert.t(*(arg5 + (esi_4 << 2)))
                            long double x87_r1_4 = fconvert.t(fconvert.s(fconvert.t(*edx_5) + x87_r3_2))
                            x87_r1_4 - x87_r2_23
                            eax_12.w = (x87_r1_4 < x87_r2_23 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_4, x87_r2_23) ? 1 : 0) << 0xa
                                | (x87_r1_4 == x87_r2_23 ? 1 : 0) << 0xe | 0x800
                            x87_r3_2 = x87_r1_4
                            
                            if ((eax_12:1.b & 0x41) != 0)
                                x87_r3_2 = x87_r2_23
                            else
                                *(arg5 + (esi_4 << 2)) = fconvert.s(x87_r2_23)
                        
                        int32_t esi_5 = esi_4 i+ ebx_2
                        
                        if (esi_5 s>= edx_2)
                            goto label_64d84f
                        
                        if (esi_5 s> 0)
                            long double x87_r2_26 = fconvert.t(*(arg5 + (esi_5 << 2)))
                            long double x87_r1_5 =
                                fconvert.t(fconvert.s(fconvert.t(*(edx_5 + 4)) + x87_r3_2))
                            x87_r1_5 - x87_r2_26
                            eax_12.w = (x87_r1_5 < x87_r2_26 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r1_5, x87_r2_26) ? 1 : 0) << 0xa
                                | (x87_r1_5 == x87_r2_26 ? 1 : 0) << 0xe | 0x800
                            x87_r3_2 = x87_r1_5
                            
                            if ((eax_12:1.b & 0x41) != 0)
                                x87_r3_2 = x87_r2_26
                            else
                                *(arg5 + (esi_5 << 2)) = fconvert.s(x87_r2_26)
                        
                        esi_2 = esi_5 i+ ebx_2
                        
                        if (esi_2 s>= edx_2)
                            goto label_64d84f
                        
                        i_1 += 4
                        edx_5 += 0x10
                    while (i_1 s< eax_8 - 3)
                
                for (; i_1 s< eax_8; i_1 += 1)
                    if (esi_2 s> 0)
                        long double x87_r2_29 = fconvert.t(*(arg5 + (esi_2 << 2)))
                        long double x87_r1_6 =
                            fconvert.t(fconvert.s(fconvert.t(edi_3[i_1 + 2]) + x87_r3_2))
                        x87_r1_6 - x87_r2_29
                        eax_12.w = (x87_r1_6 < x87_r2_29 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r1_6, x87_r2_29) ? 1 : 0) << 0xa
                            | (x87_r1_6 == x87_r2_29 ? 1 : 0) << 0xe | 0x800
                        x87_r3_2 = x87_r1_6
                        
                        if ((eax_12:1.b & 0x41) != 0)
                            x87_r3_2 = x87_r2_29
                        else
                            *(arg5 + (esi_2 << 2)) = fconvert.s(x87_r2_29)
                    
                    esi_2 += ebx_2
                    
                    if (esi_2 s>= edx_2)
                        break
            
        label_64d84f:
            ebx = var_c
        
        ebx += 1
        x87_r4_1 = x87_r3_2
        var_c = ebx
        
        if (ebx s>= eax)
            break
        
        ecx = arg1
}
