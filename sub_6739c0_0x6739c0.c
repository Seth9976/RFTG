// 函数名称: sub_6739c0
// 虚拟地址: 0x6739c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6739c0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* esi = arg1
    int32_t* esi = arg1
    
    while (true)
        uint32_t eax_1 = esi[0x1d]
        
        if (eax_1 u< 0x106)
            sub_673570(esi)
            eax_1 = esi[0x1d]
            
            if (eax_1 u< 0x106 && arg2 == 0)
                break
            
            if (eax_1 == 0)
                int32_t eax_31 = esi[0x1b]
                int32_t ecx_21 = eax_31
                
                if (eax_31 u>= 2)
                    ecx_21 = 2
                
                esi[0x5ad] = ecx_21
                
                if (arg2 == 4)
                    int32_t edx_25 = esi[0x17]
                    char* ecx_23
                    
                    if (edx_25 s< 0)
                        ecx_23 = nullptr
                    else
                        ecx_23 = esi[0xe] + edx_25
                    
                    sub_6781e0(esi, ecx_23, eax_31 - edx_25, 1)
                    void* edi_7 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_673250(edi_7)
                    int32_t ecx_24
                    ecx_24.b = *(*esi + 0x10) != 0
                    return ecx_24 + 2
                
                if (esi[0x5a8] != 0)
                    int32_t edx_27 = esi[0x17]
                    char* ecx_26
                    
                    if (edx_27 s< 0)
                        ecx_26 = nullptr
                    else
                        ecx_26 = esi[0xe] + edx_27
                    
                    sub_6781e0(esi, ecx_26, eax_31 - edx_27, 0)
                    void* edi_8 = *esi
                    esi[0x17] = esi[0x1b]
                    sub_673250(edi_8)
                
                if (esi[0x5a8] == 0 || *(*esi + 0x10) != 0)
                    return 1
                
                break
        
        uint32_t ecx
        
        if (eax_1 u>= 3)
            int32_t edx_1 = esi[0x1b]
            int32_t eax_5 = (esi[0x12] << (esi[0x16]).b ^ zx.d(*(esi[0xe] + edx_1 + 2))) & esi[0x15]
            int32_t ecx_4 = esi[0x11]
            int32_t edi_2 = esi[0xd] & edx_1
            int32_t edx_2 = esi[0x10]
            esi[0x12] = eax_5
            eax_5.w = *(ecx_4 + (eax_5 << 1))
            *(edx_2 + (edi_2 << 1)) = eax_5.w
            eax_1 = zx.d(*(esi[0x10] + ((esi[0x1b] & esi[0xd]) << 1)))
            edi_2.w = esi[0x1b].w
            *(esi[0x11] + (esi[0x12] << 1)) = edi_2.w
            
            if (eax_1 != 0 && esi[0x1b] - eax_1 u<= esi[0xb] - 0x106)
                eax_1, ecx = sub_673410(esi, eax_1)
                esi[0x18] = eax_1
        
        void* ebx_1
        
        if (esi[0x18] u< 3)
            int32_t eax_21
            eax_21.b = esi[0x1b][esi[0xe]]
            *(esi[0x5a9] + (esi[0x5a8] << 1)) = 0
            esi[0x5a6][esi[0x5a8]] = eax_21.b
            esi[0x5a8] += 1
            uint32_t eax_22 = zx.d(eax_21.b)
            esi[eax_22 + 0x25].w += 1
            ebx_1.b = esi[0x5a8] == esi[0x5a7] - 1
            esi[0x1d] -= 1
            esi[0x1b] += 1
        else
            ecx.w = esi[0x1b].w
            ecx.w -= esi[0x1c].w
            eax_1.b = esi[0x18].b
            int16_t ecx_8 = ecx.w
            *(esi[0x5a9] + (esi[0x5a8] << 1)) = ecx_8
            eax_1.b -= 3
            esi[0x5a6][esi[0x5a8]] = eax_1.b
            esi[0x5a8] += 1
            uint32_t edx_9 = zx.d(*(zx.d(eax_1.b) + 0x833fc0))
            esi[edx_9 + 0x126].w += 1
            uint32_t eax_7
            
            if (ecx_8 - 1 u>= 0x100)
                eax_7 = zx.d(*((zx.d(ecx_8 - 1) u>> 7) + 0x833ec0))
            else
                eax_7 = zx.d((&data_833dc0)[zx.d(ecx_8 - 1)])
            
            esi[eax_7 + 0x262].w += 1
            int32_t eax_10 = esi[0x18]
            ebx_1.b = esi[0x5a8] == esi[0x5a7] - 1
            esi[0x1d] -= eax_10
            
            if (eax_10 u> esi[0x20] || esi[0x1d] u< 3)
                esi[0x1b] += eax_10
                char* edx_16 = esi[0xe] + esi[0x1b]
                char ecx_15 = (esi[0x16]).b
                esi[0x18] = 0
                uint32_t eax_17 = zx.d(*edx_16)
                esi[0x12] = eax_17
                esi[0x12] = (eax_17 << ecx_15 ^ zx.d(edx_16[1])) & esi[0x15]
            else
                esi[0x18] = eax_10 - 1
                int32_t i
                
                do
                    esi[0x1b] += 1
                    int32_t edx_12 = esi[0x1b]
                    int32_t ecx_14 = esi[0x11]
                    int32_t eax_14 =
                        (zx.d(*(edx_12 + esi[0xe] + 2)) ^ esi[0x12] << (esi[0x16]).b) & esi[0x15]
                    int32_t ebx_4 = esi[0xd]
                    esi[0x12] = eax_14
                    *(esi[0x10] + ((ebx_4 & edx_12) << 1)) = *(ecx_14 + (eax_14 << 1))
                    *(esi[0x11] + (esi[0x12] << 1)) = esi[0x1b].w
                    i = esi[0x18]
                    esi[0x18] -= 1
                while (i != 1)
                esi[0x1b] += 1
        
        if (ebx_1 != 0)
            int32_t ecx_18 = esi[0x17]
            char* eax_25
            
            if (ecx_18 s< 0)
                eax_25 = nullptr
            else
                eax_25 = esi[0xe] + ecx_18
            
            sub_6781e0(esi, eax_25, esi[0x1b] - ecx_18, 0)
            void* edi_6 = *esi
            esi[0x17] = esi[0x1b]
            void* ebx_6 = *(edi_6 + 0x1c)
            sub_6780d0(ebx_6)
            void* eax_27 = *(ebx_6 + 0x14)
            void* ecx_19 = *(edi_6 + 0x10)
            arg1 = eax_27
            
            if (eax_27 u> ecx_19)
                arg1 = ecx_19
                eax_27 = ecx_19
            
            if (eax_27 != 0)
                sub_5ab990(*(edi_6 + 0xc), *(ebx_6 + 0x10), eax_27)
                *(edi_6 + 0xc) += arg1
                *(ebx_6 + 0x10) += arg1
                *(edi_6 + 0x14) += arg1
                *(edi_6 + 0x10) -= arg1
                int32_t temp1_1 = *(ebx_6 + 0x14)
                *(ebx_6 + 0x14) -= arg1
                
                if (temp1_1 == arg1)
                    *(ebx_6 + 0x10) = *(ebx_6 + 8)
            
            if (*(*esi + 0x10) == 0)
                break
    
    return 0
}
