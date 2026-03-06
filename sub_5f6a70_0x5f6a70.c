// 函数名称: sub_5f6a70
// 虚拟地址: 0x5f6a70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f6a70(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax << 2
    int32_t esi = *(arg1 + 0x10)
    void* ecx_1 = esi + edx - 0x40
    int32_t edx_1 = *(esi + eax - 4)
    void* esi_1 = esi + eax - 0x10
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 =
        sx.q(((edx_1 & 0xff0000) | edx_1 u>> 0x10) u>> 8 | (edx_1 << 0x10 | (edx_1 & 0xff00)) << 8)
    int32_t edi_6 = eax_6
    int32_t var_40 = edx_3
    int32_t edx_4 = *(esi_1 + 8)
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 =
        sx.q(((edx_4 & 0xff0000) | edx_4 u>> 0x10) u>> 8 | (edx_4 << 0x10 | (edx_4 & 0xff00)) << 8)
    int32_t var_24 = eax_12
    int32_t var_20 = edx_6
    int32_t edx_7 = *(esi_1 + 4)
    int32_t eax_18
    int32_t edx_9
    edx_9:eax_18 =
        sx.q(((edx_7 & 0xff0000) | edx_7 u>> 0x10) u>> 8 | (edx_7 << 0x10 | (edx_7 & 0xff00)) << 8)
    int32_t var_34 = eax_18
    int32_t var_30 = edx_9
    int32_t edx_10 = *esi_1
    int32_t eax_24
    int32_t edx_12
    edx_12:eax_24 =
        sx.q(((edx_10 & 0xff0000) | edx_10 u>> 0x10) u>> 8 | (edx_10 << 0x10 | (edx_10 & 0xff00)) << 8)
    int32_t var_44 = edi_6
    int32_t var_3c = eax_24
    int32_t var_38 = edx_12
    int32_t var_4c
    int32_t var_48
    int32_t var_2c
    int32_t var_28
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    int32_t var_10
    
    while (ecx_1 u>= esi)
        int32_t edx_13 = *(esi_1 + 0xc)
        int32_t eax_30
        int32_t edx_15
        edx_15:eax_30 = sx.q(((edx_13 & 0xff0000) | edx_13 u>> 0x10) u>> 8
            | (edx_13 << 0x10 | (edx_13 & 0xff00)) << 8)
        var_4c = eax_30
        var_48 = edx_15
        int32_t edx_16 = *(esi_1 + 8)
        int32_t eax_36
        int32_t edx_18
        edx_18:eax_36 = sx.q(((edx_16 & 0xff0000) | edx_16 u>> 0x10) u>> 8
            | (edx_16 << 0x10 | (edx_16 & 0xff00)) << 8)
        var_1c = eax_36
        var_18 = edx_18
        int32_t edx_19 = *(esi_1 + 4)
        int32_t eax_42
        int32_t edx_21
        edx_21:eax_42 = sx.q(((edx_19 & 0xff0000) | edx_19 u>> 0x10) u>> 8
            | (edx_19 << 0x10 | (edx_19 & 0xff00)) << 8)
        var_2c = eax_42
        var_28 = edx_21
        int32_t edx_22 = *esi_1
        int32_t eax_48
        int32_t edx_24
        edx_24:eax_48 = sx.q(((edx_22 & 0xff0000) | edx_22 u>> 0x10) u>> 8
            | (edx_22 << 0x10 | (edx_22 & 0xff00)) << 8)
        var_10 = edx_24
        var_14 = eax_48
        int32_t eax_50 = edi_6 * 2
        esi_1 -= 0x10
        int32_t edi_7 = edi_6 + eax_50
        *(ecx_1 + 0x3c) = (edi_7 + var_4c) u>> 2 | adc.d(
            adc.d(var_40, var_40 << 1 | edi_6 u>> 0xffffffe1, edi_6 + eax_50 u< edi_6), var_48, 
            edi_7 + var_4c u< edi_7) << 0x1e
        int32_t eax_52 = var_24 * 2
        int32_t edi_11 = var_24 + eax_52
        *(ecx_1 + 0x38) = (edi_11 + var_1c) u>> 2 | adc.d(
            adc.d(var_20, var_20 << 1 | var_24 u>> 0xffffffe1, var_24 + eax_52 u< var_24), var_18, 
            edi_11 + var_1c u< edi_11) << 0x1e
        int32_t eax_54 = var_34 * 2
        int32_t edi_15 = var_34 + eax_54
        *(ecx_1 + 0x34) = (edi_15 + var_2c) u>> 2 | adc.d(
            adc.d(var_30, var_30 << 1 | var_34 u>> 0xffffffe1, var_34 + eax_54 u< var_34), var_28, 
            edi_15 + var_2c u< edi_15) << 0x1e
        int32_t eax_56 = var_3c * 2
        int32_t edi_19 = var_3c + eax_56
        *(ecx_1 + 0x30) = (edi_19 + var_14) u>> 2 | adc.d(
            adc.d(var_38, var_38 << 1 | var_3c u>> 0xffffffe1, var_3c + eax_56 u< var_3c), var_10, 
            edi_19 + var_14 u< edi_19) << 0x1e
        *(ecx_1 + 0x2c) =
            (var_4c + var_44) u>> 1 | adc.d(var_48, var_40, var_4c + var_44 u< var_4c) << 0x1f
        *(ecx_1 + 0x28) =
            (var_1c + var_24) u>> 1 | adc.d(var_18, var_20, var_1c + var_24 u< var_1c) << 0x1f
        *(ecx_1 + 0x24) =
            (var_2c + var_34) u>> 1 | adc.d(var_28, var_30, var_2c + var_34 u< var_2c) << 0x1f
        *(ecx_1 + 0x20) =
            (var_14 + var_3c) u>> 1 | adc.d(var_10, var_38, var_14 + var_3c u< var_14) << 0x1f
        int32_t eax_58 = var_4c * 2
        int32_t edi_35 = var_4c + eax_58
        *(ecx_1 + 0x1c) = (edi_35 + var_44) u>> 2 | adc.d(
            adc.d(var_48, var_48 << 1 | var_4c u>> 0xffffffe1, var_4c + eax_58 u< var_4c), var_40, 
            edi_35 + var_44 u< edi_35) << 0x1e
        int32_t eax_60 = var_1c * 2
        int32_t edi_39 = var_1c + eax_60
        *(ecx_1 + 0x18) = (edi_39 + var_24) u>> 2 | adc.d(
            adc.d(var_18, var_18 << 1 | var_1c u>> 0xffffffe1, var_1c + eax_60 u< var_1c), var_20, 
            edi_39 + var_24 u< edi_39) << 0x1e
        int32_t eax_62 = var_2c * 2
        int32_t edi_43 = var_2c + eax_62
        *(ecx_1 + 0x14) = (edi_43 + var_34) u>> 2 | adc.d(
            adc.d(var_28, var_28 << 1 | var_2c u>> 0xffffffe1, var_2c + eax_62 u< var_2c), var_30, 
            edi_43 + var_34 u< edi_43) << 0x1e
        int32_t eax_64 = var_14 * 2
        int32_t edi_47 = var_14 + eax_64
        *(ecx_1 + 8) = var_1c
        *(ecx_1 + 0x10) = (edi_47 + var_3c) u>> 2 | adc.d(
            adc.d(var_10, var_10 << 1 | var_14 u>> 0xffffffe1, var_14 + eax_64 u< var_14), var_38, 
            edi_47 + var_3c u< edi_47) << 0x1e
        edi_6 = var_4c
        *(ecx_1 + 4) = var_2c
        var_24 = var_1c
        var_34 = var_2c
        *ecx_1 = var_14
        *(ecx_1 + 0xc) = edi_6
        var_20 = var_18
        var_30 = var_28
        ecx_1 -= 0x40
        var_44 = edi_6
        var_40 = var_48
        var_3c = var_14
        var_38 = var_10
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2, var_4c, var_48, var_44, var_40, var_3c, var_38, 
        var_34, var_30, var_2c, var_28, var_24, var_20, var_1c, var_18, var_14, var_10, edx, esi)
}
