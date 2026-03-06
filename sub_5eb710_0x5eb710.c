// 函数名称: sub_5eb710
// 虚拟地址: 0x5eb710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5eb710(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t edx = *(edi + 0x18)
    int32_t ecx = *(edi + 0x10)
    uint16_t esi = zx.w(*(ecx + edx - 1))
    int32_t eax = edx << 2
    char* eax_1 = ecx + eax - 0x10
    void* ecx_1 = ecx + edx - 4
    uint16_t edx_1 = zx.w(*(ecx_1 + 2))
    uint16_t var_24 = zx.w(*(ecx + edx - 3))
    uint16_t var_28 = zx.w(*ecx_1)
    
    if (eax_1 u>= ecx)
        do
            uint16_t ebx_2 = zx.w(*(ecx_1 + 2))
            uint16_t edi_1 = zx.w(*(ecx_1 + 3))
            uint16_t ebx_3 = zx.w(*(ecx_1 + 1))
            uint16_t ebx_4 = zx.w(*ecx_1)
            int32_t esi_1 = sx.d(esi)
            int32_t edx_2 = sx.d(edx_1)
            int32_t edi_2 = sx.d(edi_1)
            eax_1[0xf] = ((esi_1 * 3 + edi_2) s>> 2).b
            int32_t ebx_8 = sx.d(ebx_2)
            eax_1[0xe] = ((edx_2 * 3 + ebx_8) s>> 2).b
            int32_t ebx_12 = sx.d(ebx_3)
            int32_t edx_3 = sx.d(var_24)
            eax_1[0xd] = ((edx_3 * 3 + ebx_12) s>> 2).b
            int32_t ebx_16 = sx.d(ebx_4)
            int32_t edx_4 = sx.d(var_28)
            eax_1[0xb] = ((edi_2 + esi_1) s>> 1).b
            eax_1[0xa] = ((ebx_8 + edx_2) s>> 1).b
            eax_1[0xc] = ((edx_4 * 3 + ebx_16) s>> 2).b
            eax_1[9] = ((ebx_12 + edx_3) s>> 1).b
            eax_1[8] = ((ebx_16 + edx_4) s>> 1).b
            eax_1[7] = ((edi_2 * 3 + esi_1) s>> 2).b
            eax_1[6] = ((ebx_8 * 3 + edx_2) s>> 2).b
            eax_1[5] = ((ebx_12 * 3 + edx_3) s>> 2).b
            ecx_1 -= 4
            eax_1[4] = ((ebx_16 * 3 + edx_4) s>> 2).b
            eax_1[2] = ebx_2.b
            eax_1[3] = edi_1.b
            eax_1[1] = ebx_3.b
            var_24 = ebx_3
            *eax_1 = ebx_4.b
            eax_1 -= 0x10
            esi = edi_1
            edx_1 = ebx_2
            var_28 = ebx_4
        while (eax_1 u>= ecx)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
