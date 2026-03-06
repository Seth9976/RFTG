// 函数名称: sub_5b0d89
// 虚拟地址: 0x5b0d89
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5b0d89(char arg1)
{
    // 第一条实际指令: int32_t result = sx.d(arg1)
    int32_t result = sx.d(arg1)
    
    if (sub_5a8426(zx.d(arg1)) != 0)
        return result
    
    return (result & 0xffffffdf) - 7
}
