// 函数名称: sub_5cc780
// 虚拟地址: 0x5cc780
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_5cc780(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: HWND hWnd = *(*(arg2 + 0x74) + 4)
    HWND hWnd = *(*(arg2 + 0x74) + 4)
    int32_t eax_1 = sub_5cabf0()
    HWND hWndInsertAfter
    
    if (eax_1 != 0)
        hWndInsertAfter = 0xffffffff
    
    if (eax_1 == 0 || (*(arg2 + 0x30) & 0x201) != 0x201)
        hWndInsertAfter = 0xfffffffe
    
    enum WINDOW_STYLE dwStyle = (GetWindowLongW(hWnd, 0xfffffff0) & 0x7f30ffff) | sub_5cc160(arg2)
    int32_t X_1
    int32_t* var_40 = &X_1
    int32_t dwNewLong = dwStyle
    sub_5dde90(arg1, arg3)
    int32_t bMenu = 0
    int32_t X
    int32_t cx
    int32_t cy
    
    if (arg4 == 0)
        RECT rect
        rect.left = 0
        rect.top = 0
        rect.right = *(arg2 + 0x3c)
        rect.bottom = *(arg2 + 0x40)
        
        if ((dwStyle & 0x40000000) == 0)
            HMENU eax_6 = GetMenu(hWnd)
            int32_t eax_7 = neg.d(eax_6)
            bMenu = neg.d(sbb.d(eax_7, eax_7, eax_6 != 0))
        
        AdjustWindowRectEx(&rect, dwStyle, bMenu, WS_EX_LEFT)
        int32_t left = rect.left
        int32_t top = rect.top
        cx = rect.right - left
        X = *(arg2 + 0x34) + left
        cy = rect.bottom - top
        arg2 = *(arg2 + 0x38) + top
    else
        X = X_1
        int32_t cx_1
        cx = cx_1
        int32_t cy_1
        cy = cy_1
        int32_t var_2c
        arg2 = var_2c
    
    SetWindowLongW(hWnd, 0xfffffff0, dwNewLong)
    return SetWindowPos(hWnd, hWndInsertAfter, X, arg2, cx, cy, SWP_NOCOPYBITS)
}
