// 函数名称: sub_5f7c30
// 虚拟地址: 0x5f7c30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f7c30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t* edi = *(arg1 + 0x10)
    int32_t ecx_1 = *edi
    int32_t ecx_3 = edi[1]
    int32_t eax_7
    int32_t edx_8
    edx_8:eax_7 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | (ecx_1 << 0x10 | (ecx_1 & 0xff00)) << 8)
    int32_t var_14 = eax_7
    int32_t var_10 = edx_8
    int32_t eax_13
    int32_t edx_15
    edx_15:eax_13 =
        sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8 | (ecx_3 << 0x10 | (ecx_3 & 0xff00)) << 8)
    int32_t var_24 = eax_13
    int32_t var_20 = edx_15
    int32_t edx_16 = edi[2]
    int32_t eax_19
    int32_t edx_18
    edx_18:eax_19 =
        sx.q(((edx_16 & 0xff0000) | edx_16 u>> 0x10) u>> 8 | (edx_16 << 0x10 | (edx_16 & 0xff00)) << 8)
    int32_t var_34 = eax_19
    int32_t var_30 = edx_18
    int32_t edx_19 = edi[3]
    int32_t eax_25
    int32_t edx_21
    edx_21:eax_25 =
        sx.q(((edx_19 & 0xff0000) | edx_19 u>> 0x10) u>> 8 | (edx_19 << 0x10 | (edx_19 & 0xff00)) << 8)
    int32_t var_40 = edx_21
    int32_t edx_22 = edi[4]
    int32_t var_44 = eax_25
    int32_t esi_1 = ((edx & 3) + eax_1) s>> 2
    void* ebx = edi + esi_1
    int32_t eax_31
    int32_t edx_24
    edx_24:eax_31 =
        sx.q(((edx_22 & 0xff0000) | edx_22 u>> 0x10) u>> 8 | (edx_22 << 0x10 | (edx_22 & 0xff00)) << 8)
    int32_t var_54 = eax_31
    int32_t var_50 = edx_24
    int32_t edx_25 = edi[5]
    int32_t eax_37
    int32_t edx_27
    edx_27:eax_37 =
        sx.q(((edx_25 & 0xff0000) | edx_25 u>> 0x10) u>> 8 | (edx_25 << 0x10 | (edx_25 & 0xff00)) << 8)
    int32_t var_64 = eax_37
    int32_t var_60 = edx_27
    
    if (edi u< ebx)
        void* esi_2 = &edi[2]
        void* ecx_29 = &edi[2]
        int32_t i_1 = (ebx - edi - 1) u/ 0x18 + 1
        int32_t i
        
        do
            int32_t edx_31 = *(ecx_29 - 8)
            int32_t eax_44
            int32_t edx_33
            edx_33:eax_44 = sx.q(((edx_31 & 0xff0000) | edx_31 u>> 0x10) u>> 8
                | (edx_31 << 0x10 | (edx_31 & 0xff00)) << 8)
            int32_t edx_34 = *(ecx_29 - 4)
            int32_t eax_50
            int32_t edx_36
            edx_36:eax_50 = sx.q(((edx_34 & 0xff0000) | edx_34 u>> 0x10) u>> 8
                | (edx_34 << 0x10 | (edx_34 & 0xff00)) << 8)
            int32_t edx_37 = *ecx_29
            int32_t eax_56
            int32_t edx_39
            edx_39:eax_56 = sx.q(((edx_37 & 0xff0000) | edx_37 u>> 0x10) u>> 8
                | (edx_37 << 0x10 | (edx_37 & 0xff00)) << 8)
            int32_t edx_40 = *(ecx_29 + 4)
            int32_t eax_62
            int32_t edx_42
            edx_42:eax_62 = sx.q(((edx_40 & 0xff0000) | edx_40 u>> 0x10) u>> 8
                | (edx_40 << 0x10 | (edx_40 & 0xff00)) << 8)
            int32_t edx_43 = *(ecx_29 + 8)
            int32_t eax_68
            int32_t edx_45
            edx_45:eax_68 = sx.q(((edx_43 & 0xff0000) | edx_43 u>> 0x10) u>> 8
                | (edx_43 << 0x10 | (edx_43 & 0xff00)) << 8)
            int32_t edx_46 = *(ecx_29 + 0xc)
            int32_t eax_74
            int32_t edx_48
            edx_48:eax_74 = sx.q(((edx_46 & 0xff0000) | edx_46 u>> 0x10) u>> 8
                | (edx_46 << 0x10 | (edx_46 & 0xff00)) << 8)
            ecx_29 += 0x60
            int32_t edx_50 = eax_44 + var_14
            bool c_1 = eax_44 + var_14 u< eax_44
            var_14 = eax_44
            *(esi_2 - 8) = edx_50 u>> 1 | adc.d(edx_33, var_10, c_1) << 0x1f
            *(esi_2 - 4) =
                (eax_50 + var_24) u>> 1 | adc.d(edx_36, var_20, eax_50 + var_24 u< eax_50) << 0x1f
            *esi_2 = (eax_56 + var_34) u>> 1 | adc.d(edx_39, var_30, eax_56 + var_34 u< eax_56) << 0x1f
            *(esi_2 + 4) =
                (eax_62 + var_44) u>> 1 | adc.d(edx_42, var_40, eax_62 + var_44 u< eax_62) << 0x1f
            *(esi_2 + 8) =
                (eax_68 + var_54) u>> 1 | adc.d(edx_45, var_50, eax_68 + var_54 u< eax_68) << 0x1f
            *(esi_2 + 0xc) =
                (eax_74 + var_64) u>> 1 | adc.d(edx_48, var_60, eax_74 + var_64 u< eax_74) << 0x1f
            var_10 = edx_33
            var_24 = eax_50
            var_20 = edx_36
            var_34 = eax_56
            var_30 = edx_39
            var_44 = eax_62
            var_40 = edx_42
            var_54 = eax_68
            var_50 = edx_45
            var_64 = eax_74
            var_60 = edx_48
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
