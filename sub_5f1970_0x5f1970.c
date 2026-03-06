// 函数名称: sub_5f1970
// 虚拟地址: 0x5f1970
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f1970(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edx = arg1
    uint32_t edx = arg1
    int32_t ecx = *(edx + 0x18)
    uint32_t esi = *(edx + 0x10)
    int32_t eax = ecx * 2
    void* ecx_1 = esi + ecx - 0x10
    int32_t edi
    edi.w = *(ecx_1 + 0xe)
    edi.w = rol.w(edi.w, 8)
    uint32_t var_1c = zx.d(rol.w(*(esi + ecx - 4), 8))
    uint32_t var_20 = zx.d(rol.w(*(ecx_1 + 0xa), 8))
    uint32_t var_24 = zx.d(rol.w(*(ecx_1 + 8), 8))
    uint32_t var_28 = zx.d(rol.w(*(ecx_1 + 6), 8))
    uint32_t var_2c = zx.d(rol.w(*(ecx_1 + 4), 8))
    uint32_t var_30 = zx.d(rol.w(*(ecx_1 + 2), 8))
    void* eax_1 = esi + eax - 0x20
    uint32_t var_3c = esi
    uint32_t edi_1 = zx.d(edi.w)
    uint32_t var_34 = zx.d(rol.w(*ecx_1, 8))
    uint32_t var_38
    uint32_t var_18
    uint32_t var_14
    uint32_t var_10
    uint32_t var_c
    uint32_t var_8
    
    if (eax_1 u>= esi)
        do
            edx.w = *(ecx_1 + 0xe)
            esi.w = *(ecx_1 + 0xc)
            edx.w = rol.w(edx.w, 8)
            esi.w = rol.w(esi.w, 8)
            var_8 = zx.d(rol.w(*(ecx_1 + 0xa), 8))
            var_c = zx.d(rol.w(*(ecx_1 + 8), 8))
            var_10 = zx.d(rol.w(*(ecx_1 + 6), 8))
            var_14 = zx.d(rol.w(*(ecx_1 + 4), 8))
            uint32_t edx_1 = zx.d(edx.w)
            var_18 = zx.d(rol.w(*(ecx_1 + 2), 8))
            int16_t ebx_24 = *ecx_1
            *(eax_1 + 0x1e) = ((edi_1 + edx_1) s>> 1).w
            esi = zx.d(esi.w)
            *(eax_1 + 0x1c) = ((var_1c + esi) s>> 1).w
            *(eax_1 + 0x1a) = ((var_8 + var_20) s>> 1).w
            uint32_t ebx_25 = zx.d(rol.w(ebx_24, 8))
            *(eax_1 + 0x18) = ((var_c + var_24) s>> 1).w
            ecx_1 -= 0x10
            *(eax_1 + 0x16) = ((var_10 + var_28) s>> 1).w
            *(eax_1 + 0xe) = edx_1.w
            *(eax_1 + 0x14) = ((var_14 + var_2c) s>> 1).w
            var_38 = ebx_25
            *(eax_1 + 0x12) = ((var_18 + var_30) s>> 1).w
            *(eax_1 + 0x10) = ((var_34 + ebx_25) s>> 1).w
            *(eax_1 + 0xa) = var_8.w
            *(eax_1 + 8) = var_c.w
            *(eax_1 + 6) = var_10.w
            *(eax_1 + 4) = var_14.w
            *(eax_1 + 2) = var_18.w
            edi_1 = edx_1
            var_20 = var_8
            *(eax_1 + 0xc) = esi.w
            *eax_1 = ebx_25.w
            var_1c = esi
            var_24 = var_c
            var_28 = var_10
            var_2c = var_14
            eax_1 -= 0x20
            var_30 = var_18
            var_34 = ebx_25
        while (eax_1 u>= var_3c)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_3c, var_38, var_34, var_30, var_2c, 
        var_28, var_24, var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
