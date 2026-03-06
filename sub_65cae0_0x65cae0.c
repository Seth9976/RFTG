// 函数名称: sub_65cae0
// 虚拟地址: 0x65cae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65cae0(int32_t* arg1, void* arg2, void* arg3, int32_t* arg4, int128_t* arg5)
{
    // 第一条实际指令: void* eax = arg3
    void* eax = arg3
    void* ecx = *(eax + 0x510)
    void* ecx_2 = *(*(*(arg2 + 0x40) + 4) + 0x1c)
    int32_t edx_1 = *(ecx_2 + 0xb20)
    int32_t* edx_2 = arg4
    int32_t edi = *(eax + 0x504)
    
    if (edx_2 == 0)
        sub_68b1d0(arg1, 0, 1)
        int32_t eax_63
        int32_t edx_39
        edx_39:eax_63 = sx.q(*(arg2 + 0x24))
        sub_5abfc0(arg5, 0, ((eax_63 - edx_39) s>> 1) * 4)
        return 0
    
    int32_t ebx = 0
    
    if (edi s> 0)
        do
            int32_t esi_1 = edx_2[ebx]
            int32_t ecx_4 = esi_1 & 0x7fff
            
            switch (*(ecx + 0x340) - 1)
                case 0
                    ecx_4 s>>= 2
                case 1
                    ecx_4 s>>= 3
                case 2
                    ecx_4 s/= 0xc
                    edx_2 = arg4
                case 3
                    ecx_4 s>>= 4
            
            edx_2[ebx] = (esi_1 & 0x8000) | ecx_4
            ebx += 1
        while (ebx s< edi)
        
        eax = arg3
    
    int32_t var_170 = *edx_2
    int32_t ecx_8 = edx_2[1]
    
    if (edi s> 2)
        void* var_14_1 = &edx_2[2]
        void* var_c_1 = ecx + 0x34c
        void* eax_5 = eax + 0x30c
        int32_t* ecx_12 = &var_170 - edx_2
        void* var_10_1 = eax_5
        int32_t i_7 = edi - 2
        int32_t i
        
        do
            int32_t ecx_13 = *(eax_5 + 0xfc)
            int32_t ebx_1 = *eax_5
            int32_t edi_2 = *(ecx + (ecx_13 << 2) + 0x344)
            int32_t esi_5 = arg4[ecx_13] & 0x7fff
            int32_t ecx_16 = (arg4[ebx_1] & 0x7fff) - esi_5
            int32_t eax_8
            int32_t edx_6
            edx_6:eax_8 = sx.q(ecx_16)
            int32_t temp0_1 = divs.dp.d(sx.q(((eax_8 ^ edx_6) - edx_6) * (*var_c_1 - edi_2)), 
                *(ecx + (ebx_1 << 2) + 0x344) - edi_2)
            int32_t ecx_18
            
            if (ecx_16 s>= 0)
                ecx_18 = temp0_1 + esi_5
            else
                ecx_18 = esi_5 - temp0_1
            
            int32_t eax_14 = *var_14_1
            void* eax_18
            
            if ((eax_14 & 0x8000) != 0 || ecx_18 == eax_14)
                *(ecx_12 + var_14_1) = 0
                eax_18 = var_10_1
                *var_14_1 = ecx_18 | 0x8000
            else
                int32_t edi_5 = *(arg3 + 0x50c) - ecx_18
                
                if (edi_5 s>= ecx_18)
                    edi_5 = ecx_18
                
                int32_t eax_15 = eax_14 - ecx_18
                int32_t eax_16
                
                if (eax_14 - ecx_18 s>= 0)
                    if (eax_15 s< edi_5)
                        eax_16 = eax_15 * 2
                    else
                        eax_16 = eax_15 + edi_5
                else if (eax_15 s>= neg.d(edi_5))
                    eax_16 = 0xffffffff - eax_15 * 2
                else
                    eax_16 = edi_5 - eax_15 - 1
                
                *(ecx_12 + var_14_1) = eax_16
                eax_18 = var_10_1
                arg4[*(eax_18 + 0xfc)] = esi_5
                arg4[ebx_1] &= 0x7fff
            
            var_c_1 += 4
            eax_5 = eax_18 + 4
            i = i_7
            i_7 -= 1
            var_10_1 = eax_5
            var_14_1 += 4
        while (i != 1)
    
    sub_68b1d0(arg1, 1, 1)
    int32_t edx_17 = *(arg3 + 0x50c)
    *(arg3 + 0x51c) += 1
    int32_t ecx_25 = 0
    uint32_t i_2 = edx_17 - 1
    uint32_t i_1 = i_2
    
    if (edx_17 != 1)
        do
            ecx_25 += 1
            i_1 u>>= 1
        while (i_1 != 0)
    
    *(arg3 + 0x518) += ecx_25 * 2
    int32_t eax_20 = 0
    
    for (; i_2 != 0; i_2 u>>= 1)
        eax_20 += 1
    
    sub_68b1d0(arg1, var_170, eax_20)
    int32_t eax_21 = *(arg3 + 0x50c)
    uint32_t i_3 = eax_21 - 1
    int32_t ecx_27 = 0
    
    if (eax_21 != 1)
        do
            ecx_27 += 1
            i_3 u>>= 1
        while (i_3 != 0)
    
    sub_68b1d0(arg1, ecx_8, ecx_27)
    void* eax_23 = ecx
    int32_t var_1c_2 = 0
    int32_t var_c_2 = 2
    
    if (*eax_23 s> 0)
        void* var_20_2 = eax_23 + 4
        bool cond:3_1
        
        do
            int32_t ebx_2 = *var_20_2
            int32_t ecx_29 = *(eax_23 + (ebx_2 << 2) + 0x80)
            int32_t edi_9 = *(eax_23 + (ebx_2 << 2) + 0xc0)
            int32_t esi_7 = 1 << edi_9.b
            int32_t var_4c
            __builtin_memset(&var_4c, 0, 0x20)
            int32_t var_14_2 = 0
            int32_t var_28_1 = 0
            int32_t __saved_ebp
            int32_t edi_10
            
            if (edi_9 == 0)
                edi_10 = edx_1
            else
                int32_t eax_24 = 0
                int32_t var_6c[0x8]
                
                if (esi_7 s> 0)
                    void* edx_22 = ((ebx_2 + 0xa) << 5) + ecx
                    
                    do
                        int32_t ebx_3 = *edx_22
                        
                        if (ebx_3 s>= 0)
                            var_6c[eax_24] = *(*(ecx_2 + (ebx_3 << 2) + 0x720) + 4)
                        else
                            var_6c[eax_24] = 1
                        
                        eax_24 += 1
                        edx_22 += 4
                    while (eax_24 s< esi_7)
                
                int32_t edx_23 = 0
                
                if (ecx_29 s> 0)
                    void* var_18_2 = &(&__saved_ebp)[var_c_2 - 0x5b]
                    
                    do
                        int32_t eax_26 = 0
                        
                        if (esi_7 s> 0)
                            do
                                if (*var_18_2 s< var_6c[eax_26])
                                    (&var_4c)[edx_23] = eax_26
                                    break
                                
                                eax_26 += 1
                            while (eax_26 s< esi_7)
                        
                        char ecx_39 = var_28_1.b
                        var_28_1 += edi_9
                        var_18_2 += 4
                        int32_t eax_28 = (&var_4c)[edx_23] << ecx_39
                        edx_23 += 1
                        var_14_2 |= eax_28
                    while (edx_23 s< ecx_29)
                
                edi_10 = edx_1
                int32_t eax_31 =
                    sub_6510c0(edi_10 + *(ecx + (ebx_2 << 2) + 0x100) * 0x38, var_14_2, arg1)
                *(arg3 + 0x514) += eax_31
            
            int32_t esi_8 = 0
            
            if (ecx_29 s> 0)
                void* ebx_5 = &(&__saved_ebp)[var_c_2 - 0x5b]
                
                do
                    int32_t eax_33 = *(ecx + (((&var_4c)[esi_8] + (ebx_2 << 3) + 0x50) << 2))
                    
                    if (eax_33 s>= 0)
                        int32_t ecx_46 = *ebx_5
                        int32_t edx_28 = eax_33 * 7
                        
                        if (ecx_46 s< *(edi_10 + (edx_28 << 3) + 4))
                            int32_t eax_35 = sub_6510c0(edi_10 + (edx_28 << 3), ecx_46, arg1)
                            *(arg3 + 0x518) += eax_35
                    
                    esi_8 += 1
                    ebx_5 += 4
                while (esi_8 s< ecx_29)
            
            var_c_2 += ecx_29
            var_20_2 += 4
            cond:3_1 = var_1c_2 + 1 s< *ecx
            var_1c_2 += 1
            eax_23 = ecx
        while (cond:3_1)
    
    int32_t ecx_50 = *(eax_23 + 0x340) * *arg4
    int32_t eax_42
    int32_t edx_32
    edx_32:eax_42 = sx.q(*(ecx_2 + (*(arg2 + 0x1c) << 2)))
    int32_t i_5 = 0
    int32_t i_6 = 0
    int32_t i_8 = 1
    
    if (*(arg3 + 0x504) s> 1)
        void* eax_45 = arg3 + 0x108
        void* var_24_1 = eax_45
        int32_t i_4
        
        do
            int32_t edx_33 = *eax_45
            int32_t esi_9 = arg4[edx_33]
            int32_t eax_48 = esi_9 & 0x7fff
            
            if (eax_48 == esi_9)
                i_5 = *(ecx + (edx_33 << 2) + 0x344)
                int32_t esi_11 = *(ecx + 0x340) * eax_48
                sub_65bd80(esi_11, arg5, i_5, (eax_42 - edx_32) s>> 1, i_6, ecx_50, arg5)
                i_6 = i_5
                ecx_50 = esi_11
            
            i_4 = i_8 + 1
            eax_45 = var_24_1 + 4
            i_8 = i_4
            var_24_1 = eax_45
        while (i_4 s< *(arg3 + 0x504))
    
    int32_t eax_53
    int32_t edx_36
    edx_36:eax_53 = sx.q(*(arg2 + 0x24))
    
    if (i_5 s< (eax_53 - edx_36) s>> 1)
        int32_t eax_57
        int32_t edx_38
        
        do
            *(arg5 + (i_5 << 2)) = ecx_50
            edx_38:eax_57 = sx.q(*(arg2 + 0x24))
            i_5 += 1
        while (i_5 s< (eax_57 - edx_38) s>> 1)
    
    return 1
}
