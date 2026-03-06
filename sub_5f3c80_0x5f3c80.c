// 函数名称: sub_5f3c80
// 虚拟地址: 0x5f3c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f3c80(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax << 2
    int32_t edi = *(arg1 + 0x10)
    void* ecx_1 = edi + edx - 0x10
    int32_t* edi_1 = edi + eax - 4
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(*edi_1)
    int32_t ebx = eax_2
    int32_t esi = edx_1
    int32_t var_18 = ebx
    int32_t var_14 = esi
    
    if (ecx_1 u>= edi)
        while (true)
            int32_t eax_4
            int32_t edx_2
            edx_2:eax_4 = sx.q(*edi_1)
            int32_t edx_4 = ebx * 2
            int32_t edi_4 = ebx + edx_4
            *(ecx_1 + 0xc) = (edi_4 + eax_4) u>> 2 | adc.d(
                adc.d(esi, esi << 1 | ebx u>> 0xffffffe1, ebx + edx_4 u< ebx), edx_2, 
                edi_4 + eax_4 u< edi_4) << 0x1e
            *(ecx_1 + 8) =
                (eax_4 + var_18) u>> 1 | adc.d(edx_2, var_14, eax_4 + var_18 u< eax_4) << 0x1f
            int32_t edx_9 = eax_4 * 2
            int32_t edi_10 = eax_4 + edx_9
            esi = edx_2
            *ecx_1 = eax_4
            *(ecx_1 + 4) = (edi_10 + var_18) u>> 2 | adc.d(
                adc.d(edx_2, edx_2 << 1 | eax_4 u>> 0xffffffe1, eax_4 + edx_9 u< eax_4), var_14, 
                edi_10 + var_18 u< edi_10) << 0x1e
            ecx_1 -= 0x10
            ebx = eax_4
            var_18 = ebx
            var_14 = esi
            
            if (ecx_1 u< edi)
                break
            
            edi_1 -= 4
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2)
}
