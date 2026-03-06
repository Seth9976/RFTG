// 函数名称: sub_5e0110
// 虚拟地址: 0x5e0110
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5e0110(int32_t arg1)
{
    // 第一条实际指令: int32_t result = arg1
    int32_t result = arg1
    int32_t ecx = *(result + 0x18)
    int32_t esi = *(result + 0x10)
    int16_t* edx = esi + ecx - 2
    int32_t* esi_1 = esi + (ecx << 1) - 4
    uint32_t i_1 = ecx u>> 1
    
    if (i_1 != 0)
        uint32_t i
        
        do
            result.w = *edx
            result.w = rol.w(result.w, 8)
            int32_t eax_2 = (zx.d(result.w) ^ 0xffff8000) << 0x10
            *esi_1 =
                ((eax_2 & 0xff0000) | eax_2 u>> 0x10) u>> 8 | ((eax_2 & 0xff00) | eax_2 << 0x10) << 8
            edx -= 2
            esi_1 -= 4
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = arg1
    
    int32_t ecx_1 = *(result + 0x18)
    *(result + 0x50) += 1
    *(result + 0x18) = ecx_1 * 2
    int32_t ecx_3 = *(result + 0x50)
    
    if (*(result + (ecx_3 << 2) + 0x28) == 0)
        return result
    
    return (*(result + (ecx_3 << 2) + 0x28))(result, 0x9020)
}
