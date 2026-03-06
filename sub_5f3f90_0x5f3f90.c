// 函数名称: sub_5f3f90
// 虚拟地址: 0x5f3f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f3f90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t ecx = eax << 2
    int32_t edi = *(esi + 0x10)
    void* ecx_1 = edi + ecx - 0x20
    void* edi_1 = edi + eax - 8
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(edi_1 + 4))
    int32_t ebx = eax_2
    int32_t var_1c = edx
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*edi_1)
    int32_t var_20 = ebx
    int32_t var_18 = eax_4
    int32_t var_14 = edx_1
    
    if (ecx_1 u>= edi)
        while (true)
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(*(edi_1 + 4))
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = sx.q(*edi_1)
            int32_t eax_10 = ebx * 2
            int32_t edi_4 = ebx + eax_10
            *(ecx_1 + 4) = eax_6
            *(ecx_1 + 0x1c) = (edi_4 + eax_6) u>> 2 | adc.d(
                adc.d(var_1c, var_1c << 1 | ebx u>> 0xffffffe1, ebx + eax_10 u< ebx), edx_2, 
                edi_4 + eax_6 u< edi_4) << 0x1e
            int32_t eax_12 = var_18 * 2
            int32_t edi_8 = var_18 + eax_12
            *(ecx_1 + 0x18) = (edi_8 + eax_8) u>> 2 | adc.d(
                adc.d(var_14, var_14 << 1 | var_18 u>> 0xffffffe1, var_18 + eax_12 u< var_18), edx_3, 
                edi_8 + eax_8 u< edi_8) << 0x1e
            *(ecx_1 + 0x14) =
                (eax_6 + var_20) u>> 1 | adc.d(edx_2, var_1c, eax_6 + var_20 u< eax_6) << 0x1f
            *(ecx_1 + 0x10) =
                (eax_8 + var_18) u>> 1 | adc.d(edx_3, var_14, eax_8 + var_18 u< eax_8) << 0x1f
            int32_t eax_17 = eax_6 * 2
            int32_t edi_17 = eax_6 + eax_17
            *(ecx_1 + 0xc) = (edi_17 + var_20) u>> 2 | adc.d(
                adc.d(edx_2, edx_2 << 1 | eax_6 u>> 0xffffffe1, eax_6 + eax_17 u< eax_6), var_1c, 
                edi_17 + var_20 u< edi_17) << 0x1e
            int32_t eax_19 = eax_8 * 2
            int32_t edi_21 = eax_8 + eax_19
            *ecx_1 = eax_8
            ebx = eax_6
            *(ecx_1 + 8) = (edi_21 + var_18) u>> 2 | adc.d(
                adc.d(edx_3, edx_3 << 1 | eax_8 u>> 0xffffffe1, eax_8 + eax_19 u< eax_8), var_14, 
                edi_21 + var_18 u< edi_21) << 0x1e
            var_20 = ebx
            var_18 = eax_8
            ecx_1 -= 0x20
            var_1c = edx_2
            var_14 = edx_3
            
            if (ecx_1 u< edi)
                break
            
            edi_1 -= 8
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = ecx
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
