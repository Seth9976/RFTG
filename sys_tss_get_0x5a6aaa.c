// 函数名称: _sys_tss_get
// 虚拟地址: 0x5a6aaa
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t_sys_tss_get(CRITICAL_SECTION* arg1)
{
    // 第一条实际指令: return LeaveCriticalSection(arg1)
    return LeaveCriticalSection(arg1)
}
