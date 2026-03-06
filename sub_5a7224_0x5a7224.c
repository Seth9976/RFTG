// 函数名称: sub_5a7224
// 虚拟地址: 0x5a7224
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5a7224(void* arg1 @ ebp)
{
    // 第一条实际指令: if (*(arg1 - 0x1c) == 0)
    if (*(arg1 - 0x1c) == 0)
        __ArrayUnwind(*(arg1 + 8), *(arg1 + 0xc), *(arg1 + 0x10), *(arg1 + 0x14))
}
