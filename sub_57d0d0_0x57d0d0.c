// 函数名称: sub_57d0d0
// 虚拟地址: 0x57d0d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWND __convention("regparm")sub_57d0d0(HINSTANCE arg1, int32_t arg2, HWND arg3)
{
    // 第一条实际指令: HWND hWnd = CreateWindowExA(WS_EX_CLIENTEDGE, "Static", nullptr, WS_CHILD, 0x80000000, 0x80000000, 0x80000000, 0x80000000, arg3, 0x7d2, arg1, nullptr)
    HWND hWnd = CreateWindowExA(WS_EX_CLIENTEDGE, "Static", nullptr, WS_CHILD, 0x80000000, 0x80000000, 
        0x80000000, 0x80000000, arg3, 0x7d2, arg1, nullptr)
    
    if (hWnd == 0)
        return hWnd
    
    SendMessageA(hWnd, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
    return hWnd
}
