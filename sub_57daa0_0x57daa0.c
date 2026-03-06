// 函数名称: sub_57daa0
// 虚拟地址: 0x57daa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWND __convention("regparm")sub_57daa0(HINSTANCE arg1, int32_t arg2, HWND arg3)
{
    // 第一条实际指令: HWND result = CreateWindowExA(WS_EX_LEFT, "Button", &data_895248, 0x50000000, 0x80000000, 0x80000000, 0x80000000, 0x80000000, arg3, 0x7d4, arg1, nullptr)
    HWND result = CreateWindowExA(WS_EX_LEFT, "Button", &data_895248, 0x50000000, 0x80000000, 
        0x80000000, 0x80000000, 0x80000000, arg3, 0x7d4, arg1, nullptr)
    
    if (result == 0)
        return result
    
    SetWindowTheme(result, &data_895228, &data_895228)
    SendMessageA(result, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
    SetPropA(result, "Wprc", GetWindowLongA(result, 0xfffffffc))
    SetWindowLongA(result, 0xfffffffc, sub_57d920)
    return result
}
