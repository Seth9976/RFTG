// 函数名称: sub_5f1590
// 虚拟地址: 0x5f1590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f1590(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edx = arg1
    uint32_t edx = arg1
    int32_t ecx = *(edx + 0x18)
    uint32_t esi = *(edx + 0x10)
    uint32_t ebx = zx.d(rol.w(*(esi + ecx - 2), 8))
    int32_t eax = ecx << 2
    int16_t* ecx_1 = esi + ecx - 0xc
    uint32_t var_24 = zx.d(rol.w(*(esi + ecx - 4), 8))
    uint32_t var_c = zx.d(rol.w(ecx_1[3], 8))
    uint32_t var_14 = zx.d(rol.w(ecx_1[2], 8))
    uint32_t var_1c = zx.d(rol.w(ecx_1[1], 8))
    int16_t* eax_1 = esi + eax - 0x30
    uint32_t var_30 = esi
    uint32_t var_2c = ebx
    uint32_t var_20 = zx.d(rol.w(*ecx_1, 8))
    uint32_t var_28
    uint32_t var_18
    uint32_t var_10
    uint32_t var_8
    
    if (eax_1 u>= esi)
        do
            edx.w = ecx_1[5]
            esi.w = ecx_1[4]
            edx.w = rol.w(edx.w, 8)
            esi.w = rol.w(esi.w, 8)
            var_8 = zx.d(rol.w(ecx_1[3], 8))
            var_10 = zx.d(rol.w(ecx_1[2], 8))
            var_18 = zx.d(rol.w(ecx_1[1], 8))
            var_28 = zx.d(rol.w(*ecx_1, 8))
            uint32_t edx_1 = zx.d(edx.w)
            eax_1[0x17] = ((ebx * 3 + edx_1) s>> 2).w
            esi = zx.d(esi.w)
            eax_1[0x16] = ((var_24 * 3 + esi) s>> 2).w
            eax_1[0x15] = ((var_c * 3 + var_8) s>> 2).w
            eax_1[0x14] = ((var_14 * 3 + var_10) s>> 2).w
            eax_1[0x13] = ((var_1c * 3 + var_18) s>> 2).w
            eax_1[0x12] = ((var_20 * 3 + var_28) s>> 2).w
            eax_1[0x11] = ((var_2c + edx_1) s>> 1).w
            eax_1[0x10] = ((var_24 + esi) s>> 1).w
            ecx_1 -= 0xc
            eax_1[0xf] = ((var_8 + var_c) s>> 1).w
            eax_1[0xe] = ((var_10 + var_14) s>> 1).w
            eax_1[0xd] = ((var_18 + var_1c) s>> 1).w
            eax_1[0xc] = ((var_28 + var_20) s>> 1).w
            eax_1[0xb] = ((edx_1 * 3 + var_2c) s>> 2).w
            eax_1[0xa] = ((esi * 3 + var_24) s>> 2).w
            eax_1[9] = ((var_8 * 3 + var_c) s>> 2).w
            eax_1[8] = ((var_10 * 3 + var_14) s>> 2).w
            eax_1[7] = ((var_18 * 3 + var_1c) s>> 2).w
            eax_1[6] = ((var_28 * 3 + var_20) s>> 2).w
            eax_1[3] = var_8.w
            eax_1[2] = var_10.w
            eax_1[5] = edx_1.w
            eax_1[1] = var_18.w
            ebx = edx_1
            var_c = var_8
            eax_1[4] = esi.w
            *eax_1 = var_28.w
            var_14 = var_10
            eax_1 -= 0x30
            var_2c = ebx
            var_24 = esi
            var_1c = var_18
            var_20 = var_28
        while (eax_1 u>= var_30)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_30, var_2c, var_28, var_24, var_20, 
        var_1c, var_18, var_14, var_10, var_c, var_8)
}
