// 函数名称: sub_5b4ae2
// 虚拟地址: 0x5b4ae2
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b4ae2(char arg1) __pure
{
    // 第一条实际指令: if ((arg1 & 0x20) != 0)
    if ((arg1 & 0x20) != 0)
        return 5
    
    if ((arg1 & 8) != 0)
        return 1
    
    if ((arg1 & 4) != 0)
        return 2
    
    if ((arg1 & 1) != 0)
        return 3
    
    return (zx.d(arg1) & 2) * 2
}
