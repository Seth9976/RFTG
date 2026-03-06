// 函数名称: sub_676ae0
// 虚拟地址: 0x676ae0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_676ae0(void* arg1, int32_t arg2 @ edi, int32_t arg3)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t edx = *(arg1 + 0x1450)
    int32_t ebx = *(arg1 + (arg3 << 2) + 0xb5c)
    int32_t ecx_1 = arg3 * 2
    bool cond:0 = ecx_1 s>= edx
    
    if (ecx_1 s> edx)
        *(arg1 + (arg3 << 2) + 0xb5c) = ebx
        return 
    
    int32_t esi_4
    int32_t edx_6
    
    do
        if (not(cond:0))
            int32_t esi_1 = *(arg1 + (ecx_1 << 2) + 0xb60)
            int16_t edx_1 = *(arg2 + (esi_1 << 2))
            int16_t ebx_2 = *(arg2 + (*(arg1 + (ecx_1 << 2) + 0xb5c) << 2))
            
            if (edx_1 u< ebx_2)
                ecx_1 += 1
            else if (edx_1 == ebx_2)
                edx_1.b = *(esi_1 + arg1 + 0x1458)
                
                if (edx_1.b u<= *(*(arg1 + (ecx_1 << 2) + 0xb5c) + arg1 + 0x1458))
                    ecx_1 += 1
        
        int32_t esi_3 = *(arg1 + (ecx_1 << 2) + 0xb5c)
        int16_t edx_3 = *(arg2 + (ebx << 2))
        int16_t ebx_3 = *(arg2 + (esi_3 << 2))
        
        if (edx_3 u< ebx_3)
            *(arg1 + (arg3 << 2) + 0xb5c) = ebx
            return 
        
        if (edx_3 == ebx_3)
            ebx_3.b = *(ebx + arg1 + 0x1458)
            
            if (ebx_3.b u<= *(esi_3 + arg1 + 0x1458))
                *(arg1 + (arg3 << 2) + 0xb5c) = ebx
                return 
        
        *(arg1 + (arg3 << 2) + 0xb5c) = esi_3
        edx_6 = *(arg1 + 0x1450)
        esi_4 = ecx_1
        ecx_1 *= 2
        arg3 = esi_4
        cond:0 = ecx_1 s>= edx_6
    while (ecx_1 s<= edx_6)
    *(arg1 + (esi_4 << 2) + 0xb5c) = ebx
}
