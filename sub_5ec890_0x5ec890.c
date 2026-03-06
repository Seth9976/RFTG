// 函数名称: sub_5ec890
// 虚拟地址: 0x5ec890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ec890(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edx = arg1
    uint32_t edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t ebx
    ebx.w = sx.w(*(esi + ecx - 2))
    int32_t eax = ecx * 2
    void* ecx_1 = esi + ecx - 2
    int32_t edi
    edi.w = sx.w(*(ecx_1 + 1))
    void* eax_1 = esi + eax - 4
    uint32_t edi_1 = zx.d(edi.w)
    uint32_t var_c = zx.d(ebx.w)
    uint32_t var_8
    
    if (eax_1 u>= esi)
        do
            uint32_t ebx_1
            ebx_1.w = sx.w(*ecx_1)
            edx.w = sx.w(*(ecx_1 + 1))
            uint32_t edx_1 = zx.d(edx.w)
            var_8 = zx.d(ebx_1.w)
            *(eax_1 + 3) = ((edx_1 + edi_1) s>> 1).b
            *(eax_1 + 1) = edx_1.b
            *(eax_1 + 2) = ((var_c + var_8) s>> 1).b
            edi_1 = edx_1
            *eax_1 = var_8.b
            eax_1 -= 4
            ecx_1 -= 2
            var_c = zx.d(var_8.w)
        while (eax_1 u>= esi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_c, var_8)
}
