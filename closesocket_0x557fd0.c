// 函数名称: closesocket
// 虚拟地址: 0x557fd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallclosesocket(SOCKET s)
{
    // 第一条实际指令: return closesocket(s) __tailcall
    return closesocket(s) __tailcall
}
