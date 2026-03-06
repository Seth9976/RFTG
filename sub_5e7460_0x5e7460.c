// 函数名称: sub_5e7460
// 虚拟地址: 0x5e7460
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5e7460(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(edi) * fconvert.t(*(arg1 + 8)))
    int32_t ecx = *(arg1 + 0x10)
    void* var_8 = ecx + eax_1 - 0x18
    int32_t edx_1 = *(ecx + edi - 4)
    int32_t* ecx_1 = ecx + edi - 0x18
    int32_t edx_3 = ecx_1[4]
    int32_t esi_5 =
        ((edx_1 & 0xff0000) | edx_1 u>> 0x10) u>> 8 | (edx_1 << 0x10 | (edx_1 & 0xff00)) << 8
    int32_t edx_5 = ecx_1[3]
    int32_t edi_5 =
        ((edx_3 & 0xff0000) | edx_3 u>> 0x10) u>> 8 | (edx_3 << 0x10 | (edx_3 & 0xff00)) << 8
    int32_t var_10 =
        ((edx_5 & 0xff0000) | edx_5 u>> 0x10) u>> 8 | (edx_5 << 0x10 | (edx_5 & 0xff00)) << 8
    int32_t eax_19 = ecx_1[2]
    int32_t eax_21 = ecx_1[1]
    int32_t var_14 =
        ((eax_19 & 0xff0000) | eax_19 u>> 0x10) u>> 8 | (eax_19 << 0x10 | (eax_19 & 0xff00)) << 8
    int32_t var_c = 0
    int32_t eax_23 = *ecx_1
    int32_t var_18 =
        ((eax_21 & 0xff0000) | eax_21 u>> 0x10) u>> 8 | (eax_21 << 0x10 | (eax_21 & 0xff00)) << 8
    int32_t var_1c =
        ((eax_23 & 0xff0000) | eax_23 u>> 0x10) u>> 8 | (eax_23 << 0x10 | (eax_23 & 0xff00)) << 8
    int32_t var_2c
    void* result
    
    if (var_8 u< ecx)
        result = arg1
    else
        do
            *(var_8 + 0x14) =
                ((esi_5 & 0xff0000) | esi_5 u>> 0x10) u>> 8 | ((esi_5 & 0xff00) | esi_5 << 0x10) << 8
            *(var_8 + 0x10) =
                ((edi_5 & 0xff0000) | edi_5 u>> 0x10) u>> 8 | ((edi_5 & 0xff00) | edi_5 << 0x10) << 8
            *(var_8 + 0xc) = ((var_10 & 0xff0000) | var_10 u>> 0x10) u>> 8
                | ((var_10 & 0xff00) | var_10 << 0x10) << 8
            *(var_8 + 8) = ((var_14 & 0xff0000) | var_14 u>> 0x10) u>> 8
                | ((var_14 & 0xff00) | var_14 << 0x10) << 8
            *(var_8 + 4) = ((var_18 & 0xff0000) | var_18 u>> 0x10) u>> 8
                | ((var_18 & 0xff00) | var_18 << 0x10) << 8
            int32_t* eax_46 = var_8
            *eax_46 = ((var_1c & 0xff0000) | var_1c u>> 0x10) u>> 8
                | ((var_1c & 0xff00) | var_1c << 0x10) << 8
            var_8 = eax_46 - 0x18
            int32_t eax_49 = var_c + edi - 0x180
            var_c = eax_49
            
            if (eax_49 * 2 s>= eax_1)
                int32_t edx_57 = ecx_1[-1]
                ecx_1 -= 0x18
                int32_t eax_56
                int32_t edx_59
                edx_59:eax_56 = sx.q(((edx_57 & 0xff0000) | edx_57 u>> 0x10) u>> 8
                    | (edx_57 << 0x10 | (edx_57 & 0xff00)) << 8)
                int32_t eax_58
                int32_t edx_60
                edx_60:eax_58 = sx.q(esi_5)
                int32_t edx_61 = ecx_1[4]
                esi_5 =
                    (eax_56 + eax_58) u>> 1 | adc.d(edx_59, edx_60, eax_56 + eax_58 u< eax_56) << 0x1f
                int32_t eax_66
                int32_t edx_63
                edx_63:eax_66 = sx.q(((edx_61 & 0xff0000) | edx_61 u>> 0x10) u>> 8
                    | (edx_61 << 0x10 | (edx_61 & 0xff00)) << 8)
                int32_t eax_68
                int32_t edx_64
                edx_64:eax_68 = sx.q(edi_5)
                int32_t edx_65 = ecx_1[3]
                int32_t eax_76
                int32_t edx_67
                edx_67:eax_76 = sx.q(((edx_65 & 0xff0000) | edx_65 u>> 0x10) u>> 8
                    | (edx_65 << 0x10 | (edx_65 & 0xff00)) << 8)
                var_2c =
                    (eax_66 + eax_68) u>> 1 | adc.d(edx_63, edx_64, eax_66 + eax_68 u< eax_66) << 0x1f
                int32_t eax_78
                int32_t edx_68
                edx_68:eax_78 = sx.q(var_10)
                int32_t edx_69 = ecx_1[2]
                var_10 =
                    (eax_76 + eax_78) u>> 1 | adc.d(edx_67, edx_68, eax_76 + eax_78 u< eax_76) << 0x1f
                int32_t eax_84
                int32_t edx_71
                edx_71:eax_84 = sx.q(((edx_69 & 0xff0000) | edx_69 u>> 0x10) u>> 8
                    | (edx_69 << 0x10 | (edx_69 & 0xff00)) << 8)
                int32_t eax_86
                int32_t edx_72
                edx_72:eax_86 = sx.q(var_14)
                int32_t edx_73 = ecx_1[1]
                var_14 =
                    (eax_84 + eax_86) u>> 1 | adc.d(edx_71, edx_72, eax_84 + eax_86 u< eax_84) << 0x1f
                int32_t eax_92
                int32_t edx_75
                edx_75:eax_92 = sx.q(((edx_73 & 0xff0000) | edx_73 u>> 0x10) u>> 8
                    | (edx_73 << 0x10 | (edx_73 & 0xff00)) << 8)
                int32_t eax_94
                int32_t edx_76
                edx_76:eax_94 = sx.q(var_18)
                int32_t edx_77 = *ecx_1
                var_18 =
                    (eax_92 + eax_94) u>> 1 | adc.d(edx_75, edx_76, eax_92 + eax_94 u< eax_92) << 0x1f
                int32_t eax_100
                int32_t edx_79
                edx_79:eax_100 = sx.q(((edx_77 & 0xff0000) | edx_77 u>> 0x10) u>> 8
                    | (edx_77 << 0x10 | (edx_77 & 0xff00)) << 8)
                int32_t eax_102
                int32_t edx_80
                edx_80:eax_102 = sx.q(var_1c)
                var_c -= eax_1
                var_1c = (eax_100 + eax_102) u>> 1
                    | adc.d(edx_79, edx_80, eax_100 + eax_102 u< eax_100) << 0x1f
                edi_5 = var_2c
            
            result = arg1
        while (var_8 u>= ecx)
    
    *(result + 0x50) += 1
    *(result + 0x18) = eax_1
    int32_t ecx_3 = *(result + 0x50)
    
    if (*(result + (ecx_3 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_3 << 2) + 0x28))(result, arg2, var_2c, edi - 0x180, ecx, eax_1, var_1c, 
        var_18, var_14, var_10, var_c, var_8)
}
