// 函数名称: sub_4c5c80
// 虚拟地址: 0x4c5c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_4c5c80()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HWND hwnd = data_30785e0
    *(data_27e7fd0 + 0x23) = 1
    HMONITOR hMonitor = MonitorFromWindow(hwnd, MONITOR_DEFAULTTONEAREST)
    MONITORINFO lpmi
    lpmi.cbSize = 0x28
    lpmi.rcMonitor.left = 0
    lpmi.rcMonitor.top = 0
    lpmi.rcMonitor.right = 0
    lpmi.rcMonitor.bottom = 0
    lpmi.rcWork.left = 0
    lpmi.rcWork.top = 0
    lpmi.rcWork.right = 0
    lpmi.rcWork.bottom = 0
    lpmi.dwFlags = 0
    GetMonitorInfoA(hMonitor, &lpmi)
    int32_t left = lpmi.rcMonitor.left
    int32_t top = lpmi.rcMonitor.top
    int32_t cx = lpmi.rcMonitor.right - left
    int32_t cy = lpmi.rcMonitor.bottom - top
    SetWindowLongA(data_30785e0, 0xfffffff0, 0x90000000)
    BOOL result = SetWindowPos(data_30785e0, nullptr, left, top, cx, cy, SWP_DRAWFRAME)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
