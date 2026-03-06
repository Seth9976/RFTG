// 函数名称: sub_5f6250
// 虚拟地址: 0x5f6250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f6250(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax << 2
    int32_t esi = *(arg1 + 0x10)
    void* ecx_1 = esi + edx - 0x20
    int32_t edx_1 = *(esi + eax - 4)
    int32_t* edi = esi + eax - 8
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 =
        sx.q(((edx_1 & 0xff0000) | edx_1 u>> 0x10) u>> 8 | ((edx_1 & 0xff00) | edx_1 << 0x10) << 8)
    int32_t var_18 = eax_6
    int32_t var_14 = edx_3
    int32_t edx_4 = *edi
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 =
        sx.q(((edx_4 & 0xff0000) | edx_4 u>> 0x10) u>> 8 | ((edx_4 & 0xff00) | edx_4 << 0x10) << 8)
    int32_t var_20 = eax_12
    int32_t var_1c = edx_6
    
    if (ecx_1 u>= esi)
        while (true)
            int32_t edx_7 = edi[1]
            int32_t eax_18
            int32_t edx_9
            edx_9:eax_18 = sx.q(((edx_7 & 0xff0000) | edx_7 u>> 0x10) u>> 8
                | ((edx_7 & 0xff00) | edx_7 << 0x10) << 8)
            int32_t edx_10 = *edi
            int32_t eax_24
            int32_t edx_12
            edx_12:eax_24 = sx.q(((edx_10 & 0xff0000) | edx_10 u>> 0x10) u>> 8
                | ((edx_10 & 0xff00) | edx_10 << 0x10) << 8)
            int32_t eax_26 = var_18 * 2
            int32_t edi_3 = var_18 + eax_26
            *(ecx_1 + 0x1c) = (edi_3 + eax_18) u>> 2 | adc.d(
                adc.d(var_14, var_14 << 1 | var_18 u>> 0xffffffe1, var_18 + eax_26 u< var_18), edx_9, 
                edi_3 + eax_18 u< edi_3) << 0x1e
            int32_t eax_28 = var_20 * 2
            int32_t edi_7 = var_20 + eax_28
            *(ecx_1 + 0x18) = (edi_7 + eax_24) u>> 2 | adc.d(
                adc.d(var_1c, var_1c << 1 | var_20 u>> 0xffffffe1, var_20 + eax_28 u< var_20), edx_12, 
                edi_7 + eax_24 u< edi_7) << 0x1e
            *(ecx_1 + 0x14) =
                (eax_18 + var_18) u>> 1 | adc.d(edx_9, var_14, eax_18 + var_18 u< eax_18) << 0x1f
            *(ecx_1 + 0x10) =
                (eax_24 + var_20) u>> 1 | adc.d(edx_12, var_1c, eax_24 + var_20 u< eax_24) << 0x1f
            int32_t eax_33 = eax_18 * 2
            int32_t edi_16 = eax_18 + eax_33
            *(ecx_1 + 4) = eax_18
            *(ecx_1 + 0xc) = (edi_16 + var_18) u>> 2 | adc.d(
                adc.d(edx_9, edx_9 << 1 | eax_18 u>> 0xffffffe1, eax_18 + eax_33 u< eax_18), var_14, 
                edi_16 + var_18 u< edi_16) << 0x1e
            int32_t eax_35 = eax_24 * 2
            int32_t edi_20 = eax_24 + eax_35
            *ecx_1 = eax_24
            *(ecx_1 + 8) = (edi_20 + var_20) u>> 2 | adc.d(
                adc.d(edx_12, edx_12 << 1 | eax_24 u>> 0xffffffe1, eax_24 + eax_35 u< eax_24), var_1c, 
                edi_20 + var_20 u< edi_20) << 0x1e
            var_20 = eax_24
            ecx_1 -= 0x20
            var_18 = eax_18
            var_14 = edx_9
            var_1c = edx_12
            
            if (ecx_1 u< esi)
                break
            
            edi -= 8
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2)
}
