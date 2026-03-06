// 函数名称: ?_msize_base@@YAIQAX@Z
// 虚拟地址: 0x5ac8ba
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t?_msize_base@@YAIQAX@Z(int32_t arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return HeapSize(data_bed0f8, HEAP_NONE, arg1)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff
}
