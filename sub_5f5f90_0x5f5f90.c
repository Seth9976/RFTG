// 函数名称: sub_5f5f90
// 虚拟地址: 0x5f5f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5f5f90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax * 2
    int32_t ebx = *(arg1 + 0x10)
    int32_t ecx_1 = *(ebx + eax - 4)
    void* esi = ebx + edx - 0x10
    int32_t* edi = ebx + eax - 8
    int32_t ecx_3 = *edi
    int32_t eax_6
    int32_t edx_7
    edx_7:eax_6 =
        sx.q(((ecx_1 & 0xff0000) | ecx_1 u>> 0x10) u>> 8 | ((ecx_1 & 0xff00) | ecx_1 << 0x10) << 8)
    int32_t var_10 = edx_7
    int32_t var_14 = eax_6
    int32_t eax_12
    int32_t edx_14
    edx_14:eax_12 =
        sx.q(((ecx_3 & 0xff0000) | ecx_3 u>> 0x10) u>> 8 | ((ecx_3 & 0xff00) | ecx_3 << 0x10) << 8)
    int32_t var_24 = eax_12
    int32_t var_20 = edx_14
    
    while (esi u>= ebx)
        int32_t ecx_5 = edi[1]
        int32_t ecx_7 = *edi
        int32_t eax_18
        int32_t edx_21
        edx_21:eax_18 =
            sx.q(((ecx_5 & 0xff0000) | ecx_5 u>> 0x10) u>> 8 | ((ecx_5 & 0xff00) | ecx_5 << 0x10) << 8)
        int32_t eax_24
        int32_t edx_28
        edx_28:eax_24 =
            sx.q(((ecx_7 & 0xff0000) | ecx_7 u>> 0x10) u>> 8 | ((ecx_7 & 0xff00) | ecx_7 << 0x10) << 8)
        edi -= 8
        *(esi + 0xc) =
            (eax_18 + var_14) u>> 1 | adc.d(edx_21, var_10, eax_18 + var_14 u< eax_18) << 0x1f
        *(esi + 4) = eax_18
        *(esi + 8) = (eax_24 + var_24) u>> 1 | adc.d(edx_28, var_20, eax_24 + var_24 u< eax_24) << 0x1f
        *esi = eax_24
        esi -= 0x10
        var_14 = eax_18
        var_10 = edx_21
        var_24 = eax_24
        var_20 = edx_28
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = edx
    int32_t ecx_13 = *(arg1 + 0x50)
    
    if (*(arg1 + (ecx_13 << 2) + 0x28) == 0)
        return arg1
    
    return (*(arg1 + (ecx_13 << 2) + 0x28))(arg1, arg2)
}
