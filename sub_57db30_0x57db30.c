// 函数名称: sub_57db30
// 虚拟地址: 0x57db30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_57db30(HWND arg1, uint32_t arg2, WPARAM arg3, HWND arg4)
{
    // 第一条实际指令: void var_12c
    void var_12c
    int32_t eax_1 = __security_cookie ^ &var_12c
    HWND var_13c = arg1
    var_13c = GetParent(var_13c)
    HWND hWnd = GetParent(var_13c)
    var_13c = "lpInsData"
    HANDLE esi = GetPropA(hWnd, var_13c)
    uint32_t Msg = arg2
    data_26a6554 = esi
    
    if (Msg != 2)
        if (Msg != 8)
            int32_t var_128
            int32_t var_124
            int32_t var_11c
            
            if (Msg == 0xf)
                if (*(esi + 0x34) == 0)
                    var_13c = arg4
                    CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, 0xf, arg3, var_13c)
                    var_13c = arg1
                    HDC eax_10 = GetWindowDC(var_13c)
                    var_13c = &var_128
                    GetClientRect(arg1, var_13c)
                    var_13c = 5
                    var_13c = GetSysColor(var_13c)
                    int32_t* esi_1 = &var_128
                    sub_57cd50(esi_1, eax_10, 3, var_13c)
                    var_11c += 2
                    int32_t var_124_1 = var_124 + 1
                    var_128 += 1
                    var_13c = 5
                    var_13c = GetSysColor(var_13c)
                    sub_57cd50(esi_1, eax_10, 0xf, var_13c)
                    var_13c = eax_10
                    ReleaseDC(arg1, var_13c)
                    sub_5a6aba(eax_1 ^ &var_12c)
                    return 1
                
                var_13c = arg4
                sub_57cf10(Msg, arg3, var_13c)
                sub_5a6aba(eax_1 ^ &var_12c)
                return 1
            
            if (Msg != 0x20a)
                if (Msg == 0x87)
                    sub_5a6aba(eax_1 ^ &var_12c)
                    return 4
                
                if (Msg == 0x102)
                    if (arg3 == 0xd)
                        if (*(esi + 4) != 0)
                            int32_t eax_15 = *(*(esi + 4) + 0x14)
                            char var_118
                            int128_t var_117[0x10]
                            
                            if (eax_15 == 0xa)
                                var_13c = 0x103
                                __builtin_memset(&var_128, 0, 0x11)
                                sub_5abfc0(&var_117, 0, var_13c)
                                HWND hWnd_10 = *(esi + 0x1c)
                                var_13c = &var_128
                                SendMessageA(hWnd_10, 0x1001, 0, var_13c)
                                var_13c = 0x104
                                GetDateFormatA(0x400, 1, &var_128, nullptr, &var_118, var_13c)
                                var_13c = *(*(data_26a6554 + 4) + 0x10)
                                __free_base(var_13c)
                                *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&var_118)
                                HWND hWnd_3 = *(data_26a6554 + 0x1c)
                                var_13c = nullptr
                                ShowWindow(hWnd_3, var_13c)
                                esi = data_26a6554
                            else if (eax_15 == 0xb)
                                var_13c = 0x103
                                __builtin_memset(&var_128, 0, 0x11)
                                sub_5abfc0(&var_117, 0, var_13c)
                                HWND hWnd_8 = *(esi + 0x1c)
                                var_13c = &var_128
                                SendMessageA(hWnd_8, 0x1001, 0, var_13c)
                                var_13c = 0x104
                                GetTimeFormatA(0x400, 0, &var_128, "hh':'mm':'ss tt", &var_118, var_13c)
                                var_13c = *(*(data_26a6554 + 4) + 0x10)
                                __free_base(var_13c)
                                *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&var_118)
                                HWND hWnd_9 = *(data_26a6554 + 0x1c)
                                var_13c = nullptr
                                ShowWindow(hWnd_9, var_13c)
                                esi = data_26a6554
                            else if (eax_15 == 0xc)
                                var_13c = 0x103
                                var_128.w = (eax_15 - 0xc).w
                                var_128 = eax_15 - 0xc
                                var_124 = eax_15 - 0xc
                                int32_t var_11e_1 = eax_15 - 0xc
                                var_11c:2.w = (eax_15 - 0xc).w
                                var_118 = (eax_15 - 0xc).b
                                sub_5abfc0(&var_117, (eax_15 - 0xc).b, var_13c)
                                HWND hWnd_1 = *(esi + 0x1c)
                                var_13c = &var_128
                                SendMessageA(hWnd_1, 0x1001, 0, var_13c)
                                var_13c = 0x104
                                GetDateFormatA(0x400, 1, &var_128, nullptr, &var_118, var_13c)
                                void* edi_2 = &var_11c:3
                                char i
                                
                                do
                                    i = *(edi_2 + 1)
                                    edi_2 += 1
                                while (i != 0)
                                void* edx_3 = data_26a6554
                                var_13c = &var_128
                                *edi_2 = 0x20
                                SendMessageA(*(edx_3 + 0x20), 0x1001, 0, var_13c)
                                char* eax_20 = &var_118
                                char i_1
                                
                                do
                                    i_1 = *eax_20
                                    eax_20 = &eax_20[1]
                                while (i_1 != 0)
                                int32_t eax_21 = eax_20 - &var_117
                                var_13c = 0x104 - eax_21
                                GetTimeFormatA(0x400, 0, &var_128, "hh':'mm':'ss tt", 
                                    &var_13c + eax_21 + 0x24, var_13c)
                                var_13c = *(*(data_26a6554 + 4) + 0x10)
                                __free_base(var_13c)
                                *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&var_118)
                                HWND hWnd_7 = *(data_26a6554 + 0x1c)
                                var_13c = nullptr
                                ShowWindow(hWnd_7, var_13c)
                                HWND hWnd_2 = *(data_26a6554 + 0x20)
                                var_13c = nullptr
                                ShowWindow(hWnd_2, var_13c)
                                esi = data_26a6554
                        
                        var_13c = *(esi + 0x14)
                        SetFocus(var_13c)
                        sub_582980()
                        sub_5a6aba(eax_1 ^ &var_12c)
                        return 1
                    
                    if (arg3 == 9 && *(esi + 4) != 0)
                        if (*(*(esi + 4) + 0x14) != 0xc)
                            var_13c = 0x10
                            
                            if ((0x8000 & GetKeyState(var_13c)) == 0)
                            label_57e0b9:
                                var_13c = nullptr
                                SendMessageA(arg1, 0x102, 0xd, var_13c)
                                sub_57cc30()
                                sub_5a6aba(eax_1 ^ &var_12c)
                                return 1
                        else
                            HWND eax_34 = GetFocus()
                            void* ecx_19 = data_26a6554
                            
                            if (*(ecx_19 + 0x1c) != eax_34)
                                if (*(ecx_19 + 0x20) != eax_34)
                                    sub_5a6aba(eax_1 ^ &var_12c)
                                    return 1
                                
                                var_13c = 0x10
                                
                                if ((0x8000 & GetKeyState(var_13c)) == 0)
                                    goto label_57e0b9
                                
                                var_13c = *(data_26a6554 + 0x1c)
                                SetFocus(var_13c)
                                sub_5a6aba(eax_1 ^ &var_12c)
                                return 1
                            
                            var_13c = 0x10
                            
                            if ((0x8000 & GetKeyState(var_13c)) == 0)
                                var_13c = *(data_26a6554 + 0x20)
                                SetFocus(var_13c)
                                sub_5a6aba(eax_1 ^ &var_12c)
                                return arg3 - 8
                        
                        var_13c = nullptr
                        SendMessageA(arg1, 0x102, 0xd, var_13c)
                        sub_5a6aba(eax_1 ^ &var_12c)
                        return 1
                else if (Msg == 0x100 && arg3 == 0x1b && *(esi + 4) != 0)
                    int32_t ecx_28 = *(*(esi + 4) + 0x14)
                    
                    if (ecx_28 s>= 0xa)
                        if (ecx_28 s<= 0xb)
                            HWND hWnd_5 = *(esi + 0x1c)
                            var_13c = nullptr
                            ShowWindow(hWnd_5, var_13c)
                            goto label_57e13b
                        
                        if (ecx_28 == 0xc)
                            HWND hWnd_4 = *(esi + 0x1c)
                            var_13c = nullptr
                            ShowWindow(hWnd_4, var_13c)
                            HWND hWnd_11 = *(data_26a6554 + 0x20)
                            var_13c = nullptr
                            ShowWindow(hWnd_11, var_13c)
                            goto label_57e13b
            else
                var_13c = nullptr
                SendMessageA(arg1, 0x102, 0xd, var_13c)
            label_57e13b:
                Msg = arg2
            
            var_13c = arg4
            LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, Msg, arg3, var_13c)
            sub_5a6aba(eax_1 ^ &var_12c)
            return result
        
        if (*(esi + 4) == 0 || *(*(esi + 4) + 0x14) != 0xc)
            goto label_57dbe0
        
        if (*(esi + 0x1c) != arg3 && *(esi + 0x20) != arg3)
            HWND hWnd_6 = *(esi + 0x20)
            var_13c = nullptr
            ShowWindow(hWnd_6, var_13c)
        label_57dbe0:
            var_13c = nullptr
            SendMessageA(arg1, 0x102, 0xd, var_13c)
            sub_57cc40(arg3)
            goto label_57e13b
    else
        var_13c = "Wprc"
        var_13c = GetPropA(arg1, var_13c)
        SetWindowLongA(arg1, 0xfffffffc, var_13c)
        var_13c = "Wprc"
        RemovePropA(arg1, var_13c)
    
    sub_5a6aba(eax_1 ^ &var_12c)
    return 0
}
