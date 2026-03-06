// 函数名称: sub_67dc40
// 虚拟地址: 0x67dc40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67dc40(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    void* ebx = *(esi + 0x1ac)
    int32_t i = 0
    void* var_8 = ebx
    int32_t var_34[0x4]
    
    if (*(esi + 0x148) s> 0)
        void* var_c_1 = esi + 0x14c
        
        do
            void* eax_2 = *var_c_1
            int32_t ecx_2 = *(eax_2 + 0xc)
            ebx = var_8
            var_c_1 += 4
            var_34[i] = (*(*(esi + 4) + 0x20))(esi, *(ebx + (*(eax_2 + 4) << 2) + 0x48), 
                *(esi + 0x94) * ecx_2, ecx_2, 1)
            i += 1
        while (i s< *(esi + 0x148))
    
    int32_t i_1 = *(ebx + 0x18)
    int32_t i_2 = i_1
    
    while (i_1 s< *(ebx + 0x1c))
        int32_t j = *(ebx + 0x14)
        int32_t j_1 = j
        
        if (j u< *(esi + 0x15c))
            do
                int32_t k_1 = 0
                
                if (*(esi + 0x148) s> 0)
                    void* var_18_1 = esi + 0x14c
                    int32_t ebx_3 = 0
                    int32_t k
                    
                    do
                        void* edi = *var_18_1
                        int32_t ecx_5 = *(edi + 0x34)
                        int32_t var_20_1 = 0
                        
                        if (*(edi + 0x38) s> 0)
                            int32_t eax_8 = (ecx_5 * j_1) << 7
                            int32_t* var_10_1 = var_34[k_1] + (i_2 << 2)
                            int32_t eax_14
                            
                            do
                                int32_t eax_12 = *var_10_1 + eax_8
                                int32_t edx_6 = 0
                                
                                if (ecx_5 s> 0)
                                    void* esi_1 = var_8 + (ebx_3 << 2) + 0x20
                                    
                                    do
                                        *esi_1 = eax_12
                                        ecx_5 = *(edi + 0x34)
                                        edx_6 += 1
                                        ebx_3 += 1
                                        esi_1 += 4
                                        eax_12 -= 0xffffff80
                                    while (edx_6 s< ecx_5)
                                    
                                    esi = arg1
                                
                                var_10_1 = &var_10_1[1]
                                eax_14 = var_20_1 + 1
                                var_20_1 = eax_14
                            while (eax_14 s< *(edi + 0x38))
                        
                        var_18_1 += 4
                        k = k_1 + 1
                        k_1 = k
                    while (k s< *(esi + 0x148))
                    j = j_1
                
                ebx = var_8
                
                if ((*(*(esi + 0x1bc) + 4))(esi, ebx + 0x20) == 0)
                    *(ebx + 0x14) = j
                    *(ebx + 0x18) = i_2
                    return 0
                
                j += 1
                j_1 = j
            while (j u< *(esi + 0x15c))
            
            i_1 = i_2
        
        i_1 += 1
        *(ebx + 0x14) = 0
        i_2 = i_1
    
    int32_t edx_8 = *(esi + 0x140)
    *(esi + 0x94) += 1
    int32_t ecx_7 = *(esi + 0x94)
    
    if (ecx_7 u>= edx_8)
        (*(*(esi + 0x1b4) + 0xc))(esi)
        return 4
    
    void* eax_19 = *(esi + 0x1ac)
    
    if (*(esi + 0x148) s> 1)
        *(eax_19 + 0x1c) = 1
        *(eax_19 + 0x14) = 0
        *(eax_19 + 0x18) = 0
        return 3
    
    void* edx_10 = *(esi + 0x14c)
    int32_t ecx_9
    
    if (ecx_7 u>= edx_8 - 1)
        ecx_9 = *(edx_10 + 0x48)
    else
        ecx_9 = *(edx_10 + 0xc)
    
    *(eax_19 + 0x1c) = ecx_9
    *(eax_19 + 0x14) = 0
    *(eax_19 + 0x18) = 0
    return 3
}
