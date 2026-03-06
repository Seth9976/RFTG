// 函数名称: sub_59ee60
// 虚拟地址: 0x59ee60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_59ee60(void* arg1, int16_t arg2)
{
    // 第一条实际指令: uint32_t edi = zx.d(arg2)
    uint32_t edi = zx.d(arg2)
    uint32_t i = zx.d(*(arg1 + (edi << 2) + 0x820))
    
    if (i.w s>= 0)
        i = sub_59ee60(arg1, i)
    
    int32_t ecx = *(arg1 + 0x4844)
    
    if (ecx s< *(arg1 + 0x483c))
        int32_t edx_1 = *(arg1 + 0x4820)
        char* eax_2 = *(arg1 + 8) + *(arg1 + 0x4840) + ecx
        uint32_t ecx_1 = zx.d(*(arg1 + (edi << 2) + 0x823))
        char* ecx_2 = edx_1 + (ecx_1 << 2)
        
        if (*(edx_1 + (ecx_1 << 2) + 3) u>= 0x80)
            *eax_2 = ecx_2[2]
            eax_2[1] = ecx_2[1]
            eax_2[2] = *ecx_2
            ecx_2.b = ecx_2[3]
            eax_2[3] = ecx_2.b
        
        *(arg1 + 0x4840) += 4
        i = *(arg1 + 0x4840)
        
        if (i s>= *(arg1 + 0x4838))
            *(arg1 + 0x4844) += *(arg1 + 0x4828)
            i = *(arg1 + 0x4844)
            *(arg1 + 0x4840) = *(arg1 + 0x4830)
            
            while (i s>= *(arg1 + 0x483c))
                int32_t ecx_3 = *(arg1 + 0x4824)
                
                if (ecx_3 s<= 0)
                    break
                
                *(arg1 + 0x4824) = ecx_3 - 1
                int32_t eax_5 = (1 << ecx_3.b) * *(arg1 + 0x4848)
                *(arg1 + 0x4828) = eax_5
                i = (eax_5 s>> 1) + *(arg1 + 0x4834)
                *(arg1 + 0x4844) = i
    
    return i
}
