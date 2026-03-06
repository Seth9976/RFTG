// 函数名称: sub_5ccb70
// 虚拟地址: 0x5ccb70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ccb70(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax_1 = sub_5cc160(arg2)
    int32_t eax_1 = sub_5cc160(arg2)
    int32_t ecx = *(arg2 + 0x14)
    int32_t eax_2 = *(arg2 + 0x10)
    RECT rect
    rect.left = eax_2
    enum WINDOW_STYLE dwStyle = eax_1 | 0x6000000
    rect.top = ecx
    rect.right = *(arg2 + 0x18) + eax_2
    rect.bottom = *(arg2 + 0x1c) + ecx
    AdjustWindowRectEx(&rect, dwStyle, 0, WS_EX_LEFT)
    int32_t left = rect.left
    HWND hWnd = CreateWindowExW(WS_EX_LEFT, data_bf7fe0, 0x6b3fac, dwStyle, left, rect.top, 
        rect.right - left, rect.bottom - rect.top, nullptr, nullptr, data_bf7fe8, nullptr)
    
    if (hWnd == 0)
        sub_5dc5a0("Couldn't create window")
        return 0xffffffff
    
    void* var_24 = arg1
    
    if (sub_5cc240(arg1, sub_5dc360(), arg2, hWnd, 1) s< 0)
        DestroyWindow(hWnd)
        return 0xffffffff
    
    if ((*(arg2 + 0x30) & 2) != 0 && sub_5dea40(arg1, arg2) s< 0)
        void* var_24_3 = arg2
        sub_5cc9c0(arg1)
        return 0xffffffff
    
    return 0
}
