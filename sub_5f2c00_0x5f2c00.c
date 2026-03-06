// 函数名称: sub_5f2c00
// 虚拟地址: 0x5f2c00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f2c00(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edx = arg1
    int32_t edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t eax = ecx * 2
    void* ecx_1 = esi + ecx - 0xc
    int32_t edi
    edi.w = *(ecx_1 + 0xa)
    edi.w = rol.w(edi.w, 8)
    int32_t var_14 = sx.d(rol.w(*(esi + ecx - 4), 8))
    int32_t var_18 = sx.d(rol.w(*(ecx_1 + 6), 8))
    int32_t var_1c = sx.d(rol.w(*(ecx_1 + 4), 8))
    int32_t var_20 = sx.d(rol.w(*(ecx_1 + 2), 8))
    void* eax_1 = esi + eax - 0x18
    int32_t var_2c = esi
    int32_t edi_1 = sx.d(edi.w)
    int32_t var_24 = sx.d(rol.w(*ecx_1, 8))
    int32_t var_28
    int32_t var_10
    int32_t var_c
    int32_t var_8
    
    if (eax_1 u>= esi)
        do
            edx.w = *(ecx_1 + 0xa)
            esi.w = *(ecx_1 + 8)
            edx.w = rol.w(edx.w, 8)
            esi.w = rol.w(esi.w, 8)
            var_8 = sx.d(rol.w(*(ecx_1 + 6), 8))
            var_c = sx.d(rol.w(*(ecx_1 + 4), 8))
            int32_t edx_1 = sx.d(edx.w)
            var_10 = sx.d(rol.w(*(ecx_1 + 2), 8))
            int16_t ebx_16 = *ecx_1
            *(eax_1 + 0x16) = ((edi_1 + edx_1) s>> 1).w
            esi = sx.d(esi.w)
            *(eax_1 + 0x14) = ((var_14 + esi) s>> 1).w
            *(eax_1 + 0x12) = ((var_8 + var_18) s>> 1).w
            int32_t ebx_17 = sx.d(rol.w(ebx_16, 8))
            *(eax_1 + 0x10) = ((var_c + var_1c) s>> 1).w
            *(eax_1 + 0xa) = edx_1.w
            *(eax_1 + 0xe) = ((var_10 + var_20) s>> 1).w
            *(eax_1 + 0xc) = ((var_24 + ebx_17) s>> 1).w
            *(eax_1 + 6) = var_8.w
            *(eax_1 + 4) = var_c.w
            *(eax_1 + 2) = var_10.w
            edi_1 = edx_1
            var_18 = var_8
            *(eax_1 + 8) = esi.w
            *eax_1 = ebx_17.w
            var_1c = var_c
            eax_1 -= 0x18
            ecx_1 -= 0xc
            var_28 = ebx_17
            var_14 = esi
            var_20 = var_10
            var_24 = ebx_17
        while (eax_1 u>= var_2c)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_2c, var_28, var_24, var_20, var_1c, 
        var_18, var_14, var_10, var_c, var_8)
}
