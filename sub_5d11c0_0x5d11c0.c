// 函数名称: sub_5d11c0
// 虚拟地址: 0x5d11c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d11c0(CRITICAL_SECTION* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        LeaveCriticalSection(arg1)
        return 0
    
    sub_5cce60("Passed a NULL mutex")
    return 0xffffffff
}
