// 函数名称: sub_673410
// 虚拟地址: 0x673410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_673410(void* arg1 @ edi, uint32_t arg2)
{
    // 第一条实际指令: int32_t edx = *(arg1 + 0x6c)
    int32_t edx = *(arg1 + 0x6c)
    int32_t var_10 = *(arg1 + 0x90)
    int32_t esi_1 = *(arg1 + 0x2c)
    char* ecx_1 = *(arg1 + 0x38) + edx
    uint32_t i_1 = *(arg1 + 0x7c)
    char* eax_1 = *(arg1 + 0x78)
    int32_t var_14
    
    if (edx u<= esi_1 - 0x106)
        var_14 = 0
    else
        var_14 = edx - esi_1 + 0x106
    
    char var_5 = *(eax_1 + ecx_1 - 1)
    void* esi_2 = &ecx_1[0x102]
    char var_6 = *(eax_1 + ecx_1)
    
    if (eax_1 u>= *(arg1 + 0x8c))
        i_1 u>>= 2
    
    int32_t edx_5 = *(arg1 + 0x74)
    
    if (var_10 u> edx_5)
        var_10 = edx_5
    
    uint32_t ebx_1 = arg2
    uint32_t i
    
    do
        char* edx_7 = *(arg1 + 0x38) + ebx_1
        ebx_1.b = var_6
        
        if (*(edx_7 + eax_1) == ebx_1.b)
            ebx_1.b = var_5
            
            if (*(edx_7 + eax_1 - 1) == ebx_1.b)
                ebx_1.b = *edx_7
                
                if (ebx_1.b == *ecx_1)
                    ebx_1.b = edx_7[1]
                    
                    if (ebx_1.b == ecx_1[1])
                        void* ecx_2 = &ecx_1[2]
                        void* edx_8 = &edx_7[2]
                        
                        do
                            ebx_1.b = *(ecx_2 + 1)
                            ecx_2 += 1
                            
                            if (ebx_1.b != *(edx_8 + 1))
                                break
                            
                            ebx_1.b = *(ecx_2 + 1)
                            ecx_2 += 1
                            
                            if (ebx_1.b != *(edx_8 + 2))
                                break
                            
                            ebx_1.b = *(ecx_2 + 1)
                            ecx_2 += 1
                            
                            if (ebx_1.b != *(edx_8 + 3))
                                break
                            
                            ebx_1.b = *(ecx_2 + 1)
                            ecx_2 += 1
                            
                            if (ebx_1.b != *(edx_8 + 4))
                                break
                            
                            ebx_1.b = *(ecx_2 + 1)
                            ecx_2 += 1
                            
                            if (ebx_1.b != *(edx_8 + 5))
                                break
                            
                            ebx_1.b = *(ecx_2 + 1)
                            ecx_2 += 1
                            
                            if (ebx_1.b != *(edx_8 + 6))
                                break
                            
                            ebx_1.b = *(ecx_2 + 1)
                            ecx_2 += 1
                            
                            if (ebx_1.b != *(edx_8 + 7))
                                break
                            
                            ebx_1.b = *(ecx_2 + 1)
                            ecx_2 += 1
                            edx_8 += 8
                            
                            if (ebx_1.b != *edx_8)
                                break
                        while (ecx_2 u< esi_2)
                        
                        ecx_1 = esi_2 - 0x102
                        
                        if (ecx_2 - esi_2 + 0x102 s> eax_1)
                            *(arg1 + 0x70) = arg2
                            eax_1 = ecx_2 - esi_2 + 0x102
                            
                            if (ecx_2 - esi_2 + 0x102 s>= var_10)
                                break
                            
                            ebx_1.b = *(ecx_2 - esi_2 + 0x102 + ecx_1 - 1)
                            char* edx_11
                            edx_11.b = *(ecx_2 - esi_2 + 0x102 + ecx_1)
                            var_5 = ebx_1.b
                            var_6 = edx_11.b
        
        ebx_1 = zx.d(*(*(arg1 + 0x40) + ((*(arg1 + 0x34) & arg2) << 1)))
        arg2 = ebx_1
        
        if (ebx_1 u<= var_14)
            break
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    char* ecx_3 = *(arg1 + 0x74)
    
    if (eax_1 u<= ecx_3)
        return eax_1
    
    return ecx_3
}
