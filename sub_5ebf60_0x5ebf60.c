// 函数名称: sub_5ebf60
// 虚拟地址: 0x5ebf60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ebf60(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t edi = *(edx + 0x10)
    int32_t eax = ecx * 2
    uint32_t var_24 = zx.d(*(edi + ecx - 2))
    uint32_t esi = zx.d(*(edi + ecx - 1))
    uint32_t var_28 = zx.d(*(edi + ecx - 3))
    uint32_t var_2c = zx.d(*(edi + ecx - 4))
    uint32_t var_30 = zx.d(*(edi + ecx - 5))
    uint32_t var_34 = zx.d(*(edi + ecx - 6))
    uint32_t var_38 = zx.d(*(edi + ecx - 7))
    void* eax_1 = edi + eax - 0x10
    uint32_t var_3c = zx.d(*(edi + ecx - 8))
    uint32_t var_20
    uint32_t var_1c
    uint32_t var_18
    uint32_t var_14
    uint32_t var_10
    uint32_t var_c
    uint32_t var_8
    
    if (eax_1 u>= edi)
        char* ecx_2 = edi + ecx - 8
        
        do
            var_8 = zx.d(ecx_2[6])
            var_c = zx.d(ecx_2[5])
            uint32_t edx_1 = zx.d(ecx_2[7])
            var_10 = zx.d(ecx_2[4])
            var_14 = zx.d(ecx_2[3])
            var_18 = zx.d(ecx_2[2])
            var_1c = zx.d(ecx_2[1])
            var_20 = zx.d(*ecx_2)
            *(eax_1 + 0xf) = ((edx_1 + esi) s>> 1).b
            *(eax_1 + 7) = edx_1.b
            *(eax_1 + 0xe) = ((var_24 + var_8) s>> 1).b
            esi = edx_1
            *(eax_1 + 0xd) = ((var_28 + var_c) s>> 1).b
            *(eax_1 + 0xc) = ((var_2c + var_10) s>> 1).b
            var_24 = zx.d(var_8.w)
            *(eax_1 + 0xb) = ((var_30 + var_14) s>> 1).b
            *(eax_1 + 0xa) = ((var_34 + var_18) s>> 1).b
            var_28 = zx.d(var_c.w)
            *(eax_1 + 9) = ((var_38 + var_1c) s>> 1).b
            var_2c = zx.d(var_10.w)
            *(eax_1 + 8) = ((var_3c + var_20) s>> 1).b
            *(eax_1 + 6) = var_8.b
            *(eax_1 + 5) = var_c.b
            *(eax_1 + 4) = var_10.b
            *(eax_1 + 3) = var_14.b
            var_30 = zx.d(var_14.w)
            *(eax_1 + 2) = var_18.b
            var_34 = zx.d(var_18.w)
            *(eax_1 + 1) = var_1c.b
            int16_t ebx_43 = var_20.w
            var_38 = zx.d(var_1c.w)
            *eax_1 = ebx_43.b
            eax_1 -= 0x10
            ecx_2 -= 8
            var_3c = zx.d(ebx_43)
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
