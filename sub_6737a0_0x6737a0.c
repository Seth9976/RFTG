// 函数名称: sub_6737a0
// 虚拟地址: 0x6737a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6737a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* esi = arg1
    int32_t eax_1 = esi[3] - 5
    int32_t var_8_1 = 0xffff
    
    if (eax_1 u< 0xffff)
        var_8_1 = eax_1
    
    while (true)
        int32_t eax_2 = esi[0x1d]
        
        if (eax_2 u<= 1)
            sub_673570(esi)
            eax_2 = esi[0x1d]
            
            if (eax_2 == 0)
                if (arg2 != 0)
                    esi[0x5ad] = 0
                    
                    if (arg2 == 4)
                        int32_t ecx_10 = esi[0x17]
                        char* eax_19
                        
                        if (ecx_10 s< 0)
                            eax_19 = nullptr
                        else
                            eax_19 = esi[0xe] + ecx_10
                        
                        sub_6781e0(esi, eax_19, esi[0x1b] - ecx_10, 1)
                        void* edi_3 = *esi
                        esi[0x17] = esi[0x1b]
                        sub_673250(edi_3)
                        int32_t eax_21
                        eax_21.b = *(*esi + 0x10) != 0
                        return eax_21 + 2
                    
                    int32_t eax_23 = esi[0x1b]
                    int32_t edx_12 = esi[0x17]
                    
                    if (eax_23 s> edx_12)
                        char* ecx_13
                        
                        if (edx_12 s< 0)
                            ecx_13 = nullptr
                        else
                            ecx_13 = esi[0xe] + edx_12
                        
                        sub_6781e0(esi, ecx_13, eax_23 - edx_12, 0)
                        void* edi_4 = *esi
                        esi[0x17] = esi[0x1b]
                        sub_673250(edi_4)
                    
                    if (eax_23 s<= edx_12 || *(*esi + 0x10) != 0)
                        return 1
                
                break
        
        int32_t temp0_1 = esi[0x1b]
        esi[0x1b] += eax_2
        int32_t ecx_1 = esi[0x17]
        int32_t edx_1 = esi[0x1b]
        esi[0x1d] = 0
        int32_t eax_4 = ecx_1 + var_8_1
        
        if (temp0_1 == neg.d(eax_2) || edx_1 u>= eax_4)
            esi[0x1d] = edx_1 - eax_4
            esi[0x1b] = eax_4
            char* edx_4
            
            if (ecx_1 s< 0)
                edx_4 = nullptr
            else
                edx_4 = esi[0xe] + ecx_1
            
            sub_6781e0(esi, edx_4, eax_4 - ecx_1, 0)
            void* edi_1 = *esi
            esi[0x17] = esi[0x1b]
            void* ebx_1 = *(edi_1 + 0x1c)
            sub_6780d0(ebx_1)
            void* eax_6 = *(ebx_1 + 0x14)
            void* ecx_3 = *(edi_1 + 0x10)
            arg1 = eax_6
            
            if (eax_6 u> ecx_3)
                arg1 = ecx_3
                eax_6 = ecx_3
            
            if (eax_6 != 0)
                sub_5ab990(*(edi_1 + 0xc), *(ebx_1 + 0x10), eax_6)
                *(edi_1 + 0xc) += arg1
                *(ebx_1 + 0x10) += arg1
                *(edi_1 + 0x14) += arg1
                *(edi_1 + 0x10) -= arg1
                int32_t temp1_1 = *(ebx_1 + 0x14)
                *(ebx_1 + 0x14) -= arg1
                
                if (temp1_1 == arg1)
                    *(ebx_1 + 0x10) = *(ebx_1 + 8)
            
            if (*(*esi + 0x10) == 0)
                break
        
        int32_t edx_7 = esi[0x17]
        void* ecx_6 = esi[0x1b] - edx_7
        
        if (ecx_6 u>= esi[0xb] - 0x106)
            char* eax_12
            
            if (edx_7 s< 0)
                eax_12 = nullptr
            else
                eax_12 = esi[0xe] + edx_7
            
            sub_6781e0(esi, eax_12, ecx_6, 0)
            void* edi_2 = *esi
            esi[0x17] = esi[0x1b]
            void* ebx_2 = *(edi_2 + 0x1c)
            sub_6780d0(ebx_2)
            void* eax_13 = *(ebx_2 + 0x14)
            void* ecx_8 = *(edi_2 + 0x10)
            arg1 = eax_13
            
            if (eax_13 u> ecx_8)
                arg1 = ecx_8
                eax_13 = ecx_8
            
            if (eax_13 != 0)
                sub_5ab990(*(edi_2 + 0xc), *(ebx_2 + 0x10), eax_13)
                *(edi_2 + 0xc) += arg1
                *(ebx_2 + 0x10) += arg1
                *(edi_2 + 0x14) += arg1
                *(edi_2 + 0x10) -= arg1
                int32_t temp2_1 = *(ebx_2 + 0x14)
                *(ebx_2 + 0x14) -= arg1
                
                if (temp2_1 == arg1)
                    *(ebx_2 + 0x10) = *(ebx_2 + 8)
            
            if (*(*esi + 0x10) == 0)
                break
    
    return 0
}
