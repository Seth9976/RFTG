// 函数名称: sub_5a8e80
// 虚拟地址: 0x5a8e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5a8e80(char* arg1, void* arg2)
{
    // 第一条实际指令: char* ecx_1 = arg2
    char* ecx_1 = arg2
    int16_t edx
    edx.b = *ecx_1
    char* result = arg1
    
    if (edx.b == 0)
        return result
    
    edx:1.b = ecx_1[1]
    
    if (edx:1.b != 0)
        while (true)
            void* ecx = arg2
            int16_t eax
            eax.b = *result
            void* esi_2 = &result[1]
            
            if (eax.b != edx.b)
                if (eax.b == 0)
                    return 0
                
                while (true)
                    eax.b = *esi_2
                    esi_2 += 1
                label_5a8eb0:
                    
                    if (eax.b == edx.b)
                        break
                    
                    if (eax.b == 0)
                        return 0
            
            eax.b = *esi_2
            esi_2 += 1
            
            if (eax.b != edx:1.b)
                break
            
            result = esi_2 - 1
            
            while (true)
                eax:1.b = *(ecx + 2)
                
                if (eax:1.b != 0)
                    eax.b = *esi_2
                    esi_2 += 2
                    
                    if (eax.b != eax:1.b)
                        break
                    
                    eax.b = *(ecx + 3)
                    
                    if (eax.b != 0)
                        eax:1.b = *(esi_2 - 1)
                        ecx += 2
                        
                        if (eax.b != eax:1.b)
                            break
                        
                        continue
                
                return &result[0xffffffff]
        
        goto label_5a8eb0
    
    int32_t eax_2
    eax_2.b = edx.b
    int32_t ebx
    int32_t var_4_1 = ebx
    char* edx_1 = arg1
    
    while ((edx_1 & 3) != 0)
        ecx_1.b = *edx_1
        edx_1 = &edx_1[1]
        
        if (ecx_1.b == eax_2.b)
            return &edx_1[0xffffffff]
        
        if (ecx_1.b == 0)
            return 0
    
    int32_t ebx_7 = eax_2 | eax_2 << 8
    int32_t edi
    int32_t var_8_1 = edi
    int32_t esi
    int32_t var_c_1 = esi
    int32_t ebx_9 = ebx_7 << 0x10 | ebx_7
    
    while (true)
        int32_t ecx_2 = *edx_1
        int32_t ecx_3 = ecx_2 ^ ebx_9
        edx_1 = &edx_1[4]
        
        if (((ecx_3 ^ 0xffffffff ^ (0x7efefeff + ecx_3)) & 0x81010100) != 0)
            int32_t eax_14 = *(edx_1 - 4)
            
            if (eax_14.b == ebx_9.b)
                return &edx_1[0xfffffffc]
            
            if (eax_14.b == 0)
                break
            
            if (eax_14:1.b == ebx_9.b)
                return &edx_1[0xfffffffd]
            
            if (eax_14:1.b == 0)
                break
            
            uint16_t eax_15 = (eax_14 u>> 0x10).w
            
            if (eax_15.b == ebx_9.b)
                return &edx_1[0xfffffffe]
            
            if (eax_15.b == 0)
                break
            
            if (eax_15:1.b == ebx_9.b)
                return &edx_1[0xffffffff]
            
            if (eax_15:1.b == 0)
                break
        else
            int32_t eax_11 = (ecx_2 ^ 0xffffffff ^ (0x7efefeff + ecx_2)) & 0x81010100
            
            if (eax_11 != 0)
                if ((eax_11 & 0x1010100) != 0)
                    break
                
                if (((0x7efefeff + ecx_2) & 0x80000000) == 0)
                    break
    
    return 0
}
