// 函数名称: sub_5e8210
// 虚拟地址: 0x5e8210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5e8210(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(arg1 + 8)))
    int32_t* edx = *(arg1 + 0x10)
    int32_t esi_1 = *edx
    void* i = eax_2 + edx
    int32_t edi = edx[1]
    int32_t ecx_4 =
        ((esi_1 & 0xff0000) | esi_1 u>> 0x10) u>> 8 | (esi_1 << 0x10 | (esi_1 & 0xff00)) << 8
    int32_t edi_2 = edx[2]
    int32_t esi_7 = ((edi & 0xff0000) | edi u>> 0x10) u>> 8 | (edi << 0x10 | (edi & 0xff00)) << 8
    int32_t var_c =
        ((edi_2 & 0xff0000) | edi_2 u>> 0x10) u>> 8 | (edi_2 << 0x10 | (edi_2 & 0xff00)) << 8
    int32_t eax_20 = edx[3]
    int32_t eax_22 = edx[4]
    int32_t var_10 =
        ((eax_20 & 0xff0000) | eax_20 u>> 0x10) u>> 8 | (eax_20 << 0x10 | (eax_20 & 0xff00)) << 8
    int32_t var_24 = 0
    int32_t eax_24 = edx[5]
    int32_t var_14 =
        ((eax_22 & 0xff0000) | eax_22 u>> 0x10) u>> 8 | (eax_22 << 0x10 | (eax_22 & 0xff00)) << 8
    int32_t eax_26 = edx[6]
    int32_t var_18 =
        ((eax_24 & 0xff0000) | eax_24 u>> 0x10) u>> 8 | (eax_24 << 0x10 | (eax_24 & 0xff00)) << 8
    int32_t eax_28 = edx[7]
    int32_t var_1c =
        ((eax_26 & 0xff0000) | eax_26 u>> 0x10) u>> 8 | (eax_26 << 0x10 | (eax_26 & 0xff00)) << 8
    int32_t var_20 =
        ((eax_28 & 0xff0000) | eax_28 u>> 0x10) u>> 8 | (eax_28 << 0x10 | (eax_28 & 0xff00)) << 8
    void* var_38
    int32_t var_34
    void* var_8
    
    if (edx u< i)
        int32_t edi_29 = eax - 0x200
        var_8 = &edx[2]
        int32_t eax_31 = 0
        void* edx_1 = &edx[2]
        
        do
            eax_31 += eax_2
            var_8 += 0x20
            var_24 = eax_31
            
            if (eax_31 * 2 s>= edi_29)
                *(edx_1 - 8) = ((ecx_4 & 0xff0000) | ecx_4 u>> 0x10) u>> 8
                    | ((ecx_4 & 0xff00) | ecx_4 << 0x10) << 8
                *(edx_1 - 4) = ((esi_7 & 0xff0000) | esi_7 u>> 0x10) u>> 8
                    | ((esi_7 & 0xff00) | esi_7 << 0x10) << 8
                *edx_1 = ((var_c & 0xff0000) | var_c u>> 0x10) u>> 8
                    | ((var_c & 0xff00) | var_c << 0x10) << 8
                *(edx_1 + 4) = ((var_10 & 0xff0000) | var_10 u>> 0x10) u>> 8
                    | ((var_10 & 0xff00) | var_10 << 0x10) << 8
                *(edx_1 + 8) = ((var_14 & 0xff0000) | var_14 u>> 0x10) u>> 8
                    | ((var_14 & 0xff00) | var_14 << 0x10) << 8
                *(edx_1 + 0xc) = ((var_18 & 0xff0000) | var_18 u>> 0x10) u>> 8
                    | ((var_18 & 0xff00) | var_18 << 0x10) << 8
                *(edx_1 + 0x10) = ((var_1c & 0xff0000) | var_1c u>> 0x10) u>> 8
                    | (var_1c << 0x10 | (var_1c & 0xff00)) << 8
                *(edx_1 + 0x14) = ((var_20 & 0xff0000) | var_20 u>> 0x10) u>> 8
                    | (var_20 << 0x10 | (var_20 & 0xff00)) << 8
                var_38 = edx_1 + 0x20
                int32_t edx_3 = *(var_8 - 8)
                int32_t eax_59
                int32_t edx_5
                edx_5:eax_59 = sx.q(((edx_3 & 0xff0000) | edx_3 u>> 0x10) u>> 8
                    | (edx_3 << 0x10 | (edx_3 & 0xff00)) << 8)
                int32_t eax_61
                int32_t edx_6
                edx_6:eax_61 = sx.q(ecx_4)
                int32_t edx_7 = *(var_8 - 4)
                ecx_4 = (eax_59 + eax_61) u>> 1 | adc.d(edx_5, edx_6, eax_59 + eax_61 u< eax_59) << 0x1f
                int32_t eax_69
                int32_t edx_9
                edx_9:eax_69 = sx.q(((edx_7 & 0xff0000) | edx_7 u>> 0x10) u>> 8
                    | (edx_7 << 0x10 | (edx_7 & 0xff00)) << 8)
                var_34 = edx_9
                int32_t eax_71
                int32_t edx_10
                edx_10:eax_71 = sx.q(esi_7)
                esi_7 =
                    (eax_69 + eax_71) u>> 1 | adc.d(var_34, edx_10, eax_69 + eax_71 u< eax_69) << 0x1f
                int32_t edx_11 = *var_8
                int32_t eax_79
                int32_t edx_13
                edx_13:eax_79 = sx.q(((edx_11 & 0xff0000) | edx_11 u>> 0x10) u>> 8
                    | (edx_11 << 0x10 | (edx_11 & 0xff00)) << 8)
                int32_t eax_81
                int32_t edx_14
                edx_14:eax_81 = sx.q(var_c)
                int32_t edx_16 = *(var_8 + 4)
                var_c =
                    (eax_79 + eax_81) u>> 1 | adc.d(edx_13, edx_14, eax_79 + eax_81 u< eax_79) << 0x1f
                int32_t eax_87
                int32_t edx_18
                edx_18:eax_87 = sx.q(((edx_16 & 0xff0000) | edx_16 u>> 0x10) u>> 8
                    | (edx_16 << 0x10 | (edx_16 & 0xff00)) << 8)
                int32_t eax_89
                int32_t edx_19
                edx_19:eax_89 = sx.q(var_10)
                int32_t edx_20 = *(var_8 + 8)
                var_10 =
                    (eax_87 + eax_89) u>> 1 | adc.d(edx_18, edx_19, eax_87 + eax_89 u< eax_87) << 0x1f
                int32_t eax_96
                int32_t edx_22
                edx_22:eax_96 = sx.q(((edx_20 & 0xff0000) | edx_20 u>> 0x10) u>> 8
                    | (edx_20 << 0x10 | (edx_20 & 0xff00)) << 8)
                int32_t eax_98
                int32_t edx_23
                edx_23:eax_98 = sx.q(var_14)
                int32_t edx_25 = *(var_8 + 0xc)
                var_14 =
                    (eax_96 + eax_98) u>> 1 | adc.d(edx_22, edx_23, eax_96 + eax_98 u< eax_96) << 0x1f
                int32_t eax_104
                int32_t edx_27
                edx_27:eax_104 = sx.q(((edx_25 & 0xff0000) | edx_25 u>> 0x10) u>> 8
                    | (edx_25 << 0x10 | (edx_25 & 0xff00)) << 8)
                int32_t eax_106
                int32_t edx_28
                edx_28:eax_106 = sx.q(var_18)
                int32_t edx_29 = *(var_8 + 0x10)
                var_18 = (eax_104 + eax_106) u>> 1
                    | adc.d(edx_27, edx_28, eax_104 + eax_106 u< eax_104) << 0x1f
                int32_t eax_113
                int32_t edx_31
                edx_31:eax_113 = sx.q(((edx_29 & 0xff0000) | edx_29 u>> 0x10) u>> 8
                    | (edx_29 << 0x10 | (edx_29 & 0xff00)) << 8)
                int32_t eax_115
                int32_t edx_32
                edx_32:eax_115 = sx.q(var_1c)
                int32_t edx_34 = *(var_8 + 0x14)
                var_1c = (eax_113 + eax_115) u>> 1
                    | adc.d(edx_31, edx_32, eax_113 + eax_115 u< eax_113) << 0x1f
                int32_t eax_121
                int32_t edx_36
                edx_36:eax_121 = sx.q(((edx_34 & 0xff0000) | edx_34 u>> 0x10) u>> 8
                    | (edx_34 << 0x10 | (edx_34 & 0xff00)) << 8)
                int32_t eax_123
                int32_t edx_37
                edx_37:eax_123 = sx.q(var_20)
                edx_1 = var_38
                var_20 = (eax_121 + eax_123) u>> 1
                    | adc.d(edx_36, edx_37, eax_121 + eax_123 u< eax_121) << 0x1f
                edi_29 = eax - 0x200
                eax_31 = var_24 - edi_29
        while (edx_1 - 8 u< i)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_2
    int32_t ecx_7 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_7 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_7 << 2) + 0x28))(arg1, arg2, var_38, var_34, eax_2, i, eax - 0x200, var_24, 
        var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
