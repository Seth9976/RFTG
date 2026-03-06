// 函数名称: sub_5e7cd0
// 虚拟地址: 0x5e7cd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5e7cd0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x18)
    int32_t eax_1 = sub_685f40(float.t(edi) * fconvert.t(*(arg1 + 8)))
    int32_t ecx = *(arg1 + 0x10)
    void* var_8 = ecx + eax_1 - 0x20
    int32_t edx_1 = *(ecx + edi - 4)
    int32_t* ecx_1 = ecx + edi - 0x20
    int32_t edx_3 = ecx_1[6]
    int32_t esi_5 =
        ((edx_1 & 0xff0000) | edx_1 u>> 0x10) u>> 8 | (edx_1 << 0x10 | (edx_1 & 0xff00)) << 8
    int32_t edx_5 = ecx_1[5]
    int32_t edi_5 =
        ((edx_3 & 0xff0000) | edx_3 u>> 0x10) u>> 8 | (edx_3 << 0x10 | (edx_3 & 0xff00)) << 8
    int32_t var_10 =
        ((edx_5 & 0xff0000) | edx_5 u>> 0x10) u>> 8 | (edx_5 << 0x10 | (edx_5 & 0xff00)) << 8
    int32_t eax_19 = ecx_1[4]
    int32_t eax_21 = ecx_1[3]
    int32_t var_14 =
        ((eax_19 & 0xff0000) | eax_19 u>> 0x10) u>> 8 | (eax_19 << 0x10 | (eax_19 & 0xff00)) << 8
    int32_t var_c = 0
    int32_t eax_23 = ecx_1[2]
    int32_t var_18 =
        ((eax_21 & 0xff0000) | eax_21 u>> 0x10) u>> 8 | (eax_21 << 0x10 | (eax_21 & 0xff00)) << 8
    int32_t eax_25 = ecx_1[1]
    int32_t var_1c =
        ((eax_23 & 0xff0000) | eax_23 u>> 0x10) u>> 8 | (eax_23 << 0x10 | (eax_23 & 0xff00)) << 8
    int32_t eax_27 = *ecx_1
    int32_t var_20 =
        ((eax_25 & 0xff0000) | eax_25 u>> 0x10) u>> 8 | (eax_25 << 0x10 | (eax_25 & 0xff00)) << 8
    int32_t var_24 =
        ((eax_27 & 0xff0000) | eax_27 u>> 0x10) u>> 8 | (eax_27 << 0x10 | (eax_27 & 0xff00)) << 8
    int32_t var_34
    void* result
    
    if (var_8 u< ecx)
        result = arg1
    else
        do
            *(var_8 + 0x1c) =
                ((esi_5 & 0xff0000) | esi_5 u>> 0x10) u>> 8 | ((esi_5 & 0xff00) | esi_5 << 0x10) << 8
            *(var_8 + 0x18) =
                ((edi_5 & 0xff0000) | edi_5 u>> 0x10) u>> 8 | ((edi_5 & 0xff00) | edi_5 << 0x10) << 8
            *(var_8 + 0x14) = ((var_10 & 0xff0000) | var_10 u>> 0x10) u>> 8
                | ((var_10 & 0xff00) | var_10 << 0x10) << 8
            *(var_8 + 0x10) = ((var_14 & 0xff0000) | var_14 u>> 0x10) u>> 8
                | ((var_14 & 0xff00) | var_14 << 0x10) << 8
            *(var_8 + 0xc) = ((var_18 & 0xff0000) | var_18 u>> 0x10) u>> 8
                | ((var_18 & 0xff00) | var_18 << 0x10) << 8
            *(var_8 + 8) = ((var_1c & 0xff0000) | var_1c u>> 0x10) u>> 8
                | ((var_1c & 0xff00) | var_1c << 0x10) << 8
            *(var_8 + 4) = ((var_20 & 0xff0000) | var_20 u>> 0x10) u>> 8
                | (var_20 << 0x10 | (var_20 & 0xff00)) << 8
            int32_t* eax_56 = var_8
            *eax_56 = ((var_24 & 0xff0000) | var_24 u>> 0x10) u>> 8
                | (var_24 << 0x10 | (var_24 & 0xff00)) << 8
            var_8 = eax_56 - 0x20
            int32_t eax_59 = var_c + edi - 0x200
            var_c = eax_59
            
            if (eax_59 * 2 s>= eax_1)
                int32_t edx_77 = ecx_1[-1]
                ecx_1 -= 0x20
                int32_t eax_66
                int32_t edx_79
                edx_79:eax_66 = sx.q(((edx_77 & 0xff0000) | edx_77 u>> 0x10) u>> 8
                    | (edx_77 << 0x10 | (edx_77 & 0xff00)) << 8)
                int32_t eax_68
                int32_t edx_80
                edx_80:eax_68 = sx.q(esi_5)
                int32_t edx_81 = ecx_1[6]
                esi_5 =
                    (eax_66 + eax_68) u>> 1 | adc.d(edx_79, edx_80, eax_66 + eax_68 u< eax_66) << 0x1f
                int32_t eax_76
                int32_t edx_83
                edx_83:eax_76 = sx.q(((edx_81 & 0xff0000) | edx_81 u>> 0x10) u>> 8
                    | (edx_81 << 0x10 | (edx_81 & 0xff00)) << 8)
                int32_t eax_78
                int32_t edx_84
                edx_84:eax_78 = sx.q(edi_5)
                int32_t edx_85 = ecx_1[5]
                int32_t eax_86
                int32_t edx_87
                edx_87:eax_86 = sx.q(((edx_85 & 0xff0000) | edx_85 u>> 0x10) u>> 8
                    | (edx_85 << 0x10 | (edx_85 & 0xff00)) << 8)
                var_34 =
                    (eax_76 + eax_78) u>> 1 | adc.d(edx_83, edx_84, eax_76 + eax_78 u< eax_76) << 0x1f
                int32_t eax_88
                int32_t edx_88
                edx_88:eax_88 = sx.q(var_10)
                int32_t edx_89 = ecx_1[4]
                var_10 =
                    (eax_86 + eax_88) u>> 1 | adc.d(edx_87, edx_88, eax_86 + eax_88 u< eax_86) << 0x1f
                int32_t eax_94
                int32_t edx_91
                edx_91:eax_94 = sx.q(((edx_89 & 0xff0000) | edx_89 u>> 0x10) u>> 8
                    | (edx_89 << 0x10 | (edx_89 & 0xff00)) << 8)
                int32_t eax_96
                int32_t edx_92
                edx_92:eax_96 = sx.q(var_14)
                int32_t edx_93 = ecx_1[3]
                var_14 =
                    (eax_94 + eax_96) u>> 1 | adc.d(edx_91, edx_92, eax_94 + eax_96 u< eax_94) << 0x1f
                int32_t eax_102
                int32_t edx_95
                edx_95:eax_102 = sx.q(((edx_93 & 0xff0000) | edx_93 u>> 0x10) u>> 8
                    | (edx_93 << 0x10 | (edx_93 & 0xff00)) << 8)
                int32_t eax_104
                int32_t edx_96
                edx_96:eax_104 = sx.q(var_18)
                int32_t edx_97 = ecx_1[2]
                var_18 = (eax_102 + eax_104) u>> 1
                    | adc.d(edx_95, edx_96, eax_102 + eax_104 u< eax_102) << 0x1f
                int32_t eax_110
                int32_t edx_99
                edx_99:eax_110 = sx.q(((edx_97 & 0xff0000) | edx_97 u>> 0x10) u>> 8
                    | (edx_97 << 0x10 | (edx_97 & 0xff00)) << 8)
                int32_t eax_112
                int32_t edx_100
                edx_100:eax_112 = sx.q(var_1c)
                int32_t edx_101 = ecx_1[1]
                var_1c = (eax_110 + eax_112) u>> 1
                    | adc.d(edx_99, edx_100, eax_110 + eax_112 u< eax_110) << 0x1f
                int32_t eax_118
                int32_t edx_103
                edx_103:eax_118 = sx.q(((edx_101 & 0xff0000) | edx_101 u>> 0x10) u>> 8
                    | (edx_101 << 0x10 | (edx_101 & 0xff00)) << 8)
                int32_t eax_120
                int32_t edx_104
                edx_104:eax_120 = sx.q(var_20)
                int32_t edx_105 = *ecx_1
                var_20 = (eax_118 + eax_120) u>> 1
                    | adc.d(edx_103, edx_104, eax_118 + eax_120 u< eax_118) << 0x1f
                int32_t eax_126
                int32_t edx_107
                edx_107:eax_126 = sx.q(((edx_105 & 0xff0000) | edx_105 u>> 0x10) u>> 8
                    | (edx_105 << 0x10 | (edx_105 & 0xff00)) << 8)
                int32_t eax_128
                int32_t edx_108
                edx_108:eax_128 = sx.q(var_24)
                var_c -= eax_1
                var_24 = (eax_126 + eax_128) u>> 1
                    | adc.d(edx_107, edx_108, eax_126 + eax_128 u< eax_126) << 0x1f
                edi_5 = var_34
            
            result = arg1
        while (var_8 u>= ecx)
    
    *(result + 0x50) += 1
    *(result + 0x18) = eax_1
    int32_t ecx_3 = *(result + 0x50)
    
    if (*(result + (ecx_3 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_3 << 2) + 0x28))(result, arg2, var_34, edi - 0x200, ecx, eax_1, var_24, 
        var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
