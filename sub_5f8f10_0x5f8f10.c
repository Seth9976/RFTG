// 函数名称: sub_5f8f10
// 虚拟地址: 0x5f8f10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f8f10(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 + (edx & 3)) s>> 2
    int32_t* edi = *(arg1 + 0x10)
    int32_t ecx_1 = *edi
    void* ebx = edi + eax_3
    int32_t ecx_3 = edi[1]
    int32_t eax_9
    int32_t edx_8
    edx_8:eax_9 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | (ecx_1 << 0x10 | (ecx_1 & 0xff00)) << 8)
    int32_t var_20 = eax_9
    int32_t var_1c = edx_8
    int32_t eax_15
    int32_t edx_15
    edx_15:eax_15 =
        sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8 | (ecx_3 << 0x10 | (ecx_3 & 0xff00)) << 8)
    int32_t var_58 = eax_15
    int32_t var_54 = edx_15
    int32_t edx_16 = edi[2]
    void* ecx_5 = &edi[2]
    int32_t eax_21
    int32_t edx_18
    edx_18:eax_21 =
        sx.q(((edx_16 & 0xff0000) | edx_16 u>> 0x10) u>> 8 | (edx_16 << 0x10 | (edx_16 & 0xff00)) << 8)
    int32_t var_78 = eax_21
    int32_t var_74 = edx_18
    int32_t edx_19 = edi[3]
    int32_t eax_27
    int32_t edx_21
    edx_21:eax_27 =
        sx.q(((edx_19 & 0xff0000) | edx_19 u>> 0x10) u>> 8 | (edx_19 << 0x10 | (edx_19 & 0xff00)) << 8)
    int32_t var_8 = edx_21
    int32_t edx_22 = edi[4]
    int32_t var_c = eax_27
    int32_t eax_33
    int32_t edx_24
    edx_24:eax_33 =
        sx.q(((edx_22 & 0xff0000) | edx_22 u>> 0x10) u>> 8 | (edx_22 << 0x10 | (edx_22 & 0xff00)) << 8)
    int32_t var_30 = eax_33
    int32_t var_2c = edx_24
    int32_t edx_25 = edi[5]
    int32_t eax_39
    int32_t edx_27
    edx_27:eax_39 =
        sx.q(((edx_25 & 0xff0000) | edx_25 u>> 0x10) u>> 8 | (edx_25 << 0x10 | (edx_25 & 0xff00)) << 8)
    int32_t var_50 = eax_39
    int32_t var_4c = edx_27
    int32_t edx_28 = edi[6]
    int32_t eax_45
    int32_t edx_30
    edx_30:eax_45 =
        sx.q(((edx_28 & 0xff0000) | edx_28 u>> 0x10) u>> 8 | (edx_28 << 0x10 | (edx_28 & 0xff00)) << 8)
    int32_t var_70 = eax_45
    int32_t var_6c = edx_30
    int32_t edx_31 = edi[7]
    int32_t eax_51
    int32_t edx_33
    edx_33:eax_51 =
        sx.q(((edx_31 & 0xff0000) | edx_31 u>> 0x10) u>> 8 | (edx_31 << 0x10 | (edx_31 & 0xff00)) << 8)
    int32_t var_68 = eax_51
    int32_t var_64 = edx_33
    
    if (edi u< ebx)
        void* esi_36 = &edi[2]
        int32_t i_1 = ((ebx - edi - 1) u>> 5) + 1
        int32_t i
        
        do
            int32_t edx_34 = *(ecx_5 - 8)
            int32_t eax_57
            int32_t edx_36
            edx_36:eax_57 = sx.q(((edx_34 & 0xff0000) | edx_34 u>> 0x10) u>> 8
                | (edx_34 << 0x10 | (edx_34 & 0xff00)) << 8)
            int32_t edx_37 = *(ecx_5 - 4)
            int32_t eax_63
            int32_t edx_39
            edx_39:eax_63 = sx.q(((edx_37 & 0xff0000) | edx_37 u>> 0x10) u>> 8
                | (edx_37 << 0x10 | (edx_37 & 0xff00)) << 8)
            int32_t edx_40 = *ecx_5
            int32_t eax_69
            int32_t edx_42
            edx_42:eax_69 = sx.q(((edx_40 & 0xff0000) | edx_40 u>> 0x10) u>> 8
                | (edx_40 << 0x10 | (edx_40 & 0xff00)) << 8)
            int32_t edx_43 = *(ecx_5 + 4)
            int32_t eax_75
            int32_t edx_45
            edx_45:eax_75 = sx.q(((edx_43 & 0xff0000) | edx_43 u>> 0x10) u>> 8
                | (edx_43 << 0x10 | (edx_43 & 0xff00)) << 8)
            int32_t edx_46 = *(ecx_5 + 8)
            int32_t eax_81
            int32_t edx_48
            edx_48:eax_81 = sx.q(((edx_46 & 0xff0000) | edx_46 u>> 0x10) u>> 8
                | (edx_46 << 0x10 | (edx_46 & 0xff00)) << 8)
            int32_t edx_49 = *(ecx_5 + 0xc)
            int32_t eax_87
            int32_t edx_51
            edx_51:eax_87 = sx.q(((edx_49 & 0xff0000) | edx_49 u>> 0x10) u>> 8
                | (edx_49 << 0x10 | (edx_49 & 0xff00)) << 8)
            int32_t edx_52 = *(ecx_5 + 0x10)
            int32_t eax_93
            int32_t edx_54
            edx_54:eax_93 = sx.q(((edx_52 & 0xff0000) | edx_52 u>> 0x10) u>> 8
                | (edx_52 << 0x10 | (edx_52 & 0xff00)) << 8)
            int32_t edx_55 = *(ecx_5 + 0x14)
            int32_t eax_99
            int32_t edx_57
            edx_57:eax_99 = sx.q(((edx_55 & 0xff0000) | edx_55 u>> 0x10) u>> 8
                | (edx_55 << 0x10 | (edx_55 & 0xff00)) << 8)
            ecx_5 -= 0xffffff80
            *(esi_36 - 8) =
                (eax_57 + var_20) u>> 1 | adc.d(edx_36, var_1c, eax_57 + var_20 u< eax_57) << 0x1f
            *(esi_36 - 4) =
                (eax_63 + var_58) u>> 1 | adc.d(edx_39, var_54, eax_63 + var_58 u< eax_63) << 0x1f
            *esi_36 = (eax_69 + var_78) u>> 1 | adc.d(edx_42, var_74, eax_69 + var_78 u< eax_69) << 0x1f
            *(esi_36 + 4) =
                (eax_75 + var_c) u>> 1 | adc.d(edx_45, var_8, eax_75 + var_c u< eax_75) << 0x1f
            *(esi_36 + 8) =
                (eax_81 + var_30) u>> 1 | adc.d(edx_48, var_2c, eax_81 + var_30 u< eax_81) << 0x1f
            var_20 = eax_57
            *(esi_36 + 0xc) =
                (eax_87 + var_50) u>> 1 | adc.d(edx_51, var_4c, eax_87 + var_50 u< eax_87) << 0x1f
            *(esi_36 + 0x10) =
                (eax_93 + var_70) u>> 1 | adc.d(edx_54, var_6c, eax_93 + var_70 u< eax_93) << 0x1f
            esi_36 += 0x20
            *(esi_36 - 0xc) =
                (eax_99 + var_68) u>> 1 | adc.d(edx_57, var_64, eax_99 + var_68 u< eax_99) << 0x1f
            i = i_1
            i_1 -= 1
            var_1c = edx_36
            var_58 = eax_63
            var_54 = edx_39
            var_78 = eax_69
            var_74 = edx_42
            var_c = eax_75
            var_8 = edx_45
            var_30 = eax_81
            var_2c = edx_48
            var_50 = eax_87
            var_4c = edx_51
            var_70 = eax_93
            var_6c = edx_54
            var_68 = eax_99
            var_64 = edx_57
        while (i != 1)
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t ecx_7 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_7 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_7 << 2) + 0x28))(arg1, arg2)
}
