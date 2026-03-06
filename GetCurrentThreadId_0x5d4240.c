// 函数名称: GetCurrentThreadId
// 虚拟地址: 0x5d4240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __stdcallGetCurrentThreadId()
{
    // 第一条实际指令: return GetCurrentThreadId() __tailcall
    return GetCurrentThreadId() __tailcall
}
