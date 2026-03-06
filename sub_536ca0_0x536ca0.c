// 函数名称: sub_536ca0
// 虚拟地址: 0x536ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_536ca0()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(data_3078818, &rect)
    HWND hWnd = GetDlgItem(data_3078830, 0xab)
    int32_t X_2
    int32_t Y
    POINT point
    
    if (hWnd != 0)
        GetWindowRect(hWnd, &X_2)
        ScreenToClient(data_3078818, &X_2)
        ScreenToClient(data_3078818, &point)
        int32_t X = X_2
        MoveWindow(hWnd, X, Y, rect.right - X, point.y - Y, 1)
    
    HWND hWnd_1 = GetDlgItem(data_3078830, 0xac)
    
    if (hWnd_1 != 0)
        GetWindowRect(hWnd_1, &X_2)
        ScreenToClient(data_3078818, &X_2)
        ScreenToClient(data_3078818, &point)
        int32_t X_1 = X_2
        hWnd_1 = MoveWindow(hWnd_1, X_1, Y, rect.right - X_1, rect.bottom - Y, 1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return hWnd_1
}
