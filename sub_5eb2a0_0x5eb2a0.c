// 函数名称: sub_5eb2a0
// 虚拟地址: 0x5eb2a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5eb2a0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t eax = ecx * 2
    void* ecx_1 = esi + ecx - 2
    void* eax_1 = esi + eax - 4
    uint32_t edi = zx.d(*(ecx_1 + 1))
    uint32_t var_c = zx.d(*(esi + ecx - 2))
    uint32_t var_8
    
    if (eax_1 u>= esi)
        do
            uint32_t edx_1 = zx.d(*(ecx_1 + 1))
            var_8 = zx.d(*ecx_1)
            *(eax_1 + 3) = ((edx_1 + edi) s>> 1).b
            *(eax_1 + 1) = edx_1.b
            *(eax_1 + 2) = ((var_c + var_8) s>> 1).b
            int16_t ebx_7 = var_8.w
            edi = edx_1
            *eax_1 = ebx_7.b
            eax_1 -= 4
            ecx_1 -= 2
            var_c = zx.d(ebx_7)
        while (eax_1 u>= esi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_c, var_8)
}
