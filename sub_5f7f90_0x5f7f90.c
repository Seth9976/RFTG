// 函数名称: sub_5f7f90
// 虚拟地址: 0x5f7f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f7f90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax * 2
    int32_t edi = *(arg1 + 0x10)
    void* esi = edi + eax - 0x20
    void* ecx_1 = edi + edx - 0x40
    int32_t edx_1 = *(esi + 0x1c)
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 =
        sx.q(((edx_1 & 0xff0000) | edx_1 u>> 0x10) u>> 8 | (edx_1 << 0x10 | (edx_1 & 0xff00)) << 8)
    int32_t var_3c = eax_6
    int32_t var_38 = edx_3
    int32_t edx_4 = *(esi + 0x18)
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 =
        sx.q(((edx_4 & 0xff0000) | edx_4 u>> 0x10) u>> 8 | (edx_4 << 0x10 | (edx_4 & 0xff00)) << 8)
    int32_t var_2c = eax_12
    int32_t var_28 = edx_6
    int32_t edx_7 = *(esi + 0x14)
    int32_t eax_18
    int32_t edx_9
    edx_9:eax_18 =
        sx.q(((edx_7 & 0xff0000) | edx_7 u>> 0x10) u>> 8 | (edx_7 << 0x10 | (edx_7 & 0xff00)) << 8)
    int32_t var_74 = eax_18
    int32_t var_70 = edx_9
    int32_t edx_10 = *(esi + 0x10)
    int32_t eax_24
    int32_t edx_12
    edx_12:eax_24 =
        sx.q(((edx_10 & 0xff0000) | edx_10 u>> 0x10) u>> 8 | (edx_10 << 0x10 | (edx_10 & 0xff00)) << 8)
    int32_t var_34 = eax_24
    int32_t var_30 = edx_12
    int32_t edx_13 = *(esi + 0xc)
    int32_t eax_30
    int32_t edx_15
    edx_15:eax_30 =
        sx.q(((edx_13 & 0xff0000) | edx_13 u>> 0x10) u>> 8 | (edx_13 << 0x10 | (edx_13 & 0xff00)) << 8)
    int32_t var_4c = eax_30
    int32_t var_48 = edx_15
    int32_t edx_16 = *(esi + 8)
    int32_t eax_36
    int32_t edx_18
    edx_18:eax_36 =
        sx.q(((edx_16 & 0xff0000) | edx_16 u>> 0x10) u>> 8 | (edx_16 << 0x10 | (edx_16 & 0xff00)) << 8)
    int32_t var_5c = eax_36
    int32_t var_58 = edx_18
    int32_t edx_19 = *(esi + 4)
    int32_t eax_42
    int32_t edx_21
    edx_21:eax_42 =
        sx.q(((edx_19 & 0xff0000) | edx_19 u>> 0x10) u>> 8 | (edx_19 << 0x10 | (edx_19 & 0xff00)) << 8)
    int32_t var_6c = eax_42
    int32_t var_68 = edx_21
    int32_t edx_22 = *esi
    int32_t eax_48
    int32_t edx_24
    edx_24:eax_48 =
        sx.q(((edx_22 & 0xff0000) | edx_22 u>> 0x10) u>> 8 | (edx_22 << 0x10 | (edx_22 & 0xff00)) << 8)
    int32_t var_44 = eax_48
    int32_t var_40 = edx_24
    
    while (ecx_1 u>= edi)
        int32_t edx_25 = *(esi + 0x1c)
        int32_t eax_54
        int32_t edx_27
        edx_27:eax_54 = sx.q(((edx_25 & 0xff0000) | edx_25 u>> 0x10) u>> 8
            | (edx_25 << 0x10 | (edx_25 & 0xff00)) << 8)
        int32_t edx_28 = *(esi + 0x18)
        int32_t eax_60
        int32_t edx_30
        edx_30:eax_60 = sx.q(((edx_28 & 0xff0000) | edx_28 u>> 0x10) u>> 8
            | (edx_28 << 0x10 | (edx_28 & 0xff00)) << 8)
        int32_t edx_31 = *(esi + 0x14)
        int32_t eax_66
        int32_t edx_33
        edx_33:eax_66 = sx.q(((edx_31 & 0xff0000) | edx_31 u>> 0x10) u>> 8
            | (edx_31 << 0x10 | (edx_31 & 0xff00)) << 8)
        int32_t edx_34 = *(esi + 0x10)
        int32_t eax_72
        int32_t edx_36
        edx_36:eax_72 = sx.q(((edx_34 & 0xff0000) | edx_34 u>> 0x10) u>> 8
            | (edx_34 << 0x10 | (edx_34 & 0xff00)) << 8)
        int32_t edx_37 = *(esi + 0xc)
        int32_t eax_78
        int32_t edx_39
        edx_39:eax_78 = sx.q(((edx_37 & 0xff0000) | edx_37 u>> 0x10) u>> 8
            | (edx_37 << 0x10 | (edx_37 & 0xff00)) << 8)
        int32_t edx_40 = *(esi + 8)
        int32_t eax_84
        int32_t edx_42
        edx_42:eax_84 = sx.q(((edx_40 & 0xff0000) | edx_40 u>> 0x10) u>> 8
            | (edx_40 << 0x10 | (edx_40 & 0xff00)) << 8)
        int32_t edx_43 = *(esi + 4)
        int32_t eax_90
        int32_t edx_45
        edx_45:eax_90 = sx.q(((edx_43 & 0xff0000) | edx_43 u>> 0x10) u>> 8
            | (edx_43 << 0x10 | (edx_43 & 0xff00)) << 8)
        int32_t edx_46 = *esi
        int32_t eax_96
        int32_t edx_48
        edx_48:eax_96 = sx.q(((edx_46 & 0xff0000) | edx_46 u>> 0x10) u>> 8
            | (edx_46 << 0x10 | (edx_46 & 0xff00)) << 8)
        esi -= 0x20
        *(ecx_1 + 0x3c) =
            (eax_54 + var_3c) u>> 1 | adc.d(edx_27, var_38, eax_54 + var_3c u< eax_54) << 0x1f
        *(ecx_1 + 0x38) =
            (eax_60 + var_2c) u>> 1 | adc.d(edx_30, var_28, eax_60 + var_2c u< eax_60) << 0x1f
        *(ecx_1 + 0x34) =
            (eax_66 + var_74) u>> 1 | adc.d(edx_33, var_70, eax_66 + var_74 u< eax_66) << 0x1f
        *(ecx_1 + 0x30) =
            (eax_72 + var_34) u>> 1 | adc.d(edx_36, var_30, eax_72 + var_34 u< eax_72) << 0x1f
        *(ecx_1 + 0x2c) =
            (eax_78 + var_4c) u>> 1 | adc.d(edx_39, var_48, eax_78 + var_4c u< eax_78) << 0x1f
        *(ecx_1 + 0x10) = eax_72
        *(ecx_1 + 0x28) =
            (eax_84 + var_5c) u>> 1 | adc.d(edx_42, var_58, eax_84 + var_5c u< eax_84) << 0x1f
        *(ecx_1 + 0xc) = eax_78
        *(ecx_1 + 0x24) =
            (eax_90 + var_6c) u>> 1 | adc.d(edx_45, var_68, eax_90 + var_6c u< eax_90) << 0x1f
        *(ecx_1 + 8) = eax_84
        *(ecx_1 + 0x20) =
            (eax_96 + var_44) u>> 1 | adc.d(edx_48, var_40, eax_96 + var_44 u< eax_96) << 0x1f
        *(ecx_1 + 0x18) = eax_60
        var_2c = eax_60
        *(ecx_1 + 0x14) = eax_66
        var_28 = edx_30
        var_74 = eax_66
        var_70 = edx_33
        var_34 = eax_72
        var_30 = edx_36
        var_4c = eax_78
        *(ecx_1 + 4) = eax_90
        var_48 = edx_39
        var_5c = eax_84
        *(ecx_1 + 0x1c) = eax_54
        *ecx_1 = eax_96
        var_3c = eax_54
        var_58 = edx_42
        var_6c = eax_90
        ecx_1 -= 0x40
        var_38 = edx_27
        var_68 = edx_45
        var_44 = eax_96
        var_40 = edx_48
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2)
}
