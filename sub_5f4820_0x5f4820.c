// 函数名称: sub_5f4820
// 虚拟地址: 0x5f4820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f4820(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t eax = *(edi + 0x18)
    int32_t esi = *(edi + 0x10)
    int32_t ecx = eax * 2
    void* ecx_1 = esi + ecx - 0x30
    void* esi_1 = esi + eax - 0x18
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(esi_1 + 0x14))
    int32_t ebx = eax_2
    int32_t var_68 = edx
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(esi_1 + 0x10))
    int32_t var_34 = eax_4
    int32_t var_30 = edx_1
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(*(esi_1 + 0xc))
    int32_t var_44 = eax_6
    int32_t var_40 = edx_2
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(*(esi_1 + 8))
    int32_t var_4c = eax_8
    int32_t var_48 = edx_3
    int32_t eax_10
    int32_t edx_4
    edx_4:eax_10 = sx.q(*(esi_1 + 4))
    int32_t var_54 = eax_10
    int32_t var_50 = edx_4
    int32_t eax_12
    int32_t edx_5
    edx_5:eax_12 = sx.q(*esi_1)
    int32_t var_5c = eax_12
    int32_t var_58 = edx_5
    
    if (ecx_1 u>= esi)
        do
            int32_t eax_14
            int32_t edx_6
            edx_6:eax_14 = sx.q(*(esi_1 + 0x14))
            int32_t eax_16
            int32_t edx_7
            edx_7:eax_16 = sx.q(*(esi_1 + 0x10))
            int32_t eax_18
            int32_t edx_8
            edx_8:eax_18 = sx.q(*(esi_1 + 0xc))
            int32_t eax_20
            int32_t edx_9
            edx_9:eax_20 = sx.q(*(esi_1 + 8))
            int32_t eax_22
            int32_t edx_10
            edx_10:eax_22 = sx.q(*(esi_1 + 4))
            int32_t eax_24
            int32_t edx_11
            edx_11:eax_24 = sx.q(*esi_1)
            esi_1 -= 0x18
            *(ecx_1 + 0x2c) =
                (eax_14 + ebx) u>> 1 | adc.d(edx_6, var_68, eax_14 + ebx u< eax_14) << 0x1f
            *(ecx_1 + 8) = eax_20
            *(ecx_1 + 0x28) =
                (eax_16 + var_34) u>> 1 | adc.d(edx_7, var_30, eax_16 + var_34 u< eax_16) << 0x1f
            *(ecx_1 + 4) = eax_22
            *(ecx_1 + 0x24) =
                (eax_18 + var_44) u>> 1 | adc.d(edx_8, var_40, eax_18 + var_44 u< eax_18) << 0x1f
            *ecx_1 = eax_24
            *(ecx_1 + 0x14) = eax_14
            *(ecx_1 + 0x20) =
                (eax_20 + var_4c) u>> 1 | adc.d(edx_9, var_48, eax_20 + var_4c u< eax_20) << 0x1f
            ebx = eax_14
            *(ecx_1 + 0x1c) =
                (eax_22 + var_54) u>> 1 | adc.d(edx_10, var_50, eax_22 + var_54 u< eax_22) << 0x1f
            var_68 = edx_6
            *(ecx_1 + 0x18) =
                (eax_24 + var_5c) u>> 1 | adc.d(edx_11, var_58, eax_24 + var_5c u< eax_24) << 0x1f
            *(ecx_1 + 0x10) = eax_16
            *(ecx_1 + 0xc) = eax_18
            var_34 = eax_16
            var_44 = eax_18
            var_30 = edx_7
            var_40 = edx_8
            var_4c = eax_20
            var_48 = edx_9
            var_54 = eax_22
            var_50 = edx_10
            ecx_1 -= 0x30
            var_5c = eax_24
            var_58 = edx_11
        while (ecx_1 u>= esi)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = ecx
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
