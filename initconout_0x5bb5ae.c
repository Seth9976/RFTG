// 函数名称: ___initconout
// 虚拟地址: 0x5bb5ae
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HANDLE___initconout()
{
    // 第一条实际指令: HANDLE result = CreateFileW(u"CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
    HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
        OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
    data_8b9598 = result
    return result
}
