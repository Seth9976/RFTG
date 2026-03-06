// 函数名称: sub_5eb540
// 虚拟地址: 0x5eb540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5eb540(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t eax = ecx * 2
    uint32_t var_14 = zx.d(*(esi + ecx - 2))
    uint32_t var_18 = zx.d(*(esi + ecx - 3))
    void* eax_1 = esi + eax - 8
    uint32_t edi = zx.d(*(esi + ecx - 1))
    uint32_t var_1c = zx.d(*(esi + ecx - 4))
    uint32_t var_10
    uint32_t var_c
    uint32_t var_8
    
    if (eax_1 u>= esi)
        char* ecx_2 = esi + ecx - 4
        
        do
            uint32_t edx_1 = zx.d(ecx_2[3])
            var_8 = zx.d(ecx_2[2])
            var_c = zx.d(ecx_2[1])
            var_10 = zx.d(*ecx_2)
            *(eax_1 + 7) = ((edx_1 + edi) s>> 1).b
            *(eax_1 + 3) = edx_1.b
            *(eax_1 + 6) = ((var_14 + var_8) s>> 1).b
            edi = edx_1
            *(eax_1 + 5) = ((var_18 + var_c) s>> 1).b
            var_14 = zx.d(var_8.w)
            *(eax_1 + 4) = ((var_1c + var_10) s>> 1).b
            *(eax_1 + 2) = var_8.b
            *(eax_1 + 1) = var_c.b
            int16_t ebx_19 = var_10.w
            var_18 = zx.d(var_c.w)
            *eax_1 = ebx_19.b
            eax_1 -= 8
            ecx_2 -= 4
            var_1c = zx.d(ebx_19)
        while (eax_1 u>= esi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_1c, var_18, var_14, var_10, var_c, var_8)
}
