// 函数名称: sub_609760
// 虚拟地址: 0x609760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_609760(void* arg1 @ esi, int32_t arg2 @ edi)
{
    // 第一条实际指令: if (arg2 == *(arg1 + 0x28))
    if (arg2 == *(arg1 + 0x28))
        return 
    
    int32_t ecx
    
    switch (arg2)
        case 0
            int32_t var_4_1 = ecx
            (*(arg1 + 0xc0))(0x2300, 0x2200, fconvert.s(fconvert.t(7681f)))
            (*(arg1 + 0x54))(0xbe2)
            *(arg1 + 0x28) = arg2
            return 
        case 1
            int32_t var_4_3 = ecx
            (*(arg1 + 0xc0))(0x2300, 0x2200, fconvert.s(fconvert.t(8448f)))
            (*(arg1 + 0x64))(0xbe2)
            (*(arg1 + 0x40))(0x302, 0x303, 1, 0x303)
            *(arg1 + 0x28) = arg2
            return 
        case 2
            int32_t var_4_5 = ecx
            (*(arg1 + 0xc0))(0x2300, 0x2200, fconvert.s(fconvert.t(8448f)))
            (*(arg1 + 0x64))(0xbe2)
            (*(arg1 + 0x40))(0x302, 1, 0, 1)
            *(arg1 + 0x28) = arg2
            return 
        case 4
            int32_t var_4_7 = ecx
            (*(arg1 + 0xc0))(0x2300, 0x2200, fconvert.s(fconvert.t(8448f)))
            (*(arg1 + 0x64))(0xbe2)
            (*(arg1 + 0x40))(0, 0x300, 0, 1)
    
    *(arg1 + 0x28) = arg2
}
