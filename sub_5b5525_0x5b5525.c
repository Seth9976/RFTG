// 函数名称: sub_5b5525
// 虚拟地址: 0x5b5525
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5b5525(uint32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_1c
    void var_1c
    sub_5a73dd(&var_1c, arg2)
    void* var_14
    char var_10
    uint32_t eax_7
    void* var_18
    
    if (arg1 u> 0xff)
        uint8_t eax_1 = (arg1 u>> 8).b
        uint8_t var_8 = eax_1
        char var_7_1 = arg1.b
        
        if ((*(zx.d(eax_1) + var_18 + 0x1d) & 4) == 0)
        label_5b5560:
            
            if (var_10 != 0)
                *(var_14 + 0x70) &= 0xfffffffd
            
            return arg1
        
        char var_c
        
        if (sub_5ac384(&var_1c, *(var_18 + 0xc), 0x200, &var_8, 2, &var_c, 2, *(var_18 + 4), 1) == 0)
            goto label_5b5560
        
        char var_b
        eax_7 = (zx.d(var_c) << 8) + zx.d(var_b)
    else if ((*(var_18 + arg1 + 0x1d) & 0x20) == 0)
        eax_7 = arg1
    else
        eax_7 = zx.d(*(var_18 + arg1 + 0x11d))
    
    if (var_10 != 0)
        *(var_14 + 0x70) &= 0xfffffffd
    
    return eax_7
}
