// 函数名称: sub_5bc470
// 虚拟地址: 0x5bc470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bc470() __pure
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t entry_ebx
    
    if ((entry_ebx.b & 0x10) != 0)
        result = 1
    
    if ((entry_ebx.b & 8) != 0)
        result |= 4
    
    if ((entry_ebx.b & 4) != 0)
        result |= 8
    
    if ((entry_ebx.b & 2) != 0)
        result |= 0x10
    
    if ((entry_ebx.b & 1) != 0)
        result |= 0x20
    
    if ((entry_ebx & 0x80000) != 0)
        result |= 2
    
    int32_t ecx_1 = entry_ebx & 0x300
    
    if (ecx_1 != 0)
        if (ecx_1 == 0x100)
            result |= 0x400
        else if (ecx_1 == 0x200)
            result |= 0x800
        else if (ecx_1 == 0x300)
            result |= 0xc00
    
    int32_t ecx_3 = entry_ebx & 0x30000
    
    if (ecx_3 == 0)
        result |= 0x300
    else if (ecx_3 == 0x10000)
        result |= 0x200
    
    if ((entry_ebx & 0x40000) == 0)
        return result
    
    return result | 0x1000
}
