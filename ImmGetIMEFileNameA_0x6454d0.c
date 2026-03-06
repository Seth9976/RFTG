// 函数名称: ImmGetIMEFileNameA
// 虚拟地址: 0x6454d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __stdcallImmGetIMEFileNameA(HKL param0, uint8_t* lpszFileName, uint32_t uBufLen)
{
    // 第一条实际指令: return ImmGetIMEFileNameA(param0, lpszFileName, uBufLen) __tailcall
    return ImmGetIMEFileNameA(param0, lpszFileName, uBufLen) __tailcall
}
