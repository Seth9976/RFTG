// 函数名称: sub_57d870
// 虚拟地址: 0x57d870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWND __convention("regparm")sub_57d870(int32_t* arg1, HINSTANCE arg2, HWND arg3)
{
    // 第一条实际指令: struct INITCOMMONCONTROLSEX picce
    struct INITCOMMONCONTROLSEX picce
    picce.dwSize = 8
    picce.dwICC = 0x800
    
    if (InitCommonControlsEx(&picce) != 0)
        HWND hWnd = CreateWindowExA(WS_EX_LEFT, "SysIPAddress32", nullptr, WS_CHILD, 0x80000000, 
            0x80000000, arg1[2] - *arg1, arg1[3] - arg1[1], arg3, 0x7d5, arg2, nullptr)
        
        if (hWnd != 0)
            SendMessageA(hWnd, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
            SetPropA(hWnd, "Wprc", GetWindowLongA(hWnd, 0xfffffffc))
            SetWindowLongA(hWnd, 0xfffffffc, sub_57d470)
            return hWnd
    
    return 0
}
