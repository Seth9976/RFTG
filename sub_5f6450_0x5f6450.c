// 函数名称: sub_5f6450
// 虚拟地址: 0x5f6450
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f6450(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t* esi = *(arg1 + 0x10)
    int32_t ebx_1 = ((edx & 3) + eax_1) s>> 2
    int32_t* edi = esi
    int32_t ecx_1 = *edi
    void* eax_2 = esi + ebx_1
    int32_t ecx_3 = edi[1]
    int32_t eax_8
    int32_t edx_8
    edx_8:eax_8 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | ((ecx_1 & 0xff00) | ecx_1 << 0x10) << 8)
    int32_t var_10 = edx_8
    int32_t var_14 = eax_8
    int32_t eax_14
    int32_t edx_15
    edx_15:eax_14 =
        sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8 | ((ecx_3 & 0xff00) | ecx_3 << 0x10) << 8)
    int32_t var_24 = eax_14
    int32_t var_20 = edx_15
    
    while (esi u< eax_2)
        int32_t ecx_5 = *edi
        int32_t ecx_7 = edi[1]
        int32_t eax_20
        int32_t edx_22
        edx_22:eax_20 =
            sx.q(((ecx_5 & 0xff0000) | ecx_5 u>> 0x10) u>> 8 | ((ecx_5 & 0xff00) | ecx_5 << 0x10) << 8)
        int32_t eax_26
        int32_t edx_29
        edx_29:eax_26 =
            sx.q(((ecx_7 & 0xff0000) | ecx_7 u>> 0x10) u>> 8 | ((ecx_7 & 0xff00) | ecx_7 << 0x10) << 8)
        edi = &edi[8]
        *esi = (eax_20 + var_14) u>> 1 | adc.d(edx_22, var_10, eax_20 + var_14 u< eax_20) << 0x1f
        esi = &esi[2]
        esi[-1] = (eax_26 + var_24) u>> 1 | adc.d(edx_29, var_20, eax_26 + var_24 u< eax_26) << 0x1f
        var_14 = eax_20
        var_10 = edx_22
        var_24 = eax_26
        var_20 = edx_29
    
    *(arg1 + 0x50) += 1
    int32_t ecx_12 = *(arg1 + 0x50)
    *(arg1 + 0x18) = ebx_1
    
    if (*(arg1 + (ecx_12 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_12 << 2) + 0x28))(arg1, arg2)
}
