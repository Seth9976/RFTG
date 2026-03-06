// 函数名称: sub_5ed190
// 虚拟地址: 0x5ed190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ed190(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(esi + 0x18))
    char* eax_3 = *(esi + 0x10)
    uint32_t ebx = zx.d(sx.w(*eax_3))
    uint32_t var_8 = zx.d(sx.w(eax_3[1]))
    uint32_t var_10 = zx.d(sx.w(eax_3[2]))
    uint32_t var_18 = zx.d(sx.w(eax_3[3]))
    uint32_t var_20 = zx.d(sx.w(eax_3[4]))
    int32_t edi_1 = (eax_1 - edx) s>> 1
    void* edx_1 = &eax_3[edi_1]
    uint32_t var_24 = zx.d(sx.w(eax_3[5]))
    
    if (eax_3 u< edx_1)
        void* esi_1 = &eax_3[2]
        void* ecx_11 = &eax_3[2]
        int32_t i_1 = (edx_1 - eax_3 - 1) u/ 6 + 1
        int32_t i
        
        do
            uint32_t eax_5 = zx.d(sx.w(*(ecx_11 - 2)))
            uint32_t edi_2 = zx.d(sx.w(*(ecx_11 - 1)))
            uint32_t edx_10 = zx.d(sx.w(*ecx_11))
            uint32_t edx_12 = zx.d(sx.w(*(ecx_11 + 1)))
            uint32_t edx_14 = zx.d(sx.w(*(ecx_11 + 2)))
            uint32_t edx_16 = zx.d(sx.w(*(ecx_11 + 3)))
            *(esi_1 - 2) = ((eax_5 + ebx) s>> 1).b
            *(esi_1 - 1) = ((var_8 + edi_2) s>> 1).b
            *esi_1 = ((edx_10 + var_10) s>> 1).b
            ecx_11 += 0xc
            *(esi_1 + 1) = ((edx_12 + var_18) s>> 1).b
            esi_1 += 6
            *(esi_1 - 4) = ((edx_14 + var_20) s>> 1).b
            i = i_1
            i_1 -= 1
            *(esi_1 - 3) = ((var_24 + edx_16) s>> 1).b
            ebx = eax_5
            var_8 = edi_2
            var_10 = zx.d(edx_10.w)
            var_18 = zx.d(edx_12.w)
            var_20 = zx.d(edx_14.w)
            var_24 = zx.d(edx_16.w)
        while (i != 1)
        esi = arg1
    
    *(esi + 0x50) += 1
    int32_t result = *(esi + 0x50)
    *(esi + 0x18) = edi_1
    
    if (*(esi + (result << 2) + 0x28) == 0)
        return result
    
    return (*(esi + (result << 2) + 0x28))(esi, arg2)
}
