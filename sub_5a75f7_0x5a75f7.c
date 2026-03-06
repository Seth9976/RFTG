// 函数名称: sub_5a75f7
// 虚拟地址: 0x5a75f7
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5a75f7(void* arg1 @ ebp)
{
    // 第一条实际指令: if (*(arg1 - 0x20) == 0)
    if (*(arg1 - 0x20) == 0)
        __ArrayUnwind(*(arg1 + 8), *(arg1 + 0x10), *(arg1 - 0x1c), *(arg1 + 0x1c))
}
