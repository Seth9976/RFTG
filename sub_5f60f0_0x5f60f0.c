// 函数名称: sub_5f60f0
// 虚拟地址: 0x5f60f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f60f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t* esi = *(arg1 + 0x10)
    int32_t ebx_1 = (eax_1 - edx) s>> 1
    int32_t* edi = esi
    int32_t ecx_1 = *edi
    void* eax_3 = esi + ebx_1
    int32_t ecx_3 = edi[1]
    int32_t eax_9
    int32_t edx_7
    edx_7:eax_9 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | ((ecx_1 & 0xff00) | ecx_1 << 0x10) << 8)
    int32_t var_10 = edx_7
    int32_t var_14 = eax_9
    int32_t eax_15
    int32_t edx_14
    edx_14:eax_15 =
        sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8 | ((ecx_3 & 0xff00) | ecx_3 << 0x10) << 8)
    int32_t var_24 = eax_15
    int32_t var_20 = edx_14
    
    while (esi u< eax_3)
        int32_t ecx_5 = *edi
        int32_t ecx_7 = edi[1]
        int32_t eax_21
        int32_t edx_21
        edx_21:eax_21 =
            sx.q(((ecx_5 & 0xff0000) | ecx_5 u>> 0x10) u>> 8 | ((ecx_5 & 0xff00) | ecx_5 << 0x10) << 8)
        int32_t eax_27
        int32_t edx_28
        edx_28:eax_27 =
            sx.q(((ecx_7 & 0xff0000) | ecx_7 u>> 0x10) u>> 8 | ((ecx_7 & 0xff00) | ecx_7 << 0x10) << 8)
        edi = &edi[4]
        *esi = (eax_21 + var_14) u>> 1 | adc.d(edx_21, var_10, eax_21 + var_14 u< eax_21) << 0x1f
        esi = &esi[2]
        esi[-1] = (eax_27 + var_24) u>> 1 | adc.d(edx_28, var_20, eax_27 + var_24 u< eax_27) << 0x1f
        var_14 = eax_21
        var_10 = edx_21
        var_24 = eax_27
        var_20 = edx_28
    
    *(arg1 + 0x50) += 1
    int32_t ecx_12 = *(arg1 + 0x50)
    *(arg1 + 0x18) = ebx_1
    
    if (*(arg1 + (ecx_12 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_12 << 2) + 0x28))(arg1, arg2)
}
