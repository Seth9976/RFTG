// 函数名称: sub_5ecd80
// 虚拟地址: 0x5ecd80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ecd80(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edi = arg1
    uint32_t edi = arg1
    int32_t edx = *(edi + 0x18)
    int32_t ecx = *(edi + 0x10)
    int32_t eax = edx << 2
    char* eax_1 = ecx + eax - 0x10
    void* ecx_1 = ecx + edx - 4
    int16_t var_24 = sx.w(*(ecx + edx - 3))
    int16_t esi = sx.w(*(ecx_1 + 3))
    int16_t edx_3 = sx.w(*(ecx_1 + 2))
    int16_t var_28 = sx.w(*ecx_1)
    
    if (eax_1 u>= ecx)
        do
            int16_t ebx_4 = sx.w(*(ecx_1 + 2))
            edi.w = sx.w(*(ecx_1 + 3))
            int16_t ebx_6 = sx.w(*(ecx_1 + 1))
            int16_t ebx_8 = sx.w(*ecx_1)
            int16_t edi_1 = edi.w
            int32_t esi_1 = sx.d(esi)
            int32_t edx_4 = sx.d(edx_3)
            int32_t edi_2 = sx.d(edi_1)
            eax_1[0xf] = ((esi_1 * 3 + edi_2) s>> 2).b
            int32_t ebx_13 = sx.d(ebx_4)
            eax_1[0xe] = ((edx_4 * 3 + ebx_13) s>> 2).b
            int32_t ebx_17 = sx.d(ebx_6)
            int32_t edx_5 = sx.d(var_24)
            eax_1[0xd] = ((edx_5 * 3 + ebx_17) s>> 2).b
            int32_t ebx_21 = sx.d(ebx_8)
            int32_t edx_6 = sx.d(var_28)
            eax_1[0xb] = ((edi_2 + esi_1) s>> 1).b
            eax_1[0xa] = ((ebx_13 + edx_4) s>> 1).b
            eax_1[0xc] = ((edx_6 * 3 + ebx_21) s>> 2).b
            eax_1[9] = ((ebx_17 + edx_5) s>> 1).b
            eax_1[8] = ((ebx_21 + edx_6) s>> 1).b
            eax_1[7] = ((edi_2 * 3 + esi_1) s>> 2).b
            eax_1[6] = ((ebx_13 * 3 + edx_4) s>> 2).b
            ecx_1 -= 4
            eax_1[4] = ((ebx_21 * 3 + edx_6) s>> 2).b
            eax_1[5] = ((ebx_17 * 3 + edx_5) s>> 2).b
            eax_1[2] = ebx_4.b
            eax_1[1] = ebx_6.b
            eax_1[3] = edi_1.b
            var_24 = ebx_6
            *eax_1 = ebx_8.b
            eax_1 -= 0x10
            esi = edi_1
            edx_3 = ebx_4
            var_28 = ebx_8
        while (eax_1 u>= ecx)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
