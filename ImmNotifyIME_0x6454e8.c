// 函数名称: ImmNotifyIME
// 虚拟地址: 0x6454e8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __stdcallImmNotifyIME(HIMC param0, enum NOTIFY_IME_ACTION dwAction, enum NOTIFY_IME_INDEX dwIndex, uint32_t dwValue)
{
    // 第一条实际指令: return ImmNotifyIME(param0, dwAction, dwIndex, dwValue) __tailcall
    return ImmNotifyIME(param0, dwAction, dwIndex, dwValue) __tailcall
}
