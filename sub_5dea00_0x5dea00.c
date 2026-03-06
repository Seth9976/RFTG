// 函数名称: sub_5dea00
// 虚拟地址: 0x5dea00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5dea00(void* arg1)
{
    // 第一条实际指令: return SwapBuffers(*(*(arg1 + 0x74) + 8))
    return SwapBuffers(*(*(arg1 + 0x74) + 8))
}
