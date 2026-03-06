// 函数名称: sub_51ac50
// 虚拟地址: 0x51ac50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_51ac50(HINSTANCE arg1)
{
    // 第一条实际指令: WNDCLASSEXW param0
    WNDCLASSEXW param0
    param0.cbSize = 0x30
    param0.style = 3
    param0.lpfnWndProc = sub_51a6c0
    param0.cbClsExtra = 0
    param0.cbWndExtra = 0
    param0.hInstance = arg1
    param0.hIcon = LoadIconA(arg1, 0x80)
    param0.hCursor = 0
    param0.hbrBackground = 6
    param0.lpszMenuName = 0x6d
    param0.lpszClassName = u"GameWindowClass"
    int32_t cx = GetSystemMetrics(SM_CXSMICON)
    int32_t cy = GetSystemMetrics(SM_CYSMICON)
    param0.hIconSm = LoadImageA(GetModuleHandleA(nullptr), 0x80, IMAGE_ICON, cx, cy, LR_DEFAULTCOLOR)
    return RegisterClassExW(&param0)
}
