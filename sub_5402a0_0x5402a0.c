// 函数名称: sub_5402a0
// 虚拟地址: 0x5402a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_5402a0(HWND arg1, uint32_t arg2, WPARAM arg3, int32_t* arg4)
{
    // 第一条实际指令: __chkstk(0x104c)
    __chkstk(0x104c)
    HWND hWnd
    int32_t eax_1 = __security_cookie ^ &hWnd
    int32_t eax_2 = data_3078860
    HWND hWnd_2 = arg1
    hWnd = hWnd_2
    
    if (eax_2 == 0 || arg2 != eax_2)
    label_540562:
        
        if (arg2 == 0xf)
            int32_t __saved_ebp
            sub_53b250(BeginPaint(hWnd_2, &__saved_ebp))
            EndPaint(hWnd, &__saved_ebp)
        else if (arg2 != 0x4e)
            if (arg2 != 0x111)
                LRESULT result = DefWindowProcA(hWnd_2, arg2, arg3, arg4)
                sub_5a6aba(eax_1 ^ &hWnd)
                return result
            
            if (arg3 u>> 0x10 == 1 && arg3.w == 0xab)
                HWND hWnd_1 = GetDlgItem(hWnd_2, 0xab)
                LRESULT edi_1 = SendMessageA(hWnd_1, 0x190, 0, 0)
                
                if (edi_1 s> 0)
                    if (edi_1 s> 0x400)
                        edi_1 = 0x400
                    
                    void lParam
                    SendMessageA(hWnd_1, 0x191, 0x400, &lParam)
                    sub_57c620(edi_1, &lParam)
                else if (data_273bc30 == 0 && data_273bc31:1.b == 0)
                    data_273bc2c = 0
                    sub_57c6a0()
                
                sub_541ab0()
                SetFocus(data_30785e0)
        else if (arg3 == 0xac && arg4[2] == 0x42a)
            sub_53fbf0(*arg4, arg4)
    else
        if (arg3 != 0xab)
            sub_4c5870("wParam == IDC_UIELEMENT_LIST", &data_83f3d3, "Windows\EditorWindow.cpp", 
                0x1177, "UiEditorDialogWndProc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        HWND hLB = GetDlgItem(data_3078830, 0xab)
        int32_t var_1c_2 = arg4[3]
        int32_t eax_5 = LBItemFromPt(hLB, arg4[2], 1)
        int32_t ecx_1 = *arg4
        
        if (ecx_1 != 0x485)
            if (ecx_1 == 0x486)
                if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                        && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e
                        && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                    SetWindowLongA(hWnd, 0, 2)
                
                sub_5a6aba(eax_1 ^ &hWnd)
                return 2
            
            if (ecx_1 == 0x487)
                sub_57c9a0(eax_5)
                sub_5a6aba(eax_1 ^ &hWnd)
                return 1
            
            if (ecx_1 != 0x488)
                hWnd_2 = hWnd
                goto label_540562
            
            data_3078864 = 0
            sub_5a6aba(eax_1 ^ &hWnd)
            return 1
        
        if (eax_5 != 0xffffffff)
            data_3078864 = 1
            data_3078868 = eax_5
            
            if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                    && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e && arg2 != 0x2f
                    && arg2 != 0x37 && arg2 != 0x110)
                SetWindowLongA(hWnd, 0, 1)
            
            sub_5a6aba(eax_1 ^ &hWnd)
            return 1
        
        data_3078864 = 0
        
        if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e && arg2 != 0x2f
                && arg2 != 0x37 && arg2 != 0x110)
            SetWindowLongA(hWnd, 0, 0)
    
    sub_5a6aba(eax_1 ^ &hWnd)
    return 0
}
