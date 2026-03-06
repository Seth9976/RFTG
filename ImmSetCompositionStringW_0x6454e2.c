// 函数名称: ImmSetCompositionStringW
// 虚拟地址: 0x6454e2
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __stdcallImmSetCompositionStringW(HIMC param0, enum SET_COMPOSITION_STRING_TYPE dwIndex, void* lpComp, uint32_t dwCompLen, void* lpRead, uint32_t dwReadLen)
{
    // 第一条实际指令: return ImmSetCompositionStringW(param0, dwIndex, lpComp, dwCompLen, lpRead, dwReadLen) __tailcall
    return ImmSetCompositionStringW(param0, dwIndex, lpComp, dwCompLen, lpRead, dwReadLen) __tailcall
}
