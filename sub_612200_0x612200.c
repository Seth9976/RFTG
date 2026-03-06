// 函数名称: sub_612200
// 虚拟地址: 0x612200
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_612200()
{
    // 第一条实际指令: bool p = unimplemented  {sub esp, 0x10}
    bool p = unimplemented  {sub esp, 0x10}
    bool a = unimplemented  {sub esp, 0x10}
    int32_t var_c = 0
    int32_t var_14
    int32_t __saved_ebp
    bool d
    int32_t var_1c = (add_overflow(&__saved_ebp, 0xfffffff0) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
        | (&var_14 s< 0 ? 1 : 0) << 7 | (&__saved_ebp == 0x10 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
        | (p ? 1 : 0) << 2 | (&__saved_ebp u< 0x10 ? 1 : 0)
    int32_t eax_1 = var_1c ^ 0x200000
    int32_t var_1c_2 = (test_bit(eax_1, 0xb) ? 1 : 0) << 0xb | (test_bit(eax_1, 0xa) ? 1 : 0) << 0xa
        | (test_bit(eax_1, 7) ? 1 : 0) << 7 | (test_bit(eax_1, 6) ? 1 : 0) << 6
        | (test_bit(eax_1, 4) ? 1 : 0) << 4 | (test_bit(eax_1, 2) ? 1 : 0) << 2
        | (test_bit(eax_1, 0) ? 1 : 0)
    
    if (var_1c_2 != var_1c)
        var_c = 1
    
    if (var_c != 0)
        int32_t eax_4
        int32_t ecx_1
        int32_t edx_1
        int32_t ebx_1
        eax_4, ebx_1, ecx_1, edx_1 = __cpuid(0x80000000, var_1c)
        int32_t var_10_1 = ebx_1
        int32_t var_14_1 = ecx_1
        int32_t var_c_1 = edx_1
        
        if (eax_4 u>= 0x80000001)
            int32_t eax_5
            int32_t ecx_2
            int32_t edx_2
            int32_t ebx_2
            eax_5, ebx_2, ecx_2, edx_2 = __cpuid(0x80000001, ecx_1)
            int32_t var_8_2 = eax_5
            int32_t var_10_2 = ebx_2
            int32_t var_14_2 = ecx_2
            return edx_2 & 0x80000000
    
    return 0
}
