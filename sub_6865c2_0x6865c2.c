// 函数名称: sub_6865c2
// 虚拟地址: 0x6865c2
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6865c2(void* arg1 @ ebp) __noreturn
{
    // 第一条实际指令: *(*(arg1 - 0x18) - 4) = *(arg1 - 0x1c)
    *(*(arg1 - 0x18) - 4) = *(arg1 - 0x1c)
    _quick_exit()
    noreturn
}
