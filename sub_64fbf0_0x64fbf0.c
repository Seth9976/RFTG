// 函数名称: sub_64fbf0
// 虚拟地址: 0x64fbf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64fbf0(uint32_t arg1) __pure
{
    // 第一条实际指令: uint32_t i = arg1
    uint32_t i = arg1
    int32_t result = 0
    
    for (; i != 0; i u>>= 1)
        result += 1
    
    return result
}
