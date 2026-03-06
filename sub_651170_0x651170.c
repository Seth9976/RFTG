// 函数名称: sub_651170
// 虚拟地址: 0x651170
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_651170(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = *(arg1 + 0x28)
    int32_t var_8 = *(arg1 + 0x28)
    int32_t eax_1 = sub_68af80(arg2, *(arg1 + 0x24))
    int32_t result
    int32_t edi_2
    
    if (eax_1 s< 0)
        edi_2 = *(arg1 + 8)
        result = 0
    else
        int32_t ebx_1 = *(*(arg1 + 0x20) + (eax_1 << 2))
        
        if (ebx_1 s>= 0)
            sub_68b040(arg2, sx.d(*(*(arg1 + 0x1c) + ebx_1 - 1)))
            return ebx_1 - 1
        
        result = ebx_1 s>> 0xf & 0x7fff
        edi_2 = *(arg1 + 8) - (ebx_1 & 0x7fff)
    
    int32_t ebx_3 = var_8
    int32_t i
    int32_t ecx_2
    i, ecx_2 = sub_68af80(arg2, ebx_3)
    
    if (i s< 0)
        do
            if (ebx_3 s<= 1)
                var_8 = ebx_3
                
                if (i s< 0)
                    goto label_651292
                
                goto label_651215
            
            ebx_3 -= 1
            i = sub_68af80(arg2, ebx_3)
        while (i s< 0)
        
        var_8 = ebx_3
    
    label_651215:
    int32_t eax_5 = sub_651110(i)
    int32_t i_1 = edi_2 - result
    
    if (i_1 s> 1)
        do
            int32_t edx_4 = i_1 s>> 1
            int32_t ecx_7 = edx_4 + result
            int32_t ecx_9 = neg.d(sbb.d(ecx_7, ecx_7, eax_5 u< *(*(arg1 + 0x14) + (ecx_7 << 2))))
            edi_2 -= neg.d(ecx_9) & edx_4
            result += (ecx_9 - 1) & edx_4
            i_1 = edi_2 - result
        while (i_1 s> 1)
        
        ebx_3 = var_8
    
    int32_t eax_7 = sx.d(*(*(arg1 + 0x1c) + result))
    
    if (eax_7 s<= ebx_3)
        sub_68b040(arg2, eax_7)
        return result
    
    sub_68b040(arg2, ebx_3)
    label_651292:
    return 0xffffffff
}
