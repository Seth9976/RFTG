// 函数名称: sub_5ebc00
// 虚拟地址: 0x5ebc00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ebc00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t edx = *(edi + 0x10)
    int32_t ecx = *(edi + 0x18)
    uint16_t esi = zx.w(*(edx + ecx - 1))
    int32_t eax = ecx << 2
    char* ecx_1 = edx + ecx - 6
    uint16_t var_3c = zx.w(*(edx + ecx - 3))
    uint16_t var_38 = zx.w(ecx_1[2])
    uint16_t var_34 = zx.w(ecx_1[1])
    char* eax_1 = edx + eax - 0x18
    uint16_t edx_1 = zx.w(ecx_1[4])
    uint16_t var_40 = zx.w(*ecx_1)
    
    if (eax_1 u>= edx)
        do
            uint16_t ebx_4 = zx.w(ecx_1[4])
            uint16_t edi_1 = zx.w(ecx_1[5])
            uint16_t ebx_5 = zx.w(ecx_1[3])
            uint16_t ebx_6 = zx.w(ecx_1[2])
            uint16_t ebx_7 = zx.w(ecx_1[1])
            uint16_t ebx_8 = zx.w(*ecx_1)
            int32_t edx_2 = sx.d(edx_1)
            int32_t esi_1 = sx.d(esi)
            int32_t edi_2 = sx.d(edi_1)
            eax_1[0x17] = ((esi_1 * 3 + edi_2) s>> 2).b
            int32_t ebx_12 = sx.d(ebx_4)
            int32_t edx_3 = sx.d(var_3c)
            eax_1[0x16] = ((edx_2 * 3 + ebx_12) s>> 2).b
            int32_t ebx_16 = sx.d(ebx_5)
            int32_t edx_4 = sx.d(var_38)
            eax_1[0x15] = ((edx_3 * 3 + ebx_16) s>> 2).b
            int32_t ebx_20 = sx.d(ebx_6)
            int32_t edx_5 = sx.d(var_34)
            eax_1[0x14] = ((edx_4 * 3 + ebx_20) s>> 2).b
            int32_t ebx_24 = sx.d(ebx_7)
            int32_t edx_6 = sx.d(var_40)
            eax_1[0x13] = ((edx_5 * 3 + ebx_24) s>> 2).b
            int32_t ebx_28 = sx.d(ebx_8)
            eax_1[0x11] = ((edi_2 + esi_1) s>> 1).b
            eax_1[0x10] = ((ebx_12 + edx_2) s>> 1).b
            eax_1[0x12] = ((edx_6 * 3 + ebx_28) s>> 2).b
            eax_1[0xf] = ((ebx_16 + edx_3) s>> 1).b
            ecx_1 -= 6
            eax_1[0xe] = ((ebx_20 + edx_4) s>> 1).b
            eax_1[0xd] = ((ebx_24 + edx_5) s>> 1).b
            eax_1[0xc] = ((ebx_28 + edx_6) s>> 1).b
            eax_1[0xb] = ((edi_2 * 3 + esi_1) s>> 2).b
            eax_1[0xa] = ((ebx_12 * 3 + edx_2) s>> 2).b
            eax_1[9] = ((ebx_16 * 3 + edx_3) s>> 2).b
            eax_1[8] = ((ebx_20 * 3 + edx_4) s>> 2).b
            eax_1[7] = ((ebx_24 * 3 + edx_5) s>> 2).b
            eax_1[4] = ebx_4.b
            eax_1[3] = ebx_5.b
            var_3c = ebx_5
            eax_1[2] = ebx_6.b
            var_38 = ebx_6
            eax_1[1] = ebx_7.b
            eax_1[6] = ((ebx_28 * 3 + edx_6) s>> 2).b
            eax_1[5] = edi_1.b
            var_34 = ebx_7
            *eax_1 = ebx_8.b
            eax_1 -= 0x18
            esi = edi_1
            edx_1 = ebx_4
            var_40 = ebx_8
        while (eax_1 u>= edx)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
