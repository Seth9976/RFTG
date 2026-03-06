// 函数名称: sub_64aed0
// 虚拟地址: 0x64aed0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64aed0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    void* edx = *(ebx + 4)
    int32_t* eax = *(edx + 0x1c)
    int32_t esi_1 = eax[*(ebx + 0x28)]
    char ecx_1 = (eax[0x392]).b + 1
    int32_t edi_1 = *eax s>> ecx_1
    int32_t esi_4 = eax[1] s>> ecx_1
    void* var_10 = edx
    int32_t var_18 = edi_1
    int32_t var_14 = esi_4
    
    if (*(ebx + 0x18) s< 0)
        return 0
    
    if (*(ebx + 0x30) == esi_4)
        int32_t i = 0
        int32_t i_4 = 0
        
        if (*(edx + 4) s> 0)
            do
                void* edi_2 = *(*(ebx + 8) + (i << 2))
                int32_t edx_1 = 0
                
                if (esi_4 s>= 4)
                    void* eax_3 = edi_2 + (esi_4 << 2)
                    int32_t j_2 = ((esi_4 - 4) u>> 2) + 1
                    void* ecx_2 = edi_2 + 8
                    edx_1 = j_2 << 2
                    int32_t j
                    
                    do
                        eax_3 += 0x10
                        float var_c_1 = fconvert.s(fconvert.t(*(ecx_2 - 8)))
                        ecx_2 += 0x10
                        j = j_2
                        j_2 -= 1
                        *(ecx_2 - 0x18) = fconvert.s(fconvert.t(*(eax_3 - 0x10)))
                        *(eax_3 - 0x10) = fconvert.s(fconvert.t(var_c_1))
                        float var_c_2 = fconvert.s(fconvert.t(*(ecx_2 - 0x14)))
                        *(ecx_2 - 0x14) = fconvert.s(fconvert.t(*(eax_3 - 0xc)))
                        *(eax_3 - 0xc) = fconvert.s(fconvert.t(var_c_2))
                        float var_c_3 = fconvert.s(fconvert.t(*(ecx_2 - 0x10)))
                        *(ecx_2 - 0x10) = fconvert.s(fconvert.t(*(eax_3 - 8)))
                        *(eax_3 - 8) = fconvert.s(fconvert.t(var_c_3))
                        float var_c_4 = fconvert.s(fconvert.t(*(ecx_2 - 0xc)))
                        *(ecx_2 - 0xc) = fconvert.s(fconvert.t(*(eax_3 - 4)))
                        *(eax_3 - 4) = fconvert.s(fconvert.t(var_c_4))
                    while (j != 1)
                    esi_4 = var_14
                    i = i_4
                
                if (edx_1 s< esi_4)
                    void* eax_5 = edi_2 + ((edx_1 + esi_4) << 2)
                    
                    do
                        long double x87_r7_13 = fconvert.t(*(edi_2 + (edx_1 << 2)))
                        edx_1 += 1
                        eax_5 += 4
                        *(edi_2 + (edx_1 << 2) - 4) = fconvert.s(fconvert.t(*(eax_5 - 4)))
                        *(eax_5 - 4) = fconvert.s(fconvert.t(fconvert.s(x87_r7_13)))
                    while (edx_1 s< esi_4)
                
                edx = var_10
                i += 1
                i_4 = i
            while (i s< *(edx + 4))
            
            edi_1 = var_18
        
        *(ebx + 0x14) -= esi_4
        *(ebx + 0x18) -= esi_4
        *(ebx + 0x30) = 0
    
    int32_t i_7 = *(ebx + 0x24)
    
    if (*(ebx + 0x28) ^ i_7)
        int32_t var_8_1 = 0
        
        if (*(edx + 4) s> 0)
            int32_t eax_8
            int32_t edx_2
            edx_2:eax_8 = sx.q(esi_4 - edi_1)
            int32_t eax_11
            int32_t edx_3
            edx_3:eax_11 = sx.q(esi_4 + edi_1)
            int32_t ecx_8 = ((eax_8 - edx_2) s>> 1) * 4
            int32_t edx_4 = ((eax_11 - edx_3) s>> 1) - 1
            int32_t var_1c_1 = ecx_8
            int32_t var_24_1 = edx_4
            
            while (true)
                int32_t edi_4 = *(*(ebx + 8) + (var_8_1 << 2))
                int32_t eax_15 = ecx_8 + edi_4
                int32_t ecx_9 = edx_4
                int32_t var_c_6 = eax_15
                
                if (ecx_9 s>= 0)
                    if (edx_4 + 1 s>= 4)
                        uint32_t i_6 = (edx_4 + 1) u>> 2
                        void* edx_5 = edi_4 + (ecx_9 << 2) - 0xc
                        void* eax_16 = eax_15 + (ecx_9 << 2) - 4
                        ecx_9 += neg.d(i_6) << 2
                        uint32_t i_1
                        
                        do
                            eax_16 -= 0x10
                            *(eax_16 + 0x14) = fconvert.s(fconvert.t(*(edx_5 + 0xc)))
                            edx_5 -= 0x10
                            i_1 = i_6
                            i_6 -= 1
                            *(eax_16 + 0x10) =
                                fconvert.s(fconvert.t(*(edi_4 - var_c_6 + eax_16 + 0x10)))
                            *(eax_16 + 0xc) = fconvert.s(fconvert.t(*(edx_5 + 0x14)))
                            *(eax_16 + 8) = fconvert.s(fconvert.t(*(edx_5 + 0x10)))
                        while (i_1 != 1)
                        ebx = arg1
                        edx_4 = var_24_1
                        eax_15 = var_c_6
                    
                    if (ecx_9 s>= 0)
                        float* eax_17 = eax_15 + (ecx_9 << 2)
                        int32_t temp4_1
                        
                        do
                            long double x87_r7_20 = fconvert.t(*(eax_17 + edi_4 - var_c_6))
                            eax_17 -= 4
                            temp4_1 = ecx_9
                            ecx_9 -= 1
                            eax_17[1] = fconvert.s(x87_r7_20)
                        while (temp4_1 - 1 s>= 0)
                    
                    esi_4 = var_14
                
                int32_t eax_19 = var_8_1 + 1
                var_8_1 = eax_19
                
                if (eax_19 s>= *(var_10 + 4))
                    break
                
                ecx_8 = var_1c_1
            
            edi_1 = var_18
        
        int32_t eax_22
        int32_t edx_6
        edx_6:eax_22 = sx.q(esi_4 - edi_1)
        edx = var_10
        int32_t eax_24 = (eax_22 - edx_6) s>> 1
        *(ebx + 0x18) += eax_24
        *(ebx + 0x14) += eax_24
    else if (i_7 == 0)
        int32_t i_5 = i_7
        
        if (*(edx + 4) s> i_7)
            int32_t edx_10 = (esi_4 - edi_1) * 4
            int32_t var_20_2 = edx_10
            int32_t i_2
            
            do
                int32_t edi_6 = *(*(ebx + 8) + (i_5 << 2))
                int32_t ecx_13 = var_18 - 1
                int32_t eax_26 = edx_10 + edi_6
                int32_t var_c_7 = eax_26
                
                if (var_18 - 1 s>= 0)
                    if (ecx_13 + 1 s>= 4)
                        uint32_t j_3 = (ecx_13 + 1) u>> 2
                        void* edx_11 = edi_6 + (ecx_13 << 2) - 0xc
                        void* eax_27 = eax_26 + (ecx_13 << 2) - 4
                        ecx_13 += neg.d(j_3) << 2
                        uint32_t j_1
                        
                        do
                            eax_27 -= 0x10
                            *(eax_27 + 0x14) = fconvert.s(fconvert.t(*(edx_11 + 0xc)))
                            edx_11 -= 0x10
                            j_1 = j_3
                            j_3 -= 1
                            *(eax_27 + 0x10) =
                                fconvert.s(fconvert.t(*(edi_6 - var_c_7 + eax_27 + 0x10)))
                            *(eax_27 + 0xc) = fconvert.s(fconvert.t(*(edx_11 + 0x14)))
                            *(eax_27 + 8) = fconvert.s(fconvert.t(*(edx_11 + 0x10)))
                        while (j_1 != 1)
                        edx_10 = var_20_2
                        ebx = arg1
                        eax_26 = var_c_7
                    
                    if (ecx_13 s>= 0)
                        float* eax_28 = eax_26 + (ecx_13 << 2)
                        int32_t temp5_1
                        
                        do
                            long double x87_r7_25 = fconvert.t(*(eax_28 + edi_6 - var_c_7))
                            eax_28 -= 4
                            temp5_1 = ecx_13
                            ecx_13 -= 1
                            eax_28[1] = fconvert.s(x87_r7_25)
                        while (temp5_1 - 1 s>= 0)
                    
                    esi_4 = var_14
                
                i_2 = i_5 + 1
                i_5 = i_2
            while (i_2 s< *(var_10 + 4))
            edi_1 = var_18
            edx = var_10
        
        *(ebx + 0x18) += esi_4 - edi_1
        *(ebx + 0x14) += esi_4 - edi_1
    
    if (arg2 != 0)
        int32_t i_3 = 0
        
        if (*(edx + 4) s> 0)
            do
                *(*(ebx + 0xc) + (i_3 << 2)) = *(*(ebx + 8) + (i_3 << 2)) + (*(ebx + 0x18) << 2)
                i_3 += 1
            while (i_3 s< *(edx + 4))
        
        *arg2 = *(ebx + 0xc)
    
    return esi_4 - *(ebx + 0x18) + (esi_1 s>> ecx_1)
}
