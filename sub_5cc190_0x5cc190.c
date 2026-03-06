// 函数名称: sub_5cc190
// 虚拟地址: 0x5cc190
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5cc190(void* arg1 @ esi, enum SET_WINDOW_POS_FLAGS arg2)
{
    // 第一条实际指令: HWND hWnd = *(*(arg1 + 0x74) + 4)
    HWND hWnd = *(*(arg1 + 0x74) + 4)
    int32_t eax_1 = sub_5cabf0()
    HWND hWndInsertAfter
    
    if (eax_1 != 0)
        hWndInsertAfter = 0xffffffff
    
    if (eax_1 == 0 || (*(arg1 + 0x30) & 0x201) != 0x201)
        hWndInsertAfter = 0xfffffffe
    
    int32_t dwStyle = GetWindowLongW(hWnd, 0xfffffff0)
    BOOL bMenu = 0
    RECT rect
    rect.left = 0
    rect.top = 0
    rect.right = *(arg1 + 0x18)
    rect.bottom = *(arg1 + 0x1c)
    
    if ((dwStyle & 0x40000000) == 0)
        HMENU eax_2 = GetMenu(hWnd)
        int32_t eax_3 = neg.d(eax_2)
        bMenu = neg.d(sbb.d(eax_3, eax_3, eax_2 != 0))
    
    AdjustWindowRectEx(&rect, dwStyle, bMenu, WS_EX_LEFT)
    int32_t top = rect.top
    int32_t left = rect.left
    return SetWindowPos(hWnd, hWndInsertAfter, *(arg1 + 0x10) + left, *(arg1 + 0x14) + top, 
        rect.right - left, rect.bottom - top, arg2)
}
