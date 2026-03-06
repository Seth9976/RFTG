// 函数名称: $LN18
// 虚拟地址: 0x5b6644
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t*$LN18()
{
    // 第一条实际指令: uint32_t* result = __getptd()
    uint32_t* result = __getptd()
    
    if (result[0x24] s> 0)
        result = __getptd()
        result[0x24] -= 1
    
    return result
}
