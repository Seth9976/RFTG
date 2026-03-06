// 函数名称: sub_5be120
// 虚拟地址: 0x5be120
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5be120(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t esi = 0
    int32_t esi = 0
    int32_t result = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    
    if (*(arg1 + 0x28) != 0 || *(arg1 + 0x18) != *(arg1 + 0x14))
        result = 1
    
    int32_t ebx = *(arg1 + 0x34)
    int32_t eax_2 = *(arg1 + 0x30)
    int32_t edi = 0
    
    if (ebx u>= 0 && (ebx u> 0 || eax_2 u> 0))
        int32_t eax_3 = *(arg1 + 0x40)
        
        while (true)
            int32_t ecx_2 = esi * 2
            char edx = *(eax_3 + (ecx_2 << 3) + 0xc)
            
            if (edx != 0 || *(eax_3 + (ecx_2 << 3) + 8) != 0)
                result = 1
            else
                int32_t* ecx_3 = *(eax_3 + (ecx_2 << 3) + 4)
                
                if (ecx_3 != 0 && *ecx_3 != 0)
                    result = 1
            
            if (edx == 0)
                int32_t temp1_1 = var_10
                var_10 += 1
                var_c = adc.d(var_c, 0, temp1_1 u>= 0xffffffff)
            
            int32_t temp0_1 = esi
            esi += 1
            edi = adc.d(edi, 0, temp0_1 u>= 0xffffffff)
            
            if (edi u>= ebx)
                if (edi u> ebx)
                    break
                
                if (esi u>= eax_2)
                    break
    
    if (arg2 != 0)
        *arg2 = var_10
        arg2[1] = var_c
    
    return result
}
