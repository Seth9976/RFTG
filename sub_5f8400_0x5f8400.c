// 函数名称: sub_5f8400
// 虚拟地址: 0x5f8400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f8400(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 - edx) s>> 1
    int32_t* edi = *(arg1 + 0x10)
    int32_t ecx_1 = *edi
    void* ebx = edi + eax_3
    int32_t ecx_3 = edi[1]
    int32_t eax_9
    int32_t edx_7
    edx_7:eax_9 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | (ecx_1 << 0x10 | (ecx_1 & 0xff00)) << 8)
    int32_t var_20 = eax_9
    int32_t var_1c = edx_7
    int32_t eax_15
    int32_t edx_14
    edx_14:eax_15 =
        sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8 | (ecx_3 << 0x10 | (ecx_3 & 0xff00)) << 8)
    int32_t var_58 = eax_15
    int32_t var_54 = edx_14
    int32_t edx_15 = edi[2]
    void* ecx_5 = &edi[2]
    int32_t eax_21
    int32_t edx_17
    edx_17:eax_21 =
        sx.q(((edx_15 & 0xff0000) | edx_15 u>> 0x10) u>> 8 | (edx_15 << 0x10 | (edx_15 & 0xff00)) << 8)
    int32_t var_78 = eax_21
    int32_t var_74 = edx_17
    int32_t edx_18 = edi[3]
    int32_t eax_27
    int32_t edx_20
    edx_20:eax_27 =
        sx.q(((edx_18 & 0xff0000) | edx_18 u>> 0x10) u>> 8 | (edx_18 << 0x10 | (edx_18 & 0xff00)) << 8)
    int32_t var_8 = edx_20
    int32_t edx_21 = edi[4]
    int32_t var_c = eax_27
    int32_t eax_33
    int32_t edx_23
    edx_23:eax_33 =
        sx.q(((edx_21 & 0xff0000) | edx_21 u>> 0x10) u>> 8 | (edx_21 << 0x10 | (edx_21 & 0xff00)) << 8)
    int32_t var_30 = eax_33
    int32_t var_2c = edx_23
    int32_t edx_24 = edi[5]
    int32_t eax_39
    int32_t edx_26
    edx_26:eax_39 =
        sx.q(((edx_24 & 0xff0000) | edx_24 u>> 0x10) u>> 8 | (edx_24 << 0x10 | (edx_24 & 0xff00)) << 8)
    int32_t var_50 = eax_39
    int32_t var_4c = edx_26
    int32_t edx_27 = edi[6]
    int32_t eax_45
    int32_t edx_29
    edx_29:eax_45 =
        sx.q(((edx_27 & 0xff0000) | edx_27 u>> 0x10) u>> 8 | (edx_27 << 0x10 | (edx_27 & 0xff00)) << 8)
    int32_t var_70 = eax_45
    int32_t var_6c = edx_29
    int32_t edx_30 = edi[7]
    int32_t eax_51
    int32_t edx_32
    edx_32:eax_51 =
        sx.q(((edx_30 & 0xff0000) | edx_30 u>> 0x10) u>> 8 | (edx_30 << 0x10 | (edx_30 & 0xff00)) << 8)
    int32_t var_68 = eax_51
    int32_t var_64 = edx_32
    
    if (edi u< ebx)
        void* esi_36 = &edi[2]
        int32_t i_1 = ((ebx - edi - 1) u>> 5) + 1
        int32_t i
        
        do
            int32_t edx_33 = *(ecx_5 - 8)
            int32_t eax_57
            int32_t edx_35
            edx_35:eax_57 = sx.q(((edx_33 & 0xff0000) | edx_33 u>> 0x10) u>> 8
                | (edx_33 << 0x10 | (edx_33 & 0xff00)) << 8)
            int32_t edx_36 = *(ecx_5 - 4)
            int32_t eax_63
            int32_t edx_38
            edx_38:eax_63 = sx.q(((edx_36 & 0xff0000) | edx_36 u>> 0x10) u>> 8
                | (edx_36 << 0x10 | (edx_36 & 0xff00)) << 8)
            int32_t edx_39 = *ecx_5
            int32_t eax_69
            int32_t edx_41
            edx_41:eax_69 = sx.q(((edx_39 & 0xff0000) | edx_39 u>> 0x10) u>> 8
                | (edx_39 << 0x10 | (edx_39 & 0xff00)) << 8)
            int32_t edx_42 = *(ecx_5 + 4)
            int32_t eax_75
            int32_t edx_44
            edx_44:eax_75 = sx.q(((edx_42 & 0xff0000) | edx_42 u>> 0x10) u>> 8
                | (edx_42 << 0x10 | (edx_42 & 0xff00)) << 8)
            int32_t edx_45 = *(ecx_5 + 8)
            int32_t eax_81
            int32_t edx_47
            edx_47:eax_81 = sx.q(((edx_45 & 0xff0000) | edx_45 u>> 0x10) u>> 8
                | (edx_45 << 0x10 | (edx_45 & 0xff00)) << 8)
            int32_t edx_48 = *(ecx_5 + 0xc)
            int32_t eax_87
            int32_t edx_50
            edx_50:eax_87 = sx.q(((edx_48 & 0xff0000) | edx_48 u>> 0x10) u>> 8
                | (edx_48 << 0x10 | (edx_48 & 0xff00)) << 8)
            int32_t edx_51 = *(ecx_5 + 0x10)
            int32_t eax_93
            int32_t edx_53
            edx_53:eax_93 = sx.q(((edx_51 & 0xff0000) | edx_51 u>> 0x10) u>> 8
                | (edx_51 << 0x10 | (edx_51 & 0xff00)) << 8)
            int32_t edx_54 = *(ecx_5 + 0x14)
            int32_t eax_99
            int32_t edx_56
            edx_56:eax_99 = sx.q(((edx_54 & 0xff0000) | edx_54 u>> 0x10) u>> 8
                | (edx_54 << 0x10 | (edx_54 & 0xff00)) << 8)
            ecx_5 += 0x40
            *(esi_36 - 8) =
                (eax_57 + var_20) u>> 1 | adc.d(edx_35, var_1c, eax_57 + var_20 u< eax_57) << 0x1f
            *(esi_36 - 4) =
                (eax_63 + var_58) u>> 1 | adc.d(edx_38, var_54, eax_63 + var_58 u< eax_63) << 0x1f
            *esi_36 = (eax_69 + var_78) u>> 1 | adc.d(edx_41, var_74, eax_69 + var_78 u< eax_69) << 0x1f
            *(esi_36 + 4) =
                (eax_75 + var_c) u>> 1 | adc.d(edx_44, var_8, eax_75 + var_c u< eax_75) << 0x1f
            *(esi_36 + 8) =
                (eax_81 + var_30) u>> 1 | adc.d(edx_47, var_2c, eax_81 + var_30 u< eax_81) << 0x1f
            var_20 = eax_57
            *(esi_36 + 0xc) =
                (eax_87 + var_50) u>> 1 | adc.d(edx_50, var_4c, eax_87 + var_50 u< eax_87) << 0x1f
            *(esi_36 + 0x10) =
                (eax_93 + var_70) u>> 1 | adc.d(edx_53, var_6c, eax_93 + var_70 u< eax_93) << 0x1f
            esi_36 += 0x20
            *(esi_36 - 0xc) =
                (eax_99 + var_68) u>> 1 | adc.d(edx_56, var_64, eax_99 + var_68 u< eax_99) << 0x1f
            i = i_1
            i_1 -= 1
            var_1c = edx_35
            var_58 = eax_63
            var_54 = edx_38
            var_78 = eax_69
            var_74 = edx_41
            var_c = eax_75
            var_8 = edx_44
            var_30 = eax_81
            var_2c = edx_47
            var_50 = eax_87
            var_4c = edx_50
            var_70 = eax_93
            var_6c = edx_53
            var_68 = eax_99
            var_64 = edx_56
        while (i != 1)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t ecx_7 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_7 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_7 << 2) + 0x28))(arg1, arg2)
}
