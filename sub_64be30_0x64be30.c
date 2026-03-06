// 函数名称: sub_64be30
// 虚拟地址: 0x64be30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64be30(int32_t arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return arg1
    
    __builtin_memset(arg1, 0, 0x24)
    return __free_base(arg1)
}
