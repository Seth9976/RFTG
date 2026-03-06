// 函数名称: sub_6741e0
// 虚拟地址: 0x6741e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_6741e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    
    while (true)
        void* i = arg1[0x1d]
        
        if (i u<= 0x102)
            sub_673570(arg1)
            i = arg1[0x1d]
            
            if (i u<= 0x102 && arg2 == 0)
                break
            
            if (i == 0)
                arg1[0x5ad] = 0
                
                if (arg2 == 4)
                    int32_t ecx_15 = arg1[0x17]
                    char* eax_15
                    
                    if (ecx_15 s< 0)
                        eax_15 = nullptr
                    else
                        eax_15 = arg1[0xe] + ecx_15
                    
                    sub_6781e0(arg1, eax_15, arg1[0x1b] - ecx_15, 1)
                    void* edi_2 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_673250(edi_2)
                    int32_t eax_17
                    eax_17.b = *(*arg1 + 0x10) != 0
                    return eax_17 + 2
                
                if (arg1[0x5a8] != 0)
                    int32_t ecx_17 = arg1[0x17]
                    char* eax_20
                    
                    if (ecx_17 s< 0)
                        eax_20 = nullptr
                    else
                        eax_20 = arg1[0xe] + ecx_17
                    
                    sub_6781e0(arg1, eax_20, arg1[0x1b] - ecx_17, 0)
                    void* edi_3 = *arg1
                    arg1[0x17] = arg1[0x1b]
                    sub_673250(edi_3)
                
                if (arg1[0x5a8] == 0 || *(*arg1 + 0x10) != 0)
                    return 1
                
                break
        
        arg1[0x18] = 0
        
        if (i u>= 3)
            i = arg1[0x1b]
            
            if (i != 0)
                void* edx_2 = arg1[0xe] + i
                uint32_t ecx_1 = zx.d(*(edx_2 - 1))
                
                if (ecx_1 == zx.d(*edx_2) && ecx_1 == zx.d(*(edx_2 + 1)))
                    i = edx_2 + 2
                    
                    if (ecx_1 == zx.d(*(edx_2 + 2)))
                        do
                            uint32_t ebx_4 = zx.d(*(i + 1))
                            i += 1
                            
                            if (ecx_1 != ebx_4)
                                break
                            
                            uint32_t ebx_5 = zx.d(*(i + 1))
                            i += 1
                            
                            if (ecx_1 != ebx_5)
                                break
                            
                            uint32_t ebx_6 = zx.d(*(i + 1))
                            i += 1
                            
                            if (ecx_1 != ebx_6)
                                break
                            
                            uint32_t ebx_7 = zx.d(*(i + 1))
                            i += 1
                            
                            if (ecx_1 != ebx_7)
                                break
                            
                            uint32_t ebx_8 = zx.d(*(i + 1))
                            i += 1
                            
                            if (ecx_1 != ebx_8)
                                break
                            
                            uint32_t ebx_9 = zx.d(*(i + 1))
                            i += 1
                            
                            if (ecx_1 != ebx_9)
                                break
                            
                            uint32_t ebx_10 = zx.d(*(i + 1))
                            i += 1
                            
                            if (ecx_1 != ebx_10)
                                break
                            
                            uint32_t ebx_11 = zx.d(*(i + 1))
                            i += 1
                            
                            if (ecx_1 != ebx_11)
                                break
                        while (i u< edx_2 + 0x102)
                        
                        int32_t ecx_2 = arg1[0x1d]
                        arg1[0x18] = i - (edx_2 + 0x102) + 0x102
                        
                        if (i - (edx_2 + 0x102) + 0x102 u> ecx_2)
                            arg1[0x18] = ecx_2
        
        int32_t edx_4 = arg1[0x5a8]
        int32_t ecx_7
        
        if (arg1[0x18] u< 3)
            char* eax_4
            eax_4.b = arg1[0xe][arg1[0x1b]]
            *(arg1[0x5a9] + (edx_4 << 1)) = 0
            arg1[0x5a6][arg1[0x5a8]] = eax_4.b
            arg1[0x5a8] += 1
            uint32_t edx_9 = zx.d(eax_4.b)
            arg1[edx_9 + 0x25].w += 1
            ecx_7.b = arg1[0x5a8] == arg1[0x5a7] - 1
            arg1[0x1d] -= 1
            arg1[0x1b] += 1
        else
            i.b = arg1[0x18].b
            i.b -= 3
            *(arg1[0x5a9] + (edx_4 << 1)) = 1
            arg1[0x5a6][arg1[0x5a8]] = i.b
            arg1[0x5a8] += 1
            uint32_t eax_2 = zx.d(*(zx.d(i.b) + 0x833fc0))
            arg1[eax_2 + 0x126].w += 1
            arg1[0x262].w += 1
            int32_t eax_3 = arg1[0x18]
            bool cond:0_1 = arg1[0x5a8] == arg1[0x5a7] - 1
            arg1[0x18] = 0
            int32_t edx_7
            edx_7.b = cond:0_1
            arg1[0x1d] -= eax_3
            arg1[0x1b] += eax_3
            ecx_7 = edx_7
        
        if (ecx_7 != 0)
            int32_t ecx_11 = arg1[0x17]
            char* eax_8
            
            if (ecx_11 s< 0)
                eax_8 = nullptr
            else
                eax_8 = arg1[0xe] + ecx_11
            
            sub_6781e0(arg1, eax_8, arg1[0x1b] - ecx_11, 0)
            void* edi_1 = *arg1
            arg1[0x17] = arg1[0x1b]
            void* ebx_12 = *(edi_1 + 0x1c)
            sub_6780d0(ebx_12)
            void* eax_10 = *(ebx_12 + 0x14)
            void* ecx_12 = *(edi_1 + 0x10)
            void* var_8_1 = eax_10
            
            if (eax_10 u> ecx_12)
                var_8_1 = ecx_12
                eax_10 = ecx_12
            
            if (eax_10 != 0)
                sub_5ab990(*(edi_1 + 0xc), *(ebx_12 + 0x10), eax_10)
                *(edi_1 + 0xc) += var_8_1
                *(ebx_12 + 0x10) += var_8_1
                *(edi_1 + 0x14) += var_8_1
                *(edi_1 + 0x10) -= var_8_1
                int32_t temp0_1 = *(ebx_12 + 0x14)
                *(ebx_12 + 0x14) -= var_8_1
                
                if (temp0_1 == var_8_1)
                    *(ebx_12 + 0x10) = *(ebx_12 + 8)
            
            if (*(*arg1 + 0x10) == 0)
                break
    
    return 0
}
