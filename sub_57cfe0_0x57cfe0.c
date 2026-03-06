// 函数名称: sub_57cfe0
// 虚拟地址: 0x57cfe0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_57cfe0(HWND arg1 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HINSTANCE entry_hInstance
    HWND hWnd = CreateWindowExA(WS_EX_TOPMOST, "tooltips_class32", nullptr, 0x80000003, 0x80000000, 
        0x80000000, 0x80000000, 0x80000000, arg1, nullptr, entry_hInstance, nullptr)
    
    if (hWnd == 0)
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return hWnd
    
    SetWindowPos(hWnd, 0xffffffff, 0, 0, 0, 0, 0x13)
    SendMessageA(hWnd, 0x30, GetStockObject(DEFAULT_GUI_FONT), 0)
    RECT rect
    GetClientRect(arg1, &rect)
    int32_t right = rect.right
    int32_t top = rect.top
    int32_t left = rect.left
    int32_t bottom = rect.bottom
    int32_t lParam = 0x2c
    int32_t var_40 = 0x10
    HWND var_3c = arg1
    HINSTANCE entry_hInstance_1 = entry_hInstance
    int32_t var_38 = 0
    char* const var_20 = &data_83f3d3
    int32_t right_1 = right
    int32_t bottom_1 = bottom
    SendMessageA(hWnd, 0x404, 0, &lParam)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return hWnd
}
