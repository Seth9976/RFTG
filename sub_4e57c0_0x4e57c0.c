// 函数名称: sub_4e57c0
// 虚拟地址: 0x4e57c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

boolsub_4e57c0()
{
    // 第一条实际指令: bool result = false
    bool result = false
    
    if (*(data_27e7fe4 + 0xde) != 0)
        result = true
    
    if (data_3078808 == 1 && data_27e8404 == 0)
        return result == 0
    
    return result
}
