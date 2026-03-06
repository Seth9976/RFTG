// 函数名称: sub_5c0e70
// 虚拟地址: 0x5c0e70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c0e70(char* arg1)
{
    // 第一条实际指令: char* result
    char* result
    
    if (*arg1 != 0)
        int32_t ecx_1 = *(arg1 + 0x10)
        int32_t edx_2 = adc.d(*(arg1 + 0x14), 0, ecx_1 u>= 0xffffffff)
        
        if (edx_2 != 0 || ecx_1 + 1 u>= 1)
            int32_t temp1_1 = *(arg1 + 0xc)
            
            if (edx_2 u<= temp1_1 && (edx_2 u< temp1_1 || ecx_1 + 1 u<= *(arg1 + 8)))
                char* esi_1 = *(arg1 + 4) + *(arg1 + 0x10)
                *(arg1 + 0x10) = ecx_1 + 1
                *(arg1 + 0x14) = edx_2
                
                if (esi_1 != 0)
                    result.b = *esi_1
                    return result
                
                result.b = 0
                return result
    
    *arg1 = 0
    result.b = 0
    return result
}
