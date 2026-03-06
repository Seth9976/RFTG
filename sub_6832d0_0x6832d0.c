// 函数名称: sub_6832d0
// 虚拟地址: 0x6832d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6832d0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t i_4 = arg1[0x1e]
    int32_t i_4 = arg1[0x1e]
    int32_t edx = arg1[0x18]
    int32_t i_5 = i_4
    int32_t ebx = 1
    int32_t eax_1
    
    do
        ebx += 1
        eax_1 = ebx
        
        if (i_4 s> 1)
            int32_t i_2 = i_4 - 1
            int32_t i
            
            do
                eax_1 *= ebx
                i = i_2
                i_2 -= 1
            while (i != 1)
    while (eax_1 s<= edx)
    
    if (ebx - 1 s< 2)
        *(*arg1 + 0x14) = 0x38
        *(*arg1 + 0x18) = eax_1
        (**arg1)(arg1)
    
    int32_t result = 1
    
    if (i_4 s> 0)
        int32_t i_3 = i_4
        int32_t ecx_5
        int32_t edi_2
        edi_2, ecx_5 = __memfill_u32(arg2, ebx - 1, i_4)
        int32_t i_1
        
        do
            i_1 = i_3
            i_3 -= 1
            result *= ebx - 1
        while (i_1 != 1)
    
    while (true)
        int32_t ebx_2 = 0
        int32_t var_10_1 = 0
        
        if (i_4 s> 0)
            while (true)
                int32_t edi_4
                
                if (arg1[0xb] != 2)
                    edi_4 = ebx_2
                else
                    edi_4 = *((ebx_2 << 2) + &data_835bb0)
                
                int32_t esi = *(arg2 + (edi_4 << 2))
                int32_t result_1 = divs.dp.d(sx.q(result), esi) * (esi + 1)
                
                if (result_1 s> edx)
                    break
                
                ebx_2 += 1
                *(arg2 + (edi_4 << 2)) = esi + 1
                result = result_1
                var_10_1 = 1
                
                if (ebx_2 s>= i_5)
                    goto label_683350
        
        if (i_4 s<= 0 || var_10_1 == 0)
            return result
        
    label_683350:
        i_4 = i_5
}
