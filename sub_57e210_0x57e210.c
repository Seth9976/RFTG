// 函数名称: sub_57e210
// 虚拟地址: 0x57e210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_57e210(HWND arg1, uint32_t arg2, HWND arg3, LPARAM arg4)
{
    // 第一条实际指令: HWND wParam
    HWND wParam
    int32_t eax_1 = __security_cookie ^ &wParam
    wParam = arg3
    HWND hWnd_3 = GetParent(GetParent(arg1))
    GetClassNameA(arg1, &data_3160ca0, 0x104)
    uint32_t eax_4 = __Cnd_wait(&data_3160ca0, "Edit")
    int32_t esi_1 = neg.d(eax_4)
    int32_t esi_2 = sbb.d(esi_1, esi_1, eax_4 != 0)
    HWND hWnd
    
    if (esi_2 == 0xffffffff)
        char const* const var_34_4 = "lpInsData"
        hWnd = hWnd_3
    else
        char const* const var_34_3 = "lpInsData"
        hWnd = GetParent(hWnd_3)
    
    HANDLE eax_6 = GetPropA(hWnd, "lpInsData")
    uint32_t Msg = arg2
    data_26a6554 = eax_6
    
    if (Msg == 2)
        SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
        RemovePropA(arg1, "Wprc")
        sub_5a6aba(eax_1 ^ &wParam)
        return 0
    
    if (Msg == 8)
        HWND hWnd_5 = wParam
        
        if (arg1 != GetParent(hWnd_5))
            SendMessageA(arg1, 0x102, 0xd, 0)
            sub_57cc40(hWnd_5)
        
        Msg = arg2
    else if (Msg != 0xf)
        if (Msg == 0x87)
            sub_5a6aba(eax_1 ^ &wParam)
            return 4
        
        if (Msg == 0x111)
            if (GetPropA(arg4, "Wprc") == 0)
                GetClassNameA(arg4, &data_3160ca0, 0x104)
                
                if (__Cnd_wait(&data_3160ca0, "Edit") == 0)
                    SetPropA(arg4, "Wprc", GetWindowLongA(arg4, 0xfffffffc))
                    SetWindowLongA(arg4, 0xfffffffc, sub_57e210)
            
            Msg = arg2
        else if (Msg == 0x102)
            HWND wParam_1 = wParam
            
            if (wParam_1 == 0xd)
                if (*(eax_6 + 4) != 0)
                    GetWindowTextA(arg1, &data_3160ca0, 0x104)
                    __free_base(*(*(data_26a6554 + 4) + 0x10))
                    *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&data_3160ca0)
                
                HWND hWnd_1 = arg1
                
                if (esi_2 != 0xffffffff)
                    hWnd_1 = GetParent(hWnd_1)
                
                ShowWindow(hWnd_1, SW_HIDE)
                SetFocus(*(data_26a6554 + 0x14))
                sub_582980()
                sub_5a6aba(eax_1 ^ &wParam)
                return 1
            
            if (wParam_1 == 9)
                if ((0x8000 & GetKeyState(0x10)) != 0)
                    SendMessageA(arg1, 0x102, 0xd, 0)
                    sub_5a6aba(eax_1 ^ &wParam)
                    return 1
                
                HWND hWnd_4
                
                if (esi_2 == 0xffffffff)
                    hWnd_4 = arg1
                else
                    hWnd_4 = GetParent(arg1)
                
                ShowWindow(hWnd_4, SW_HIDE)
                sub_57cc30()
                sub_57cc40(0)
                sub_5a6aba(eax_1 ^ &wParam)
                return 1
        else if (Msg == 0x100 && wParam == 0x1b)
            HWND hWnd_2 = arg1
            
            if (esi_2 != 0xffffffff)
                hWnd_2 = GetParent(hWnd_2)
            
            ShowWindow(hWnd_2, SW_HIDE)
            SetFocus(*(data_26a6554 + 0x14))
            sub_5a6aba(eax_1 ^ &wParam)
            return 0
    else if (esi_2 == 0xffffffff)
        CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, Msg, wParam, arg4)
        HDC hDC = GetWindowDC(arg1)
        int32_t rect
        GetClientRect(arg1, &rect)
        int32_t* esi_4 = &rect
        sub_57cd50(esi_4, hDC, 3, GetSysColor(COLOR_WINDOW))
        int32_t var_18
        int32_t var_18_1 = var_18 + 1
        rect += 1
        sub_57cd50(esi_4, hDC, 3, GetSysColor(COLOR_WINDOW))
        ReleaseDC(arg1, hDC)
        sub_5a6aba(eax_1 ^ &wParam)
        return 1
    
    LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, Msg, wParam, arg4)
    sub_5a6aba(eax_1 ^ &wParam)
    return result
}
