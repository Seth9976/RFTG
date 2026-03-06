// 函数名称: sub_5b44a9
// 虚拟地址: 0x5b44a9
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b44a9(int32_t arg1, int32_t arg2) __pure
{
    // 第一条实际指令: if (arg2 != 0x7ff00000)
    if (arg2 != 0x7ff00000)
        if (arg2 == 0xfff00000 && arg1 == 0)
            return 2
    else if (arg1 == 0)
        return 1
    
    int16_t ecx = arg2:2.w & 0x7ff8
    
    if (ecx == 0x7ff8)
        return 3
    
    if (ecx == 0x7ff0 && ((arg2 & 0x7ffff) != 0 || arg1 != 0))
        return 4
    
    return 0
}
