// 函数名称: sub_57fdb0
// 虚拟地址: 0x57fdb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __convention("regparm")sub_57fdb0(HWND arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, void* arg6)
{
    // 第一条实际指令: int32_t* ecx = data_26a6554
    int32_t* ecx = data_26a6554
    
    if (*(arg6 + 0x14) != 1)
        if (ecx[7] == 0)
            *(data_26a6554 + 0x1c) = sub_57e5d0(1, 0x7d9, *ecx, arg1)
            ecx = data_26a6554
    else if (ecx[7] == 0)
        *(data_26a6554 + 0x1c) = sub_57e5d0(0, 0x7d8, *ecx, arg1)
        ecx = data_26a6554
    
    HWND hWnd = ecx[7]
    SendMessageA(hWnd, 0x14b, 0, 0)
    MoveWindow(hWnd, arg2, arg3 + 1, arg4 - arg2, arg5 + 0x64 - (arg3 + 1), 1)
    char* lParam = *(arg6 + 8)
    
    if (*lParam != 0)
        bool cond:0_1
        
        do
            if (SendMessageA(hWnd, 0x158, 0, lParam) == 0xffffffff)
                SendMessageA(hWnd, 0x143, 0, lParam)
            
            char* lParam_1 = lParam
            char i
            
            do
                i = *lParam_1
                lParam_1 = &lParam_1[1]
            while (i != 0)
            
            void* eax_4 = lParam_1 - &lParam_1[1]
            cond:0_1 = *(lParam + eax_4 + 1) != i
            lParam = lParam + eax_4 + 1
        while (cond:0_1)
    
    ShowWindow(hWnd, SW_SHOW)
    SetFocus(hWnd)
    LRESULT wParam = SendMessageA(hWnd, 0x158, 0, *(arg6 + 0x10))
    
    if (wParam != 0xffffffff)
        return SendMessageA(hWnd, 0x14e, wParam, 0)
    
    SendMessageA(hWnd, 0x14e, 0, 0)
    SetWindowTextA(hWnd, *(arg6 + 0x10))
    return SendMessageA(hWnd, 0x142, 0, 0xffff0000)
}
