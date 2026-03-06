// 函数名称: sub_601500
// 虚拟地址: 0x601500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_601500(int32_t arg1)
{
    // 第一条实际指令: RAWINPUTDEVICE rawInputDevices
    RAWINPUTDEVICE rawInputDevices
    rawInputDevices.usUsagePage = 1
    rawInputDevices.usUsage = 2
    rawInputDevices.dwFlags = 0
    rawInputDevices.hwndTarget = 0
    HWND hWnd = GetActiveWindow()
    rawInputDevices.hwndTarget = hWnd
    
    if (arg1 == 0)
        rawInputDevices.dwFlags |= 1
        rawInputDevices.hwndTarget = arg1
    
    if (RegisterRawInputDevices(&rawInputDevices, 1, 0xc) != 0)
        if (arg1 != 0)
            RECT rect
            GetWindowRect(hWnd, &rect)
            int32_t eax_3
            int32_t edx
            edx:eax_3 = sx.q(rect.right + rect.left)
            int32_t ecx_2 = (eax_3 - edx) s>> 1
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = sx.q(rect.top + rect.bottom)
            int32_t eax_9 = (eax_7 - edx_1) s>> 1
            rect.left = ecx_2 - 1
            rect.right = ecx_2 + 1
            rect.top = eax_9 - 1
            rect.bottom = eax_9 + 1
            ClipCursor(&rect)
            return 0
    else if (arg1 != 0)
        sub_5cd050(4)
        return 0xffffffff
    
    ClipCursor(nullptr)
    return 0
}
