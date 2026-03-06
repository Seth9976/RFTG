// 函数名称: sub_5ed030
// 虚拟地址: 0x5ed030
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ed030(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edx = arg1
    uint32_t edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t eax = ecx * 2
    char* ecx_1 = esi + ecx - 6
    uint32_t var_1c = zx.d(sx.w(*(esi + ecx - 2)))
    uint32_t var_20 = zx.d(sx.w(ecx_1[3]))
    uint32_t var_24 = zx.d(sx.w(ecx_1[2]))
    uint32_t var_28 = zx.d(sx.w(ecx_1[1]))
    int32_t edi
    edi.w = sx.w(ecx_1[5])
    char* eax_1 = esi + eax - 0xc
    uint32_t edi_1 = zx.d(edi.w)
    uint32_t var_2c = zx.d(sx.w(*ecx_1))
    uint32_t var_18
    uint32_t var_14
    uint32_t var_10
    uint32_t var_c
    uint32_t var_8
    
    if (eax_1 u>= esi)
        do
            var_8 = zx.d(sx.w(ecx_1[4]))
            var_c = zx.d(sx.w(ecx_1[3]))
            edx.w = sx.w(ecx_1[5])
            var_10 = zx.d(sx.w(ecx_1[2]))
            var_14 = zx.d(sx.w(ecx_1[1]))
            var_18 = zx.d(sx.w(*ecx_1))
            uint32_t edx_1 = zx.d(edx.w)
            eax_1[0xb] = ((edx_1 + edi_1) s>> 1).b
            eax_1[5] = edx_1.b
            eax_1[0xa] = ((var_1c + var_8) s>> 1).b
            edi_1 = edx_1
            eax_1[9] = ((var_20 + var_c) s>> 1).b
            eax_1[8] = ((var_24 + var_10) s>> 1).b
            var_1c = zx.d(var_8.w)
            eax_1[7] = ((var_28 + var_14) s>> 1).b
            var_20 = zx.d(var_c.w)
            eax_1[6] = ((var_2c + var_18) s>> 1).b
            eax_1[4] = var_8.b
            eax_1[3] = var_c.b
            eax_1[2] = var_10.b
            var_24 = zx.d(var_10.w)
            eax_1[1] = var_14.b
            int16_t ebx_41 = var_18.w
            var_28 = zx.d(var_14.w)
            *eax_1 = ebx_41.b
            eax_1 -= 0xc
            ecx_1 -= 6
            var_2c = zx.d(ebx_41)
        while (eax_1 u>= esi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_2c, var_28, var_24, var_20, var_1c, 
        var_18, var_14, var_10, var_c, var_8)
}
