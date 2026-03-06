// 函数名称: sub_673d40
// 虚拟地址: 0x673d40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_673d40(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    while (true)
        int32_t ecx_1 = esi[0x1d]
        
        if (ecx_1 u< 0x106)
            sub_673570(esi)
            ecx_1 = esi[0x1d]
            
            if (ecx_1 u< 0x106 && arg2 == 0)
                break
            
            if (ecx_1 == 0)
                if (esi[0x1a] != 0)
                    int32_t eax_36
                    eax_36.b = *(esi[0x1b] + esi[0xe] - 1)
                    *(esi[0x5a9] + (esi[0x5a8] << 1)) = 0
                    esi[0x5a6][esi[0x5a8]] = eax_36.b
                    esi[0x5a8] += 1
                    uint32_t eax_37 = zx.d(eax_36.b)
                    esi[eax_37 + 0x25].w += 1
                    esi[0x1a] = 0
                
                int32_t eax_39 = esi[0x1b]
                int32_t ecx_32 = eax_39
                
                if (eax_39 u>= 2)
                    ecx_32 = 2
                
                esi[0x5ad] = ecx_32
                
                if (arg2 == 4)
                    int32_t edx_34 = esi[0x17]
                    char* ecx_34
                    
                    if (edx_34 s< 0)
                        ecx_34 = nullptr
                    else
                        ecx_34 = esi[0xe] + edx_34
                    
                    sub_6781e0(esi, ecx_34, eax_39 - edx_34, 1)
                    void* edi_9 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_673250(edi_9)
                    int32_t eax_41
                    eax_41.b = *(*esi + 0x10) != 0
                    return eax_41 + 2
                
                if (esi[0x5a8] != 0)
                    int32_t edx_36 = esi[0x17]
                    char* ecx_37
                    
                    if (edx_36 s< 0)
                        ecx_37 = nullptr
                    else
                        ecx_37 = esi[0xe] + edx_36
                    
                    sub_6781e0(esi, ecx_37, eax_39 - edx_36, 0)
                    void* edi_10 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_673250(edi_10)
                
                if (esi[0x5a8] == 0 || *(*esi + 0x10) != 0)
                    return 1
                
                break
        
        uint32_t eax_5 = 0
        
        if (ecx_1 u>= 3)
            int32_t edx_1 = esi[0x1b]
            int32_t eax_4 = (esi[0x12] << (esi[0x16]).b ^ zx.d(*(esi[0xe] + edx_1 + 2))) & esi[0x15]
            int32_t ecx_5 = esi[0x11]
            int32_t edi_2 = esi[0xd] & edx_1
            int32_t edx_2 = esi[0x10]
            esi[0x12] = eax_4
            eax_4.w = *(ecx_5 + (eax_4 << 1))
            *(edx_2 + (edi_2 << 1)) = eax_4.w
            eax_5 = zx.d(*(esi[0x10] + ((esi[0x1b] & esi[0xd]) << 1)))
            edi_2.w = esi[0x1b].w
            *(esi[0x11] + (esi[0x12] << 1)) = edi_2.w
        
        int32_t ecx_9 = esi[0x18]
        int32_t edx_5 = esi[0x1c]
        esi[0x1e] = ecx_9
        esi[0x19] = edx_5
        esi[0x18] = 2
        
        if (eax_5 != 0 && ecx_9 u< esi[0x20] && esi[0x1b] - eax_5 u<= esi[0xb] - 0x106)
            char* eax_6 = sub_673410(esi, eax_5)
            esi[0x18] = eax_6
            
            if (eax_6 u<= 5)
                if (esi[0x22] == 1)
                    esi[0x18] = 2
                else if (eax_6 == 3 && esi[0x1b] - esi[0x1c] u> 0x1000)
                    esi[0x18] = 2
        
        int32_t eax_7 = esi[0x1e]
        bool cond:1_1
        
        if (eax_7 u>= 3 && esi[0x18] u<= eax_7)
            int32_t edi_4 = esi[0x1b] + esi[0x1d] - 3
            int32_t edx_10
            edx_10.w = esi[0x1b].w
            edx_10.w -= esi[0x19].w
            int32_t eax_8
            eax_8.b = esi[0x1e].b
            edx_10.w -= 1
            int16_t ecx_12 = edx_10.w
            *(esi[0x5a9] + (esi[0x5a8] << 1)) = ecx_12
            eax_8.b -= 3
            esi[0x5a6][esi[0x5a8]] = eax_8.b
            esi[0x5a8] += 1
            uint32_t edx_13 = zx.d(*(zx.d(eax_8.b) + 0x833fc0))
            esi[edx_13 + 0x126].w += 1
            uint32_t eax_10
            
            if (ecx_12 - 1 u>= 0x100)
                eax_10 = zx.d(*((zx.d(ecx_12 - 1) u>> 7) + 0x833ec0))
            else
                eax_10 = zx.d((&data_833dc0)[zx.d(ecx_12 - 1)])
            
            esi[eax_10 + 0x262].w += 1
            int32_t eax_13 = esi[0x1e]
            void* ecx_15
            ecx_15.b = esi[0x5a8] == esi[0x5a7] - 1
            esi[0x1d] += 1 - eax_13
            esi[0x1e] = eax_13 - 2
            int32_t i
            
            do
                esi[0x1b] += 1
                int32_t edx_17 = esi[0x1b]
                
                if (edx_17 u<= edi_4)
                    int32_t ebx_3 = esi[0xd]
                    int32_t eax_18 =
                        (esi[0x12] << (esi[0x16]).b ^ zx.d(*(esi[0xe] + edx_17 + 2))) & esi[0x15]
                    int32_t ecx_19 = esi[0x11]
                    esi[0x12] = eax_18
                    *(esi[0x10] + ((ebx_3 & edx_17) << 1)) = *(ecx_19 + (eax_18 << 1))
                    *(esi[0x11] + (esi[0x12] << 1)) = esi[0x1b].w
                
                i = esi[0x1e]
                esi[0x1e] -= 1
            while (i != 1)
            esi[0x1b] += 1
            int32_t eax_21 = esi[0x1b]
            esi[0x1a] = 0
            esi[0x18] = 2
            
            if (ecx_15 == 0)
                continue
            else
                int32_t edx_20 = esi[0x17]
                char* ecx_22
                
                if (edx_20 s< 0)
                    ecx_22 = nullptr
                else
                    ecx_22 = esi[0xe] + edx_20
                
                sub_6781e0(esi, ecx_22, eax_21 - edx_20, 0)
                void* edi_5 = *esi
                esi[0x17] = esi[0x1b]
                void* ebx_5 = *(edi_5 + 0x1c)
                sub_6780d0(ebx_5)
                void* eax_23 = *(ebx_5 + 0x14)
                void* ecx_24 = *(edi_5 + 0x10)
                arg1 = eax_23
                
                if (eax_23 u> ecx_24)
                    arg1 = ecx_24
                    eax_23 = ecx_24
                
                if (eax_23 != 0)
                    sub_5ab990(*(edi_5 + 0xc), *(ebx_5 + 0x10), eax_23)
                    *(edi_5 + 0xc) += arg1
                    *(ebx_5 + 0x10) += arg1
                    *(edi_5 + 0x14) += arg1
                    *(edi_5 + 0x10) -= arg1
                    int32_t temp2_1 = *(ebx_5 + 0x14)
                    *(ebx_5 + 0x14) -= arg1
                    
                    if (temp2_1 == arg1)
                        *(ebx_5 + 0x10) = *(ebx_5 + 8)
                
                cond:1_1 = *(*esi + 0x10) != 0
        else if (esi[0x1a] == 0)
            esi[0x1b] += 1
            esi[0x1d] -= 1
            esi[0x1a] = 1
            continue
        else
            int32_t eax_27
            eax_27.b = *(esi[0x1b] + esi[0xe] - 1)
            *(esi[0x5a9] + (esi[0x5a8] << 1)) = 0
            esi[0x5a6][esi[0x5a8]] = eax_27.b
            esi[0x5a8] += 1
            uint32_t eax_28 = zx.d(eax_27.b)
            esi[eax_28 + 0x25].w += 1
            
            if (esi[0x5a8] == esi[0x5a7] - 1)
                int32_t ecx_26 = esi[0x17]
                char* eax_31
                
                if (ecx_26 s< 0)
                    eax_31 = nullptr
                else
                    eax_31 = esi[0xe] + ecx_26
                
                sub_6781e0(esi, eax_31, esi[0x1b] - ecx_26, 0)
                void* edi_8 = *esi
                esi[0x17] = esi[0x1b]
                void* ebx_6 = *(edi_8 + 0x1c)
                sub_6780d0(ebx_6)
                void* eax_33 = *(ebx_6 + 0x14)
                void* ecx_27 = *(edi_8 + 0x10)
                arg1 = eax_33
                
                if (eax_33 u> ecx_27)
                    arg1 = ecx_27
                    eax_33 = ecx_27
                
                if (eax_33 != 0)
                    sub_5ab990(*(edi_8 + 0xc), *(ebx_6 + 0x10), eax_33)
                    *(edi_8 + 0xc) += arg1
                    *(ebx_6 + 0x10) += arg1
                    *(edi_8 + 0x14) += arg1
                    *(edi_8 + 0x10) -= arg1
                    int32_t temp1_1 = *(ebx_6 + 0x14)
                    *(ebx_6 + 0x14) -= arg1
                    
                    if (temp1_1 == arg1)
                        *(ebx_6 + 0x10) = *(ebx_6 + 8)
            
            esi[0x1b] += 1
            int32_t ecx_29 = *esi
            esi[0x1d] -= 1
            cond:1_1 = *(ecx_29 + 0x10) != 0
        
        if (not(cond:1_1))
            break
    
    return 0
}
