// 函数名称: sub_5f3e00
// 虚拟地址: 0x5f3e00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f3e00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t eax = *(edi + 0x18)
    int32_t esi = *(edi + 0x10)
    int32_t ecx = eax * 2
    void* ecx_1 = esi + ecx - 0x10
    void* esi_1 = esi + eax - 8
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(*(esi_1 + 4))
    int32_t var_28 = edx
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(*esi_1)
    int32_t var_1c = eax_4
    int32_t var_18 = edx_1
    
    if (ecx_1 u>= esi)
        int32_t ebx_1 = eax_2
        
        do
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(*(esi_1 + 4))
            int32_t eax_8
            int32_t edx_3
            edx_3:eax_8 = sx.q(*esi_1)
            esi_1 -= 8
            *(ecx_1 + 4) = eax_6
            *(ecx_1 + 0xc) =
                (eax_6 + ebx_1) u>> 1 | adc.d(edx_2, var_28, eax_6 + ebx_1 u< eax_6) << 0x1f
            ecx_1 -= 0x10
            *(ecx_1 + 0x18) =
                (eax_8 + var_1c) u>> 1 | adc.d(edx_3, var_18, eax_8 + var_1c u< eax_8) << 0x1f
            *(ecx_1 + 0x10) = eax_8
            var_1c = eax_8
            ebx_1 = eax_6
            var_28 = edx_2
            var_18 = edx_3
        while (ecx_1 u>= esi)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    int32_t result = *(edi + 0x50)
    *(edi + 0x18) = ecx
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
