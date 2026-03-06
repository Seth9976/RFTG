// 函数名称: sub_5f0d80
// 虚拟地址: 0x5f0d80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f0d80(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edx = arg1
    uint32_t edx = arg1
    int32_t ecx = *(edx + 0x18)
    uint32_t esi = *(edx + 0x10)
    int32_t eax = ecx * 2
    void* ecx_1 = esi + ecx - 8
    int32_t edi
    edi.w = *(ecx_1 + 6)
    edi.w = rol.w(edi.w, 8)
    uint32_t var_c = zx.d(rol.w(*(esi + ecx - 4), 8))
    uint32_t var_10 = zx.d(rol.w(*(ecx_1 + 2), 8))
    void* eax_1 = esi + eax - 0x10
    uint32_t var_1c = esi
    uint32_t edi_1 = zx.d(edi.w)
    uint32_t var_14 = zx.d(rol.w(*ecx_1, 8))
    uint32_t var_18
    uint32_t var_8
    
    if (eax_1 u>= esi)
        do
            edx.w = *(ecx_1 + 6)
            esi.w = *(ecx_1 + 4)
            edx.w = rol.w(edx.w, 8)
            esi.w = rol.w(esi.w, 8)
            uint32_t edx_1 = zx.d(edx.w)
            var_8 = zx.d(rol.w(*(ecx_1 + 2), 8))
            int16_t ebx_8 = *ecx_1
            *(eax_1 + 0xe) = ((edi_1 + edx_1) s>> 1).w
            esi = zx.d(esi.w)
            *(eax_1 + 0xc) = ((var_c + esi) s>> 1).w
            *(eax_1 + 0xa) = ((var_8 + var_10) s>> 1).w
            uint32_t ebx_9 = zx.d(rol.w(ebx_8, 8))
            *(eax_1 + 8) = ((var_14 + ebx_9) s>> 1).w
            *(eax_1 + 6) = edx_1.w
            *(eax_1 + 2) = var_8.w
            *(eax_1 + 4) = esi.w
            *eax_1 = ebx_9.w
            edi_1 = edx_1
            eax_1 -= 0x10
            ecx_1 -= 8
            var_18 = ebx_9
            var_c = esi
            var_10 = var_8
            var_14 = ebx_9
        while (eax_1 u>= var_1c)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_1c, var_18, var_14, var_10, var_c, var_8)
}
