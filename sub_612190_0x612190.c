// 函数名称: sub_612190
// 虚拟地址: 0x612190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_612190(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_1c = arg1
    int32_t var_1c = arg1
    int32_t esi = 0
    bool p = unimplemented  {xor esi, esi}
    bool a = undefined
    int32_t var_c = 0
    bool d
    int32_t var_20 = (d ? 1 : 0) << 0xa | (0 s< 0 ? 1 : 0) << 7 | (arg1 == arg1 ? 1 : 0) << 6
        | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
    int32_t eax_1 = var_20 ^ 0x200000
    int32_t var_20_2 = (test_bit(eax_1, 0xb) ? 1 : 0) << 0xb | (test_bit(eax_1, 0xa) ? 1 : 0) << 0xa
        | (test_bit(eax_1, 7) ? 1 : 0) << 7 | (test_bit(eax_1, 6) ? 1 : 0) << 6
        | (test_bit(eax_1, 4) ? 1 : 0) << 4 | (test_bit(eax_1, 2) ? 1 : 0) << 2
        | (test_bit(eax_1, 0) ? 1 : 0)
    
    if (var_20_2 != var_20)
        var_c = 1
    
    if (var_c == 0)
        return 0
    
    int32_t eax_4
    int32_t ecx_1
    int32_t edx
    int32_t ebx
    eax_4, ebx, ecx_1, edx = __cpuid(0, var_20)
    int32_t var_10 = ebx
    int32_t var_14 = ecx_1
    int32_t var_c_1 = edx
    
    if (eax_4 s>= 1)
        int32_t eax_5
        int32_t ecx_2
        int32_t edx_1
        int32_t ebx_1
        eax_5, ebx_1, ecx_2, edx_1 = __cpuid(1, ecx_1)
        int32_t var_8_1 = eax_5
        int32_t var_10_1 = ebx_1
        int32_t var_14_1 = ecx_2
        esi = edx_1
    
    return esi & &data_800000
}
