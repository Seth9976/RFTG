// 函数名称: sub_41b280
// 虚拟地址: 0x41b280
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_41b280()
{
    // 第一条实际指令: int32_t* var_c
    int32_t* var_c
    
    if (sub_419400(&var_c) == 0)
        return 
    
    void* eax_1 = *(data_27e7a40 + 0x548)
    int32_t* ecx_2 = var_c
    long double x87_r7_3 =
        fconvert.t(fconvert.s(fconvert.t(data_8c4d34) + fconvert.t(*(eax_1 + 0x438a4))))
    *(eax_1 + 0x438a4) = fconvert.s(x87_r7_3)
    
    switch (*ecx_2 - 2)
        case 0, 0x16, 0x17, 0x18, 0x19, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x28, 0x29, 
                0x2a, 0x2b, 0x2c, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
                0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48
            nop
        default
            long double x87_r6_1 = float.t(ecx_2[1])
            long double x87_r6_3 = x87_r7_3 * fconvert.t(1000.0)
            x87_r6_3 - x87_r6_1
            int32_t eax_3
            eax_3.w = (x87_r6_3 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_3, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r6_1 ? 1 : 0) << 0xe
            
            if ((eax_3:1.b & 0x41) == 0)
                sub_419340()
}
