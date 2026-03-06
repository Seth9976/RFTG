// 函数名称: sub_5f4460
// 虚拟地址: 0x5f4460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f4460(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax = *(esi + 0x18)
    int32_t ecx = eax << 2
    int32_t edi = *(esi + 0x10)
    void* ecx_1 = edi + ecx - 0x40
    void* edi_1 = edi + eax - 0x10
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(edi_1 + 0xc))
    int32_t ebx = eax_2
    int32_t var_3c = edx
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(edi_1 + 8))
    int32_t var_20 = eax_4
    int32_t var_1c = edx_1
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(*(edi_1 + 4))
    int32_t var_30 = eax_6
    int32_t var_2c = edx_2
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(*edi_1)
    int32_t var_40 = ebx
    int32_t var_38 = eax_8
    int32_t var_34 = edx_3
    
    if (ecx_1 u>= edi)
        while (true)
            int32_t eax_10
            int32_t edx_4
            edx_4:eax_10 = sx.q(*(edi_1 + 0xc))
            int32_t eax_12
            int32_t edx_5
            edx_5:eax_12 = sx.q(*(edi_1 + 8))
            int32_t eax_14
            int32_t edx_6
            edx_6:eax_14 = sx.q(*(edi_1 + 4))
            int32_t eax_16
            int32_t edx_7
            edx_7:eax_16 = sx.q(*edi_1)
            int32_t eax_18 = ebx * 2
            int32_t edi_4 = ebx + eax_18
            *(ecx_1 + 0x3c) = (edi_4 + eax_10) u>> 2 | adc.d(
                adc.d(var_3c, var_3c << 1 | ebx u>> 0xffffffe1, ebx + eax_18 u< ebx), edx_4, 
                edi_4 + eax_10 u< edi_4) << 0x1e
            int32_t eax_20 = var_20 * 2
            int32_t edi_8 = var_20 + eax_20
            *(ecx_1 + 0x38) = (edi_8 + eax_12) u>> 2 | adc.d(
                adc.d(var_1c, var_1c << 1 | var_20 u>> 0xffffffe1, var_20 + eax_20 u< var_20), edx_5, 
                edi_8 + eax_12 u< edi_8) << 0x1e
            int32_t eax_22 = var_30 * 2
            int32_t edi_12 = var_30 + eax_22
            *(ecx_1 + 0x34) = (edi_12 + eax_14) u>> 2 | adc.d(
                adc.d(var_2c, var_2c << 1 | var_30 u>> 0xffffffe1, var_30 + eax_22 u< var_30), edx_6, 
                edi_12 + eax_14 u< edi_12) << 0x1e
            int32_t eax_24 = var_38 * 2
            int32_t edi_16 = var_38 + eax_24
            *(ecx_1 + 0x30) = (edi_16 + eax_16) u>> 2 | adc.d(
                adc.d(var_34, var_34 << 1 | var_38 u>> 0xffffffe1, var_38 + eax_24 u< var_38), edx_7, 
                edi_16 + eax_16 u< edi_16) << 0x1e
            *(ecx_1 + 0x2c) =
                (eax_10 + var_40) u>> 1 | adc.d(edx_4, var_3c, eax_10 + var_40 u< eax_10) << 0x1f
            *(ecx_1 + 0xc) = eax_10
            *(ecx_1 + 0x28) =
                (eax_12 + var_20) u>> 1 | adc.d(edx_5, var_1c, eax_12 + var_20 u< eax_12) << 0x1f
            *(ecx_1 + 0x24) =
                (eax_14 + var_30) u>> 1 | adc.d(edx_6, var_2c, eax_14 + var_30 u< eax_14) << 0x1f
            *(ecx_1 + 0x20) =
                (eax_16 + var_38) u>> 1 | adc.d(edx_7, var_34, eax_16 + var_38 u< eax_16) << 0x1f
            int32_t eax_29 = eax_10 * 2
            int32_t edi_31 = eax_10 + eax_29
            *(ecx_1 + 0x1c) = (edi_31 + var_40) u>> 2 | adc.d(
                adc.d(edx_4, edx_4 << 1 | eax_10 u>> 0xffffffe1, eax_10 + eax_29 u< eax_10), var_3c, 
                edi_31 + var_40 u< edi_31) << 0x1e
            int32_t eax_31 = eax_12 * 2
            int32_t edi_35 = eax_12 + eax_31
            *(ecx_1 + 0x18) = (edi_35 + var_20) u>> 2 | adc.d(
                adc.d(edx_5, edx_5 << 1 | eax_12 u>> 0xffffffe1, eax_12 + eax_31 u< eax_12), var_1c, 
                edi_35 + var_20 u< edi_35) << 0x1e
            int32_t eax_33 = eax_14 * 2
            int32_t edi_39 = eax_14 + eax_33
            *(ecx_1 + 0x14) = (edi_39 + var_30) u>> 2 | adc.d(
                adc.d(edx_6, edx_6 << 1 | eax_14 u>> 0xffffffe1, eax_14 + eax_33 u< eax_14), var_2c, 
                edi_39 + var_30 u< edi_39) << 0x1e
            int32_t eax_35 = eax_16 * 2
            int32_t edi_43 = eax_16 + eax_35
            *(ecx_1 + 8) = eax_12
            ebx = eax_10
            *(ecx_1 + 0x10) = (edi_43 + var_38) u>> 2 | adc.d(
                adc.d(edx_7, edx_7 << 1 | eax_16 u>> 0xffffffe1, eax_16 + eax_35 u< eax_16), var_34, 
                edi_43 + var_38 u< edi_43) << 0x1e
            *(ecx_1 + 4) = eax_14
            *ecx_1 = eax_16
            var_40 = ebx
            var_3c = edx_4
            var_20 = eax_12
            var_1c = edx_5
            var_30 = eax_14
            ecx_1 -= 0x40
            var_2c = edx_6
            var_38 = eax_16
            var_34 = edx_7
            
            if (ecx_1 u< edi)
                break
            
            edi_1 -= 0x10
        
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = ecx
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
