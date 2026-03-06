// 函数名称: sub_659c50
// 虚拟地址: 0x659c50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_659c50(uint32_t arg1) __pure
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    for (; arg1 != 0; arg1 u>>= 1)
        result += arg1 & 1
    
    return result
}
