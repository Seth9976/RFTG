// 函数名称: sub_57ed40
// 虚拟地址: 0x57ed40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWND __fastcallsub_57ed40(HWND arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HWND hWnd_1 = data_26a6554
    
    if (hWnd_1 != 0)
        RECT var_18
        __builtin_memset(&var_18, 0, 0x10)
        SendMessageA(arg1, 0x198, SendMessageA(arg1, 0x188, 0, 0), &var_18)
        hWnd_1 = data_26a6554
        int32_t Y = var_18.top + 1
        var_18.top = Y
        int32_t X = hWnd_1 + 1
        var_18.left = X
        void* hWnd_2 = hWnd_1
        int32_t ebx_1 = *(hWnd_2 + 0x14)
        
        if (ebx_1 u> 0x63)
        label_57eedb:
            
            if (hWnd_1 != 0)
                int32_t right_1 = var_18.right
                
                if (right_1 - X s> 0x13)
                    X = right_1 - 0x13
                    right_1 -= 2
                    var_18.left = X
                    var_18.right = right_1
                
                var_18.bottom -= 2
                var_18.top = Y + 2
                MoveWindow(hWnd_1, X, Y + 2, right_1 - X, var_18.bottom - 2 - (Y + 2), 1)
                ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
                hWnd_1 = SetFocus(*(data_26a6554 + 0x1c))
            else
                hWnd_1 = SetFocus(hWnd_1)
        else
            switch (ebx_1)
                case 0, 1, 2, 9, 0xa, 0xb
                    HWND hWnd
                    
                    if (hWnd_1 != 0)
                        MoveWindow(hWnd_1, X, Y, var_18.right - X, var_18.bottom - Y, 1)
                        ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
                        hWnd = *(data_26a6554 + 0x1c)
                    else
                        hWnd = hWnd_1
                    
                    hWnd_1 = SetFocus(hWnd)
                case 4, 5, 6, 7, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                        0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 
                        0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 
                        0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 
                        0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 
                        0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 
                        0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62
                    goto label_57eedb
                case 8
                    *(hWnd_2 + 8) = &data_8954cc
                    BOOL eax_3 =
                        RedrawWindow(arg1, &var_18, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return eax_3
                case 0xc
                    if (hWnd_1 == 0 || hWnd_1 == 0)
                        hWnd_1 = SetFocus(hWnd_1)
                    else
                        int32_t right = var_18.right
                        int32_t bottom = var_18.bottom
                        int32_t right_2 = right
                        int32_t eax_7
                        int32_t edx_4
                        edx_4:eax_7 = sx.q(right - X)
                        int32_t X_2 = X
                        int32_t X_1 = X + ((eax_7 - edx_4) s>> 1)
                        MoveWindow(*(data_26a6554 + 0x1c), X, Y, X_1 - X, bottom - Y, 1)
                        MoveWindow(*(data_26a6554 + 0x20), X_1, Y, right - X_1, bottom - Y, 1)
                        ShowWindow(*(data_26a6554 + 0x20), SW_SHOW)
                        ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
                        hWnd_1 = SetFocus(*(data_26a6554 + 0x1c))
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return hWnd_1
}
