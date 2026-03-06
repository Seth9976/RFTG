// 函数名称: sub_4c5d30
// 虚拟地址: 0x4c5d30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_4c5d30(char arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ecx = data_3160a34
    int32_t X
    
    if ((ecx.b & 1) != 0)
        X = data_3160a2c
    else
        X = 0x80000000
        ecx |= 1
        data_3160a34 = ecx
        data_3160a2c = 0x80000000
        data_3160a30 = 0x80000000
    
    if ((ecx.b & 2) == 0)
        data_3160a34 = ecx | 2
        void* ecx_2 = data_27e7fd0
        int32_t ecx_3 = *(ecx_2 + 0x18)
        data_3160a24 = *(ecx_2 + 0x14)
        data_3160a28 = ecx_3
    
    RECT rect
    
    if (arg1 != 0)
        GetWindowRect(data_30785e0, &rect)
        int32_t left = rect.left
        int32_t top = rect.top
        int32_t edx_3 = rect.right - left
        data_3160a2c = left
        int32_t eax_3 = rect.bottom - top
        data_3160a30 = top
        data_3160a24 = edx_3
        data_3160a28 = eax_3
        BOOL eax_4 = sub_4c5c80()
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_4
    
    if (X == 0x80000000)
        HMONITOR hMonitor = MonitorFromWindow(data_30785e0, MONITOR_DEFAULTTONEAREST)
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
        X = lpmi.rcMonitor.left + 0x64
        int32_t ecx_9 = lpmi.rcMonitor.top + 0x64
        data_3160a2c = X
        data_3160a30 = ecx_9
    
    int32_t cx = data_3160a24
    int32_t cy = data_3160a28
    rect.bottom = data_3160a30
    SetWindowLongA(data_30785e0, 0xfffffff0, 0x10cf0000)
    BOOL eax_7 = SetWindowPos(data_30785e0, nullptr, X, rect.bottom, cx, cy, SWP_DRAWFRAME)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_7
}
