// 函数名称: sub_5ed690
// 虚拟地址: 0x5ed690
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ed690(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t edx = arg1
    uint32_t edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t edi = *(edx + 0x10)
    int32_t eax = ecx * 2
    char* ecx_1 = edi + ecx - 8
    uint32_t var_24 = zx.d(sx.w(*(edi + ecx - 2)))
    uint32_t var_28 = zx.d(sx.w(ecx_1[5]))
    uint32_t var_2c = zx.d(sx.w(ecx_1[4]))
    int32_t esi
    esi.w = sx.w(ecx_1[7])
    uint32_t var_30 = zx.d(sx.w(ecx_1[3]))
    uint32_t var_34 = zx.d(sx.w(ecx_1[2]))
    uint32_t var_38 = zx.d(sx.w(ecx_1[1]))
    void* eax_1 = edi + eax - 0x10
    uint32_t esi_1 = zx.d(esi.w)
    uint32_t var_3c = zx.d(sx.w(*ecx_1))
    uint32_t var_20
    uint32_t var_1c
    uint32_t var_18
    uint32_t var_14
    uint32_t var_10
    uint32_t var_c
    uint32_t var_8
    
    if (eax_1 u>= edi)
        do
            var_8 = zx.d(sx.w(ecx_1[6]))
            var_c = zx.d(sx.w(ecx_1[5]))
            var_10 = zx.d(sx.w(ecx_1[4]))
            var_14 = zx.d(sx.w(ecx_1[3]))
            edx.w = sx.w(ecx_1[7])
            var_18 = zx.d(sx.w(ecx_1[2]))
            var_1c = zx.d(sx.w(ecx_1[1]))
            var_20 = zx.d(sx.w(*ecx_1))
            uint32_t edx_1 = zx.d(edx.w)
            *(eax_1 + 0xf) = ((edx_1 + esi_1) s>> 1).b
            ecx_1 -= 8
            *(eax_1 + 0xe) = ((var_24 + var_8) s>> 1).b
            *(eax_1 + 7) = edx_1.b
            *(eax_1 + 0xd) = ((var_28 + var_c) s>> 1).b
            esi_1 = edx_1
            *(eax_1 + 0xc) = ((var_2c + var_10) s>> 1).b
            *(eax_1 + 0xb) = ((var_30 + var_14) s>> 1).b
            var_24 = zx.d(var_8.w)
            *(eax_1 + 0xa) = ((var_34 + var_18) s>> 1).b
            *(eax_1 + 9) = ((var_38 + var_1c) s>> 1).b
            var_28 = zx.d(var_c.w)
            *(eax_1 + 8) = ((var_3c + var_20) s>> 1).b
            *(eax_1 + 6) = var_8.b
            *(eax_1 + 5) = var_c.b
            *(eax_1 + 4) = var_10.b
            *(eax_1 + 3) = var_14.b
            var_2c = zx.d(var_10.w)
            *(eax_1 + 2) = var_18.b
            var_30 = zx.d(var_14.w)
            *(eax_1 + 1) = var_1c.b
            int16_t ebx_57 = var_20.w
            *eax_1 = ebx_57.b
            var_34 = zx.d(var_18.w)
            var_38 = zx.d(var_1c.w)
            eax_1 -= 0x10
            var_3c = zx.d(ebx_57)
        while (eax_1 u>= edi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, var_3c, var_38, var_34, var_30, var_2c, 
        var_28, var_24, var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
