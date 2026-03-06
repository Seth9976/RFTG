// 函数名称: sub_5d2750
// 虚拟地址: 0x5d2750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __stdcallsub_5d2750(int32_t arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 == 0x3bd)
    if (arg1 == 0x3bd)
        ReleaseSemaphore(*(*(arg2 + 0xa0) + 8), 1, nullptr)
}
