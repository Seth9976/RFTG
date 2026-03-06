// 函数名称: sub_53ddd0
// 虚拟地址: 0x53ddd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_53ddd0(HWND arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: void var_64
    void var_64
    int32_t eax_1 = __security_cookie ^ &var_64
    int32_t* esi = data_3079208
    
    if (esi != 0)
        if (esi[1] != 0x19)
            goto label_53de18
        
        int32_t eax_3
        char* ecx_1
        int32_t edx_1
        eax_3, ecx_1, edx_1 = sub_466320(esi)
        
        if (eax_3 != 0)
        label_53de37:
            int32_t eax_5 = data_3078860
            
            if (eax_5 == 0 || arg2 != eax_5)
            label_53e152:
                
                if (arg2 u> 0x200)
                    if (arg2 == 0x201)
                        sub_53b150(sx.d(arg4.w), sx.d((arg4 u>> 0x10).w))
                    else if (arg2 == 0x202)
                        if (data_307883d == 0)
                            ReleaseCapture()
                        else
                            sub_53b200()
                    else if (arg2 == 0x204)
                        sub_53aed0(sx.d((arg4 u>> 0x10).w), sx.d(arg4.w))
                else if (arg2 == 0x200)
                    uint32_t eax_38 = arg4 u>> 0x10
                    sub_53b060(eax_38, edx_1, sx.d(arg4.w), sx.d(eax_38.w))
                else
                    if (arg2 == 0x111)
                        uint32_t edi_5 = zx.d(arg3.w)
                        uint32_t ebx_5 = arg3 u>> 0x10
                        
                        if (ebx_5 != 1 || (edi_5 != 0x76 && edi_5 != 0x7b))
                            if (edi_5 == 0x81 || edi_5 == 0x82 || edi_5 == 0x83 || edi_5 == 0x96)
                                if (ebx_5 == 0x300)
                                    ecx_1 = sub_53b340()
                                else if (ebx_5 == 0x200)
                                    int32_t var_74_8 = 0xffffffff
                                    sub_53ad00(0xffffffff, edx_1)
                            
                            if ((edi_5 == 0x90 || edi_5 == 0x91) && ebx_5 == 1)
                                ecx_1 = sub_53b340()
                            
                            if (edi_5 != 0x97 && edi_5 != 0x98)
                                if (ebx_5 != 0)
                                    goto label_53e58e
                                
                                goto label_53e4a9
                            
                            if (ebx_5 != 0)
                            label_53e58e:
                                
                                if (ebx_5 != 2)
                                    if (ebx_5 == 0)
                                    label_53e5d6:
                                        
                                        if (edi_5 != 0x8e)
                                            if (edi_5 != 0x8f)
                                                goto label_53e63d
                                            
                                            sub_542f30(ecx_1)
                                        else
                                            sub_542a90(ecx_1)
                                    else if (ebx_5 != 1)
                                        if (ebx_5 != 0x300)
                                            goto label_53e63d
                                        
                                        if (edi_5 != 0x93)
                                            if (edi_5 != 0x94)
                                                goto label_53e63d
                                            
                                            sub_53cc10()
                                        else
                                            sub_53cb30()
                                    else
                                        if (edi_5 != 0x8c)
                                            goto label_53e63d
                                        
                                        sub_53caa0()
                                else if (edi_5 != 0x7b)
                                label_53e63d:
                                    
                                    switch (edi_5)
                                        case 0xa0
                                            sub_53d1e0(1)
                                        case 0xa1
                                            sub_53d1e0(0)
                                        case 0xa3
                                            sub_53d5f0()
                                        case 0xa4
                                            sub_53d700()
                                        case 0xa5
                                            sub_53d800()
                                        case 0xa6
                                            sub_53d9a0()
                                        case 0xa7
                                            ebx_5.b = 1
                                            sub_53dd40()
                                        case 0xa8
                                            ebx_5.b = 0
                                            sub_53dd40()
                                else
                                    LRESULT eax_36 = sub_536e40()
                                    
                                    if (eax_36 == 5 || eax_36 == 0x4a || eax_36 == 8 || eax_36 == 9
                                            || eax_36 == 0xa || eax_36 == 0xb || eax_36 == 0x4c)
                                        sub_53c9f0()
                            else
                                ecx_1 = sub_53b340()
                            label_53e4a9:
                                
                                if (edi_5 == 0x7c)
                                    DialogBoxParamA(GetModuleHandleA(nullptr), 0x84, data_3078818, 
                                        sub_53b9d0, 0)
                                else if (edi_5 == 0x7d)
                                    sub_53c7f0()
                                else if (edi_5 == 0x7e)
                                    sub_53c8a0()
                                else if (edi_5 == 0x7f)
                                    sub_53c940()
                                else if (edi_5 == 0x77)
                                    sub_53c180()
                                else if (edi_5 == 0x8d)
                                    sub_53c3b0()
                                else if (edi_5 == 0x78)
                                    sub_53c540()
                                else if (edi_5 == 0x79)
                                    sub_53c660()
                                else if (edi_5 != 0x7a)
                                    if (edi_5 != 0x88)
                                        goto label_53e5d6
                                    
                                    LRESULT eax_35 = sub_536e40()
                                    
                                    if (eax_35 == 5 || eax_35 == 8 || eax_35 == 0x4a || eax_35 == 9
                                            || eax_35 == 0xa || eax_35 == 0xb || eax_35 == 0x4c)
                                        sub_53c9f0()
                                else
                                    sub_53c720()
                        else
                            int32_t var_74_7 = 0xffffffff
                            sub_53ad00(0xffffffff, edx_1)
                            data_3078834 = 0
                    
                    if (arg2 == 0x110)
                        if (MakeDragList(GetDlgItem(arg1, 0x76)) == 0)
                            sub_4c5870("result", &data_83f3d3, "Windows\EditorWindow.cpp", 0xc86, 
                                "ParamsDialogWndProc")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        data_3078860 = RegisterWindowMessageA("commctrl_DragListMsg")
                    else if (arg2 == 0xf)
                        PAINTSTRUCT paint
                        sub_53b250(BeginPaint(arg1, &paint))
                        EndPaint(arg1, &paint)
                    else if (arg2 == 0x7b)
                        HWND eax_18 = GetDlgItem(data_3078830, 0x76)
                        
                        if (arg3 == eax_18)
                            int32_t edi_2 = sx.d(arg4.w)
                            int32_t y = sx.d((arg4 u>> 0x10).w)
                            HMENU hMenu = CreatePopupMenu()
                            int32_t y_1 = y
                            int32_t eax_19
                            int32_t edx_6
                            eax_19, edx_6 = LBItemFromPt(eax_18, edi_2, 0)
                            
                            if (eax_19 == 0xffffffff)
                                SendMessageA(eax_18, 0x186, 0xffffffff, 0)
                                SendMessageA(GetDlgItem(data_3078830, 0x7b), 0x184, 0, 0)
                                char* ecx_18 = sub_537f00(sub_5381f0())
                                sub_538030()
                                sub_5380a0(ecx_18)
                                sub_538170()
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa0, "Add Root")
                            else
                                int32_t var_74_3 = 0xffffffff
                                sub_53ad00(eax_19, edx_6)
                                bool cond:2_1 = sub_537a90(eax_19) != 0xffffffff
                                int32_t eax_23
                                eax_23.b = sub_537b50(eax_19) != 0xffffffff
                                int32_t ebx_2 = 0
                                int32_t var_5c_2 = 0
                                
                                if (cond:2_1 == 0)
                                    var_5c_2 = 1
                                
                                if (eax_23.b == 0)
                                    ebx_2 = 1
                                
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa0, "Add Child")
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa1, "Add Sibling")
                                InsertMenuA(hMenu, 0xffffffff, var_5c_2 | 0x400, 0xa3, 
                                    "Sibling Order Up")
                                InsertMenuA(hMenu, 0xffffffff, ebx_2 | 0x400, 0xa4, 
                                    "Sibling Order Down")
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa5, "Delete")
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa6, "Duplicate")
                                InsertMenuA(hMenu, 0xffffffff, 0xc00, 0, &data_83f3d3)
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa7, "Hide")
                                InsertMenuA(hMenu, 0xffffffff, MF_BYPOSITION, 0xa8, "Show")
                            
                            TrackPopupMenu(hMenu, TPM_LEFTBUTTON, edi_2, y, 0, arg1, nullptr)
            else
                if (arg3 != 0x76)
                    sub_4c5870("wParam == IDC_EMITTER_LIST", &data_83f3d3, "Windows\EditorWindow.cpp", 
                        0xc4d, "ParamsDialogWndProc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                HWND hLB = GetDlgItem(data_3078830, 0x76)
                int32_t var_78_2 = arg4[3]
                int32_t eax_7
                eax_7, ecx_1, edx_1 = LBItemFromPt(hLB, arg4[2], 1)
                int32_t eax_8 = *arg4
                
                if (eax_8 != 0x485)
                    if (eax_8 == 0x486)
                        if (sub_53d960(eax_7) == 0)
                            if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135
                                    && arg2 != 0x136 && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39
                                    && arg2 != 0x2e && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                                SetWindowLongA(arg1, 0, 1)
                            
                            sub_5a6aba(eax_1 ^ &var_64)
                            return 1
                        
                        if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135
                                && arg2 != 0x136 && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39
                                && arg2 != 0x2e && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                            SetWindowLongA(arg1, 0, 2)
                        
                        sub_5a6aba(eax_1 ^ &var_64)
                        return 2
                    
                    if (eax_8 == 0x487)
                        if (sub_53d960(eax_7) != 0)
                            sub_53d400(data_3078868, eax_7)
                        
                        sub_5a6aba(eax_1 ^ &var_64)
                        return 1
                    
                    if (eax_8 != 0x488)
                        goto label_53e152
                    
                    data_3078864 = 0
                    sub_5a6aba(eax_1 ^ &var_64)
                    return 1
                
                if (eax_7 != 0xffffffff)
                    data_3078864 = 1
                    data_3078868 = eax_7
                    
                    if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135
                            && arg2 != 0x136 && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39
                            && arg2 != 0x2e && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                        SetWindowLongA(arg1, 0, 1)
                    
                    sub_5a6aba(eax_1 ^ &var_64)
                    return 1
                
                data_3078864 = 0
                
                if (arg2 != 0x132 && arg2 != 0x133 && arg2 != 0x134 && arg2 != 0x135 && arg2 != 0x136
                        && arg2 != 0x137 && arg2 != 0x138 && arg2 != 0x39 && arg2 != 0x2e
                        && arg2 != 0x2f && arg2 != 0x37 && arg2 != 0x110)
                    SetWindowLongA(arg1, 0, 0)
        else
            esi = data_3079208
        label_53de18:
            
            if (esi != 0 && esi[1] == 0x1b)
                int32_t eax_4
                eax_4, ecx_1, edx_1 = sub_543be0(esi)
                
                if (eax_4 != 0)
                    goto label_53de37
    
    sub_5a6aba(eax_1 ^ &var_64)
    return 0
}
