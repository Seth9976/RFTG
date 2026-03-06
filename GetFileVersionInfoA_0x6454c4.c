// 函数名称: GetFileVersionInfoA
// 虚拟地址: 0x6454c4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __stdcallGetFileVersionInfoA(PSTR lptstrFilename, uint32_t dwHandle, uint32_t dwLen, void* lpData)
{
    // 第一条实际指令: return GetFileVersionInfoA(lptstrFilename, dwHandle, dwLen, lpData) __tailcall
    return GetFileVersionInfoA(lptstrFilename, dwHandle, dwLen, lpData) __tailcall
}
