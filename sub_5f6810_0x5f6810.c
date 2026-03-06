// 函数名称: sub_5f6810
// 虚拟地址: 0x5f6810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f6810(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* ecx_1 = *(arg1 + 0x10)
    int32_t* ecx_1 = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t edx_1 = *ecx_1
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 =
        sx.q(((edx_1 & 0xff0000) | edx_1 u>> 0x10) u>> 8 | (edx_1 << 0x10 | (edx_1 & 0xff00)) << 8)
    int32_t var_14 = eax_8
    int32_t var_10 = edx_3
    int32_t edx_4 = ecx_1[1]
    int32_t eax_14
    int32_t edx_6
    edx_6:eax_14 =
        sx.q(((edx_4 & 0xff0000) | edx_4 u>> 0x10) u>> 8 | (edx_4 << 0x10 | (edx_4 & 0xff00)) << 8)
    int32_t var_24 = eax_14
    int32_t var_20 = edx_6
    int32_t edx_7 = ecx_1[2]
    int32_t eax_20
    int32_t edx_9
    edx_9:eax_20 =
        sx.q(((edx_7 & 0xff0000) | edx_7 u>> 0x10) u>> 8 | (edx_7 << 0x10 | (edx_7 & 0xff00)) << 8)
    int32_t var_34 = eax_20
    int32_t var_30 = edx_9
    int32_t edx_10 = ecx_1[3]
    int32_t edi_1 = (eax_1 - edx) s>> 1
    int32_t eax_26
    int32_t edx_12
    edx_12:eax_26 =
        sx.q(((edx_10 & 0xff0000) | edx_10 u>> 0x10) u>> 8 | (edx_10 << 0x10 | (edx_10 & 0xff00)) << 8)
    void* ebx = ecx_1 + edi_1
    int32_t var_44 = eax_26
    int32_t var_40 = edx_12
    
    if (ecx_1 u< ebx)
        void* edi_2 = &ecx_1[2]
        void* esi_24 = &ecx_1[2]
        int32_t i_1 = ((ebx - ecx_1 - 1) u>> 4) + 1
        int32_t i
        
        do
            int32_t ecx_2 = *(esi_24 - 8)
            int32_t ecx_4 = *(esi_24 - 4)
            int32_t eax_32
            int32_t edx_19
            edx_19:eax_32 = sx.q(((ecx_2 & 0xff0000) | ecx_2 u>> 0x10) u>> 8
                | (ecx_2 << 0x10 | (ecx_2 & 0xff00)) << 8)
            int32_t ecx_6 = *esi_24
            int32_t eax_38
            int32_t edx_26
            edx_26:eax_38 = sx.q(((ecx_4 & 0xff0000) | ecx_4 u>> 0x10) u>> 8
                | (ecx_4 << 0x10 | (ecx_4 & 0xff00)) << 8)
            int32_t ecx_8 = *(esi_24 + 4)
            int32_t eax_44
            int32_t edx_33
            edx_33:eax_44 = sx.q(((ecx_6 & 0xff0000) | ecx_6 u>> 0x10) u>> 8
                | (ecx_6 << 0x10 | (ecx_6 & 0xff00)) << 8)
            int32_t eax_50
            int32_t edx_40
            edx_40:eax_50 = sx.q(((ecx_8 & 0xff0000) | ecx_8 u>> 0x10) u>> 8
                | (ecx_8 << 0x10 | (ecx_8 & 0xff00)) << 8)
            esi_24 += 0x20
            *(edi_2 - 8) =
                (eax_32 + var_14) u>> 1 | adc.d(edx_19, var_10, eax_32 + var_14 u< eax_32) << 0x1f
            *(edi_2 - 4) =
                (eax_38 + var_24) u>> 1 | adc.d(edx_26, var_20, eax_38 + var_24 u< eax_38) << 0x1f
            *edi_2 = (eax_44 + var_34) u>> 1 | adc.d(edx_33, var_30, eax_44 + var_34 u< eax_44) << 0x1f
            var_10 = edx_19
            *(edi_2 + 4) =
                (eax_50 + var_44) u>> 1 | adc.d(edx_40, var_40, eax_50 + var_44 u< eax_50) << 0x1f
            var_24 = eax_38
            var_20 = edx_26
            var_34 = eax_44
            edi_2 += 0x10
            i = i_1
            i_1 -= 1
            var_14 = eax_32
            var_30 = edx_33
            var_44 = eax_50
            var_40 = edx_40
        while (i != 1)
    
    *(arg1 + 0x50) += 1
    int32_t ecx_19 = *(arg1 + 0x50)
    *(arg1 + 0x18) = edi_1
    
    if (*(arg1 + (ecx_19 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_19 << 2) + 0x28))(arg1, arg2)
}
