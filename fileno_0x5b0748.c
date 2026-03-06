// 函数名称: __fileno
// 虚拟地址: 0x5b0748
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__fileno(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        return *(arg1 + 0x10)
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0xffffffff
}
