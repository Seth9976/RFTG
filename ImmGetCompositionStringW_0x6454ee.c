// 函数名称: ImmGetCompositionStringW
// 虚拟地址: 0x6454ee
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallImmGetCompositionStringW(HIMC param0, enum IME_COMPOSITION_STRING param1, void* lpBuf, uint32_t dwBufLen)
{
    // 第一条实际指令: return ImmGetCompositionStringW(param0, param1, lpBuf, dwBufLen) __tailcall
    return ImmGetCompositionStringW(param0, param1, lpBuf, dwBufLen) __tailcall
}
