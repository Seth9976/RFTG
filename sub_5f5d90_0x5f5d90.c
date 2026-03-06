// 函数名称: sub_5f5d90
// 虚拟地址: 0x5f5d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f5d90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax << 2
    int32_t edi = *(arg1 + 0x10)
    int32_t ecx_1 = *(edi + eax - 4)
    void* esi = edi + edx - 0x10
    int32_t* edi_1 = edi + eax - 4
    int32_t eax_6
    int32_t edx_7
    edx_7:eax_6 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | ((ecx_1 & 0xff00) | ecx_1 << 0x10) << 8)
    int32_t ebx = eax_6
    int32_t var_18 = ebx
    int32_t var_14 = edx_7
    
    if (esi u>= edi)
        while (true)
            int32_t ecx_3 = *edi_1
            int32_t eax_12
            int32_t edx_14
            edx_14:eax_12 = sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8
                | ((ecx_3 & 0xff00) | ecx_3 << 0x10) << 8)
            int32_t ecx_6 = ebx * 2
            int32_t edi_4 = ebx + ecx_6
            *(esi + 0xc) = (edi_4 + eax_12) u>> 2 | adc.d(
                adc.d(var_14, var_14 << 1 | ebx u>> 0xffffffe1, ebx + ecx_6 u< ebx), edx_14, 
                edi_4 + eax_12 u< edi_4) << 0x1e
            *(esi + 8) =
                (eax_12 + var_18) u>> 1 | adc.d(edx_14, var_14, eax_12 + var_18 u< eax_12) << 0x1f
            int32_t ecx_11 = eax_12 * 2
            int32_t edi_10 = eax_12 + ecx_11
            *esi = eax_12
            *(esi + 4) = (edi_10 + var_18) u>> 2 | adc.d(
                adc.d(edx_14, edx_14 << 1 | eax_12 u>> 0xffffffe1, eax_12 + ecx_11 u< eax_12), var_14, 
                edi_10 + var_18 u< edi_10) << 0x1e
            esi -= 0x10
            ebx = eax_12
            var_18 = ebx
            var_14 = edx_14
            
            if (esi u< edi)
                break
            
            edi_1 -= 4
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_13 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_13 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_13 << 2) + 0x28))(arg1, arg2)
}
