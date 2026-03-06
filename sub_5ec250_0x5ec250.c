// 函数名称: sub_5ec250
// 虚拟地址: 0x5ec250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ec250(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t edx = *(edi + 0x10)
    int32_t ecx = *(edi + 0x18)
    int32_t eax = ecx << 2
    void* ecx_1 = edx + ecx - 8
    uint16_t esi = zx.w(*(ecx_1 + 7))
    uint16_t var_54 = zx.w(*(edx + ecx - 3))
    uint16_t var_50 = zx.w(*(ecx_1 + 4))
    uint16_t var_4c = zx.w(*(ecx_1 + 3))
    uint16_t var_48 = zx.w(*(ecx_1 + 2))
    uint16_t var_58 = zx.w(*(ecx_1 + 1))
    void* eax_1 = edx + eax - 0x20
    uint16_t edx_1 = zx.w(*(ecx_1 + 6))
    uint16_t var_5c = zx.w(*ecx_1)
    
    if (eax_1 u>= edx)
        do
            uint16_t ebx_6 = zx.w(*(ecx_1 + 6))
            uint16_t ebx_7 = zx.w(*(ecx_1 + 5))
            uint16_t ebx_8 = zx.w(*(ecx_1 + 4))
            uint16_t ebx_9 = zx.w(*(ecx_1 + 3))
            uint16_t edi_1 = zx.w(*(ecx_1 + 7))
            uint16_t ebx_10 = zx.w(*(ecx_1 + 2))
            uint16_t ebx_11 = zx.w(*(ecx_1 + 1))
            uint16_t ebx_12 = zx.w(*ecx_1)
            int32_t esi_1 = sx.d(esi)
            int32_t edi_2 = sx.d(edi_1)
            int32_t edx_2 = sx.d(edx_1)
            *(eax_1 + 0x1f) = ((esi_1 * 3 + edi_2) s>> 2).b
            int32_t ebx_16 = sx.d(ebx_6)
            *(eax_1 + 0x1e) = ((edx_2 * 3 + ebx_16) s>> 2).b
            int32_t ebx_20 = sx.d(ebx_7)
            int32_t edx_3 = sx.d(var_54)
            *(eax_1 + 0x1d) = ((edx_3 * 3 + ebx_20) s>> 2).b
            int32_t ebx_24 = sx.d(ebx_8)
            int32_t edx_4 = sx.d(var_50)
            *(eax_1 + 0x1c) = ((edx_4 * 3 + ebx_24) s>> 2).b
            int32_t ebx_28 = sx.d(ebx_9)
            int32_t edx_5 = sx.d(var_4c)
            *(eax_1 + 0x1b) = ((edx_5 * 3 + ebx_28) s>> 2).b
            int32_t ebx_32 = sx.d(ebx_10)
            int32_t edx_6 = sx.d(var_48)
            *(eax_1 + 0x1a) = ((edx_6 * 3 + ebx_32) s>> 2).b
            int32_t ebx_36 = sx.d(ebx_11)
            int32_t edx_7 = sx.d(var_58)
            *(eax_1 + 0x19) = ((edx_7 * 3 + ebx_36) s>> 2).b
            int32_t ebx_40 = sx.d(ebx_12)
            int32_t edx_8 = sx.d(var_5c)
            ecx_1 -= 8
            *(eax_1 + 0x18) = ((edx_8 * 3 + ebx_40) s>> 2).b
            *(eax_1 + 0x17) = ((edi_2 + esi_1) s>> 1).b
            *(eax_1 + 0x16) = ((ebx_16 + edx_2) s>> 1).b
            *(eax_1 + 0x15) = ((ebx_20 + edx_3) s>> 1).b
            *(eax_1 + 0x14) = ((ebx_24 + edx_4) s>> 1).b
            *(eax_1 + 0x13) = ((ebx_28 + edx_5) s>> 1).b
            *(eax_1 + 0x12) = ((ebx_32 + edx_6) s>> 1).b
            *(eax_1 + 0x11) = ((ebx_36 + edx_7) s>> 1).b
            *(eax_1 + 0x10) = ((ebx_40 + edx_8) s>> 1).b
            *(eax_1 + 0xf) = ((edi_2 * 3 + esi_1) s>> 2).b
            *(eax_1 + 0xe) = ((ebx_16 * 3 + edx_2) s>> 2).b
            *(eax_1 + 0xd) = ((ebx_20 * 3 + edx_3) s>> 2).b
            *(eax_1 + 0xc) = ((ebx_24 * 3 + edx_4) s>> 2).b
            *(eax_1 + 0xb) = ((ebx_28 * 3 + edx_5) s>> 2).b
            *(eax_1 + 0xa) = ((ebx_32 * 3 + edx_6) s>> 2).b
            *(eax_1 + 9) = ((ebx_36 * 3 + edx_7) s>> 2).b
            *(eax_1 + 6) = ebx_6.b
            *(eax_1 + 8) = ((ebx_40 * 3 + edx_8) s>> 2).b
            *(eax_1 + 7) = edi_1.b
            *(eax_1 + 5) = ebx_7.b
            var_54 = ebx_7
            *(eax_1 + 4) = ebx_8.b
            var_50 = ebx_8
            *(eax_1 + 3) = ebx_9.b
            var_4c = ebx_9
            *(eax_1 + 2) = ebx_10.b
            var_48 = ebx_10
            *(eax_1 + 1) = ebx_11.b
            var_58 = ebx_11
            *eax_1 = ebx_12.b
            eax_1 -= 0x20
            esi = edi_1
            edx_1 = ebx_6
            var_5c = ebx_12
        while (eax_1 u>= edx)
        
        edi = arg1
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax
    int32_t result = *(edi + 0x50)
    
    if (*(edi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edi + (result << 2) + 0x28))(edi, arg2)
}
