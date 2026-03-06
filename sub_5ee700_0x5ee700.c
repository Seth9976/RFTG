// 函数名称: sub_5ee700
// 虚拟地址: 0x5ee700
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ee700(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t eax = ecx * 2
    int16_t* ecx_1 = esi + ecx - 0xc
    uint32_t var_14 = zx.d(*(esi + ecx - 4))
    uint32_t var_18 = zx.d(ecx_1[3])
    uint32_t var_1c = zx.d(ecx_1[2])
    uint32_t var_20 = zx.d(ecx_1[1])
    void* eax_1 = esi + eax - 0x18
    uint32_t edi = zx.d(ecx_1[5])
    uint32_t var_24 = zx.d(*ecx_1)
    uint32_t var_28
    uint32_t var_10
    uint32_t var_c
    uint32_t var_8
    
    if (eax_1 u>= esi)
        do
            uint32_t edx_1 = zx.d(ecx_1[5])
            uint32_t esi_1 = zx.d(ecx_1[4])
            var_8 = zx.d(ecx_1[3])
            var_c = zx.d(ecx_1[2])
            var_10 = zx.d(ecx_1[1])
            uint32_t ebx_8 = zx.d(*ecx_1)
            *(eax_1 + 0x16) = ((edi + edx_1) s>> 1).w
            *(eax_1 + 0x14) = ((var_14 + esi_1) s>> 1).w
            *(eax_1 + 0xa) = edx_1.w
            *(eax_1 + 0x12) = ((var_8 + var_18) s>> 1).w
            *(eax_1 + 8) = esi_1.w
            *(eax_1 + 0x10) = ((var_c + var_1c) s>> 1).w
            *eax_1 = ebx_8.w
            *(eax_1 + 0xe) = ((var_10 + var_20) s>> 1).w
            *(eax_1 + 0xc) = ((var_24 + ebx_8) s>> 1).w
            *(eax_1 + 6) = var_8.w
            *(eax_1 + 4) = var_c.w
            *(eax_1 + 2) = var_10.w
            edi = edx_1
            var_18 = var_8
            var_1c = var_c
            eax_1 -= 0x18
            ecx_1 -= 0xc
            var_28 = ebx_8
            var_14 = esi_1
            var_20 = var_10
            var_24 = ebx_8
        while (eax_1 u>= esi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, esi, var_28, var_24, var_20, var_1c, var_18, 
        var_14, var_10, var_c, var_8)
}
