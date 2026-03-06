// 函数名称: sub_565ea0
// 虚拟地址: 0x565ea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_565ea0(int32_t arg1)
{
    // 第一条实际指令: int32_t i
    int32_t i
    
    if (*(arg1 + 4) == 3)
        int32_t* edi_1 = data_30785d8
        int32_t* ecx_1 = *edi_1
        i = 0
        int32_t* edx_1
        
        do
            edx_1 = *ecx_1
            
            if (edx_1 != 0)
                break
            
            i += 1
            ecx_1 = &ecx_1[1]
        while (i u<= edi_1[1])
        
        int32_t* esi_2 = edx_1
        
        if (edx_1 != 0)
            void* eax_5
            
            while (true)
                int32_t* eax = esi_2[2]
                int32_t* ebx_1 = esi_2
                
                if (eax == 0)
                    char* const eax_1 = *esi_2
                    
                    if (eax_1 == 0)
                        eax_1 = &data_83f3d3
                    
                    int32_t eax_2 = sub_519130(eax_1)
                    int32_t edx_2 = edi_1[1]
                    int32_t ecx_4 = (edx_2 & eax_2) + 1
                    
                    if (ecx_4 u<= edx_2)
                        int32_t** eax_4 = *edi_1 + (ecx_4 << 2)
                        
                        do
                            esi_2 = *eax_4
                            
                            if (esi_2 != 0)
                                goto label_565f24
                            
                            ecx_4 += 1
                            eax_4 = &eax_4[1]
                        while (ecx_4 u<= edx_2)
                    
                    esi_2 = nullptr
                else
                    esi_2 = eax
                
            label_565f24:
                eax_5 = ebx_1[1]
                
                if (*(eax_5 + 4) == 0x12)
                    eax_5 = sub_466320(eax_5)
                    int32_t edx_3 = *(eax_5 + 0x14)
                    int32_t ecx_5 = 0
                    
                    if (edx_3 s> 0)
                        eax_5 = *(eax_5 + 0x18)
                        
                        do
                            if (*eax_5 == arg1)
                                eax_5.b = 1
                                return eax_5
                            
                            ecx_5 += 1
                            eax_5 += 0x1c
                        while (ecx_5 s< edx_3)
                
                if (esi_2 == 0)
                    break
                
                edi_1 = data_30785d8
            
            eax_5.b = 0
            return eax_5
    
    i.b = 0
    return i
}
