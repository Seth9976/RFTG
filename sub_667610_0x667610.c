// 函数名称: sub_667610
// 虚拟地址: 0x667610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_667610(uint32_t arg1, char* arg2, void* arg3)
{
    // 第一条实际指令: char* result = arg2
    char* result = arg2
    int32_t esi_2 = (zx.d(*(arg1 + 0xb)) + 7) s>> 3
    void* edx = &result[esi_2]
    
    if (result u< edx)
        do
            char* edi_1 = arg3
            *result += *edi_1
            result = &result[1]
            arg3 = &edi_1[1]
        while (result u< edx)
        
        arg2 = result
    
    void* edx_1 = edx + *(arg1 + 4) - esi_2
    
    if (result u< edx_1)
        void* edx_3 = result - esi_2
        void* var_8_1 = edx_3
        void* ecx_7 = arg3 - esi_2
        
        while (true)
            uint32_t ebx_2 = zx.d(*edx_3)
            uint32_t eax_1 = zx.d(*ecx_7)
            uint32_t edi_3 = zx.d(*arg3)
            arg3 += 1
            uint32_t edi_4 = edi_3 - eax_1
            arg1 = ebx_2
            uint32_t ebx_3 = ebx_2 - eax_1
            int32_t eax_3
            int32_t edx_5
            edx_5:eax_3 = sx.q(edi_4)
            int32_t ecx_11 = (eax_3 ^ edx_5) - edx_5
            int32_t eax_5
            int32_t edx_6
            edx_6:eax_5 = sx.q(ebx_3)
            int32_t esi_5 = (eax_5 ^ edx_6) - edx_6
            int32_t eax_7
            int32_t edx_7
            edx_7:eax_7 = sx.q(ebx_3 + edi_4)
            
            if (esi_5 s< ecx_11)
                ecx_11 = esi_5
                arg1 = edi_3
            
            if ((eax_7 ^ edx_7) - edx_7 s< ecx_11)
                arg1 = eax_1
            
            ecx_11.b = arg1.b
            *arg2 += ecx_11.b
            var_8_1 += 1
            result = &arg2[1]
            arg2 = result
            
            if (result u>= edx_1)
                break
            
            edx_3 = var_8_1
            ecx_7 += 1
    
    return result
}
