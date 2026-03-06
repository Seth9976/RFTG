// 函数名称: sub_5f5cc0
// 虚拟地址: 0x5f5cc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f5cc0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax_1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 - edx) s>> 1
    int32_t* esi = *(arg1 + 0x10)
    void* eax_4 = eax_3 + esi
    int32_t* edi = esi
    int32_t ecx_1 = *edi
    int32_t eax_10
    int32_t edx_7
    edx_7:eax_10 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | ((ecx_1 & 0xff00) | ecx_1 << 0x10) << 8)
    int32_t ebx = eax_10
    int32_t var_10 = edx_7
    
    while (esi u< eax_4)
        int32_t ecx_3 = *edi
        int32_t eax_16
        int32_t edx_14
        edx_14:eax_16 =
            sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8 | ((ecx_3 & 0xff00) | ecx_3 << 0x10) << 8)
        edi = &edi[2]
        esi = &esi[1]
        esi[-1] = (eax_16 + ebx) u>> 1 | adc.d(edx_14, var_10, eax_16 + ebx u< eax_16) << 0x1f
        ebx = eax_16
        var_10 = edx_14
    
    *(arg1 + 0x50) += 1
    int32_t ecx_8 = *(arg1 + 0x50)
    *(arg1 + 0x18) = eax_3
    
    if (*(arg1 + (ecx_8 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_8 << 2) + 0x28))(arg1, arg2)
}
