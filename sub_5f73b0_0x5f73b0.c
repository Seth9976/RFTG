// 函数名称: sub_5f73b0
// 虚拟地址: 0x5f73b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f73b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t* edi = *(arg1 + 0x10)
    int32_t ecx_1 = *edi
    int32_t ecx_3 = edi[1]
    int32_t eax_8
    int32_t edx_7
    edx_7:eax_8 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | (ecx_1 << 0x10 | (ecx_1 & 0xff00)) << 8)
    int32_t var_14 = eax_8
    int32_t var_10 = edx_7
    int32_t eax_14
    int32_t edx_14
    edx_14:eax_14 =
        sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8 | (ecx_3 << 0x10 | (ecx_3 & 0xff00)) << 8)
    int32_t var_24 = eax_14
    int32_t var_20 = edx_14
    int32_t edx_15 = edi[2]
    int32_t eax_20
    int32_t edx_17
    edx_17:eax_20 =
        sx.q(((edx_15 & 0xff0000) | edx_15 u>> 0x10) u>> 8 | (edx_15 << 0x10 | (edx_15 & 0xff00)) << 8)
    int32_t var_34 = eax_20
    int32_t var_30 = edx_17
    int32_t edx_18 = edi[3]
    int32_t eax_26
    int32_t edx_20
    edx_20:eax_26 =
        sx.q(((edx_18 & 0xff0000) | edx_18 u>> 0x10) u>> 8 | (edx_18 << 0x10 | (edx_18 & 0xff00)) << 8)
    int32_t var_40 = edx_20
    int32_t edx_21 = edi[4]
    int32_t var_44 = eax_26
    int32_t esi_1 = (eax_1 - edx) s>> 1
    void* ebx = edi + esi_1
    int32_t eax_32
    int32_t edx_23
    edx_23:eax_32 =
        sx.q(((edx_21 & 0xff0000) | edx_21 u>> 0x10) u>> 8 | (edx_21 << 0x10 | (edx_21 & 0xff00)) << 8)
    int32_t var_54 = eax_32
    int32_t var_50 = edx_23
    int32_t edx_24 = edi[5]
    int32_t eax_38
    int32_t edx_26
    edx_26:eax_38 =
        sx.q(((edx_24 & 0xff0000) | edx_24 u>> 0x10) u>> 8 | (edx_24 << 0x10 | (edx_24 & 0xff00)) << 8)
    int32_t var_64 = eax_38
    int32_t var_60 = edx_26
    
    if (edi u< ebx)
        void* esi_2 = &edi[2]
        void* ecx_29 = &edi[2]
        int32_t i_1 = (ebx - edi - 1) u/ 0x18 + 1
        int32_t i
        
        do
            int32_t edx_30 = *(ecx_29 - 8)
            int32_t eax_45
            int32_t edx_32
            edx_32:eax_45 = sx.q(((edx_30 & 0xff0000) | edx_30 u>> 0x10) u>> 8
                | (edx_30 << 0x10 | (edx_30 & 0xff00)) << 8)
            int32_t edx_33 = *(ecx_29 - 4)
            int32_t eax_51
            int32_t edx_35
            edx_35:eax_51 = sx.q(((edx_33 & 0xff0000) | edx_33 u>> 0x10) u>> 8
                | (edx_33 << 0x10 | (edx_33 & 0xff00)) << 8)
            int32_t edx_36 = *ecx_29
            int32_t eax_57
            int32_t edx_38
            edx_38:eax_57 = sx.q(((edx_36 & 0xff0000) | edx_36 u>> 0x10) u>> 8
                | (edx_36 << 0x10 | (edx_36 & 0xff00)) << 8)
            int32_t edx_39 = *(ecx_29 + 4)
            int32_t eax_63
            int32_t edx_41
            edx_41:eax_63 = sx.q(((edx_39 & 0xff0000) | edx_39 u>> 0x10) u>> 8
                | (edx_39 << 0x10 | (edx_39 & 0xff00)) << 8)
            int32_t edx_42 = *(ecx_29 + 8)
            int32_t eax_69
            int32_t edx_44
            edx_44:eax_69 = sx.q(((edx_42 & 0xff0000) | edx_42 u>> 0x10) u>> 8
                | (edx_42 << 0x10 | (edx_42 & 0xff00)) << 8)
            int32_t edx_45 = *(ecx_29 + 0xc)
            int32_t eax_75
            int32_t edx_47
            edx_47:eax_75 = sx.q(((edx_45 & 0xff0000) | edx_45 u>> 0x10) u>> 8
                | (edx_45 << 0x10 | (edx_45 & 0xff00)) << 8)
            ecx_29 += 0x30
            int32_t edx_49 = eax_45 + var_14
            bool c_1 = eax_45 + var_14 u< eax_45
            var_14 = eax_45
            *(esi_2 - 8) = edx_49 u>> 1 | adc.d(edx_32, var_10, c_1) << 0x1f
            *(esi_2 - 4) =
                (eax_51 + var_24) u>> 1 | adc.d(edx_35, var_20, eax_51 + var_24 u< eax_51) << 0x1f
            *esi_2 = (eax_57 + var_34) u>> 1 | adc.d(edx_38, var_30, eax_57 + var_34 u< eax_57) << 0x1f
            *(esi_2 + 4) =
                (eax_63 + var_44) u>> 1 | adc.d(edx_41, var_40, eax_63 + var_44 u< eax_63) << 0x1f
            *(esi_2 + 8) =
                (eax_69 + var_54) u>> 1 | adc.d(edx_44, var_50, eax_69 + var_54 u< eax_69) << 0x1f
            *(esi_2 + 0xc) =
                (eax_75 + var_64) u>> 1 | adc.d(edx_47, var_60, eax_75 + var_64 u< eax_75) << 0x1f
            var_10 = edx_32
            var_24 = eax_51
            var_20 = edx_35
            var_34 = eax_57
            var_30 = edx_38
            var_44 = eax_63
            var_40 = edx_41
            var_54 = eax_69
            var_50 = edx_44
            var_64 = eax_75
            var_60 = edx_47
            esi_2 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x50) += 1
    int32_t ecx_30 = *(arg1 + 0x50)
    *(arg1 + 0x18) = esi_1
    
    if (*(arg1 + (ecx_30 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_30 << 2) + 0x28))(arg1, arg2)
}
