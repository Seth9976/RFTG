// 函数名称: sub_5c9660
// 虚拟地址: 0x5c9660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c9660(int32_t* arg1)
{
    // 第一条实际指令: int32_t ecx = data_bed820
    int32_t ecx = data_bed820
    
    if (ecx == 0)
        sub_5c8d60()
        return 0
    
    if (arg1 != 0 && *arg1 == ecx + 0xf4)
        return *(sub_5c9500(arg1) + 0x24)
    
    sub_5cce60("Invalid window")
    return 0
}
