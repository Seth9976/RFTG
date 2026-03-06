// 函数名称: VerQueryValueA
// 虚拟地址: 0x6454be
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __stdcallVerQueryValueA(void* pBlock, PSTR lpSubBlock, void** lplpBuffer, uint32_t* puLen)
{
    // 第一条实际指令: return VerQueryValueA(pBlock, lpSubBlock, lplpBuffer, puLen) __tailcall
    return VerQueryValueA(pBlock, lpSubBlock, lplpBuffer, puLen) __tailcall
}
