// 函数名称: sub_53b830
// 虚拟地址: 0x53b830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_53b830(HWND arg1)
{
    // 第一条实际指令: void var_5c
    void var_5c
    int32_t eax_1 = __security_cookie ^ &var_5c
    RECT rect
    GetClientRect(arg1, &rect)
    int32_t ebx_3 = data_307884c - data_3078854 - rect.left + rect.right
    int32_t edi_3 = data_3078850 - data_3078858 - rect.top + rect.bottom
    HWND hWnd = GetDlgItem(arg1, 1)
    HWND hWnd_1 = GetDlgItem(arg1, 2)
    HWND hWnd_2 = GetDlgItem(arg1, 0x85)
    int32_t X_4
    GetWindowRect(hWnd, &X_4)
    int32_t X_3
    GetWindowRect(hWnd_1, &X_3)
    int32_t X_5
    GetWindowRect(hWnd_2, &X_5)
    ScreenToClient(arg1, &X_4)
    POINT point_1
    ScreenToClient(arg1, &point_1)
    ScreenToClient(arg1, &X_3)
    POINT point
    ScreenToClient(arg1, &point)
    ScreenToClient(arg1, &X_5)
    POINT point_2
    ScreenToClient(arg1, &point_2)
    int32_t X = X_4
    int32_t var_28
    MoveWindow(hWnd, X, var_28 + edi_3, point_1.x - X, point_1.y - var_28, 1)
    int32_t X_1 = X_3
    int32_t var_38
    MoveWindow(hWnd_1, X_1, var_38 + edi_3, point.x - X_1, point.y - var_38, 1)
    int32_t X_2 = X_5
    int32_t Y
    MoveWindow(hWnd_2, X_2, Y, point_2.x - X_2 + ebx_3, point_2.y - Y + edi_3, 1)
    int32_t top = rect.top
    int32_t right = rect.right
    data_307884c = rect.left
    data_3078858 = rect.bottom
    data_3078850 = top
    data_3078854 = right
    sub_5a6aba(eax_1 ^ &var_5c)
    return right
}
