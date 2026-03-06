// 函数名称: sub_5f41d0
// 虚拟地址: 0x5f41d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f41d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t eax = *(edi + 0x18)
    int32_t esi = *(edi + 0x10)
    int32_t ecx = eax * 2
    void* ecx_1 = esi + ecx - 0x20
    void* esi_1 = esi + eax - 0x10
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(esi_1 + 0xc))
    int32_t ebx = eax_2
    int32_t var_48 = edx
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*(esi_1 + 8))
    int32_t var_24 = eax_4
    int32_t var_20 = edx_1
    int32_t eax_6
    int32_t edx_2
    edx_2:eax_6 = sx.q(*(esi_1 + 4))
    int32_t var_34 = eax_6
    int32_t var_30 = edx_2
    int32_t eax_8
    int32_t edx_3
    edx_3:eax_8 = sx.q(*esi_1)
    int32_t var_3c = eax_8
    int32_t var_38 = edx_3
    
    if (ecx_1 u>= esi)
        do
            int32_t eax_10
            int32_t edx_4
            edx_4:eax_10 = sx.q(*(esi_1 + 0xc))
            int32_t eax_12
            int32_t edx_5
            edx_5:eax_12 = sx.q(*(esi_1 + 8))
            int32_t eax_14
            int32_t edx_6
            edx_6:eax_14 = sx.q(*(esi_1 + 4))
            int32_t eax_16
            int32_t edx_7
            edx_7:eax_16 = sx.q(*esi_1)
            esi_1 -= 0x10
            *(ecx_1 + 0x1c) =
                (eax_10 + ebx) u>> 1 | adc.d(edx_4, var_48, eax_10 + ebx u< eax_10) << 0x1f
            *(ecx_1 + 0xc) = eax_10
            *ecx_1 = eax_16
            *(ecx_1 + 0x18) =
                (eax_12 + var_24) u>> 1 | adc.d(edx_5, var_20, eax_12 + var_24 u< eax_12) << 0x1f
            ebx = eax_10
            *(ecx_1 + 0x14) =
                (eax_14 + var_34) u>> 1 | adc.d(edx_6, var_30, eax_14 + var_34 u< eax_14) << 0x1f
            var_48 = edx_4
            ecx_1 -= 0x20
            *(ecx_1 + 0x30) =
                (eax_16 + var_3c) u>> 1 | adc.d(edx_7, var_38, eax_16 + var_3c u< eax_16) << 0x1f
            *(ecx_1 + 0x28) = eax_12
            *(ecx_1 + 0x24) = eax_14
            var_24 = eax_12
            var_34 = eax_14
            var_20 = edx_5
            var_30 = edx_6
            var_3c = eax_16
            var_38 = edx_7
        while (ecx_1 u>= esi)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = ecx
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
