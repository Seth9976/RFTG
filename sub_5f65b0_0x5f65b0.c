// 函数名称: sub_5f65b0
// 虚拟地址: 0x5f65b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f65b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax * 2
    int32_t edi = *(arg1 + 0x10)
    void* esi = edi + eax - 0x10
    void* ecx_1 = edi + edx - 0x20
    int32_t edx_1 = *(esi + 0xc)
    int32_t eax_6
    int32_t edx_3
    edx_3:eax_6 =
        sx.q(((edx_1 & 0xff0000) | edx_1 u>> 0x10) u>> 8 | (edx_1 << 0x10 | (edx_1 & 0xff00)) << 8)
    int32_t var_14 = eax_6
    int32_t var_10 = edx_3
    int32_t edx_4 = *(esi + 8)
    int32_t eax_12
    int32_t edx_6
    edx_6:eax_12 =
        sx.q(((edx_4 & 0xff0000) | edx_4 u>> 0x10) u>> 8 | (edx_4 << 0x10 | (edx_4 & 0xff00)) << 8)
    int32_t var_24 = eax_12
    int32_t var_20 = edx_6
    int32_t edx_7 = *(esi + 4)
    int32_t eax_18
    int32_t edx_9
    edx_9:eax_18 =
        sx.q(((edx_7 & 0xff0000) | edx_7 u>> 0x10) u>> 8 | (edx_7 << 0x10 | (edx_7 & 0xff00)) << 8)
    int32_t var_34 = eax_18
    int32_t var_30 = edx_9
    int32_t edx_10 = *esi
    int32_t eax_24
    int32_t edx_12
    edx_12:eax_24 =
        sx.q(((edx_10 & 0xff0000) | edx_10 u>> 0x10) u>> 8 | (edx_10 << 0x10 | (edx_10 & 0xff00)) << 8)
    int32_t var_44 = eax_24
    int32_t var_40 = edx_12
    
    while (ecx_1 u>= edi)
        int32_t edx_13 = *(esi + 0xc)
        int32_t eax_30
        int32_t edx_15
        edx_15:eax_30 = sx.q(((edx_13 & 0xff0000) | edx_13 u>> 0x10) u>> 8
            | (edx_13 << 0x10 | (edx_13 & 0xff00)) << 8)
        int32_t edx_16 = *(esi + 8)
        int32_t eax_36
        int32_t edx_18
        edx_18:eax_36 = sx.q(((edx_16 & 0xff0000) | edx_16 u>> 0x10) u>> 8
            | (edx_16 << 0x10 | (edx_16 & 0xff00)) << 8)
        int32_t edx_19 = *(esi + 4)
        int32_t eax_42
        int32_t edx_21
        edx_21:eax_42 = sx.q(((edx_19 & 0xff0000) | edx_19 u>> 0x10) u>> 8
            | (edx_19 << 0x10 | (edx_19 & 0xff00)) << 8)
        int32_t edx_22 = *esi
        int32_t eax_48
        int32_t edx_24
        edx_24:eax_48 = sx.q(((edx_22 & 0xff0000) | edx_22 u>> 0x10) u>> 8
            | (edx_22 << 0x10 | (edx_22 & 0xff00)) << 8)
        esi -= 0x10
        *(ecx_1 + 0x1c) =
            (eax_30 + var_14) u>> 1 | adc.d(edx_15, var_10, eax_30 + var_14 u< eax_30) << 0x1f
        *(ecx_1 + 0x18) =
            (eax_36 + var_24) u>> 1 | adc.d(edx_18, var_20, eax_36 + var_24 u< eax_36) << 0x1f
        *(ecx_1 + 0x14) =
            (eax_42 + var_34) u>> 1 | adc.d(edx_21, var_30, eax_42 + var_34 u< eax_42) << 0x1f
        *(ecx_1 + 0xc) = eax_30
        *(ecx_1 + 0x10) =
            (eax_48 + var_44) u>> 1 | adc.d(edx_24, var_40, eax_48 + var_44 u< eax_48) << 0x1f
        *(ecx_1 + 8) = eax_36
        var_24 = eax_36
        *(ecx_1 + 4) = eax_42
        *ecx_1 = eax_48
        var_14 = eax_30
        var_20 = edx_18
        var_34 = eax_42
        ecx_1 -= 0x20
        var_10 = edx_15
        var_30 = edx_21
        var_44 = eax_48
        var_40 = edx_24
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_3 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_3 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_3 << 2) + 0x28))(arg1, arg2)
}
