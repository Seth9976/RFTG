// 函数名称: ___crtSetUnhandledExceptionFilter
// 虚拟地址: 0x5a6a9a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t___crtSetUnhandledExceptionFilter(CRITICAL_SECTION* arg1)
{
    // 第一条实际指令: return EnterCriticalSection(arg1)
    return EnterCriticalSection(arg1)
}
