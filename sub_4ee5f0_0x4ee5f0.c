// 函数名称: sub_4ee5f0
// 虚拟地址: 0x4ee5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4ee5f0(void* arg1)
{
    // 第一条实际指令: int32_t* eax_2 = sub_466320(**(arg1 + 0x2e4))
    int32_t* eax_2 = sub_466320(**(arg1 + 0x2e4))
    int32_t* eax_4 = sub_466320(**(arg1 + 0x2e4))
    int32_t edi = *(arg1 + 0x2dc)
    int32_t result = *eax_4
    int32_t edx_2 = *(edi * 0x134 + result + 8)
    int32_t i = edi + 1
    int32_t var_c = edx_2
    
    if (i s< eax_2[1])
        int32_t ecx_2 = i * 0x134
        int32_t var_8_1 = ecx_2
        
        do
            result = *(*eax_2 + ecx_2 + 8)
            
            if (result s<= edx_2)
                break
            
            if (result == edx_2 + 1)
                result = sub_4ee550(arg1, i)
                ecx_2 = var_8_1
                edx_2 = var_c
            
            i += 1
            ecx_2 += 0x134
            var_8_1 = ecx_2
        while (i s< eax_2[1])
    
    return result
}
