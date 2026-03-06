// 函数名称: ?_aligned_free_base@@YAXPAX@Z
// 虚拟地址: 0x5a9776
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t?_aligned_free_base@@YAXPAX@Z(int32_t arg1)
{
    // 第一条实际指令: int32_t result = arg1
    int32_t result = arg1
    
    if (result != 0)
        result = __free_base(*((result & 0xfffffffc) - 4))
    
    return result
}
