// 函数名称: sub_5f7710
// 虚拟地址: 0x5f7710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f7710(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax << 2
    int32_t esi = *(arg1 + 0x10)
    void* ecx_1 = esi + edx - 0x60
    int32_t edx_1 = *(esi + eax - 4)
    void* esi_1 = esi + eax - 0x18
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 =
        sx.q(((edx_1 & 0xff0000) | edx_1 u>> 0x10) u>> 8 | (edx_1 << 0x10 | (edx_1 & 0xff00)) << 8)
    int32_t edi_6 = eax_6
    int32_t var_60 = edx_3
    int32_t edx_4 = *(esi_1 + 0x10)
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 =
        sx.q(((edx_4 & 0xff0000) | edx_4 u>> 0x10) u>> 8 | (edx_4 << 0x10 | (edx_4 & 0xff00)) << 8)
    int32_t var_34 = eax_12
    int32_t var_30 = edx_6
    int32_t edx_7 = *(esi_1 + 0xc)
    int32_t eax_18
    int32_t edx_9
    edx_9:eax_18 =
        sx.q(((edx_7 & 0xff0000) | edx_7 u>> 0x10) u>> 8 | (edx_7 << 0x10 | (edx_7 & 0xff00)) << 8)
    int32_t var_44 = eax_18
    int32_t var_40 = edx_9
    int32_t edx_10 = *(esi_1 + 8)
    int32_t eax_24
    int32_t edx_12
    edx_12:eax_24 =
        sx.q(((edx_10 & 0xff0000) | edx_10 u>> 0x10) u>> 8 | (edx_10 << 0x10 | (edx_10 & 0xff00)) << 8)
    int32_t var_48 = edx_12
    int32_t edx_13 = *(esi_1 + 4)
    int32_t var_4c = eax_24
    int32_t var_64 = edi_6
    int32_t eax_30
    int32_t edx_15
    edx_15:eax_30 =
        sx.q(((edx_13 & 0xff0000) | edx_13 u>> 0x10) u>> 8 | (edx_13 << 0x10 | (edx_13 & 0xff00)) << 8)
    int32_t var_54 = eax_30
    int32_t var_50 = edx_15
    int32_t edx_16 = *esi_1
    int32_t eax_36
    int32_t edx_18
    edx_18:eax_36 =
        sx.q(((edx_16 & 0xff0000) | edx_16 u>> 0x10) u>> 8 | (edx_16 << 0x10 | (edx_16 & 0xff00)) << 8)
    int32_t var_5c = eax_36
    int32_t var_58 = edx_18
    int32_t var_6c
    int32_t var_68
    int32_t var_3c
    int32_t var_38
    int32_t var_2c
    int32_t var_28
    int32_t var_24
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    int32_t var_10
    
    while (ecx_1 u>= esi)
        int32_t edx_19 = *(esi_1 + 0x14)
        int32_t eax_42
        int32_t edx_21
        edx_21:eax_42 = sx.q(((edx_19 & 0xff0000) | edx_19 u>> 0x10) u>> 8
            | (edx_19 << 0x10 | (edx_19 & 0xff00)) << 8)
        var_6c = eax_42
        var_68 = edx_21
        int32_t edx_22 = *(esi_1 + 0x10)
        int32_t eax_48
        int32_t edx_24
        edx_24:eax_48 = sx.q(((edx_22 & 0xff0000) | edx_22 u>> 0x10) u>> 8
            | (edx_22 << 0x10 | (edx_22 & 0xff00)) << 8)
        var_2c = eax_48
        var_28 = edx_24
        int32_t edx_25 = *(esi_1 + 0xc)
        int32_t eax_54
        int32_t edx_27
        edx_27:eax_54 = sx.q(((edx_25 & 0xff0000) | edx_25 u>> 0x10) u>> 8
            | (edx_25 << 0x10 | (edx_25 & 0xff00)) << 8)
        var_3c = eax_54
        var_38 = edx_27
        int32_t edx_28 = *(esi_1 + 8)
        int32_t eax_60
        int32_t edx_30
        edx_30:eax_60 = sx.q(((edx_28 & 0xff0000) | edx_28 u>> 0x10) u>> 8
            | (edx_28 << 0x10 | (edx_28 & 0xff00)) << 8)
        var_14 = eax_60
        var_10 = edx_30
        int32_t edx_31 = *(esi_1 + 4)
        int32_t eax_66
        int32_t edx_33
        edx_33:eax_66 = sx.q(((edx_31 & 0xff0000) | edx_31 u>> 0x10) u>> 8
            | (edx_31 << 0x10 | (edx_31 & 0xff00)) << 8)
        var_18 = edx_33
        int32_t edx_34 = *esi_1
        var_1c = eax_66
        int32_t eax_72
        int32_t edx_36
        edx_36:eax_72 = sx.q(((edx_34 & 0xff0000) | edx_34 u>> 0x10) u>> 8
            | (edx_34 << 0x10 | (edx_34 & 0xff00)) << 8)
        var_24 = eax_72
        var_20 = edx_36
        int32_t eax_74 = edi_6 * 2
        esi_1 -= 0x18
        int32_t edi_7 = edi_6 + eax_74
        *(ecx_1 + 0x5c) = (edi_7 + var_6c) u>> 2 | adc.d(
            adc.d(var_60, var_60 << 1 | edi_6 u>> 0xffffffe1, edi_6 + eax_74 u< edi_6), var_68, 
            edi_7 + var_6c u< edi_7) << 0x1e
        int32_t eax_76 = var_34 * 2
        int32_t edi_11 = var_34 + eax_76
        *(ecx_1 + 0x58) = (edi_11 + var_2c) u>> 2 | adc.d(
            adc.d(var_30, var_30 << 1 | var_34 u>> 0xffffffe1, var_34 + eax_76 u< var_34), var_28, 
            edi_11 + var_2c u< edi_11) << 0x1e
        int32_t eax_78 = var_44 * 2
        int32_t edi_15 = var_44 + eax_78
        *(ecx_1 + 0x54) = (edi_15 + var_3c) u>> 2 | adc.d(
            adc.d(var_40, var_40 << 1 | var_44 u>> 0xffffffe1, var_44 + eax_78 u< var_44), var_38, 
            edi_15 + var_3c u< edi_15) << 0x1e
        int32_t eax_80 = var_4c * 2
        int32_t edi_19 = var_4c + eax_80
        *(ecx_1 + 0x50) = (edi_19 + var_14) u>> 2 | adc.d(
            adc.d(var_48, var_48 << 1 | var_4c u>> 0xffffffe1, var_4c + eax_80 u< var_4c), var_10, 
            edi_19 + var_14 u< edi_19) << 0x1e
        int32_t eax_82 = var_54 * 2
        int32_t edi_23 = var_54 + eax_82
        *(ecx_1 + 0x4c) = (edi_23 + var_1c) u>> 2 | adc.d(
            adc.d(var_50, var_50 << 1 | var_54 u>> 0xffffffe1, var_54 + eax_82 u< var_54), var_18, 
            edi_23 + var_1c u< edi_23) << 0x1e
        int32_t eax_84 = var_5c * 2
        int32_t edi_27 = var_5c + eax_84
        *(ecx_1 + 0x48) = (edi_27 + var_24) u>> 2 | adc.d(
            adc.d(var_58, var_58 << 1 | var_5c u>> 0xffffffe1, var_5c + eax_84 u< var_5c), var_20, 
            edi_27 + var_24 u< edi_27) << 0x1e
        *(ecx_1 + 0x44) =
            (var_6c + var_64) u>> 1 | adc.d(var_68, var_60, var_6c + var_64 u< var_6c) << 0x1f
        *(ecx_1 + 0x40) =
            (var_2c + var_34) u>> 1 | adc.d(var_28, var_30, var_2c + var_34 u< var_2c) << 0x1f
        *(ecx_1 + 0x3c) =
            (var_3c + var_44) u>> 1 | adc.d(var_38, var_40, var_3c + var_44 u< var_3c) << 0x1f
        *(ecx_1 + 0x38) =
            (var_14 + var_4c) u>> 1 | adc.d(var_10, var_48, var_14 + var_4c u< var_14) << 0x1f
        *(ecx_1 + 0x34) =
            (var_1c + var_54) u>> 1 | adc.d(var_18, var_50, var_1c + var_54 u< var_1c) << 0x1f
        *(ecx_1 + 0x30) =
            (var_24 + var_5c) u>> 1 | adc.d(var_20, var_58, var_24 + var_5c u< var_24) << 0x1f
        int32_t eax_86 = var_6c * 2
        int32_t edi_49 = var_6c + eax_86
        *(ecx_1 + 0x2c) = (edi_49 + var_64) u>> 2 | adc.d(
            adc.d(var_68, var_68 << 1 | var_6c u>> 0xffffffe1, var_6c + eax_86 u< var_6c), var_60, 
            edi_49 + var_64 u< edi_49) << 0x1e
        int32_t eax_88 = var_2c * 2
        int32_t edi_53 = var_2c + eax_88
        *(ecx_1 + 0x28) = (edi_53 + var_34) u>> 2 | adc.d(
            adc.d(var_28, var_28 << 1 | var_2c u>> 0xffffffe1, var_2c + eax_88 u< var_2c), var_30, 
            edi_53 + var_34 u< edi_53) << 0x1e
        int32_t eax_90 = var_3c * 2
        int32_t edi_57 = var_3c + eax_90
        *(ecx_1 + 0x24) = (edi_57 + var_44) u>> 2 | adc.d(
            adc.d(var_38, var_38 << 1 | var_3c u>> 0xffffffe1, var_3c + eax_90 u< var_3c), var_40, 
            edi_57 + var_44 u< edi_57) << 0x1e
        int32_t eax_92 = var_14 * 2
        int32_t edi_61 = var_14 + eax_92
        *(ecx_1 + 0x20) = (edi_61 + var_4c) u>> 2 | adc.d(
            adc.d(var_10, var_10 << 1 | var_14 u>> 0xffffffe1, var_14 + eax_92 u< var_14), var_48, 
            edi_61 + var_4c u< edi_61) << 0x1e
        int32_t eax_94 = var_1c * 2
        int32_t edi_65 = var_1c + eax_94
        *(ecx_1 + 0x1c) = (edi_65 + var_54) u>> 2 | adc.d(
            adc.d(var_18, var_18 << 1 | var_1c u>> 0xffffffe1, var_1c + eax_94 u< var_1c), var_50, 
            edi_65 + var_54 u< edi_65) << 0x1e
        int32_t eax_96 = var_24 * 2
        int32_t edi_69 = var_24 + eax_96
        *(ecx_1 + 0x10) = var_2c
        var_34 = var_2c
        *(ecx_1 + 0xc) = var_3c
        *(ecx_1 + 8) = var_14
        var_44 = var_3c
        var_30 = var_28
        *(ecx_1 + 4) = var_1c
        var_40 = var_38
        var_4c = var_14
        *(ecx_1 + 0x18) = (edi_69 + var_5c) u>> 2 | adc.d(
            adc.d(var_20, var_20 << 1 | var_24 u>> 0xffffffe1, var_24 + eax_96 u< var_24), var_58, 
            edi_69 + var_5c u< edi_69) << 0x1e
        edi_6 = var_6c
        *ecx_1 = var_24
        var_48 = var_10
        var_54 = var_1c
        *(ecx_1 + 0x14) = edi_6
        var_64 = edi_6
        var_60 = var_68
        var_50 = var_18
        ecx_1 -= 0x60
        var_5c = var_24
        var_58 = var_20
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2, var_6c, var_68, var_64, var_60, var_5c, var_58, 
        var_54, var_50, var_4c, var_48, var_44, var_40, var_3c, var_38, var_34, var_30, var_2c, var_28, 
        var_24, var_20, var_1c, var_18, var_14, var_10, edx, esi)
}
