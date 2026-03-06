// 函数名称: sub_5d3a30
// 虚拟地址: 0x5d3a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __stdcallsub_5d3a30(void* arg1)
{
    // 第一条实际指令: return ReleaseSemaphore(*(*(arg1 + 0xa0) + 0xc), 1, nullptr)
    return ReleaseSemaphore(*(*(arg1 + 0xa0) + 0xc), 1, nullptr)
}
