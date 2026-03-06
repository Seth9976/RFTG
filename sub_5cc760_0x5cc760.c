// 函数名称: sub_5cc760
// 虚拟地址: 0x5cc760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5cc760(void* arg1)
{
    // 第一条实际指令: return ShowWindow(*(*(arg1 + 0x74) + 4), SW_RESTORE)
    return ShowWindow(*(*(arg1 + 0x74) + 4), SW_RESTORE)
}
