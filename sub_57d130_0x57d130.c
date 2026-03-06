// 函数名称: sub_57d130
// 虚拟地址: 0x57d130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWND __convention("regparm")sub_57d130(HINSTANCE arg1, int32_t arg2, HWND arg3)
{
    // 第一条实际指令: HWND hWnd = CreateWindowExA(0x2200, "ListBox", nullptr, 0x52300511, 0x80000000, 0x80000000, 0x80000000, 0x80000000, arg3, 0x7d0, arg1, nullptr)
    HWND hWnd = CreateWindowExA(0x2200, "ListBox", nullptr, 0x52300511, 0x80000000, 0x80000000, 
        0x80000000, 0x80000000, arg3, 0x7d0, arg1, nullptr)
    
    if (hWnd == 0)
        return hWnd
    
    SendMessageA(hWnd, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
    SetPropA(hWnd, "Wprc", GetWindowLongA(hWnd, 0xfffffffc))
    SetWindowLongA(hWnd, 0xfffffffc, sub_582a10)
    return hWnd
}
