// 函数名称: sub_5f50d0
// 虚拟地址: 0x5f50d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f50d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t eax = *(edi + 0x18)
    int32_t esi = *(edi + 0x10)
    int32_t ecx = eax * 2
    void* ecx_1 = esi + ecx - 0x40
    void* esi_1 = esi + eax - 0x20
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(esi_1 + 0x1c))
    int32_t ebx = eax_2
    int32_t var_88 = edx
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(esi_1 + 0x18))
    int32_t var_34 = eax_4
    int32_t var_30 = edx_1
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(*(esi_1 + 0x14))
    int32_t var_6c = eax_6
    int32_t var_68 = edx_2
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(*(esi_1 + 0x10))
    int32_t var_3c = eax_8
    int32_t var_38 = edx_3
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = sx.q(*(esi_1 + 0xc))
    int32_t var_44 = eax_10
    int32_t var_40 = edx_4
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = sx.q(*(esi_1 + 8))
    int32_t var_54 = eax_12
    int32_t var_50 = edx_5
    int32_t eax_14
    int32_t edx_6
    edx_6:eax_14 = sx.q(*(esi_1 + 4))
    int32_t var_64 = eax_14
    int32_t var_60 = edx_6
    int32_t eax_16
    int32_t edx_7
    edx_7:eax_16 = sx.q(*esi_1)
    int32_t var_74 = eax_16
    int32_t var_70 = edx_7
    
    if (ecx_1 u>= esi)
        do
            int32_t eax_18
            int32_t edx_8
            edx_8:eax_18 = sx.q(*(esi_1 + 0x1c))
            int32_t eax_20
            int32_t edx_9
            edx_9:eax_20 = sx.q(*(esi_1 + 0x18))
            int32_t eax_22
            int32_t edx_10
            edx_10:eax_22 = sx.q(*(esi_1 + 0x14))
            int32_t eax_24
            int32_t edx_11
            edx_11:eax_24 = sx.q(*(esi_1 + 0x10))
            int32_t eax_26
            int32_t edx_12
            edx_12:eax_26 = sx.q(*(esi_1 + 0xc))
            int32_t eax_28
            int32_t edx_13
            edx_13:eax_28 = sx.q(*(esi_1 + 8))
            int32_t eax_30
            int32_t edx_14
            edx_14:eax_30 = sx.q(*(esi_1 + 4))
            int32_t eax_32
            int32_t edx_15
            edx_15:eax_32 = sx.q(*esi_1)
            esi_1 -= 0x20
            *(ecx_1 + 0x3c) =
                (eax_18 + ebx) u>> 1 | adc.d(edx_8, var_88, eax_18 + ebx u< eax_18) << 0x1f
            *(ecx_1 + 0x38) =
                (eax_20 + var_34) u>> 1 | adc.d(edx_9, var_30, eax_20 + var_34 u< eax_20) << 0x1f
            *(ecx_1 + 0x34) =
                (eax_22 + var_6c) u>> 1 | adc.d(edx_10, var_68, eax_22 + var_6c u< eax_22) << 0x1f
            *(ecx_1 + 0x30) =
                (eax_24 + var_3c) u>> 1 | adc.d(edx_11, var_38, eax_24 + var_3c u< eax_24) << 0x1f
            *(ecx_1 + 0x2c) =
                (eax_26 + var_44) u>> 1 | adc.d(edx_12, var_40, eax_26 + var_44 u< eax_26) << 0x1f
            *(ecx_1 + 0x28) =
                (eax_28 + var_54) u>> 1 | adc.d(edx_13, var_50, eax_28 + var_54 u< eax_28) << 0x1f
            *(ecx_1 + 0x24) =
                (eax_30 + var_64) u>> 1 | adc.d(edx_14, var_60, eax_30 + var_64 u< eax_30) << 0x1f
            *(ecx_1 + 0x10) = eax_24
            *(ecx_1 + 0x20) =
                (eax_32 + var_74) u>> 1 | adc.d(edx_15, var_70, eax_32 + var_74 u< eax_32) << 0x1f
            *(ecx_1 + 0x18) = eax_20
            *(ecx_1 + 0x14) = eax_22
            var_34 = eax_20
            var_6c = eax_22
            var_30 = edx_9
            var_68 = edx_10
            *(ecx_1 + 0xc) = eax_26
            var_3c = eax_24
            var_38 = edx_11
            *(ecx_1 + 8) = eax_28
            var_44 = eax_26
            var_40 = edx_12
            *(ecx_1 + 4) = eax_30
            var_54 = eax_28
            var_50 = edx_13
            *(ecx_1 + 0x1c) = eax_18
            *ecx_1 = eax_32
            ebx = eax_18
            var_64 = eax_30
            var_60 = edx_14
            ecx_1 -= 0x40
            var_88 = edx_8
            var_74 = eax_32
            var_70 = edx_15
        while (ecx_1 u>= esi)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = ecx
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
