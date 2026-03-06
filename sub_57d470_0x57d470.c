// 函数名称: sub_57d470
// 虚拟地址: 0x57d470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_57d470(HWND arg1, uint32_t arg2, HWND arg3, LPARAM arg4)
{
    // 第一条实际指令: HWND hWnd
    HWND hWnd
    int32_t eax_1 = __security_cookie ^ &hWnd
    LPARAM lParam = arg4
    hWnd = GetParent(GetParent(arg1))
    GetClassNameA(arg1, &data_3160dc8, 0x104)
    uint32_t eax_5 = __Cnd_wait(&data_3160dc8, "Edit")
    int32_t esi_1 = neg.d(eax_5)
    int32_t esi_2 = sbb.d(esi_1, esi_1, eax_5 != 0)
    
    if (esi_2 == 0xffffffff)
        data_26a6554 = GetPropA(hWnd, "lpInsData")
        hWnd = arg1
    else
        data_26a6554 = GetPropA(GetParent(hWnd), "lpInsData")
        hWnd = GetParent(arg1)
    
    uint32_t Msg = arg2
    
    if (Msg == 2)
        SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
        RemovePropA(arg1, "Wprc")
        sub_5a6aba(eax_1 ^ &hWnd)
        return 0
    
    HWND wParam
    
    if (Msg != 8)
        if (Msg == 0x102 && arg3 == 0xd)
            if (*(data_26a6554 + 4) != 0 && SendMessageA(hWnd, 0x466, 0, &lParam) == 4)
                LPARAM lParam_1 = lParam
                uint32_t var_134_7 = zx.d(lParam_1.b)
                uint32_t var_138_4 = zx.d((lParam_1 u>> 8).b)
                uint32_t var_13c_2 = zx.d((lParam_1 u>> 0x10).b)
                uint32_t var_140_3 = lParam_1 u>> 0x18
                char var_118[0x10c]
                _swprintf(&var_118, 0x104, "%d.%d.%d.%d")
                __free_base(*(*(data_26a6554 + 4) + 0x10))
                *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&var_118)
            
            ShowWindow(hWnd, SW_HIDE)
            SetFocus(*(data_26a6554 + 0x14))
            sub_582980()
            sub_5a6aba(eax_1 ^ &hWnd)
            return 1
        
        wParam = arg3
    label_57d682:
        
        if (esi_2 == 0xffffffff)
            if (Msg == 0xf)
                sub_57cf10(Msg, wParam, lParam)
                sub_5a6aba(eax_1 ^ &hWnd)
                return 1
            
            if (Msg == 0x111)
                LPARAM hWnd_2 = lParam
                
                if (GetPropA(hWnd_2, "Wprc") != 0)
                    Msg = arg2
                else
                    SetPropA(hWnd_2, "Wprc", GetWindowLongA(hWnd_2, 0xfffffffc))
                    SetWindowLongA(hWnd_2, 0xfffffffc, sub_57d470)
                    Msg = arg2
        else
            if (Msg == 0x87)
                sub_5a6aba(eax_1 ^ &hWnd)
                return 4
            
            if (Msg == 0x20a)
                SendMessageA(arg1, 0x102, 0xd, 0)
                Msg = arg2
            else if (Msg == 0x102)
                if (wParam == 9)
                    HWND hWnd_1
                    
                    if ((0x8000 & GetKeyState(0x10)) == 0)
                        hWnd_1 = GetWindow(arg1, GW_HWNDPREV)
                        
                        if (hWnd_1 != 0)
                            goto label_57d76c
                        
                        sub_57cc30()
                        sub_57cc40(0)
                        sub_5a6aba(eax_1 ^ &hWnd)
                        return &hWnd_1->unused + 1
                    
                    hWnd_1 = GetWindow(arg1, GW_HWNDNEXT)
                    
                    if (hWnd_1 == 0)
                        goto label_57d70b
                    
                label_57d76c:
                    SendMessageA(hWnd_1, 0xb1, 0, 0xffffffff)
                    SetFocus(hWnd_1)
                    sub_5a6aba(eax_1 ^ &hWnd)
                    return 1
                
                if (wParam == 0x1b)
                    ShowWindow(hWnd, SW_HIDE)
                label_57d70b:
                    SetFocus(*(data_26a6554 + 0x14))
                    sub_5a6aba(eax_1 ^ &hWnd)
                    return 1
            else if (Msg == 0x302)
                sub_5a6aba(eax_1 ^ &hWnd)
                return 1
    else
        if (esi_2 != 0xffffffff)
            HWND eax_13 = GetParent(arg3)
            
            if (hWnd == eax_13)
                wParam = arg3
            else
                SendMessageA(hWnd, 0x102, 0xd, 0)
                wParam = arg3
                sub_57cc40(wParam)
            
            Msg = arg2
            goto label_57d682
        
        wParam = arg3
    
    LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, Msg, wParam, lParam)
    sub_5a6aba(eax_1 ^ &hWnd)
    return result
}
