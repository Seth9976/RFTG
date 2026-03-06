// 函数名称: sub_508dd0
// 虚拟地址: 0x508dd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_508dd0()
{
    // 第一条实际指令: int32_t* edi = data_30785d8
    int32_t* edi = data_30785d8
    int32_t* ecx = *edi
    int32_t i = 0
    int32_t* edx_1
    
    do
        edx_1 = *ecx
        
        if (edx_1 != 0)
            break
        
        i += 1
        ecx = &ecx[1]
    while (i u<= edi[1])
    
    int32_t* esi_1 = edx_1
    
    if (edx_1 != 0)
        while (true)
            int32_t* eax = esi_1[2]
            int32_t* ebx_1 = esi_1
            
            if (eax == 0)
                char* const eax_1 = *esi_1
                
                if (eax_1 == 0)
                    eax_1 = &data_83f3d3
                
                int32_t eax_2 = sub_519130(eax_1)
                int32_t edx_2 = edi[1]
                int32_t ecx_3 = (edx_2 & eax_2) + 1
                
                if (ecx_3 u<= edx_2)
                    int32_t** eax_4 = *edi + (ecx_3 << 2)
                    
                    do
                        esi_1 = *eax_4
                        
                        if (esi_1 != 0)
                            goto label_508e47
                        
                        ecx_3 += 1
                        eax_4 = &eax_4[1]
                    while (ecx_3 u<= edx_2)
                
                esi_1 = nullptr
            else
                esi_1 = eax
            
        label_508e47:
            i = sub_508d20(ebx_1[1])
            
            if (esi_1 == 0)
                break
            
            edi = data_30785d8
    
    return i
}
