// 函数名称: sub_5f6df0
// 虚拟地址: 0x5f6df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f6df0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ecx_1 = *(arg1 + 0x10)
    int32_t* ecx_1 = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t edx_2 = *ecx_1
    int32_t eax_7
    int32_t edx_4
    edx_4:eax_7 =
        sx.q(((edx_2 & 0xff0000) | edx_2 u>> 0x10) u>> 8 | (edx_2 << 0x10 | (edx_2 & 0xff00)) << 8)
    int32_t var_14 = eax_7
    int32_t var_10 = edx_4
    int32_t edx_5 = ecx_1[1]
    int32_t eax_13
    int32_t edx_7
    edx_7:eax_13 =
        sx.q(((edx_5 & 0xff0000) | edx_5 u>> 0x10) u>> 8 | (edx_5 << 0x10 | (edx_5 & 0xff00)) << 8)
    int32_t var_24 = eax_13
    int32_t var_20 = edx_7
    int32_t edx_8 = ecx_1[2]
    int32_t eax_19
    int32_t edx_10
    edx_10:eax_19 =
        sx.q(((edx_8 & 0xff0000) | edx_8 u>> 0x10) u>> 8 | (edx_8 << 0x10 | (edx_8 & 0xff00)) << 8)
    int32_t var_34 = eax_19
    int32_t var_30 = edx_10
    int32_t edx_11 = ecx_1[3]
    int32_t edi_1 = ((edx & 3) + eax_1) s>> 2
    int32_t eax_25
    int32_t edx_13
    edx_13:eax_25 =
        sx.q(((edx_11 & 0xff0000) | edx_11 u>> 0x10) u>> 8 | (edx_11 << 0x10 | (edx_11 & 0xff00)) << 8)
    void* ebx = ecx_1 + edi_1
    int32_t var_44 = eax_25
    int32_t var_40 = edx_13
    
    if (ecx_1 u< ebx)
        void* edi_2 = &ecx_1[2]
        void* esi_24 = &ecx_1[2]
        int32_t i_1 = ((ebx - ecx_1 - 1) u>> 4) + 1
        int32_t i
        
        do
            int32_t ecx_3 = *(esi_24 - 8)
            int32_t ecx_5 = *(esi_24 - 4)
            int32_t eax_31
            int32_t edx_20
            edx_20:eax_31 = sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8
                | (ecx_3 << 0x10 | (ecx_3 & 0xff00)) << 8)
            int32_t ecx_7 = *esi_24
            int32_t eax_37
            int32_t edx_27
            edx_27:eax_37 = sx.q(((ecx_5 & 0xff0000) | ecx_5 u>> 0x10) u>> 8
                | (ecx_5 << 0x10 | (ecx_5 & 0xff00)) << 8)
            int32_t ecx_9 = *(esi_24 + 4)
            int32_t eax_43
            int32_t edx_34
            edx_34:eax_43 = sx.q(((ecx_7 & 0xff0000) | ecx_7 u>> 0x10) u>> 8
                | (ecx_7 << 0x10 | (ecx_7 & 0xff00)) << 8)
            int32_t eax_49
            int32_t edx_41
            edx_41:eax_49 = sx.q(((ecx_9 & 0xff0000) | ecx_9 u>> 0x10) u>> 8
                | (ecx_9 << 0x10 | (ecx_9 & 0xff00)) << 8)
            esi_24 += 0x40
            *(edi_2 - 8) =
                (eax_31 + var_14) u>> 1 | adc.d(edx_20, var_10, eax_31 + var_14 u< eax_31) << 0x1f
            *(edi_2 - 4) =
                (eax_37 + var_24) u>> 1 | adc.d(edx_27, var_20, eax_37 + var_24 u< eax_37) << 0x1f
            *edi_2 = (eax_43 + var_34) u>> 1 | adc.d(edx_34, var_30, eax_43 + var_34 u< eax_43) << 0x1f
            var_10 = edx_20
            *(edi_2 + 4) =
                (eax_49 + var_44) u>> 1 | adc.d(edx_41, var_40, eax_49 + var_44 u< eax_49) << 0x1f
            var_24 = eax_37
            var_20 = edx_27
            var_34 = eax_43
            edi_2 += 0x10
            i = i_1
            i_1 -= 1
            var_14 = eax_31
            var_30 = edx_34
            var_44 = eax_49
            var_40 = edx_41
        while (i != 1)
    
    *(arg1 + 0x50) += 1
    int32_t ecx_20 = *(arg1 + 0x50)
    *(arg1 + 0x18) = edi_1
    
    if (*(arg1 + (ecx_20 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_20 << 2) + 0x28))(arg1, arg2)
}
