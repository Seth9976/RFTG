// 函数名称: sub_5f5bf0
// 虚拟地址: 0x5f5bf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f5bf0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax * 2
    int32_t edi = *(arg1 + 0x10)
    int32_t ecx_1 = *(edi + eax - 4)
    int32_t* esi = edi + edx - 8
    int32_t* edi_1 = edi + eax - 4
    int32_t eax_6
    int32_t edx_7
    edx_7:eax_6 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | ((ecx_1 & 0xff00) | ecx_1 << 0x10) << 8)
    int32_t ebx = eax_6
    int32_t var_10 = edx_7
    
    while (esi u>= edi)
        int32_t ecx_3 = *edi_1
        int32_t eax_12
        int32_t edx_14
        edx_14:eax_12 =
            sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8 | ((ecx_3 & 0xff00) | ecx_3 << 0x10) << 8)
        edi_1 -= 4
        *esi = eax_12
        esi[1] = (eax_12 + ebx) u>> 1 | adc.d(edx_14, var_10, eax_12 + ebx u< eax_12) << 0x1f
        esi -= 8
        ebx = eax_12
        var_10 = edx_14
    
    *(arg1 + 0x50) += 1
    int32_t ecx_8 = *(arg1 + 0x50)
    *(arg1 + 0x18) = edx
    
    if (*(arg1 + (ecx_8 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_8 << 2) + 0x28))(arg1, arg2)
}
