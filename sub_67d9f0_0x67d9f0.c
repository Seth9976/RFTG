// 函数名称: sub_67d9f0
// 虚拟地址: 0x67d9f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_67d9f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    void* ecx = *(ebx + 0x1ac)
    int32_t eax_1 = *(ebx + 0x140) - 1
    int32_t i = *(ecx + 0x18)
    int32_t edx_1 = *(ebx + 0x15c) - 1
    void* var_10 = ecx
    int32_t var_20 = edx_1
    int32_t i_1 = i
    
    while (i s< *(ecx + 0x1c))
        int32_t edi_1 = *(ecx + 0x14)
        int32_t var_c_1 = edi_1
        
        if (edi_1 u<= edx_1)
            int32_t edi_2 = edi_1
            
            do
                sub_67d220(*(ecx + 0x20), *(ebx + 0x164) << 7)
                
                if ((*(*(ebx + 0x1bc) + 4))(ebx, ecx + 0x20) == 0)
                    *(var_10 + 0x14) = edi_2
                    *(var_10 + 0x18) = i_1
                    return 0
                
                int32_t ecx_2 = 0
                int32_t var_14_1 = 0
                int32_t j_1 = 0
                
                if (*(ebx + 0x148) s> 0)
                    void* var_1c_1 = ebx + 0x14c
                    int32_t j
                    
                    do
                        void* esi_2 = *var_1c_1
                        
                        if (*(esi_2 + 0x30) != 0)
                            int32_t* eax_9 = *(esi_2 + 4) * 4
                            int32_t edx_5 = *(*(ebx + 0x1c0) + eax_9 + 4)
                            int32_t edx_6
                            
                            if (edi_2 u>= var_20)
                                edx_6 = *(esi_2 + 0x44)
                            else
                                edx_6 = *(esi_2 + 0x34)
                            
                            int32_t edi_5 = *(esi_2 + 0x40) * var_c_1
                            int32_t k = 0
                            int32_t var_18_1 = *(eax_9 + arg2) + ((*(esi_2 + 0x24) * i_1) << 2)
                            int32_t var_3c_1 = edi_5
                            int32_t k_1 = 0
                            
                            if (*(esi_2 + 0x38) s> 0)
                                do
                                    if ((*(ebx + 0x94) u< eax_1 || i_1 + k s< *(esi_2 + 0x48))
                                            && edx_6 s> 0)
                                        void* ebx_1 = var_10 + (ecx_2 << 2) + 0x20
                                        int32_t var_28_1 = edx_6
                                        int32_t temp0_1
                                        
                                        do
                                            edx_5(arg1, esi_2, *ebx_1, var_18_1, edi_5)
                                            edi_5 += *(esi_2 + 0x24)
                                            ebx_1 += 4
                                            temp0_1 = var_28_1
                                            var_28_1 -= 1
                                        while (temp0_1 != 1)
                                        edi_5 = var_3c_1
                                        ecx_2 = var_14_1
                                        k = k_1
                                    
                                    ecx_2 += *(esi_2 + 0x34)
                                    k += 1
                                    ebx = arg1
                                    var_14_1 = ecx_2
                                    var_18_1 += *(esi_2 + 0x24) << 2
                                    k_1 = k
                                while (k s< *(esi_2 + 0x38))
                        else
                            ecx_2 += *(esi_2 + 0x3c)
                            var_14_1 = ecx_2
                        
                        var_1c_1 += 4
                        edi_2 = var_c_1
                        j = j_1 + 1
                        j_1 = j
                    while (j s< *(ebx + 0x148))
                
                ecx = var_10
                edi_2 += 1
                var_c_1 = edi_2
            while (edi_2 u<= var_20)
            
            i = i_1
            edx_1 = var_20
        
        i += 1
        *(ecx + 0x14) = 0
        i_1 = i
    
    *(ebx + 0x94) += 1
    int32_t ecx_4 = *(ebx + 0x94)
    int32_t edx_17 = *(ebx + 0x140)
    *(ebx + 0x9c) += 1
    
    if (ecx_4 u>= edx_17)
        (*(*(ebx + 0x1b4) + 0xc))(ebx)
        return 4
    
    void* eax_14 = *(ebx + 0x1ac)
    
    if (*(ebx + 0x148) s> 1)
        *(eax_14 + 0x1c) = 1
        *(eax_14 + 0x14) = 0
        *(eax_14 + 0x18) = 0
        return 3
    
    void* edx_19 = *(ebx + 0x14c)
    int32_t ecx_6
    
    if (ecx_4 u>= edx_17 - 1)
        ecx_6 = *(edx_19 + 0x48)
    else
        ecx_6 = *(edx_19 + 0xc)
    
    *(eax_14 + 0x1c) = ecx_6
    *(eax_14 + 0x14) = 0
    *(eax_14 + 0x18) = 0
    return 3
}
