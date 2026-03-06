// 函数名称: sub_4c6360
// 虚拟地址: 0x4c6360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4c6360()
{
    // 第一条实际指令: int128_t* entry_ebx
    int128_t* entry_ebx
    char* eax = entry_ebx
    void* edx = &eax[1]
    char i
    
    do
        i = *eax
        eax = &eax[1]
    while (i != 0)
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, eax - edx + 1)
    sub_5ab990(GlobalLock(hMem), entry_ebx, eax - edx + 1)
    GlobalUnlock(hMem)
    OpenClipboard(nullptr)
    EmptyClipboard()
    SetClipboardData(1, hMem)
    return CloseClipboard() __tailcall
}
