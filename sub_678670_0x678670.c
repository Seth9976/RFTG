// 函数名称: sub_678670
// 虚拟地址: 0x678670
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_678670(void** arg1, uint32_t arg2)
{
    // 第一条实际指令: int32_t* ecx = arg1
    int32_t* ecx = arg1
    int32_t* result = ecx[7]
    void* edx_1 = *ecx - 1
    void* var_8 = edx_1
    uint32_t ebx = result[0xe]
    void* edx_2 = ecx[1] + edx_1 - 5
    int32_t ecx_1 = ecx[4]
    char* esi_2 = ecx[3] - 1
    void* edx_5 = ecx_1 - arg2 + esi_2
    void* ecx_2 = &esi_2[ecx_1 - 0x101]
    int32_t edx_6 = result[0xa]
    int32_t ecx_3 = result[0xb]
    int32_t i_11 = result[0xc]
    int32_t ecx_4 = result[0xd]
    int32_t edx_7 = result[0x13]
    int32_t ecx_5 = result[0x14]
    int32_t edi = result[0xf]
    int32_t edx_9 = (1 << (result[0x15]).b) - 1
    int32_t var_40 = edx_9
    int32_t eax_1 = (1 << (result[0x16]).b) - 1
    
    while (true)
        if (edi u< 0xf)
            uint32_t ebx_1 = ebx + (zx.d(*(var_8 + 1)) << edi.b)
            void* eax_7 = var_8 + 2
            var_8 = eax_7
            ebx = ebx_1 + (zx.d(*eax_7) << (edi.b + 8))
            edi += 0x10
        
        int32_t eax_10 = *(edx_7 + ((edx_9 & ebx) << 2))
        uint32_t ecx_11 = zx.d((eax_10 u>> 8).b)
        ebx u>>= ecx_11.b
        edi -= ecx_11
        uint32_t edx_13 = zx.d(eax_10.b)
        uint32_t eax_13
        void* edx_45
        
        if (eax_10.b != 0)
            while (true)
                int32_t* result_1
                
                if ((edx_13.b & 0x10) != 0)
                    int32_t edx_18 = edx_13 & 0xf
                    arg2 = eax_10 u>> 0x10
                    
                    if (edx_18 != 0)
                        if (edi u< edx_18)
                            void* eax_16 = var_8 + 1
                            var_8 = eax_16
                            ebx += zx.d(*eax_16) << edi.b
                            edi += 8
                        
                        char ecx_17 = edx_18.b
                        arg2 += ((1 << ecx_17) - 1) & ebx
                        ebx u>>= ecx_17
                        edi -= edx_18
                    
                    if (edi u< 0xf)
                        uint32_t edx_19 = zx.d(*(var_8 + 1))
                        void* eax_23 = var_8 + 2
                        var_8 = eax_23
                        ebx = ebx + (edx_19 << edi.b) + (zx.d(*eax_23) << (edi.b + 8))
                        edi += 0x10
                    
                    int32_t edx_22 = *(ecx_5 + ((eax_1 & ebx) << 2))
                    uint32_t ecx_22 = zx.d((edx_22 u>> 8).b)
                    uint32_t eax_28 = zx.d(edx_22.b)
                    ebx u>>= ecx_22.b
                    edi -= ecx_22
                    int32_t var_1c_1 = edx_22
                    
                    if ((eax_28.b & 0x10) == 0)
                        while ((eax_28.b & 0x40) == 0)
                            edx_22 =
                                *(ecx_5 + (((((1 << eax_28.b) - 1) & ebx) + zx.d(var_1c_1:2.w)) << 2))
                            uint32_t ecx_25 = zx.d((edx_22 u>> 8).b)
                            eax_28 = zx.d(edx_22.b)
                            ebx u>>= ecx_25.b
                            edi -= ecx_25
                            var_1c_1 = edx_22
                            
                            if ((eax_28.b & 0x10) != 0)
                                goto label_678839
                        
                        arg1[6] = "invalid distance code"
                        goto label_678a13
                    
                label_678839:
                    int32_t eax_32 = eax_28 & 0xf
                    
                    if (edi u< eax_32)
                        uint32_t edx_28 = zx.d(*(var_8 + 1))
                        var_8 += 1
                        uint32_t edx_29 = edx_28 << edi.b
                        edi += 8
                        ebx += edx_29
                        
                        if (edi u< eax_32)
                            uint32_t edx_30 = zx.d(*(var_8 + 1))
                            var_8 += 1
                            ebx += edx_30 << edi.b
                            edi += 8
                    
                    char ecx_32 = eax_32.b
                    edi -= eax_32
                    int32_t edx_34 = ((1 << ecx_32) - 1) & ebx
                    ebx u>>= ecx_32
                    int32_t edx_36 = (edx_22 u>> 0x10) + edx_34
                    void* ecx_34 = esi_2 - edx_5
                    
                    if (edx_36 u<= ecx_34)
                        eax_13 = esi_2 - edx_36
                        uint32_t i
                        
                        do
                            esi_2[1] = *(eax_13 + 1)
                            edx_36.b = *(eax_13 + 2)
                            esi_2[2] = edx_36.b
                            char ecx_42 = *(eax_13 + 3)
                            eax_13 += 3
                            esi_2 = &esi_2[3]
                            *esi_2 = ecx_42
                            i = arg2 - 3
                            arg2 = i
                        while (i u> 2)
                        
                        if (i == 0)
                            goto label_6789cc
                        
                        edx_36.b = *(eax_13 + 1)
                        esi_2 = &esi_2[1]
                        *esi_2 = edx_36.b
                        
                        if (i u<= 1)
                            goto label_6789cc
                        
                        eax_13.b = *(eax_13 + 2)
                    else
                        void* i_6 = edx_36 - ecx_34
                        
                        if (i_6 u> ecx_3)
                            result_1 = result
                            
                            if (result_1[0x6f0] != 0)
                                arg1[6] = "invalid distance too far back"
                                goto label_678a16
                        
                        void* ecx_37
                        void* i_9
                        
                        if (i_11 == 0)
                            ecx_37 = ecx_4 - 1 + edx_6 - i_6
                            
                            if (i_6 u< arg2)
                                arg2 -= i_6
                                void* i_1
                                
                                do
                                    i_9.b = *(ecx_37 + 1)
                                    ecx_37 += 1
                                    esi_2 = &esi_2[1]
                                    i_1 = i_6
                                    i_6 -= 1
                                    *esi_2 = i_9.b
                                while (i_1 != 1)
                                ecx_37 = esi_2 - edx_36
                        else if (i_11 u>= i_6)
                            ecx_37 = ecx_4 - 1 + i_11 - i_6
                            
                            if (i_6 u< arg2)
                                arg2 -= i_6
                                void* i_2
                                
                                do
                                    i_9.b = *(ecx_37 + 1)
                                    ecx_37 += 1
                                    esi_2 = &esi_2[1]
                                    i_2 = i_6
                                    i_6 -= 1
                                    *esi_2 = i_9.b
                                while (i_2 != 1)
                                ecx_37 = esi_2 - edx_36
                        else
                            void* i_7 = i_6 - i_11
                            ecx_37 = ecx_4 - 1 + i_11 - i_6 + edx_6
                            
                            if (i_7 u< arg2)
                                arg2 -= i_7
                                void* ecx_38 = ecx_37 - esi_2
                                void* i_3
                                
                                do
                                    i_9.b = *(ecx_38 + esi_2 + 1)
                                    esi_2 = &esi_2[1]
                                    i_3 = i_7
                                    i_7 -= 1
                                    *esi_2 = i_9.b
                                while (i_3 != 1)
                                int32_t i_8 = i_11
                                ecx_37 = ecx_4 - 1
                                
                                if (i_8 u< arg2)
                                    arg2 -= i_8
                                    int32_t i_10 = i_8
                                    int32_t i_4
                                    
                                    do
                                        i_9.b = *(ecx_37 + 1)
                                        ecx_37 += 1
                                        esi_2 = &esi_2[1]
                                        i_4 = i_8
                                        i_8 -= 1
                                        *esi_2 = i_9.b
                                    while (i_4 != 1)
                                    ecx_37 = esi_2 - edx_36
                        
                        if (arg2 u> 2)
                            i_9 = (arg2 - 3) u/ 3 + 1
                            void* i_5
                            
                            do
                                arg2 -= 3
                                esi_2[1] = *(ecx_37 + 1)
                                esi_2[2] = *(ecx_37 + 2)
                                char eax_39 = *(ecx_37 + 3)
                                ecx_37 += 3
                                esi_2 = &esi_2[3]
                                i_5 = i_9
                                i_9 -= 1
                                *esi_2 = eax_39
                            while (i_5 != 1)
                        
                        if (arg2 == 0)
                            goto label_6789cc
                        
                        i_9.b = *(ecx_37 + 1)
                        esi_2 = &esi_2[1]
                        *esi_2 = i_9.b
                        
                        if (arg2 u<= 1)
                            goto label_6789cc
                        
                        eax_13.b = *(ecx_37 + 2)
                    
                    esi_2 = &esi_2[1]
                    goto label_6789ca
                
                if ((edx_13.b & 0x40) != 0)
                    if ((edx_13.b & 0x20) == 0)
                        arg1[6] = "invalid literal/length code"
                    label_678a13:
                        result_1 = result
                    label_678a16:
                        *result_1 = 0x1d
                    else
                        *result = 0xb
                    
                    edx_45 = edx_2
                    break
                
                eax_10 = *(edx_7 + (((((1 << edx_13.b) - 1) & ebx) + (eax_10 u>> 0x10)) << 2))
                uint32_t ecx_15 = zx.d((eax_10 u>> 8).b)
                ebx u>>= ecx_15.b
                edi -= ecx_15
                edx_13 = zx.d(eax_10.b)
                
                if (eax_10.b == 0)
                    goto label_678778
            
            goto label_678a21
        
    label_678778:
        esi_2 = &esi_2[1]
        eax_13 = eax_10 u>> 0x10
    label_6789ca:
        *esi_2 = eax_13.b
    label_6789cc:
        edx_45 = edx_2
        
        if (var_8 u>= edx_45 || esi_2 u>= ecx_2)
        label_678a21:
            uint32_t eax_44 = edi u>> 3
            void* var_8_2 = var_8 - eax_44
            int32_t edi_1 = edi - eax_44 * 8
            *arg1 = var_8_2 + 1
            arg1[3] = &esi_2[1]
            arg1[4] = ecx_2 - esi_2 + 0x101
            arg1[1] = edx_45 - var_8_2 + 5
            result[0xf] = edi_1
            result[0xe] = ebx & ((1 << edi_1.b) - 1)
            return result
        
        edx_9 = var_40
}
