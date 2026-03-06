// 函数名称: sub_51a6c0
// 虚拟地址: 0x51a6c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULTsub_51a6c0(int32_t arg1, LPARAM arg2, float arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ebp
    int32_t ebp
    int32_t var_4_1 = ebp
    __chkstk(0x147c)
    void var_8
    int32_t eax_1 = __security_cookie ^ &var_8
    HWND hWnd_1 = arg1
    POINT point
    int32_t y = point.y
    LPARAM lParam_1 = arg2
    arg1 = y
    arg2 = lParam_1
    void* eax_2
    int32_t edx
    eax_2, edx = sub_519c90()
    int32_t x = point.x
    float rect
    
    if (x u> 0x100)
        HWND hWnd
        int32_t Msg
        WPARAM wParam
        LPARAM lParam
        
        if (x u> 0x209)
            if (x - 0x20a u> 0x36)
                goto label_51ab54
            
            uint32_t edx_7 = zx.d(*(x + 0x51aa02))
            
            switch (edx_7)
                case 0
                    sub_519ed0((y u>> 0x10).w, zx.d(lParam_1.w), lParam_1 u>> 0x10)
                    sub_5a6aba(eax_1 ^ &var_8)
                    return 0
                case 1
                    lParam = lParam_1
                    wParam = y
                    Msg = x
                    data_27e7bc3 = 1
                    hWnd = hWnd_1
                case 2
                    lParam = lParam_1
                    wParam = y
                    Msg = x
                    data_27e7bc3 = 0
                    hWnd = hWnd_1
                case 3
                    sub_51a1e0(x - 0x20a, edx_7, hWnd_1, y)
                    sub_5a6aba(eax_1 ^ &var_8)
                    return 1
                case 4
                    lParam = lParam_1
                    wParam = y
                    Msg = x
                    data_27e7bc2 = 1
                    hWnd = hWnd_1
                case 5
                    data_27e7bc2 = 0
                label_51ab54:
                    lParam = lParam_1
                    wParam = y
                    Msg = x
                    hWnd = hWnd_1
                case 6
                    sub_51a360(y)
                    sub_5a6aba(eax_1 ^ &var_8)
                    return 0
                case 7
                    TOUCHINPUT inputs
                    
                    if (GetTouchInputInfo(lParam_1, 0x80, &inputs, 0x28) != 0)
                        if (y s> 0)
                            arg_7c
                            void* ebx = &arg_7c
                            __return_addr = y
                            void* const i
                            
                            do
                                if ((*ebx & 0x10) != 0)
                                    int32_t eax_27
                                    int32_t edx_8
                                    edx_8:eax_27 = muls.dp.d(0x51eb851f, *(ebx - 0x10))
                                    int32_t edx_9 = edx_8 s>> 5
                                    int32_t eax_28
                                    int32_t edx_10
                                    edx_10:eax_28 = muls.dp.d(0x51eb851f, *(ebx - 0xc))
                                    int32_t edx_11 = edx_10 s>> 5
                                    point.x = (edx_9 u>> 0x1f) + edx_9
                                    point.y = (edx_11 u>> 0x1f) + edx_11
                                    ScreenToClient(hWnd_1, &point)
                                    bool cond:1_1 = (*ebx & 2) == 0
                                    float rect_1 = fconvert.s(float.t(point.x))
                                    long double x87_r7_6 = float.t(point.y)
                                    rect = rect_1
                                    float arg_18 = fconvert.s(x87_r7_6)
                                    arg3 = arg_18
                                    
                                    if (not(cond:1_1))
                                        int32_t var_18_9 = *(ebx - 4)
                                        sub_51a5c0(rect_1, &rect, arg_18)
                                    
                                    if ((*ebx & 1) != 0)
                                        sub_51a630(&rect, *(ebx - 4))
                                        lParam_1 = arg2
                                        y = arg1
                                    
                                    if ((*ebx & 4) != 0)
                                        sub_51a670(*(ebx - 4))
                                        y = arg1
                                
                                ebx += 0x28
                                i = __return_addr
                                __return_addr -= 1
                            while (i != 1)
                            x = point.x
                        
                        CloseTouchInputHandle(lParam_1)
                    
                    LRESULT eax_34 = DefWindowProcA(hWnd_1, x, y, lParam_1)
                    sub_5a6aba(eax_1 ^ &var_8)
                    return eax_34
                case 8
                    goto label_51ab54
        else
            if (x u>= 0x201)
                sub_519d00(x, zx.d(lParam_1.w), lParam_1 u>> 0x10)
                sub_5a6aba(eax_1 ^ &var_8)
                return 0
            
            if (x - 0x101 u> 5)
                goto label_51ab54
            
            switch (x)
                case 0x101, 0x105
                    sub_51a020(x - 0x101, edx, lParam_1, y, 2)
                    sub_5a6aba(eax_1 ^ &var_8)
                    return 0
                case 0x102, 0x106
                    sub_51a020(x - 0x101, edx, lParam_1, y, 0)
                    sub_5a6aba(eax_1 ^ &var_8)
                    return 0
                case 0x103
                    goto label_51ab54
                case 0x104
                    sub_51a020(x - 0x101, edx, lParam_1, y, 1)
                    lParam = lParam_1
                    wParam = y
                    Msg = x
                    hWnd = hWnd_1
        
        LRESULT eax_38 = DefWindowProcW(hWnd, Msg, wParam, lParam)
        sub_5a6aba(eax_1 ^ &var_8)
        return eax_38
    
    if (x == 0x100)
        sub_51a020(eax_2, edx, lParam_1, y, 1)
        sub_5a6aba(eax_1 ^ &var_8)
        return 0
    
    if (x - 2 u> 0x1a)
        goto label_51ab54
    
    uint32_t ecx_1 = zx.d(*(x + &jump_table_51ab98[6]:2))
    
    switch (ecx_1)
        case 0
            PostQuitMessage(0)
            sub_5a6aba(eax_1 ^ &var_8)
            return 0
        case 1
            if (data_3078804 == 0)
                sub_5a6aba(eax_1 ^ &var_8)
                return 0
            
            GetClientRect(hWnd_1, &rect)
            
            if (arg5 != arg3)
                void* esi_1 = data_27e7fd0
                
                if (*(esi_1 + 0x23) != 0)
                    *(esi_1 + 0x14) = arg4 i- rect
                    int32_t* ecx_11 = data_3078804
                    *(esi_1 + 0x18) = arg5 i- arg3
                    (*(*ecx_11 + 0xc))()
                    sub_5a6aba(eax_1 ^ &var_8)
                    return 0
                
                float var_18_4 = arg3
                int32_t eax_13
                int80_t st0_1
                st0_1, eax_13 = sub_403030(fconvert.s(fconvert.t(fconvert.s(float.t(*(esi_1 + 0x14))
                    / fconvert.t(fconvert.s(float.t(arg4 i- rect) / float.t(arg5 i- arg3)))))))
                *(esi_1 + 0x18) = eax_13
            
            (*(*data_3078804 + 0xc))()
            sub_5a6aba(eax_1 ^ &var_8)
            return 0
        case 2
            sub_5a6aba(eax_1 ^ &var_8)
            return 0
        case 3
            PAINTSTRUCT paint
            BeginPaint(hWnd_1, &paint)
            EndPaint(hWnd_1, &paint)
            sub_5a6aba(eax_1 ^ &var_8)
            return 0
        case 4
            if (sub_53ccb0(ecx_1) == 0)
                sub_5a6aba(eax_1 ^ &var_8)
                return 0
            
            DestroyWindow(hWnd_1)
            sub_5a6aba(eax_1 ^ &var_8)
            return 0
        case 5
            void* eax_6 = data_27e7bbc
            
            if (eax_6 == 0)
                sub_5a6aba(eax_1 ^ &var_8)
                return 0
            
            ecx_1.b = y == 1
            *(eax_6 + 0x18) = ecx_1.b
            sub_5a6aba(eax_1 ^ &var_8)
            return 0
        case 6
            goto label_51ab54
}
