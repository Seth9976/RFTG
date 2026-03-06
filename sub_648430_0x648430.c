// 函数名称: sub_648430
// 虚拟地址: 0x648430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_648430(void* arg1, int32_t arg2, void* arg3, int32_t* arg4)
{
    // 第一条实际指令: void* ebx = *(arg1 + 0x1c)
    void* ebx = *(arg1 + 0x1c)
    void* eax_1 = sub_5a881a(0xb18)
    *(ebx + (arg2 << 2) + 0x620) = eax_1
    __builtin_memcpy(eax_1, arg4[3], 0xb18)
    
    if (*(ebx + 0x14) s<= arg2)
        *(ebx + 0x14) = arg2 + 1
    
    void* esi_1 = eax_1
    int32_t* edi_1 = arg4
    *(esi_1 + 8) = edi_1[2]
    *(ebx + (arg2 << 2) + 0x520) = *edi_1
    int32_t var_c = 0
    int32_t i_5 = 0
    
    if (*(ebx + 0xd5c) == 0)
        if (*(esi_1 + 0xc) s> 0)
            int32_t* ecx_14 = nullptr
            void* eax_9 = esi_1 + 0x18
            int32_t i
            
            do
                if (*(ecx_14 + edi_1[6]) != 0)
                    *eax_9 |= 1
                
                if (*(ecx_14 + edi_1[6] + 4) != 0)
                    *eax_9 |= 2
                
                if (*(ecx_14 + edi_1[6] + 8) != 0)
                    *eax_9 |= 4
                
                if (*(ecx_14 + edi_1[6] + 0xc) != 0)
                    *eax_9 |= 8
                
                i = i_5 + 1
                ecx_14 = &ecx_14[4]
                eax_9 += 4
                i_5 = i
            while (i s< *(esi_1 + 0xc))
        
        int32_t eax_10 = 0
        
        if (*(ebx + 0x18) s<= 0)
        label_648635:
            eax_10 = *(ebx + 0x18)
            *(ebx + 0x18) = eax_10 + 1
        else
            void* ecx_15 = ebx + 0x720
            
            while (*ecx_15 != edi_1[4])
                eax_10 += 1
                ecx_15 += 4
                
                if (eax_10 s>= *(ebx + 0x18))
                    goto label_648635
        
        *(esi_1 + 0x14) = eax_10
        *(ebx + (eax_10 << 2) + 0x720) = edi_1[4]
        int32_t i_1 = 0
        int32_t i_7 = 0
        
        if (*(esi_1 + 0xc) s> 0)
            do
                int32_t edx_18 = i_1 << 4
                void* var_18_1 = esi_1 + (var_c << 2) + 0x118
                int32_t j_3 = 4
                int32_t j
                
                do
                    int32_t* eax_12 = edi_1[6]
                    
                    if (*(eax_12 + edx_18) != 0)
                        int32_t esi_4 = *(ebx + 0x18)
                        int32_t eax_13 = 0
                        
                        if (esi_4 s> 0)
                            void* ecx_19 = ebx + 0x720
                            
                            do
                                if (*ecx_19 == *(eax_12 + edx_18))
                                    edi_1 = arg4
                                    goto label_6486b4
                                
                                eax_13 += 1
                                ecx_19 += 4
                            while (eax_13 s< esi_4)
                            
                            edi_1 = arg4
                        
                        eax_13 = esi_4
                        *(ebx + 0x18) = esi_4 + 1
                    label_6486b4:
                        var_c += 1
                        esi_1 = eax_1
                        *var_18_1 = eax_13
                        var_18_1 += 4
                        *(ebx + (eax_13 << 2) + 0x720) = *(edx_18 + edi_1[6])
                    
                    edx_18 += 4
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                i_1 = i_7 + 1
                i_7 = i_1
            while (i_1 s< *(esi_1 + 0xc))
    else
        if (*(esi_1 + 0xc) s> 0)
            int32_t* ecx_4 = nullptr
            void* eax_4 = esi_1 + 0x18
            int32_t i_2
            
            do
                if (*(ecx_4 + edi_1[7]) != 0)
                    *eax_4 |= 1
                
                if (*(ecx_4 + edi_1[7] + 4) != 0)
                    *eax_4 |= 2
                
                if (*(ecx_4 + edi_1[7] + 8) != 0)
                    *eax_4 |= 4
                
                if (*(ecx_4 + edi_1[7] + 0xc) != 0)
                    *eax_4 |= 8
                
                i_2 = i_5 + 1
                ecx_4 = &ecx_4[4]
                eax_4 += 4
                i_5 = i_2
            while (i_2 s< *(esi_1 + 0xc))
        
        int32_t eax_5 = 0
        
        if (*(ebx + 0x18) s<= 0)
        label_648512:
            eax_5 = *(ebx + 0x18)
            *(ebx + 0x18) = eax_5 + 1
        else
            void* ecx_5 = ebx + 0x720
            
            while (*ecx_5 != edi_1[5])
                eax_5 += 1
                ecx_5 += 4
                
                if (eax_5 s>= *(ebx + 0x18))
                    goto label_648512
        
        *(esi_1 + 0x14) = eax_5
        *(ebx + (eax_5 << 2) + 0x720) = edi_1[5]
        int32_t i_3 = 0
        int32_t i_6 = 0
        
        if (*(esi_1 + 0xc) s> 0)
            do
                int32_t edx_9 = i_3 << 4
                void* var_14_1 = esi_1 + (var_c << 2) + 0x118
                int32_t j_2 = 4
                int32_t j_1
                
                do
                    int32_t* eax_7 = edi_1[7]
                    
                    if (*(eax_7 + edx_9) != 0)
                        int32_t esi_2 = *(ebx + 0x18)
                        int32_t eax_8 = 0
                        
                        if (esi_2 s> 0)
                            void* ecx_9 = ebx + 0x720
                            
                            do
                                if (*ecx_9 == *(eax_7 + edx_9))
                                    edi_1 = arg4
                                    goto label_648590
                                
                                eax_8 += 1
                                ecx_9 += 4
                            while (eax_8 s< esi_2)
                            
                            edi_1 = arg4
                        
                        eax_8 = esi_2
                        *(ebx + 0x18) = esi_2 + 1
                    label_648590:
                        var_c += 1
                        esi_1 = eax_1
                        *var_14_1 = eax_8
                        var_14_1 += 4
                        *(ebx + (eax_8 << 2) + 0x720) = *(edx_9 + edi_1[7])
                    
                    edx_9 += 4
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                i_3 = i_6 + 1
                i_6 = i_3
            while (i_3 s< *(esi_1 + 0xc))
    
    long double x87_r6 = fconvert.t(1000.0)
    long double x87_r7_1 = fconvert.t(*(ebx + 0xd98)) * x87_r6
    int32_t var_c_1 = *(ebx + (arg3 << 2)) s>> 1
    long double x87_r5_1 = float.t(*(arg1 + 8)) * fconvert.t(0.5)
    x87_r5_1 - x87_r7_1
    int32_t eax_16
    eax_16.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        x87_r5_1 = x87_r7_1
    
    long double x87_r4 = float.t(var_c_1)
    *(*(ebx + (arg3 << 2) + 0x420) + 0x45c) = sub_685f40(x87_r7_1 / x87_r5_1 * x87_r4)
    int32_t edi_4 = edi_1[1]
    long double x87_r7_2
    
    if (edi_4 == 1)
        long double x87_r4_1
        
        if (*(ebx + 0xd5c) == 0)
            x87_r4_1 = float.t(*(ebx + 0xb98))
        else
            x87_r4_1 = float.t(*(ebx + 0xbb4))
        
        long double x87_r6_1 = x87_r6 * x87_r4_1
        x87_r5_1 - x87_r6_1
        int32_t eax_17
        eax_17.w = (x87_r5_1 < x87_r6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_1, x87_r6_1) ? 1 : 0) << 0xa
            | (x87_r5_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x2800
        bool p_1 = unimplemented  {test ah, 0x5}
        long double x87_r5_4
        
        if (p_1)
            x87_r5_4 = x87_r6_1
            x87_r6_1 = x87_r5_1
        else
            x87_r7_1 = x87_r5_1
            x87_r5_4 = x87_r6_1
        
        x87_r7_2 = x87_r5_4
        x87_r5_1 = x87_r6_1
        x87_r6 = x87_r7_1
    else
        x87_r7_2 = x87_r4
        
        if (edi_4 == 2)
            x87_r5_1 = x87_r7_2
            x87_r7_2 = fconvert.t(250.0)
    
    int32_t eax_24
    int32_t ecx_28
    void* ebx_1
    int32_t edi_8
    
    if (*(ebx + (arg2 << 2) + 0x520) != 2)
        ebx_1 = eax_1
        edi_8 = *(ebx_1 + 8)
        eax_24 =
            sub_685f40(x87_r7_2 / x87_r5_1 * x87_r6 / float.t(edi_8) + fconvert.t(0.90000000000000002))
        ecx_28 = var_c_1
    else
        int32_t* i_4 = nullptr
        arg4 = nullptr
        int32_t var_8 = 0
        
        if (*(ebx + 0xc) s> 0)
            arg3 = ebx + 0x220
            
            while (i_4 == 0)
                int32_t* edi_7 = *arg3
                int32_t edx_22 = 0
                
                if (*edi_7 s> 0)
                    arg4 = &edi_7[0x111]
                    
                    while (i_4 == 0)
                        if (*arg4 == arg2)
                            int32_t k_1 = *(arg1 + 4)
                            
                            if (k_1 s> 0)
                                void* eax_21 = &edi_7[1]
                                int32_t k
                                
                                do
                                    if (*eax_21 == edx_22)
                                        i_4 += 1
                                    
                                    eax_21 += 4
                                    k = k_1
                                    k_1 -= 1
                                while (k != 1)
                        
                        arg4 = &arg4[1]
                        edx_22 += 1
                        
                        if (edx_22 s>= *edi_7)
                            break
                
                arg3 += 4
                int32_t eax_23 = var_8 + 1
                var_8 = eax_23
                
                if (eax_23 s>= *(ebx + 0xc))
                    break
            
            arg4 = i_4
        
        ebx_1 = eax_1
        edi_8 = *(ebx_1 + 8)
        eax_24 = sub_685f40(x87_r7_2 / x87_r5_1 * x87_r6 * float.t(arg4) / float.t(edi_8)
            + fconvert.t(0.90000000000000002))
        ecx_28 = i_4 * var_c_1
    
    int32_t eax_25 = eax_24 * edi_8
    *(ebx_1 + 4) = eax_25
    
    if (eax_25 s> ecx_28)
        *(ebx_1 + 4) = divs.dp.d(sx.q(ecx_28), edi_8) * edi_8
    
    if (*(ebx_1 + 4) == 0)
        *(ebx_1 + 4) = edi_8
}
