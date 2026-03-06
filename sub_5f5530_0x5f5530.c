// 函数名称: sub_5f5530
// 虚拟地址: 0x5f5530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f5530(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax << 2
    int32_t esi = *(arg1 + 0x10)
    void* ecx_1 = esi + edx - 0x80
    void* esi_1 = esi + eax - 0x20
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(*(esi_1 + 0x1c))
    int32_t ebx = edx_1
    int32_t edi = eax_2
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(*(esi_1 + 0x18))
    int32_t var_34 = eax_4
    int32_t var_30 = edx_2
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(*(esi_1 + 0x14))
    int32_t var_6c = eax_6
    int32_t var_68 = edx_3
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = sx.q(*(esi_1 + 0x10))
    int32_t var_3c = eax_8
    int32_t var_38 = edx_4
    int32_t eax_10
    int32_t edx_5
    edx_5:eax_10 = sx.q(*(esi_1 + 0xc))
    int32_t var_44 = eax_10
    int32_t var_40 = edx_5
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 = sx.q(*(esi_1 + 8))
    int32_t var_54 = eax_12
    int32_t var_50 = edx_6
    int32_t eax_14
    int32_t edx_7
    edx_7:eax_14 = sx.q(*(esi_1 + 4))
    int32_t var_64 = eax_14
    int32_t var_60 = edx_7
    int32_t eax_16
    int32_t edx_8
    edx_8:eax_16 = sx.q(*esi_1)
    int32_t var_7c = edi
    int32_t var_78 = ebx
    int32_t var_74 = eax_16
    int32_t var_70 = edx_8
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
        int32_t eax_18
        int32_t edx_9
        edx_9:eax_18 = sx.q(*(esi_1 + 0x1c))
        var_84 = eax_18
        var_80 = edx_9
        int32_t eax_20
        int32_t edx_10
        edx_10:eax_20 = sx.q(*(esi_1 + 0x18))
        var_4c = eax_20
        var_48 = edx_10
        int32_t eax_22
        int32_t edx_11
        edx_11:eax_22 = sx.q(*(esi_1 + 0x14))
        var_5c = eax_22
        var_58 = edx_11
        int32_t eax_24
        int32_t edx_12
        edx_12:eax_24 = sx.q(*(esi_1 + 0x10))
        var_24 = eax_24
        var_20 = edx_12
        int32_t eax_26
        int32_t edx_13
        edx_13:eax_26 = sx.q(*(esi_1 + 0xc))
        var_c = eax_26
        var_8 = edx_13
        int32_t eax_28
        int32_t edx_14
        edx_14:eax_28 = sx.q(*(esi_1 + 8))
        var_1c = eax_28
        var_18 = edx_14
        int32_t eax_30
        int32_t edx_15
        edx_15:eax_30 = sx.q(*(esi_1 + 4))
        var_2c = eax_30
        var_28 = edx_15
        int32_t eax_32
        int32_t edx_16
        edx_16:eax_32 = sx.q(*esi_1)
        var_14 = eax_32
        var_10 = edx_16
        int32_t eax_34 = edi * 2
        esi_1 -= 0x20
        int32_t edi_1 = edi + eax_34
        *(ecx_1 + 0x7c) = (edi_1 + var_84) u>> 2 | adc.d(
            adc.d(ebx, ebx << 1 | edi u>> 0xffffffe1, edi + eax_34 u< edi), var_80, 
            edi_1 + var_84 u< edi_1) << 0x1e
        int32_t eax_36 = var_34 * 2
        int32_t edi_5 = var_34 + eax_36
        *(ecx_1 + 0x78) = (edi_5 + var_4c) u>> 2 | adc.d(
            adc.d(var_30, var_30 << 1 | var_34 u>> 0xffffffe1, var_34 + eax_36 u< var_34), var_48, 
            edi_5 + var_4c u< edi_5) << 0x1e
        int32_t eax_38 = var_6c * 2
        int32_t edi_9 = var_6c + eax_38
        *(ecx_1 + 0x74) = (edi_9 + var_5c) u>> 2 | adc.d(
            adc.d(var_68, var_68 << 1 | var_6c u>> 0xffffffe1, var_6c + eax_38 u< var_6c), var_58, 
            edi_9 + var_5c u< edi_9) << 0x1e
        int32_t eax_40 = var_3c * 2
        int32_t edi_13 = var_3c + eax_40
        *(ecx_1 + 0x70) = (edi_13 + var_24) u>> 2 | adc.d(
            adc.d(var_38, var_38 << 1 | var_3c u>> 0xffffffe1, var_3c + eax_40 u< var_3c), var_20, 
            edi_13 + var_24 u< edi_13) << 0x1e
        int32_t eax_42 = var_44 * 2
        int32_t edi_17 = var_44 + eax_42
        *(ecx_1 + 0x6c) = (edi_17 + var_c) u>> 2 | adc.d(
            adc.d(var_40, var_40 << 1 | var_44 u>> 0xffffffe1, var_44 + eax_42 u< var_44), var_8, 
            edi_17 + var_c u< edi_17) << 0x1e
        int32_t eax_44 = var_54 * 2
        int32_t edi_21 = var_54 + eax_44
        *(ecx_1 + 0x68) = (edi_21 + var_1c) u>> 2 | adc.d(
            adc.d(var_50, var_50 << 1 | var_54 u>> 0xffffffe1, var_54 + eax_44 u< var_54), var_18, 
            edi_21 + var_1c u< edi_21) << 0x1e
        int32_t eax_46 = var_64 * 2
        int32_t edi_25 = var_64 + eax_46
        *(ecx_1 + 0x64) = (edi_25 + var_2c) u>> 2 | adc.d(
            adc.d(var_60, var_60 << 1 | var_64 u>> 0xffffffe1, var_64 + eax_46 u< var_64), var_28, 
            edi_25 + var_2c u< edi_25) << 0x1e
        int32_t eax_48 = var_74 * 2
        int32_t edi_29 = var_74 + eax_48
        *(ecx_1 + 0x60) = (edi_29 + var_14) u>> 2 | adc.d(
            adc.d(var_70, var_70 << 1 | var_74 u>> 0xffffffe1, var_74 + eax_48 u< var_74), var_10, 
            edi_29 + var_14 u< edi_29) << 0x1e
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
        int32_t eax_50 = var_84 * 2
        int32_t edi_57 = var_84 + eax_50
        *(ecx_1 + 0x3c) = (edi_57 + var_7c) u>> 2 | adc.d(
            adc.d(var_80, var_80 << 1 | var_84 u>> 0xffffffe1, var_84 + eax_50 u< var_84), var_78, 
            edi_57 + var_7c u< edi_57) << 0x1e
        int32_t eax_52 = var_4c * 2
        int32_t edi_61 = var_4c + eax_52
        *(ecx_1 + 0x38) = (edi_61 + var_34) u>> 2 | adc.d(
            adc.d(var_48, var_48 << 1 | var_4c u>> 0xffffffe1, var_4c + eax_52 u< var_4c), var_30, 
            edi_61 + var_34 u< edi_61) << 0x1e
        int32_t eax_54 = var_5c * 2
        int32_t edi_65 = var_5c + eax_54
        *(ecx_1 + 0x34) = (edi_65 + var_6c) u>> 2 | adc.d(
            adc.d(var_58, var_58 << 1 | var_5c u>> 0xffffffe1, var_5c + eax_54 u< var_5c), var_68, 
            edi_65 + var_6c u< edi_65) << 0x1e
        int32_t eax_56 = var_24 * 2
        int32_t edi_69 = var_24 + eax_56
        *(ecx_1 + 0x30) = (edi_69 + var_3c) u>> 2 | adc.d(
            adc.d(var_20, var_20 << 1 | var_24 u>> 0xffffffe1, var_24 + eax_56 u< var_24), var_38, 
            edi_69 + var_3c u< edi_69) << 0x1e
        int32_t eax_58 = var_c * 2
        int32_t edi_73 = var_c + eax_58
        *(ecx_1 + 0x2c) = (edi_73 + var_44) u>> 2 | adc.d(
            adc.d(var_8, var_8 << 1 | var_c u>> 0xffffffe1, var_c + eax_58 u< var_c), var_40, 
            edi_73 + var_44 u< edi_73) << 0x1e
        int32_t eax_60 = var_1c * 2
        int32_t edi_77 = var_1c + eax_60
        *(ecx_1 + 0x28) = (edi_77 + var_54) u>> 2 | adc.d(
            adc.d(var_18, var_18 << 1 | var_1c u>> 0xffffffe1, var_1c + eax_60 u< var_1c), var_50, 
            edi_77 + var_54 u< edi_77) << 0x1e
        int32_t eax_62 = var_2c * 2
        int32_t edi_81 = var_2c + eax_62
        *(ecx_1 + 0x24) = (edi_81 + var_64) u>> 2 | adc.d(
            adc.d(var_28, var_28 << 1 | var_2c u>> 0xffffffe1, var_2c + eax_62 u< var_2c), var_60, 
            edi_81 + var_64 u< edi_81) << 0x1e
        int32_t eax_64 = var_14 * 2
        int32_t edi_85 = var_14 + eax_64
        *(ecx_1 + 0x10) = var_24
        *(ecx_1 + 0xc) = var_c
        *(ecx_1 + 8) = var_1c
        *(ecx_1 + 0x18) = var_4c
        *(ecx_1 + 0x14) = var_5c
        *(ecx_1 + 4) = var_2c
        var_34 = var_4c
        var_6c = var_5c
        *(ecx_1 + 0x20) = (edi_85 + var_74) u>> 2 | adc.d(
            adc.d(var_10, var_10 << 1 | var_14 u>> 0xffffffe1, var_14 + eax_64 u< var_14), var_70, 
            edi_85 + var_74 u< edi_85) << 0x1e
        edi = var_84
        *ecx_1 = var_14
        ebx = var_80
        var_30 = var_48
        var_68 = var_58
        *(ecx_1 + 0x1c) = edi
        var_7c = edi
        var_78 = ebx
        var_3c = var_24
        var_38 = var_20
        var_44 = var_c
        var_40 = var_8
        var_54 = var_1c
        var_50 = var_18
        var_64 = var_2c
        var_60 = var_28
        ecx_1 -= 0x80
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
