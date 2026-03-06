// 函数名称: sub_5a7163
// 虚拟地址: 0x5a7163
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5a7163(void* arg1 @ ebp)
{
    // 第一条实际指令: if (*(arg1 - 0x20) == 0)
    if (*(arg1 - 0x20) == 0)
        __ArrayUnwind(*(arg1 + 8), *(arg1 + 0xc), *(arg1 - 0x1c), *(arg1 + 0x18))
}
