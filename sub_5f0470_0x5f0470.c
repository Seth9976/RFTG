// 函数名称: sub_5f0470
// 虚拟地址: 0x5f0470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f0470(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = arg1
    void* edx = arg1
    int32_t ecx = *(edx + 0x18)
    int32_t esi = *(edx + 0x10)
    int32_t eax = ecx << 2
    void* ecx_1 = esi + ecx - 0x10
    int32_t ebx = sx.d(*(ecx_1 + 0xe))
    int32_t var_34 = sx.d(*(esi + ecx - 4))
    int32_t var_c = sx.d(*(ecx_1 + 0xa))
    int32_t var_14 = sx.d(*(ecx_1 + 8))
    int32_t var_1c = sx.d(*(ecx_1 + 6))
    int32_t var_24 = sx.d(*(ecx_1 + 4))
    int32_t var_2c = sx.d(*(ecx_1 + 2))
    int16_t* eax_1 = esi + eax - 0x40
    int32_t var_3c = ebx
    int32_t var_30 = sx.d(*ecx_1)
    int32_t var_38
    int32_t var_28
    int32_t var_20
    int32_t var_18
    int32_t var_10
    int32_t var_8
    
    if (eax_1 u>= esi)
        do
            var_8 = sx.d(*(ecx_1 + 0xa))
            var_10 = sx.d(*(ecx_1 + 8))
            var_18 = sx.d(*(ecx_1 + 6))
            var_20 = sx.d(*(ecx_1 + 4))
            int32_t edx_1 = sx.d(*(ecx_1 + 0xe))
            var_28 = sx.d(*(ecx_1 + 2))
            var_38 = sx.d(*ecx_1)
            int32_t esi_1 = sx.d(*(ecx_1 + 0xc))
            eax_1[0x1f] = ((ebx * 3 + edx_1) s>> 2).w
            eax_1[0x1e] = ((var_34 * 3 + esi_1) s>> 2).w
            eax_1[0x1d] = ((var_c * 3 + var_8) s>> 2).w
            eax_1[0x1c] = ((var_14 * 3 + var_10) s>> 2).w
            eax_1[0x1b] = ((var_1c * 3 + var_18) s>> 2).w
            eax_1[0x1a] = ((var_24 * 3 + var_20) s>> 2).w
            eax_1[0x19] = ((var_2c * 3 + var_28) s>> 2).w
            eax_1[0x18] = ((var_30 * 3 + var_38) s>> 2).w
            eax_1[0x17] = ((var_3c + edx_1) s>> 1).w
            eax_1[0x16] = ((var_34 + esi_1) s>> 1).w
            ecx_1 -= 0x10
            eax_1[0x15] = ((var_8 + var_c) s>> 1).w
            eax_1[0x14] = ((var_10 + var_14) s>> 1).w
            eax_1[0x13] = ((var_18 + var_1c) s>> 1).w
            eax_1[7] = edx_1.w
            eax_1[0x12] = ((var_20 + var_24) s>> 1).w
            eax_1[6] = esi_1.w
            eax_1[0x11] = ((var_28 + var_2c) s>> 1).w
            eax_1[0x10] = ((var_38 + var_30) s>> 1).w
            eax_1[0xf] = ((edx_1 * 3 + var_3c) s>> 2).w
            eax_1[0xe] = ((esi_1 * 3 + var_34) s>> 2).w
            eax_1[0xd] = ((var_8 * 3 + var_c) s>> 2).w
            eax_1[0xc] = ((var_10 * 3 + var_14) s>> 2).w
            eax_1[0xb] = ((var_18 * 3 + var_1c) s>> 2).w
            eax_1[0xa] = ((var_20 * 3 + var_24) s>> 2).w
            eax_1[9] = ((var_28 * 3 + var_2c) s>> 2).w
            eax_1[8] = ((var_38 * 3 + var_30) s>> 2).w
            eax_1[5] = var_8.w
            eax_1[4] = var_10.w
            eax_1[3] = var_18.w
            eax_1[2] = var_20.w
            eax_1[1] = var_28.w
            ebx = edx_1
            var_c = var_8
            var_14 = var_10
            var_1c = var_18
            *eax_1 = var_38.w
            var_3c = ebx
            var_34 = esi_1
            var_24 = var_20
            eax_1 -= 0x40
            var_2c = var_28
            var_30 = var_38
        while (eax_1 u>= esi)
        
        edx = arg1
    
    *(edx + 0x50) += 1
    *(edx + 0x18) = eax
    int32_t result = *(edx + 0x50)
    
    if (*(edx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(edx + (result << 2) + 0x28))(edx, arg2, eax, esi, var_3c, var_38, var_34, var_30, var_2c, 
        var_28, var_24, var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
