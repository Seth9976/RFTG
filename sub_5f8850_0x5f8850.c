// 函数名称: sub_5f8850
// 虚拟地址: 0x5f8850
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f8850(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax << 2
    int32_t esi = *(arg1 + 0x10)
    void* ecx_1 = esi + edx - 0x80
    int32_t edx_1 = *(esi + eax - 4)
    void* esi_1 = esi + eax - 0x20
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 =
        sx.q(((edx_1 & 0xff0000) | edx_1 u>> 0x10) u>> 8 | (edx_1 << 0x10 | (edx_1 & 0xff00)) << 8)
    int32_t edi_6 = eax_6
    int32_t var_78 = edx_3
    int32_t edx_4 = *(esi_1 + 0x18)
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 =
        sx.q(((edx_4 & 0xff0000) | edx_4 u>> 0x10) u>> 8 | (edx_4 << 0x10 | (edx_4 & 0xff00)) << 8)
    int32_t var_34 = eax_12
    int32_t var_30 = edx_6
    int32_t edx_7 = *(esi_1 + 0x14)
    int32_t eax_18
    int32_t edx_9
    edx_9:eax_18 =
        sx.q(((edx_7 & 0xff0000) | edx_7 u>> 0x10) u>> 8 | (edx_7 << 0x10 | (edx_7 & 0xff00)) << 8)
    int32_t var_6c = eax_18
    int32_t var_68 = edx_9
    int32_t edx_10 = *(esi_1 + 0x10)
    int32_t eax_24
    int32_t edx_12
    edx_12:eax_24 =
        sx.q(((edx_10 & 0xff0000) | edx_10 u>> 0x10) u>> 8 | (edx_10 << 0x10 | (edx_10 & 0xff00)) << 8)
    int32_t var_38 = edx_12
    int32_t edx_13 = *(esi_1 + 0xc)
    int32_t var_3c = eax_24
    int32_t var_7c = edi_6
    int32_t eax_30
    int32_t edx_15
    edx_15:eax_30 =
        sx.q(((edx_13 & 0xff0000) | edx_13 u>> 0x10) u>> 8 | (edx_13 << 0x10 | (edx_13 & 0xff00)) << 8)
    int32_t var_44 = eax_30
    int32_t var_40 = edx_15
    int32_t edx_16 = *(esi_1 + 8)
    int32_t eax_36
    int32_t edx_18
    edx_18:eax_36 =
        sx.q(((edx_16 & 0xff0000) | edx_16 u>> 0x10) u>> 8 | (edx_16 << 0x10 | (edx_16 & 0xff00)) << 8)
    int32_t var_54 = eax_36
    int32_t var_50 = edx_18
    int32_t edx_19 = *(esi_1 + 4)
    int32_t eax_42
    int32_t edx_21
    edx_21:eax_42 =
        sx.q(((edx_19 & 0xff0000) | edx_19 u>> 0x10) u>> 8 | (edx_19 << 0x10 | (edx_19 & 0xff00)) << 8)
    int32_t var_64 = eax_42
    int32_t var_60 = edx_21
    int32_t edx_22 = *esi_1
    int32_t eax_48
    int32_t edx_24
    edx_24:eax_48 =
        sx.q(((edx_22 & 0xff0000) | edx_22 u>> 0x10) u>> 8 | (edx_22 << 0x10 | (edx_22 & 0xff00)) << 8)
    int32_t var_74 = eax_48
    int32_t var_70 = edx_24
    int32_t var_84
    int32_t var_80
    int32_t var_5c
    int32_t var_58
    int32_t var_4c
    int32_t var_48
    int32_t var_2c
    int32_t var_28
    int32_t var_24
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    int32_t var_10
    int32_t var_c
    int32_t var_8
    
    while (ecx_1 u>= esi)
        int32_t edx_25 = *(esi_1 + 0x1c)
        int32_t eax_54
        int32_t edx_27
        edx_27:eax_54 = sx.q(((edx_25 & 0xff0000) | edx_25 u>> 0x10) u>> 8
            | (edx_25 << 0x10 | (edx_25 & 0xff00)) << 8)
        var_84 = eax_54
        var_80 = edx_27
        int32_t edx_28 = *(esi_1 + 0x18)
        int32_t eax_60
        int32_t edx_30
        edx_30:eax_60 = sx.q(((edx_28 & 0xff0000) | edx_28 u>> 0x10) u>> 8
            | (edx_28 << 0x10 | (edx_28 & 0xff00)) << 8)
        var_4c = eax_60
        var_48 = edx_30
        int32_t edx_31 = *(esi_1 + 0x14)
        int32_t eax_66
        int32_t edx_33
        edx_33:eax_66 = sx.q(((edx_31 & 0xff0000) | edx_31 u>> 0x10) u>> 8
            | (edx_31 << 0x10 | (edx_31 & 0xff00)) << 8)
        var_5c = eax_66
        var_58 = edx_33
        int32_t edx_34 = *(esi_1 + 0x10)
        int32_t eax_72
        int32_t edx_36
        edx_36:eax_72 = sx.q(((edx_34 & 0xff0000) | edx_34 u>> 0x10) u>> 8
            | (edx_34 << 0x10 | (edx_34 & 0xff00)) << 8)
        var_24 = eax_72
        var_20 = edx_36
        int32_t edx_37 = *(esi_1 + 0xc)
        int32_t eax_78
        int32_t edx_39
        edx_39:eax_78 = sx.q(((edx_37 & 0xff0000) | edx_37 u>> 0x10) u>> 8
            | (edx_37 << 0x10 | (edx_37 & 0xff00)) << 8)
        var_8 = edx_39
        int32_t edx_40 = *(esi_1 + 8)
        var_c = eax_78
        int32_t eax_84
        int32_t edx_42
        edx_42:eax_84 = sx.q(((edx_40 & 0xff0000) | edx_40 u>> 0x10) u>> 8
            | (edx_40 << 0x10 | (edx_40 & 0xff00)) << 8)
        var_1c = eax_84
        var_18 = edx_42
        int32_t edx_43 = *(esi_1 + 4)
        int32_t eax_90
        int32_t edx_45
        edx_45:eax_90 = sx.q(((edx_43 & 0xff0000) | edx_43 u>> 0x10) u>> 8
            | (edx_43 << 0x10 | (edx_43 & 0xff00)) << 8)
        var_2c = eax_90
        var_28 = edx_45
        int32_t edx_46 = *esi_1
        int32_t eax_96
        int32_t edx_48
        edx_48:eax_96 = sx.q(((edx_46 & 0xff0000) | edx_46 u>> 0x10) u>> 8
            | (edx_46 << 0x10 | (edx_46 & 0xff00)) << 8)
        var_10 = edx_48
        var_14 = eax_96
        int32_t eax_98 = edi_6 * 2
        esi_1 -= 0x20
        int32_t edi_7 = edi_6 + eax_98
        *(ecx_1 + 0x7c) = (edi_7 + var_84) u>> 2 | adc.d(
            adc.d(var_78, var_78 << 1 | edi_6 u>> 0xffffffe1, edi_6 + eax_98 u< edi_6), var_80, 
            edi_7 + var_84 u< edi_7) << 0x1e
        int32_t eax_100 = var_34 * 2
        int32_t edi_11 = var_34 + eax_100
        *(ecx_1 + 0x78) = (edi_11 + var_4c) u>> 2 | adc.d(
            adc.d(var_30, var_30 << 1 | var_34 u>> 0xffffffe1, var_34 + eax_100 u< var_34), var_48, 
            edi_11 + var_4c u< edi_11) << 0x1e
        int32_t eax_102 = var_6c * 2
        int32_t edi_15 = var_6c + eax_102
        *(ecx_1 + 0x74) = (edi_15 + var_5c) u>> 2 | adc.d(
            adc.d(var_68, var_68 << 1 | var_6c u>> 0xffffffe1, var_6c + eax_102 u< var_6c), var_58, 
            edi_15 + var_5c u< edi_15) << 0x1e
        int32_t eax_104 = var_3c * 2
        int32_t edi_19 = var_3c + eax_104
        *(ecx_1 + 0x70) = (edi_19 + var_24) u>> 2 | adc.d(
            adc.d(var_38, var_38 << 1 | var_3c u>> 0xffffffe1, var_3c + eax_104 u< var_3c), var_20, 
            edi_19 + var_24 u< edi_19) << 0x1e
        int32_t eax_106 = var_44 * 2
        int32_t edi_23 = var_44 + eax_106
        *(ecx_1 + 0x6c) = (edi_23 + var_c) u>> 2 | adc.d(
            adc.d(var_40, var_40 << 1 | var_44 u>> 0xffffffe1, var_44 + eax_106 u< var_44), var_8, 
            edi_23 + var_c u< edi_23) << 0x1e
        int32_t eax_108 = var_54 * 2
        int32_t edi_27 = var_54 + eax_108
        *(ecx_1 + 0x68) = (edi_27 + var_1c) u>> 2 | adc.d(
            adc.d(var_50, var_50 << 1 | var_54 u>> 0xffffffe1, var_54 + eax_108 u< var_54), var_18, 
            edi_27 + var_1c u< edi_27) << 0x1e
        int32_t eax_110 = var_64 * 2
        int32_t edi_31 = var_64 + eax_110
        *(ecx_1 + 0x64) = (edi_31 + var_2c) u>> 2 | adc.d(
            adc.d(var_60, var_60 << 1 | var_64 u>> 0xffffffe1, var_64 + eax_110 u< var_64), var_28, 
            edi_31 + var_2c u< edi_31) << 0x1e
        int32_t eax_112 = var_74 * 2
        int32_t edi_35 = var_74 + eax_112
        *(ecx_1 + 0x60) = (edi_35 + var_14) u>> 2 | adc.d(
            adc.d(var_70, var_70 << 1 | var_74 u>> 0xffffffe1, var_74 + eax_112 u< var_74), var_10, 
            edi_35 + var_14 u< edi_35) << 0x1e
        *(ecx_1 + 0x5c) =
            (var_84 + var_7c) u>> 1 | adc.d(var_80, var_78, var_84 + var_7c u< var_84) << 0x1f
        *(ecx_1 + 0x58) =
            (var_4c + var_34) u>> 1 | adc.d(var_48, var_30, var_4c + var_34 u< var_4c) << 0x1f
        *(ecx_1 + 0x54) =
            (var_5c + var_6c) u>> 1 | adc.d(var_58, var_68, var_5c + var_6c u< var_5c) << 0x1f
        *(ecx_1 + 0x50) =
            (var_24 + var_3c) u>> 1 | adc.d(var_20, var_38, var_24 + var_3c u< var_24) << 0x1f
        *(ecx_1 + 0x4c) = (var_c + var_44) u>> 1 | adc.d(var_8, var_40, var_c + var_44 u< var_c) << 0x1f
        *(ecx_1 + 0x48) =
            (var_1c + var_54) u>> 1 | adc.d(var_18, var_50, var_1c + var_54 u< var_1c) << 0x1f
        *(ecx_1 + 0x44) =
            (var_2c + var_64) u>> 1 | adc.d(var_28, var_60, var_2c + var_64 u< var_2c) << 0x1f
        *(ecx_1 + 0x40) =
            (var_14 + var_74) u>> 1 | adc.d(var_10, var_70, var_14 + var_74 u< var_14) << 0x1f
        int32_t eax_114 = var_84 * 2
        int32_t edi_63 = var_84 + eax_114
        *(ecx_1 + 0x3c) = (edi_63 + var_7c) u>> 2 | adc.d(
            adc.d(var_80, var_80 << 1 | var_84 u>> 0xffffffe1, var_84 + eax_114 u< var_84), var_78, 
            edi_63 + var_7c u< edi_63) << 0x1e
        int32_t eax_116 = var_4c * 2
        int32_t edi_67 = var_4c + eax_116
        *(ecx_1 + 0x38) = (edi_67 + var_34) u>> 2 | adc.d(
            adc.d(var_48, var_48 << 1 | var_4c u>> 0xffffffe1, var_4c + eax_116 u< var_4c), var_30, 
            edi_67 + var_34 u< edi_67) << 0x1e
        int32_t eax_118 = var_5c * 2
        int32_t edi_71 = var_5c + eax_118
        *(ecx_1 + 0x34) = (edi_71 + var_6c) u>> 2 | adc.d(
            adc.d(var_58, var_58 << 1 | var_5c u>> 0xffffffe1, var_5c + eax_118 u< var_5c), var_68, 
            edi_71 + var_6c u< edi_71) << 0x1e
        int32_t eax_120 = var_24 * 2
        int32_t edi_75 = var_24 + eax_120
        *(ecx_1 + 0x30) = (edi_75 + var_3c) u>> 2 | adc.d(
            adc.d(var_20, var_20 << 1 | var_24 u>> 0xffffffe1, var_24 + eax_120 u< var_24), var_38, 
            edi_75 + var_3c u< edi_75) << 0x1e
        int32_t eax_122 = var_c * 2
        int32_t edi_79 = var_c + eax_122
        *(ecx_1 + 0x2c) = (edi_79 + var_44) u>> 2 | adc.d(
            adc.d(var_8, var_8 << 1 | var_c u>> 0xffffffe1, var_c + eax_122 u< var_c), var_40, 
            edi_79 + var_44 u< edi_79) << 0x1e
        int32_t eax_124 = var_1c * 2
        int32_t edi_83 = var_1c + eax_124
        *(ecx_1 + 0x28) = (edi_83 + var_54) u>> 2 | adc.d(
            adc.d(var_18, var_18 << 1 | var_1c u>> 0xffffffe1, var_1c + eax_124 u< var_1c), var_50, 
            edi_83 + var_54 u< edi_83) << 0x1e
        int32_t eax_126 = var_2c * 2
        int32_t edi_87 = var_2c + eax_126
        *(ecx_1 + 0x24) = (edi_87 + var_64) u>> 2 | adc.d(
            adc.d(var_28, var_28 << 1 | var_2c u>> 0xffffffe1, var_2c + eax_126 u< var_2c), var_60, 
            edi_87 + var_64 u< edi_87) << 0x1e
        int32_t eax_128 = var_14 * 2
        int32_t edi_91 = var_14 + eax_128
        *(ecx_1 + 0x18) = var_4c
        *(ecx_1 + 0x10) = var_24
        *(ecx_1 + 0xc) = var_c
        *(ecx_1 + 0x20) = (edi_91 + var_74) u>> 2 | adc.d(
            adc.d(var_10, var_10 << 1 | var_14 u>> 0xffffffe1, var_14 + eax_128 u< var_14), var_70, 
            edi_91 + var_74 u< edi_91) << 0x1e
        edi_6 = var_84
        *(ecx_1 + 8) = var_1c
        *(ecx_1 + 0x1c) = edi_6
        *(ecx_1 + 0x14) = var_5c
        var_34 = var_4c
        var_6c = var_5c
        var_30 = var_48
        var_68 = var_58
        var_3c = var_24
        var_38 = var_20
        var_44 = var_c
        var_40 = var_8
        *(ecx_1 + 4) = var_2c
        var_54 = var_1c
        var_50 = var_18
        *ecx_1 = var_14
        var_64 = var_2c
        var_60 = var_28
        ecx_1 -= 0x80
        var_7c = edi_6
        var_78 = var_80
        var_74 = var_14
        var_70 = var_10
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2, edx, esi, var_84, var_80, var_7c, var_78, 
        var_74, var_70, var_6c, var_68, var_64, var_60, var_5c, var_58, var_54, var_50, var_4c, var_48, 
        var_44, var_40, var_3c, var_38, var_34, var_30, var_2c, var_28, var_24, var_20, var_1c, var_18, 
        var_14, var_10, var_c, var_8)
}
