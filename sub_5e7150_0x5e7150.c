// 函数名称: sub_5e7150
// 虚拟地址: 0x5e7150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5e7150(void* arg1, int32_t arg2)
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
    void* var_c = ((ebx_6 & 0xff0000) | ebx_6 u>> 0x10) u>> 8
    int32_t var_14 = 0
    int32_t var_10_1 = var_c | (ebx_6 << 0x10 | (ebx_6 & 0xff00)) << 8
    int32_t var_24
    void* var_8
    
    if (edx u< i)
        var_8 = &edx[2]
        int32_t eax_18 = 0
        var_c = &edx[2]
        int32_t edx_2 = eax - 0x100
        
        do
            eax_18 += eax_2
            var_8 += 0x10
            var_14 = eax_18
            
            if (eax_18 * 2 s>= edx_2)
                *(var_c - 8) = ((ecx_4 & 0xff0000) | ecx_4 u>> 0x10) u>> 8
                    | ((ecx_4 & 0xff00) | ecx_4 << 0x10) << 8
                *(var_c - 4) = ((esi_11 & 0xff0000) | esi_11 u>> 0x10) u>> 8
                    | ((esi_11 & 0xff00) | esi_11 << 0x10) << 8
                *var_c = ((edi_10 & 0xff0000) | edi_10 u>> 0x10) u>> 8
                    | ((edi_10 & 0xff00) | edi_10 << 0x10) << 8
                *(var_c + 4) = ((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                    | ((var_10_1 & 0xff00) | var_10_1 << 0x10) << 8
                var_c += 0x10
                int32_t edx_23 = *(var_8 - 8)
                int32_t eax_50
                int32_t edx_25
                edx_25:eax_50 = sx.q(((edx_23 & 0xff0000) | edx_23 u>> 0x10) u>> 8
                    | (edx_23 << 0x10 | (edx_23 & 0xff00)) << 8)
                int32_t eax_52
                int32_t edx_26
                edx_26:eax_52 = sx.q(ecx_4)
                int32_t edx_28 = *(var_8 - 4)
                ecx_4 =
                    (eax_50 + eax_52) u>> 1 | adc.d(edx_25, edx_26, eax_50 + eax_52 u< eax_50) << 0x1f
                int32_t eax_60
                int32_t edx_30
                edx_30:eax_60 = sx.q(((edx_28 & 0xff0000) | edx_28 u>> 0x10) u>> 8
                    | (edx_28 << 0x10 | (edx_28 & 0xff00)) << 8)
                int32_t eax_62
                int32_t edx_31
                edx_31:eax_62 = sx.q(esi_11)
                esi_11 =
                    (eax_60 + eax_62) u>> 1 | adc.d(edx_30, edx_31, eax_60 + eax_62 u< eax_60) << 0x1f
                int32_t edx_32 = *var_8
                int32_t eax_71
                int32_t edx_34
                edx_34:eax_71 = sx.q(((edx_32 & 0xff0000) | edx_32 u>> 0x10) u>> 8
                    | (edx_32 << 0x10 | (edx_32 & 0xff00)) << 8)
                int32_t eax_73
                int32_t edx_35
                edx_35:eax_73 = sx.q(edi_10)
                int32_t edx_37 = *(var_8 + 4)
                int32_t eax_81
                int32_t edx_39
                edx_39:eax_81 = sx.q(((edx_37 & 0xff0000) | edx_37 u>> 0x10) u>> 8
                    | (edx_37 << 0x10 | (edx_37 & 0xff00)) << 8)
                var_24 =
                    (eax_71 + eax_73) u>> 1 | adc.d(edx_34, edx_35, eax_71 + eax_73 u< eax_71) << 0x1f
                int32_t eax_83
                int32_t edx_40
                edx_40:eax_83 = sx.q(var_10_1)
                var_10_1 =
                    (eax_81 + eax_83) u>> 1 | adc.d(edx_39, edx_40, eax_81 + eax_83 u< eax_81) << 0x1f
                edx_2 = eax - 0x100
                edi_10 = var_24
                eax_18 = var_14 - edx_2
        while (var_c - 8 u< i)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_2
    int32_t ecx_7 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_7 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_7 << 2) + 0x28))(arg1, arg2, var_24, eax_2, i, eax - 0x100, var_14, var_10_1, 
        var_c, var_8)
}
