// 函数名称: sub_5f4ba0
// 虚拟地址: 0x5f4ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f4ba0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax << 2
    int32_t esi = *(arg1 + 0x10)
    void* ecx_1 = esi + edx - 0x60
    void* esi_1 = esi + eax - 0x18
    int32_t eax_2
    int32_t edx_1
    edx_1:eax_2 = sx.q(*(esi_1 + 0x14))
    int32_t ebx = edx_1
    int32_t edi = eax_2
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(*(esi_1 + 0x10))
    int32_t var_34 = eax_4
    int32_t var_30 = edx_2
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 = sx.q(*(esi_1 + 0xc))
    int32_t var_44 = eax_6
    int32_t var_40 = edx_3
    int32_t eax_8
    int32_t edx_4
    edx_4:eax_8 = sx.q(*(esi_1 + 8))
    int32_t var_4c = eax_8
    int32_t var_48 = edx_4
    int32_t eax_10
    int32_t edx_5
    edx_5:eax_10 = sx.q(*(esi_1 + 4))
    int32_t var_54 = eax_10
    int32_t var_50 = edx_5
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 = sx.q(*esi_1)
    int32_t var_6c = edi
    int32_t var_68 = ebx
    int32_t var_5c = eax_12
    int32_t var_58 = edx_6
    int32_t var_64
    int32_t var_60
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
        int32_t eax_14
        int32_t edx_7
        edx_7:eax_14 = sx.q(*(esi_1 + 0x14))
        var_64 = eax_14
        var_60 = edx_7
        int32_t eax_16
        int32_t edx_8
        edx_8:eax_16 = sx.q(*(esi_1 + 0x10))
        var_2c = eax_16
        var_28 = edx_8
        int32_t eax_18
        int32_t edx_9
        edx_9:eax_18 = sx.q(*(esi_1 + 0xc))
        var_3c = eax_18
        var_38 = edx_9
        int32_t eax_20
        int32_t edx_10
        edx_10:eax_20 = sx.q(*(esi_1 + 8))
        var_14 = eax_20
        var_10 = edx_10
        int32_t eax_22
        int32_t edx_11
        edx_11:eax_22 = sx.q(*(esi_1 + 4))
        var_1c = eax_22
        var_18 = edx_11
        int32_t eax_24
        int32_t edx_12
        edx_12:eax_24 = sx.q(*esi_1)
        var_24 = eax_24
        var_20 = edx_12
        int32_t eax_26 = edi * 2
        esi_1 -= 0x18
        int32_t edi_1 = edi + eax_26
        *(ecx_1 + 0x5c) = (edi_1 + var_64) u>> 2 | adc.d(
            adc.d(ebx, ebx << 1 | edi u>> 0xffffffe1, edi + eax_26 u< edi), var_60, 
            edi_1 + var_64 u< edi_1) << 0x1e
        int32_t eax_28 = var_34 * 2
        int32_t edi_5 = var_34 + eax_28
        *(ecx_1 + 0x58) = (edi_5 + var_2c) u>> 2 | adc.d(
            adc.d(var_30, var_30 << 1 | var_34 u>> 0xffffffe1, var_34 + eax_28 u< var_34), var_28, 
            edi_5 + var_2c u< edi_5) << 0x1e
        int32_t eax_30 = var_44 * 2
        int32_t edi_9 = var_44 + eax_30
        *(ecx_1 + 0x54) = (edi_9 + var_3c) u>> 2 | adc.d(
            adc.d(var_40, var_40 << 1 | var_44 u>> 0xffffffe1, var_44 + eax_30 u< var_44), var_38, 
            edi_9 + var_3c u< edi_9) << 0x1e
        int32_t eax_32 = var_4c * 2
        int32_t edi_13 = var_4c + eax_32
        *(ecx_1 + 0x50) = (edi_13 + var_14) u>> 2 | adc.d(
            adc.d(var_48, var_48 << 1 | var_4c u>> 0xffffffe1, var_4c + eax_32 u< var_4c), var_10, 
            edi_13 + var_14 u< edi_13) << 0x1e
        int32_t eax_34 = var_54 * 2
        int32_t edi_17 = var_54 + eax_34
        *(ecx_1 + 0x4c) = (edi_17 + var_1c) u>> 2 | adc.d(
            adc.d(var_50, var_50 << 1 | var_54 u>> 0xffffffe1, var_54 + eax_34 u< var_54), var_18, 
            edi_17 + var_1c u< edi_17) << 0x1e
        int32_t eax_36 = var_5c * 2
        int32_t edi_21 = var_5c + eax_36
        *(ecx_1 + 0x48) = (edi_21 + var_24) u>> 2 | adc.d(
            adc.d(var_58, var_58 << 1 | var_5c u>> 0xffffffe1, var_5c + eax_36 u< var_5c), var_20, 
            edi_21 + var_24 u< edi_21) << 0x1e
        *(ecx_1 + 0x44) =
            (var_64 + var_6c) u>> 1 | adc.d(var_60, var_68, var_64 + var_6c u< var_64) << 0x1f
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
        int32_t eax_38 = var_64 * 2
        int32_t edi_43 = var_64 + eax_38
        *(ecx_1 + 0x2c) = (edi_43 + var_6c) u>> 2 | adc.d(
            adc.d(var_60, var_60 << 1 | var_64 u>> 0xffffffe1, var_64 + eax_38 u< var_64), var_68, 
            edi_43 + var_6c u< edi_43) << 0x1e
        int32_t eax_40 = var_2c * 2
        int32_t edi_47 = var_2c + eax_40
        *(ecx_1 + 0x28) = (edi_47 + var_34) u>> 2 | adc.d(
            adc.d(var_28, var_28 << 1 | var_2c u>> 0xffffffe1, var_2c + eax_40 u< var_2c), var_30, 
            edi_47 + var_34 u< edi_47) << 0x1e
        int32_t eax_42 = var_3c * 2
        int32_t edi_51 = var_3c + eax_42
        *(ecx_1 + 0x24) = (edi_51 + var_44) u>> 2 | adc.d(
            adc.d(var_38, var_38 << 1 | var_3c u>> 0xffffffe1, var_3c + eax_42 u< var_3c), var_40, 
            edi_51 + var_44 u< edi_51) << 0x1e
        int32_t eax_44 = var_14 * 2
        int32_t edi_55 = var_14 + eax_44
        *(ecx_1 + 0x20) = (edi_55 + var_4c) u>> 2 | adc.d(
            adc.d(var_10, var_10 << 1 | var_14 u>> 0xffffffe1, var_14 + eax_44 u< var_14), var_48, 
            edi_55 + var_4c u< edi_55) << 0x1e
        int32_t eax_46 = var_1c * 2
        int32_t edi_59 = var_1c + eax_46
        *(ecx_1 + 0x1c) = (edi_59 + var_54) u>> 2 | adc.d(
            adc.d(var_18, var_18 << 1 | var_1c u>> 0xffffffe1, var_1c + eax_46 u< var_1c), var_50, 
            edi_59 + var_54 u< edi_59) << 0x1e
        int32_t eax_48 = var_24 * 2
        int32_t edi_63 = var_24 + eax_48
        *(ecx_1 + 0x10) = var_2c
        *(ecx_1 + 8) = var_14
        *(ecx_1 + 4) = var_1c
        var_34 = var_2c
        *(ecx_1 + 0x18) = (edi_63 + var_5c) u>> 2 | adc.d(
            adc.d(var_20, var_20 << 1 | var_24 u>> 0xffffffe1, var_24 + eax_48 u< var_24), var_58, 
            edi_63 + var_5c u< edi_63) << 0x1e
        edi = var_64
        *(ecx_1 + 0xc) = var_3c
        *ecx_1 = var_24
        ebx = var_60
        var_44 = var_3c
        var_30 = var_28
        *(ecx_1 + 0x14) = edi
        var_6c = edi
        var_68 = ebx
        var_40 = var_38
        var_4c = var_14
        var_48 = var_10
        var_54 = var_1c
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
