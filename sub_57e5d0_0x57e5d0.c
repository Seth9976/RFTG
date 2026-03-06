// 函数名称: sub_57e5d0
// 虚拟地址: 0x57e5d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWND __convention("regparm")sub_57e5d0(int32_t arg1, HMENU arg2, HINSTANCE arg3, HWND arg4)
{
    // 第一条实际指令: int32_t eax = neg.d(arg1)
    int32_t eax = neg.d(arg1)
    HWND result = CreateWindowExA(WS_EX_LEFT, "ComboBox", nullptr, 
        (sbb.d(eax, eax, arg1 != 0) + 3) | 0x40000400, 0x80000000, 0x80000000, 0x80000000, 0x80000000, 
        arg4, arg2, arg3, nullptr)
    
    if (result == 0)
        return result
    
    SetWindowTheme(result, &data_895228, &data_895228)
    SendMessageA(result, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
    SetPropA(result, "Wprc", GetWindowLongA(result, 0xfffffffc))
    SetWindowLongA(result, 0xfffffffc, sub_57e210)
    return result
}
