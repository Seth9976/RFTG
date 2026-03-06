// 函数名称: sub_5e7880
// 虚拟地址: 0x5e7880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5e7880(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(arg1 + 8)))
    int32_t* edx = *(arg1 + 0x10)
    void* i = eax_2 + edx
    int32_t eax_3 = *edx
    int32_t eax_5 = edx[1]
    int32_t ecx_4 =
        ((eax_3 & 0xff0000) | eax_3 u>> 0x10) u>> 8 | (eax_3 << 0x10 | (eax_3 & 0xff00)) << 8
    int32_t eax_7 = edx[2]
    int32_t esi_11 =
        ((eax_5 & 0xff0000) | eax_5 u>> 0x10) u>> 8 | (eax_5 << 0x10 | (eax_5 & 0xff00)) << 8
    int32_t edi_10 =
        ((eax_7 & 0xff0000) | eax_7 u>> 0x10) u>> 8 | (eax_7 << 0x10 | (eax_7 & 0xff00)) << 8
    int32_t ebx_6 = edx[3]
    int32_t ebx_12 = edx[4]
    int32_t var_10 =
        ((ebx_6 & 0xff0000) | ebx_6 u>> 0x10) u>> 8 | (ebx_6 << 0x10 | (ebx_6 & 0xff00)) << 8
    int32_t var_1c = 0
    int32_t ebx_18 = edx[5]
    int32_t var_14_2 =
        ((ebx_12 & 0xff0000) | ebx_12 u>> 0x10) u>> 8 | (ebx_12 << 0x10 | (ebx_12 & 0xff00)) << 8
    void* var_c = ((ebx_18 & 0xff0000) | ebx_18 u>> 0x10) u>> 8
    int32_t var_18_3 = var_c | (ebx_18 << 0x10 | (ebx_18 & 0xff00)) << 8
    int32_t var_2c
    void* var_8
    
    if (edx u< i)
        var_8 = &edx[2]
        int32_t eax_34 = 0
        var_c = &edx[2]
        int32_t edx_2 = eax - 0x180
        
        do
            eax_34 += eax_2
            var_8 += 0x18
            var_1c = eax_34
            
            if (eax_34 * 2 s>= edx_2)
                *(var_c - 8) = ((ecx_4 & 0xff0000) | ecx_4 u>> 0x10) u>> 8
                    | ((ecx_4 & 0xff00) | ecx_4 << 0x10) << 8
                *(var_c - 4) = ((esi_11 & 0xff0000) | esi_11 u>> 0x10) u>> 8
                    | ((esi_11 & 0xff00) | esi_11 << 0x10) << 8
                *var_c = ((edi_10 & 0xff0000) | edi_10 u>> 0x10) u>> 8
                    | ((edi_10 & 0xff00) | edi_10 << 0x10) << 8
                *(var_c + 4) = ((var_10 & 0xff0000) | var_10 u>> 0x10) u>> 8
                    | ((var_10 & 0xff00) | var_10 << 0x10) << 8
                *(var_c + 8) = ((var_14_2 & 0xff0000) | var_14_2 u>> 0x10) u>> 8
                    | ((var_14_2 & 0xff00) | var_14_2 << 0x10) << 8
                void* eax_65 = var_c + 0x18
                var_c = eax_65
                *(eax_65 - 0xc) = ((var_18_3 & 0xff0000) | var_18_3 u>> 0x10) u>> 8
                    | ((var_18_3 & 0xff00) | var_18_3 << 0x10) << 8
                int32_t edx_33 = *(var_8 - 8)
                int32_t eax_72
                int32_t edx_35
                edx_35:eax_72 = sx.q(((edx_33 & 0xff0000) | edx_33 u>> 0x10) u>> 8
                    | (edx_33 << 0x10 | (edx_33 & 0xff00)) << 8)
                int32_t eax_74
                int32_t edx_36
                edx_36:eax_74 = sx.q(ecx_4)
                int32_t edx_38 = *(var_8 - 4)
                ecx_4 =
                    (eax_72 + eax_74) u>> 1 | adc.d(edx_35, edx_36, eax_72 + eax_74 u< eax_72) << 0x1f
                int32_t eax_82
                int32_t edx_40
                edx_40:eax_82 = sx.q(((edx_38 & 0xff0000) | edx_38 u>> 0x10) u>> 8
                    | (edx_38 << 0x10 | (edx_38 & 0xff00)) << 8)
                int32_t eax_84
                int32_t edx_41
                edx_41:eax_84 = sx.q(esi_11)
                esi_11 =
                    (eax_82 + eax_84) u>> 1 | adc.d(edx_40, edx_41, eax_82 + eax_84 u< eax_82) << 0x1f
                int32_t edx_42 = *var_8
                int32_t eax_93
                int32_t edx_44
                edx_44:eax_93 = sx.q(((edx_42 & 0xff0000) | edx_42 u>> 0x10) u>> 8
                    | (edx_42 << 0x10 | (edx_42 & 0xff00)) << 8)
                int32_t eax_95
                int32_t edx_45
                edx_45:eax_95 = sx.q(edi_10)
                int32_t edx_47 = *(var_8 + 4)
                int32_t eax_103
                int32_t edx_49
                edx_49:eax_103 = sx.q(((edx_47 & 0xff0000) | edx_47 u>> 0x10) u>> 8
                    | (edx_47 << 0x10 | (edx_47 & 0xff00)) << 8)
                var_2c =
                    (eax_93 + eax_95) u>> 1 | adc.d(edx_44, edx_45, eax_93 + eax_95 u< eax_93) << 0x1f
                int32_t eax_105
                int32_t edx_50
                edx_50:eax_105 = sx.q(var_10)
                int32_t edx_51 = *(var_8 + 8)
                var_10 = (eax_103 + eax_105) u>> 1
                    | adc.d(edx_49, edx_50, eax_103 + eax_105 u< eax_103) << 0x1f
                int32_t eax_112
                int32_t edx_53
                edx_53:eax_112 = sx.q(((edx_51 & 0xff0000) | edx_51 u>> 0x10) u>> 8
                    | (edx_51 << 0x10 | (edx_51 & 0xff00)) << 8)
                int32_t eax_114
                int32_t edx_54
                edx_54:eax_114 = sx.q(var_14_2)
                int32_t edx_56 = *(var_8 + 0xc)
                var_14_2 = (eax_112 + eax_114) u>> 1
                    | adc.d(edx_53, edx_54, eax_112 + eax_114 u< eax_112) << 0x1f
                int32_t eax_120
                int32_t edx_58
                edx_58:eax_120 = sx.q(((edx_56 & 0xff0000) | edx_56 u>> 0x10) u>> 8
                    | (edx_56 << 0x10 | (edx_56 & 0xff00)) << 8)
                int32_t eax_122
                int32_t edx_59
                edx_59:eax_122 = sx.q(var_18_3)
                edx_2 = eax - 0x180
                var_18_3 = (eax_120 + eax_122) u>> 1
                    | adc.d(edx_58, edx_59, eax_120 + eax_122 u< eax_120) << 0x1f
                edi_10 = var_2c
                eax_34 = var_1c - edx_2
        while (var_c - 8 u< i)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_2
    int32_t ecx_7 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_7 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_7 << 2) + 0x28))(arg1, arg2, var_2c, eax_2, i, eax - 0x180, var_1c, var_18_3, 
        var_14_2, var_10, var_c, var_8)
}
