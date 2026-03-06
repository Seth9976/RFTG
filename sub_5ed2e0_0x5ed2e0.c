// 函数名称: sub_5ed2e0
// 虚拟地址: 0x5ed2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ed2e0(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edi = arg1
    uint32_t edi = arg1
    int32_t edx = *(edi + 0x10)
    int32_t ecx = *(edi + 0x18)
    int32_t eax = ecx << 2
    char* ecx_1 = edx + ecx - 6
    int16_t var_3c = sx.w(*(edx + ecx - 3))
    int16_t var_38 = sx.w(ecx_1[2])
    char* eax_1 = edx + eax - 0x18
    int16_t var_34 = sx.w(ecx_1[1])
    int16_t esi = sx.w(ecx_1[5])
    int16_t edx_3 = sx.w(ecx_1[4])
    int16_t var_40 = sx.w(*ecx_1)
    
    if (eax_1 u>= edx)
        do
            int16_t ebx_8 = sx.w(ecx_1[4])
            int16_t ebx_10 = sx.w(ecx_1[3])
            edi.w = sx.w(ecx_1[5])
            int16_t ebx_12 = sx.w(ecx_1[2])
            int16_t ebx_14 = sx.w(ecx_1[1])
            int16_t ebx_16 = sx.w(*ecx_1)
            int16_t edi_1 = edi.w
            int32_t edx_4 = sx.d(edx_3)
            int32_t esi_1 = sx.d(esi)
            int32_t edi_2 = sx.d(edi_1)
            eax_1[0x17] = ((esi_1 * 3 + edi_2) s>> 2).b
            int32_t ebx_21 = sx.d(ebx_8)
            eax_1[0x16] = ((edx_4 * 3 + ebx_21) s>> 2).b
            int32_t ebx_25 = sx.d(ebx_10)
            int32_t edx_5 = sx.d(var_3c)
            int32_t edx_6 = sx.d(var_38)
            eax_1[0x15] = ((edx_5 * 3 + ebx_25) s>> 2).b
            int32_t ebx_29 = sx.d(ebx_12)
            int32_t edx_7 = sx.d(var_34)
            eax_1[0x14] = ((edx_6 * 3 + ebx_29) s>> 2).b
            int32_t ebx_33 = sx.d(ebx_14)
            int32_t edx_8 = sx.d(var_40)
            eax_1[0x13] = ((edx_7 * 3 + ebx_33) s>> 2).b
            int32_t ebx_37 = sx.d(ebx_16)
            eax_1[0x11] = ((edi_2 + esi_1) s>> 1).b
            eax_1[0x10] = ((ebx_21 + edx_4) s>> 1).b
            ecx_1 -= 6
            eax_1[0xf] = ((ebx_25 + edx_5) s>> 1).b
            eax_1[0x12] = ((edx_8 * 3 + ebx_37) s>> 2).b
            eax_1[0xe] = ((ebx_29 + edx_6) s>> 1).b
            eax_1[0xd] = ((ebx_33 + edx_7) s>> 1).b
            eax_1[0xc] = ((ebx_37 + edx_8) s>> 1).b
            eax_1[0xb] = ((edi_2 * 3 + esi_1) s>> 2).b
            eax_1[0xa] = ((ebx_21 * 3 + edx_4) s>> 2).b
            eax_1[9] = ((ebx_25 * 3 + edx_5) s>> 2).b
            eax_1[8] = ((ebx_29 * 3 + edx_6) s>> 2).b
            eax_1[7] = ((ebx_33 * 3 + edx_7) s>> 2).b
            eax_1[4] = ebx_8.b
            eax_1[3] = ebx_10.b
            var_3c = ebx_10
            eax_1[2] = ebx_12.b
            var_38 = ebx_12
            eax_1[1] = ebx_14.b
            eax_1[6] = ((ebx_37 * 3 + edx_8) s>> 2).b
            eax_1[5] = edi_1.b
            var_34 = ebx_14
            *eax_1 = ebx_16.b
            eax_1 -= 0x18
            esi = edi_1
            edx_3 = ebx_8
            var_40 = ebx_16
        while (eax_1 u>= edx)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
