// 函数名称: sub_5d2810
// 虚拟地址: 0x5d2810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

enum WAIT_EVENTsub_5d2810(void* arg1)
{
    // 第一条实际指令: return WaitForSingleObject(*(*(arg1 + 0xa0) + 8), 0xffffffff)
    return WaitForSingleObject(*(*(arg1 + 0xa0) + 8), 0xffffffff)
}
