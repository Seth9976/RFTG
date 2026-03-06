// 函数名称: sub_5ed9e0
// 虚拟地址: 0x5ed9e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ed9e0(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edi = arg1
    uint32_t edi = arg1
    int32_t edx = *(edi + 0x10)
    int32_t ecx = *(edi + 0x18)
    int32_t eax = ecx << 2
    void* ecx_1 = edx + ecx - 8
    int16_t var_54 = sx.w(*(edx + ecx - 3))
    int16_t var_50 = sx.w(*(ecx_1 + 4))
    int16_t var_4c = sx.w(*(ecx_1 + 3))
    int16_t var_48 = sx.w(*(ecx_1 + 2))
    void* eax_1 = edx + eax - 0x20
    int16_t var_58 = sx.w(*(ecx_1 + 1))
    int16_t esi = sx.w(*(ecx_1 + 7))
    int16_t edx_3 = sx.w(*(ecx_1 + 6))
    int16_t var_5c = sx.w(*ecx_1)
    
    if (eax_1 u>= edx)
        do
            int16_t ebx_13 = sx.w(*(ecx_1 + 6))
            int16_t ebx_15 = sx.w(*(ecx_1 + 5))
            int16_t ebx_17 = sx.w(*(ecx_1 + 4))
            int16_t ebx_19 = sx.w(*(ecx_1 + 3))
            int16_t ebx_21 = sx.w(*(ecx_1 + 2))
            edi.w = sx.w(*(ecx_1 + 7))
            int16_t ebx_23 = sx.w(*(ecx_1 + 1))
            int16_t ebx_25 = sx.w(*ecx_1)
            int16_t edi_1 = edi.w
            int32_t esi_1 = sx.d(esi)
            int32_t edi_2 = sx.d(edi_1)
            *(eax_1 + 0x1f) = ((esi_1 * 3 + edi_2) s>> 2).b
            int32_t ebx_30 = sx.d(ebx_13)
            int32_t edx_4 = sx.d(edx_3)
            *(eax_1 + 0x1e) = ((edx_4 * 3 + ebx_30) s>> 2).b
            int32_t ebx_34 = sx.d(ebx_15)
            int32_t edx_5 = sx.d(var_54)
            *(eax_1 + 0x1d) = ((edx_5 * 3 + ebx_34) s>> 2).b
            int32_t ebx_38 = sx.d(ebx_17)
            int32_t edx_6 = sx.d(var_50)
            *(eax_1 + 0x1c) = ((edx_6 * 3 + ebx_38) s>> 2).b
            int32_t ebx_42 = sx.d(ebx_19)
            int32_t edx_7 = sx.d(var_4c)
            *(eax_1 + 0x1b) = ((edx_7 * 3 + ebx_42) s>> 2).b
            int32_t ebx_46 = sx.d(ebx_21)
            int32_t edx_8 = sx.d(var_48)
            *(eax_1 + 0x1a) = ((edx_8 * 3 + ebx_46) s>> 2).b
            int32_t ebx_50 = sx.d(ebx_23)
            int32_t edx_9 = sx.d(var_58)
            int32_t edx_10 = sx.d(var_5c)
            ecx_1 -= 8
            *(eax_1 + 0x19) = ((edx_9 * 3 + ebx_50) s>> 2).b
            int32_t ebx_54 = sx.d(ebx_25)
            *(eax_1 + 0x17) = ((edi_2 + esi_1) s>> 1).b
            *(eax_1 + 0x16) = ((ebx_30 + edx_4) s>> 1).b
            *(eax_1 + 0x18) = ((edx_10 * 3 + ebx_54) s>> 2).b
            *(eax_1 + 0x15) = ((ebx_34 + edx_5) s>> 1).b
            *(eax_1 + 0x14) = ((ebx_38 + edx_6) s>> 1).b
            *(eax_1 + 0x13) = ((ebx_42 + edx_7) s>> 1).b
            *(eax_1 + 0x12) = ((ebx_46 + edx_8) s>> 1).b
            *(eax_1 + 0x11) = ((ebx_50 + edx_9) s>> 1).b
            *(eax_1 + 0x10) = ((ebx_54 + edx_10) s>> 1).b
            *(eax_1 + 0xf) = ((edi_2 * 3 + esi_1) s>> 2).b
            *(eax_1 + 0xe) = ((ebx_30 * 3 + edx_4) s>> 2).b
            *(eax_1 + 0xd) = ((ebx_34 * 3 + edx_5) s>> 2).b
            *(eax_1 + 0xc) = ((ebx_38 * 3 + edx_6) s>> 2).b
            *(eax_1 + 0xb) = ((ebx_42 * 3 + edx_7) s>> 2).b
            *(eax_1 + 0xa) = ((ebx_46 * 3 + edx_8) s>> 2).b
            *(eax_1 + 9) = ((ebx_50 * 3 + edx_9) s>> 2).b
            *(eax_1 + 6) = ebx_13.b
            *(eax_1 + 5) = ebx_15.b
            var_54 = ebx_15
            *(eax_1 + 4) = ebx_17.b
            var_50 = ebx_17
            *(eax_1 + 3) = ebx_19.b
            var_4c = ebx_19
            *(eax_1 + 2) = ebx_21.b
            var_48 = ebx_21
            *(eax_1 + 1) = ebx_23.b
            *(eax_1 + 8) = ((ebx_54 * 3 + edx_10) s>> 2).b
            *(eax_1 + 7) = edi_1.b
            var_58 = ebx_23
            *eax_1 = ebx_25.b
            eax_1 -= 0x20
            esi = edi_1
            edx_3 = ebx_13
            var_5c = ebx_25
        while (eax_1 u>= edx)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
