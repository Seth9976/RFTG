// 函数名称: sub_659700
// 虚拟地址: 0x659700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_659700(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    void* eax = ebx[0x10]
    void* ecx = *(eax + 4)
    void* eax_1 = *(eax + 0x68)
    int32_t edx = *(ecx + 0x1c)
    int32_t edx_1 = *(edx + (ebx[7] << 2))
    ebx[9] = edx_1
    int32_t edi = *(ecx + 4)
    int32_t esi = edi << 2
    __alloca_probe_16(esi)
    int32_t __saved_edi
    int32_t* var_8 = &__saved_edi
    __alloca_probe_16(esi)
    int32_t* var_10 = &__saved_edi
    __alloca_probe_16(esi)
    arg1 = &__saved_edi
    __alloca_probe_16(esi)
    int32_t i = 0
    
    if (edi s> 0)
        int32_t* edi_1 = arg1
        int32_t* eax_7 = &__saved_edi - edi_1
        
        do
            int32_t eax_9 = arg2[arg2[i + 1] + 0x101]
            int32_t eax_11 = (*((&data_825e6c)[*(edx + (eax_9 << 2) + 0x320)] + 0x14))(ebx, 
                *(*(eax_1 + 0x30) + (eax_9 << 2)))
            int32_t ecx_9
            ecx_9.b = eax_11 != 0
            *(eax_7 + edi_1) = eax_11
            int32_t eax_12 = *ebx
            *edi_1 = ecx_9
            sub_5abfc0(*(eax_12 + (i << 2)), 0, (edx_1 * 4) u>> 1)
            i += 1
            edi_1 = &edi_1[1]
        while (i s< *(ecx + 4))
    
    int32_t* edi_8 = arg2
    int32_t i_11 = edi_8[0x121]
    
    if (i_11 s> 0)
        void* eax_13 = &edi_8[0x222]
        int32_t i_7 = i_11
        int32_t i_1
        
        do
            int32_t ecx_11 = *(eax_13 - 0x400)
            
            if (arg1[ecx_11] != 0 || arg1[*eax_13] != 0)
                int32_t ecx_13 = *eax_13
                arg1[ecx_11] = 1
                arg1[ecx_13] = 1
            
            eax_13 += 4
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
    
    int32_t i_8 = 0
    
    if (*edi_8 s> 0)
        void* var_1c_2 = &edi_8[0x111]
        int32_t i_2
        
        do
            int32_t j = 0
            int32_t esi_2 = 0
            
            if (*(ecx + 4) s> 0)
                int32_t* ecx_14 = var_10
                int32_t edx_11 = var_8 - ecx_14
                
                do
                    if (arg2[j + 1] == i_8)
                        int32_t edx_13
                        edx_13.b = arg1[j] != 0
                        esi_2 += 1
                        ecx_14 = &ecx_14[1]
                        ecx_14[-1] = edx_13
                        *(edx_11 + ecx_14 - 4) = *(*ebx + (j << 2))
                    
                    j += 1
                while (j s< *(ecx + 4))
            
            int32_t eax_14 = *var_1c_2
            (*((&data_825e74)[*(edx + (eax_14 << 2) + 0x520)] + 0x1c))(ebx, 
                *(*(eax_1 + 0x34) + (eax_14 << 2)), var_8, var_10, esi_2)
            i_2 = i_8 + 1
            i_8 = i_2
            var_1c_2 += 4
        while (i_2 s< *arg2)
        edi_8 = arg2
    
    int32_t ecx_18 = edi_8[0x121]
    int32_t ecx_19 = ecx_18 - 1
    int32_t var_c_2 = ecx_19
    
    if (ecx_18 - 1 s>= 0)
        long double x87_r7_1 = float.t(0)
        int32_t eax_18
        int32_t edx_23
        edx_23:eax_18 = sx.q(edx_1)
        int32_t edx_25 = (eax_18 - edx_23) s>> 1
        void* edi_9 = &edi_8[ecx_19 + 0x222]
        int32_t var_10_1 = edx_25
        void* var_1c_3 = edi_9
        
        while (true)
            int32_t eax_20 = *ebx
            void* esi_4 = *(eax_20 + (*(edi_9 - 0x400) << 2))
            void* eax_21 = *(eax_20 + (*edi_9 << 2))
            int32_t edi_11 = 0
            
            if (edx_25 s>= 4)
                void* ecx_20 = esi_4 + 4
                float* edi_13 = eax_21 - esi_4
                int32_t i_9 = ((var_10_1 - 4) u>> 2) + 1
                void* edx_26 = eax_21 + 0xc
                int32_t var_24_1 = i_9 << 2
                int32_t i_3
                
                do
                    long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(*(ecx_20 - 4))))
                    x87_r6_3 - x87_r7_1
                    int32_t eax_22
                    eax_22.w = (x87_r6_3 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                    long double x87_r5_1 = fconvert.t(fconvert.s(fconvert.t(*(edx_26 - 0xc))))
                    x87_r5_1 - x87_r7_1
                    bool cond:8_1 = (eax_22:1.b & 0x41) != 0
                    eax_22.w = (x87_r5_1 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_1, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r5_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                    
                    if (cond:8_1)
                        if ((eax_22:1.b & 0x41) != 0)
                            *(edx_26 - 0xc) = fconvert.s(x87_r6_3)
                            *(ecx_20 - 4) = fconvert.s(x87_r6_3 - x87_r5_1)
                        else
                            *(edx_26 - 0xc) = fconvert.s(x87_r6_3 + x87_r5_1)
                    else if ((eax_22:1.b & 0x41) != 0)
                        *(edx_26 - 0xc) = fconvert.s(x87_r6_3)
                        *(ecx_20 - 4) = fconvert.s(x87_r5_1 + x87_r6_3)
                    else
                        *(edx_26 - 0xc) = fconvert.s(x87_r6_3 - x87_r5_1)
                    
                    long double x87_r6_11 = fconvert.t(fconvert.s(fconvert.t(*ecx_20)))
                    x87_r6_11 - x87_r7_1
                    eax_22.w = (x87_r6_11 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_11, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_11 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                    long double x87_r5_4 = fconvert.t(fconvert.s(fconvert.t(*(edi_13 + ecx_20))))
                    x87_r5_4 - x87_r7_1
                    bool cond:4_1 = (eax_22:1.b & 0x41) != 0
                    eax_22.w = (x87_r5_4 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_4, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r5_4 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                    
                    if (cond:4_1)
                        if ((eax_22:1.b & 0x41) != 0)
                            *(edi_13 + ecx_20) = fconvert.s(x87_r6_11)
                            *ecx_20 = fconvert.s(x87_r6_11 - x87_r5_4)
                        else
                            *(edi_13 + ecx_20) = fconvert.s(x87_r6_11 + x87_r5_4)
                    else if ((eax_22:1.b & 0x41) != 0)
                        *(edi_13 + ecx_20) = fconvert.s(x87_r6_11)
                        *ecx_20 = fconvert.s(x87_r5_4 + x87_r6_11)
                    else
                        *(edi_13 + ecx_20) = fconvert.s(x87_r6_11 - x87_r5_4)
                    
                    long double x87_r6_19 = fconvert.t(fconvert.s(fconvert.t(*(ecx_20 + 4))))
                    x87_r6_19 - x87_r7_1
                    eax_22.w = (x87_r6_19 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_19, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_19 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                    long double x87_r5_7 = fconvert.t(fconvert.s(fconvert.t(*(edx_26 - 4))))
                    x87_r5_7 - x87_r7_1
                    bool cond:6_1 = (eax_22:1.b & 0x41) != 0
                    eax_22.w = (x87_r5_7 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_7, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r5_7 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                    
                    if (cond:6_1)
                        if ((eax_22:1.b & 0x41) != 0)
                            *(edx_26 - 4) = fconvert.s(x87_r6_19)
                            *(ecx_20 + 4) = fconvert.s(x87_r6_19 - x87_r5_7)
                        else
                            *(edx_26 - 4) = fconvert.s(x87_r6_19 + x87_r5_7)
                    else if ((eax_22:1.b & 0x41) != 0)
                        *(edx_26 - 4) = fconvert.s(x87_r6_19)
                        *(ecx_20 + 4) = fconvert.s(x87_r5_7 + x87_r6_19)
                    else
                        *(edx_26 - 4) = fconvert.s(x87_r6_19 - x87_r5_7)
                    
                    long double x87_r6_27 = fconvert.t(fconvert.s(fconvert.t(*(ecx_20 + 8))))
                    x87_r6_27 - x87_r7_1
                    eax_22.w = (x87_r6_27 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_27, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_27 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                    long double x87_r5_10 = fconvert.t(fconvert.s(fconvert.t(*edx_26)))
                    x87_r5_10 - x87_r7_1
                    bool cond:7_1 = (eax_22:1.b & 0x41) != 0
                    eax_22.w = (x87_r5_10 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_10, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r5_10 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                    
                    if (cond:7_1)
                        if ((eax_22:1.b & 0x41) != 0)
                            *edx_26 = fconvert.s(x87_r6_27)
                            *(ecx_20 + 8) = fconvert.s(x87_r6_27 - x87_r5_10)
                        else
                            *edx_26 = fconvert.s(x87_r6_27 + x87_r5_10)
                    else if ((eax_22:1.b & 0x41) != 0)
                        *edx_26 = fconvert.s(x87_r6_27)
                        *(ecx_20 + 8) = fconvert.s(x87_r5_10 + x87_r6_27)
                    else
                        *edx_26 = fconvert.s(x87_r6_27 - x87_r5_10)
                    
                    ecx_20 += 0x10
                    edx_26 += 0x10
                    i_3 = i_9
                    i_9 -= 1
                while (i_3 != 1)
                edi_11 = var_24_1
                edx_25 = var_10_1
                ecx_19 = var_c_2
            
            if (edi_11 s< edx_25)
                float* ecx_21 = esi_4 + (edi_11 << 2)
                void* edx_28 = eax_21 - esi_4
                int32_t i_10 = var_10_1 - edi_11
                int32_t i_4
                
                do
                    long double x87_r6_35 = fconvert.t(fconvert.s(fconvert.t(*ecx_21)))
                    x87_r6_35 - x87_r7_1
                    eax_21.w = (x87_r6_35 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_35, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r6_35 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
                    long double x87_r5_13 = fconvert.t(fconvert.s(fconvert.t(*(ecx_21 + edx_28))))
                    x87_r5_13 - x87_r7_1
                    bool cond:5_1 = (eax_21:1.b & 0x41) != 0
                    eax_21.w = (x87_r5_13 < x87_r7_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r5_13, x87_r7_1) ? 1 : 0) << 0xa
                        | (x87_r5_13 == x87_r7_1 ? 1 : 0) << 0xe | 0x2800
                    
                    if (cond:5_1)
                        if ((eax_21:1.b & 0x41) != 0)
                            *(ecx_21 + edx_28) = fconvert.s(x87_r6_35)
                            *ecx_21 = fconvert.s(x87_r6_35 - x87_r5_13)
                        else
                            *(ecx_21 + edx_28) = fconvert.s(x87_r6_35 + x87_r5_13)
                    else if ((eax_21:1.b & 0x41) != 0)
                        *(ecx_21 + edx_28) = fconvert.s(x87_r6_35)
                        *ecx_21 = fconvert.s(x87_r5_13 + x87_r6_35)
                    else
                        *(ecx_21 + edx_28) = fconvert.s(x87_r6_35 - x87_r5_13)
                    
                    ecx_21 = &ecx_21[1]
                    i_4 = i_10
                    i_10 -= 1
                while (i_4 != 1)
                edx_25 = var_10_1
                ecx_19 = var_c_2
            
            var_1c_3 -= 4
            ecx_19 -= 1
            var_c_2 = ecx_19
            
            if (ecx_19 s< 0)
                break
            
            edi_9 = var_1c_3
    
    int32_t i_5 = 0
    
    if (*(ecx + 4) s> 0)
        do
            int32_t eax_24 = arg2[arg2[i_5 + 1] + 0x101]
            (*((&data_825e6c)[*(edx + (eax_24 << 2) + 0x320)] + 0x18))(ebx, 
                *(*(eax_1 + 0x30) + (eax_24 << 2)), (&__saved_edi)[i_5], *(*ebx + (i_5 << 2)))
            i_5 += 1
        while (i_5 s< *(ecx + 4))
    
    int32_t i_6 = 0
    
    if (*(ecx + 4) s<= 0)
        return 
    
    do
        float eax_26 = *(*ebx + (i_6 << 2))
        sub_657190(**(eax_1 + (ebx[7] << 2) + 0xc), eax_26, eax_26)
        i_6 += 1
    while (i_6 s< *(ecx + 4))
}
