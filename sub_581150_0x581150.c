// 函数名称: sub_581150
// 虚拟地址: 0x581150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_581150()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* entry_ebx
    LRESULT hWnd = *(entry_ebx + 0x14)
    WPARAM wParam = *(entry_ebx + 8)
    
    if (hWnd == *(data_26a6554 + 0x14) && wParam != 0xffffffff && (*(entry_ebx + 0xc) & 1) != 0)
        hWnd = SendMessageA(hWnd, 0x199, wParam, 0)
        LRESULT hWnd_1 = hWnd
        LRESULT hWnd_2 = hWnd_1
        
        if (hWnd_1 != 0xffffffff && hWnd_1 != 0)
            int32_t top = *(entry_ebx + 0x20)
            int32_t lprc_7 = *(entry_ebx + 0x1c)
            int32_t esi_1 = *(entry_ebx + 0x24)
            RECT var_124
            var_124.bottom = *(entry_ebx + 0x28)
            var_124.top = top
            
            if (*(data_26a6554 + 0x24) == 0)
                int32_t eax_4
                int32_t edx_3
                edx_3:eax_4 = sx.q(esi_1 - lprc_7)
                *(data_26a6554 + 0x24) = (eax_4 - edx_3) s>> 1
                top = var_124.top
            
            RECT lprc_1
            lprc_1.bottom = var_124.bottom
            lprc_1.right = esi_1
            lprc_1.right = lprc_7 + 0x10
            RECT lprc_5
            lprc_5.bottom = var_124.bottom
            int32_t right_1 = lprc_1.right
            int32_t lprc_2 = right_1
            lprc_5.left = lprc_7
            lprc_5.left = right_1
            int32_t var_15c_1 = esi_1
            int32_t bottom_1 = lprc_5.bottom
            lprc_1.top = top
            lprc_5.top = top
            lprc_1.left = lprc_7
            lprc_5.right = esi_1
            int32_t edx_11 = *(data_26a6554 + 0x24)
            int32_t bottom = var_124.bottom
            int32_t lprc_3 = lprc_7
            int32_t var_14c_1 = esi_1
            int32_t edx_12
            edx_12.b = *(hWnd_1 + 0x14) != 0x63
            int32_t lprc_9 = edx_12 + *(data_26a6554 + 0x24)
            lprc_3 = lprc_9
            int32_t eax_8 = *(hWnd_1 + 0x14)
            int32_t lprc_6
            
            if (eax_8 != 4)
                lprc_6 = lprc_9
            
            if (eax_8 == 4 || eax_8 == 8)
                lprc_6 = lprc_9 + 0x14
            
            int32_t bottom_2 = var_124.bottom
            int32_t lprc_4 = lprc_7
            int32_t top_1 = var_124.top
            lprc_4 = lprc_6
            HGDIOBJ hbr = GetStockObject(HOLLOW_BRUSH)
            FillRect(*(entry_ebx + 0x18), &lprc_1, hbr)
            RECT lprc
            
            if (*(hWnd_1 + 0x14) == 0x63)
                var_124.left = lprc_1.left + 4
                var_124.top = lprc_1.top + 4
                var_124.right = lprc_1.left + 0xd
                var_124.bottom = lprc_1.top + 0xd
                HBRUSH hbr_1 = GetSysColorBrush(COLOR_WINDOW)
                FillRect(*(entry_ebx + 0x18), &var_124, hbr_1)
                HGDIOBJ hbr_2 = GetStockObject(BLACK_BRUSH)
                FrameRect(*(entry_ebx + 0x18), &var_124, hbr_2)
                long double x87_r6_1 = fconvert.t(0.5)
                lprc.right =
                    sub_685f40(float.t(var_124.right - var_124.left) * x87_r6_1 + float.t(var_124.left))
                int32_t eax_16 =
                    sub_685f40(x87_r6_1 * float.t(var_124.bottom - var_124.top) + float.t(var_124.top))
                int32_t edx_15 = sub_57cd30(eax_16, InflateRect(&var_124, 0xfffffffe, 0xfffffffe), 
                    var_124.left, *(entry_ebx + 0x18), var_124.right, eax_16)
                
                if (*(hWnd_1 + 0x18) != 0)
                    int32_t right = lprc.right
                    sub_57cd30(var_124.top, edx_15, right, *(entry_ebx + 0x18), right, var_124.bottom)
            
            HGDIOBJ ho
            void lptm
            void var_1c0
            
            if (*(hWnd_1 + 0x14) != 0x63 || *(hWnd_1 + 0x14) != 0x63)
                SetBkMode(*(entry_ebx + 0x18), 1)
                enum SYS_COLOR_INDEX nIndex
                
                if (wParam != SendMessageA(*(entry_ebx + 0x14), 0x188, 0, 0))
                    nIndex = COLOR_WINDOW
                else
                    int32_t eax_30
                    eax_30.b = *(data_26a6554 + 0x38) == 0
                    nIndex = eax_30 * 2 + 0xd
                
                HBRUSH hbr_5 = GetSysColorBrush(nIndex)
                FillRect(*(entry_ebx + 0x18), &lprc_2, hbr_5)
                lprc.left = lprc_2 + 3
                lprc.top = top + 3
                lprc.right = edx_11 - 3
                lprc.bottom = bottom_1 + 3
                GetObjectA(SendMessageA(*(entry_ebx + 0x14), 0x31, 0, 0), 0x3c, &var_1c0)
                var_1c0:0x10.d = 0x190
                HFONT h_1 = CreateFontIndirectA(&var_1c0)
                ho = SelectObject(*(entry_ebx + 0x18), h_1)
                void* nIndex_1
                
                if (wParam != SendMessageA(*(entry_ebx + 0x14), 0x188, 0, 0))
                    nIndex_1 = 8
                else
                    int32_t eax_38
                    eax_38.b = *(data_26a6554 + 0x38) == 0
                    nIndex_1 = (eax_38 << 2) + 0xe
                
                uint32_t color_1 = GetSysColor(nIndex_1)
                SetTextColor(*(entry_ebx + 0x18), color_1)
                uint8_t* lpchText_3 = *(hWnd_1 + 4)
                char* lpchText_5 = lpchText_3
                char i
                
                do
                    i = *lpchText_5
                    lpchText_5 = &lpchText_5[1]
                while (i != 0)
                DrawTextA(*(entry_ebx + 0x18), lpchText_3, lpchText_5 - &lpchText_5[1], &lprc, 
                    DT_NOCLIP | DT_SINGLELINE)
                uint32_t eax_41 = GetSysColor(COLOR_BTNFACE)
                sub_57cd50(&lprc_2, *(entry_ebx + 0x18), 6, eax_41)
                hWnd_1 = hWnd_2
            else
                HGDIOBJ hbr_3 = GetStockObject(HOLLOW_BRUSH)
                FillRect(*(entry_ebx + 0x18), &lprc_5, hbr_3)
                
                if (wParam == SendMessageA(*(entry_ebx + 0x14), 0x188, 0, 0)
                        && *(data_26a6554 + 0x38) != 0)
                    InflateRect(&lprc_5, 0xfffffffe, 0xfffffffe)
                    HBRUSH hbr_4 = GetSysColorBrush(COLOR_BTNSHADOW)
                    FrameRect(*(entry_ebx + 0x18), &lprc_5, hbr_4)
                    InflateRect(&lprc_5, 2, 2)
                
                var_124.left = lprc_5.left + 6
                var_124.right = lprc_5.right - 6
                var_124.top = lprc_5.top + 3
                var_124.bottom = lprc_5.bottom + 3
                LOGFONTA var_200
                GetObjectA(SendMessageA(*(entry_ebx + 0x14), 0x31, 0, 0), 0x3c, &var_200)
                lptm:0xc.d = 0x2bc
                HFONT h = CreateFontIndirectA(&var_200)
                ho = SelectObject(*(entry_ebx + 0x18), h)
                uint32_t color = GetSysColor(COLOR_BTNTEXT)
                SetTextColor(*(entry_ebx + 0x18), color)
                uint8_t* lpchText_1 = *hWnd_1
                char* lpchText_4 = lpchText_1
                char i_1
                
                do
                    i_1 = *lpchText_4
                    lpchText_4 = &lpchText_4[1]
                while (i_1 != 0)
                DrawTextA(*(entry_ebx + 0x18), lpchText_1, lpchText_4 - &lpchText_4[1], &var_124, 
                    DT_NOCLIP | DT_SINGLELINE)
            
            DeleteObject(ho)
            
            if (*(hWnd_1 + 0x14) != 0x63)
                HBRUSH hbr_6 = GetSysColorBrush(COLOR_WINDOW)
                FillRect(*(entry_ebx + 0x18), &lprc_3, hbr_6)
                int32_t lprc_8 = lprc_3
                var_124.right = lprc_6
                var_124.left = lprc_8
                var_124.top = top + 3
                var_124.bottom = bottom
                var_124.bottom = top + 0x12
                int32_t eax_46 = *(hWnd_1 + 0x14)
                var_124.left = lprc_8 + 2
                var_124.right = lprc_8 + 0x11
                
                if (eax_46 == 4)
                    uint32_t eax_47
                    RECT* ecx_23
                    eax_47, ecx_23 = sub_57ce70(*(hWnd_1 + 0x10))
                    HDC edx_32 = *(entry_ebx + 0x18)
                    RECT* var_218_22 = &var_124
                    HDC var_21c_18 = edx_32
                    sub_57cd00(eax_47, edx_32, ecx_23)
                    HGDIOBJ hbr_7 = GetStockObject(BLACK_BRUSH)
                    FrameRect(*(entry_ebx + 0x18), &var_124, hbr_7)
                else if (eax_46 == 8)
                    if (__Cnd_wait(*(hWnd_1 + 8), U"T") == 0)
                        HBRUSH hbr_8 = GetSysColorBrush(COLOR_HIGHLIGHT)
                        FillRect(*(entry_ebx + 0x18), &lprc_3, hbr_8)
                    
                    uint32_t eax_51 = __Cnd_wait(*(hWnd_1 + 0x10), U"T")
                    int32_t eax_52 = neg.d(eax_51)
                    DrawFrameControl(*(entry_ebx + 0x18), &var_124, DFC_BUTTON, 
                        (sbb.d(eax_52, eax_52, eax_51 != 0) & 0xfffffc00) + 0x400)
                    
                    if ((GetWindowLongA(*(entry_ebx + 0x14), 0xffffffeb) & 1) != 0)
                        HBRUSH hbr_9 = GetSysColorBrush(COLOR_BTNFACE)
                        FrameRect(*(entry_ebx + 0x18), &var_124, hbr_9)
                        InflateRect(&var_124, 0xffffffff, 0xffffffff)
                        HBRUSH hbr_10 = GetSysColorBrush(COLOR_WINDOW)
                        FrameRect(*(entry_ebx + 0x18), &var_124, hbr_10)
            
            uint32_t eax_58 = GetSysColor(COLOR_BTNFACE)
            sub_57cd50(&lprc_3, *(entry_ebx + 0x18), 2, eax_58)
            
            if (*(hWnd_2 + 0x14) != 0x63)
                HBRUSH hbr_11 = GetSysColorBrush(COLOR_WINDOW)
                FillRect(*(entry_ebx + 0x18), &lprc_4, hbr_11)
            
            if (*(hWnd_2 + 0x14) != 8)
                SetBkMode(*(entry_ebx + 0x18), 1)
                
                if (*(hWnd_2 + 0x14) != 5)
                    uint32_t color_2 = GetSysColor(COLOR_WINDOWTEXT)
                    SetTextColor(*(entry_ebx + 0x18), color_2)
                    uint8_t* lpchText_2 = *(hWnd_2 + 0x10)
                    var_124.left = lprc_4 + 3
                    var_124.right = esi_1 + 3
                    char* lpchText_6 = lpchText_2
                    var_124.top = top_1 + 3
                    var_124.bottom = bottom_2 + 3
                    int32_t ecx_36
                    
                    do
                        ecx_36.b = *lpchText_6
                        lpchText_6 = &lpchText_6[1]
                    while (ecx_36.b != 0)
                    DrawTextA(*(entry_ebx + 0x18), lpchText_2, lpchText_6 - &lpchText_6[1], &var_124, 
                        DT_NOCLIP | DT_SINGLELINE)
                else
                    uint8_t lpchText = 0
                    int128_t var_113[0x10]
                    char* edx_37 = sub_5abfc0(&var_113, 0, 0x103)
                    int32_t var_218_30 = *(hWnd_2 + 0x10)
                    LOGFONTA lplf
                    sub_57e670(&lplf, edx_37)
                    int32_t nDenominator = GetDeviceCaps(*(entry_ebx + 0x18), 0x5a)
                    int32_t esi_10 = neg.d(MulDiv(lplf.lfHeight, 0x48, nDenominator))
                    
                    if (esi_10 s> 0)
                        if (GetTextMetricsA(*(entry_ebx + 0x18), &lptm) != 0)
                            lplf.lfHeight = lptm.d + 2
                        
                        HFONT h_2 = CreateFontIndirectA(&lplf)
                        HGDIOBJ h_3 = SelectObject(*(entry_ebx + 0x18), h_2)
                        SetTextColor(*(entry_ebx + 0x18), var_1c0:0x38.d)
                        int32_t var_218_36 = esi_10
                        var_1a8
                        void* var_21c_32 = &var_1a8
                        _swprintf(&lpchText, 0x104, "%s %d")
                        var_124.left = lprc_4 + 3
                        var_124.right = esi_1 + 3
                        char* eax_68 = &lpchText
                        var_124.top = top_1 + 3
                        var_124.bottom = bottom_2 + 3
                        int32_t ecx_31
                        
                        do
                            ecx_31.b = *eax_68
                            eax_68 = &eax_68[1]
                        while (ecx_31.b != 0)
                        DrawTextA(*(entry_ebx + 0x18), &lpchText, eax_68 - &var_113, &var_124, 
                            DT_NOCLIP | DT_SINGLELINE)
                        DeleteObject(SelectObject(*(entry_ebx + 0x18), h_3))
            
            uint32_t eax_76 = GetSysColor(COLOR_BTNFACE)
            hWnd = sub_57cd50(&lprc_4, *(entry_ebx + 0x18), 2, eax_76)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return hWnd
}
