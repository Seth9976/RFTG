// 函数名称: sub_5db530
// 虚拟地址: 0x5db530
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_5db530(HWND arg1, uint32_t arg2, uint32_t arg3)
{
    // 第一条实际指令: LRESULT result_1 = 0xffffffff
    LRESULT result_1 = 0xffffffff
    int32_t edi = 1
    int16_t var_40
    int16_t var_3c
    RECT rect
    LPARAM lParam
    
    if (sub_5c7830(0x201, 0xffffffff) == 1)
        LPARAM lParam_3 = lParam
        rect.top = arg2
        var_40 = 2
        char var_3e_1 = 1
        var_3c = 1
        rect.left = arg1
        rect.right = arg3
        rect.bottom = lParam_3
        sub_5c7940(&var_40)
    
    HANDLE eax_2 = GetPropW(arg1, u"SDL_WindowData")
    
    if (eax_2 == 0)
        return CallWindowProcW(DefWindowProcW, arg1, arg2, arg3, lParam)
    
    int32_t eax_4
    int32_t edx_4
    eax_4, edx_4 = sub_602830(arg1, arg2, arg3, &lParam, *(eax_2 + 0x20))
    
    if (eax_4 != 0)
        return 0
    
    if (arg2 u> 0xf)
        int32_t var_18
        int32_t var_14
        int32_t point
        int32_t var_c
        
        if (arg2 u> 0x112)
            int32_t __saved_edi
            
            if (arg2 - 0x200 u<= 0xa3)
                switch (arg2)
                    case 0x200
                        if (data_bf7f98 == 0)
                            LPARAM lParam_2 = lParam
                            sub_5d5910(*eax_2, 0, 0, sx.d(lParam_2.w), sx.d((lParam_2 u>> 0x10).w))
                        
                        goto label_5dbde1
                    case 0x201, 0x202, 0x204, 0x205, 0x207, 0x208, 0x20b, 0x20c
                    label_5dbde1:
                        
                        if (data_bf7f98 == 0)
                            sub_5db350(arg3, eax_2)
                    case 0x20a
                        int32_t eax_80
                        eax_80.w = data_bf7fd0
                        eax_80.w += (arg3 u>> 0x10).w
                        data_bf7fd0 = eax_80.w
                        
                        if (eax_80.w s<= 0xff88)
                            int16_t i
                            
                            do
                                sub_5d5a70(*eax_2, 0, 0, 0xffffffff)
                                i = data_bf7fd0 + 0x78
                                data_bf7fd0 = i
                            while (i s<= 0xff88)
                        
                        if (eax_80.w s>= 0x78)
                            int16_t i_1
                            
                            do
                                sub_5d5a70(*eax_2, 0, 0, 1)
                                i_1 = data_bf7fd0 - 0x78
                                data_bf7fd0 = i_1
                            while (i_1 s>= 0x78)
                    case 0x233
                        uint32_t eax_106 = DragQueryFileW(arg3, 0xffffffff, nullptr, 0)
                        uint32_t iFile = 0
                        
                        if (eax_106 != 0)
                            do
                                uint32_t cch = DragQueryFileW(arg3, iFile, nullptr, 0) + 1
                                __alloca_probe_16(cch * 2)
                                
                                if (&__saved_edi != 0
                                        && DragQueryFileW(arg3, iFile, &__saved_edi, cch) != 0)
                                    int32_t var_16c_41 = sub_5cd1d0(&__saved_edi) * 2 + 2
                                    int32_t* var_170_21 = &__saved_edi
                                    char* eax_112 = sub_5dd160("UTF-8", "UTF-16LE")
                                    sub_610e70(eax_112)
                                    char* var_180_3 = eax_112
                                    sub_5d0af0()
                                
                                iFile += 1
                            while (iFile u< eax_106)
                        
                        DragFinish(arg3)
                        return 0
                    case 0x240
                        uint32_t edi_2 = zx.d(arg3.w)
                        __alloca_probe_16(edi_2 * 0x28)
                        
                        if ((*(*(eax_2 + 0x20) + 0x10))(lParam, edi_2, &__saved_edi, 0x28) == 0)
                            (*(*(eax_2 + 0x20) + 0xc))(lParam)
                            return 0
                        
                        if (GetClientRect(arg1, &var_18) != 0 && (point != var_18 || var_c != var_14))
                            ClientToScreen(arg1, &var_18)
                            ClientToScreen(arg1, &point)
                            int32_t eax_96 = var_14 * 0x64
                            int32_t point_1 = point * 0x64
                            var_18 *= 0x64
                            point = point_1
                            
                            if (edi_2 != 0)
                                void var_154
                                void* esi_8 = &var_154
                                arg2 = edi_2
                                uint32_t i_2
                                
                                do
                                    int32_t edi_3 = *(esi_8 - 8)
                                    int32_t eax_98 = sub_5da6a0(edi_3, 0)
                                    int32_t eax_99
                                    
                                    if (eax_98 == 0)
                                        char* const var_168_45 = &data_83f3d3
                                        eax_99 = sub_5da750(edi_3, eax_98)
                                    
                                    if (eax_98 != 0 || eax_99 s>= 0)
                                        int32_t eax_100 = var_18
                                        arg1 = fconvert.s(float.t(*(esi_8 - 0x10) - eax_100)
                                            / float.t(point - eax_100))
                                        arg3 = fconvert.s(float.t(*(esi_8 - 0xc) - eax_96)
                                            / float.t(var_c * 0x64 - eax_96))
                                        
                                        if ((*esi_8 & 2) != 0)
                                            sub_5da8d0(edi_3, 0, *(esi_8 - 4), 0, 1, 
                                                fconvert.s(fconvert.t(arg1)), 
                                                fconvert.s(fconvert.t(arg3)), fconvert.s(float.t(1)))
                                        
                                        if ((*esi_8 & 1) != 0)
                                            sub_5daa40(edi_3, 0, *(esi_8 - 4), 0, 
                                                fconvert.s(fconvert.t(arg1)), 
                                                fconvert.s(fconvert.t(arg3)), fconvert.s(float.t(1)))
                                        
                                        if ((*esi_8 & 4) != 0)
                                            sub_5da8d0(edi_3, 0, *(esi_8 - 4), 0, 0, 
                                                fconvert.s(fconvert.t(arg1)), 
                                                fconvert.s(fconvert.t(arg3)), fconvert.s(float.t(1)))
                                    
                                    esi_8 += 0x28
                                    i_2 = arg2
                                    arg2 -= 1
                                while (i_2 != 1)
                            
                            (*(*(eax_2 + 0x20) + 0xc))(lParam)
                            return 0
                    case 0x2a3
                        if (sub_5d5520() == *eax_2 && data_bf7f98 == 0)
                            GetCursorPos(&point)
                            ScreenToClient(arg1, &point)
                            sub_5d5910(*eax_2, 0, 0, point, var_c)
                            sub_5d5830(nullptr)
                        
                        result_1 = 0
            goto label_5db807
        
        if (arg2 == 0x112)
            int32_t eax_77 = arg3 & 0xfff0
            
            if (eax_77 != 0xf140 && eax_77 != 0xf170)
                goto label_5db807
            
            if (*(sub_5c8d70() + 0xe4) == 0)
                goto label_5db807
            
            return 0
        
        if (arg2 - 0x10 u> 0xf9)
            goto label_5db807
        
        uint32_t var_1c
        
        switch (arg2 + &jump_table_5dc164[9])
            case &lookup_table_5dc198
                int32_t var_168_36 = 0
                int32_t var_16c_26 = 0
                sub_5d6e90(*eax_2, 0xe, 0, 0)
            case &lookup_table_5dc198[1], &lookup_table_5dc198[2], &lookup_table_5dc198[3], 
                    &lookup_table_5dc198[5], &lookup_table_5dc198[6], &lookup_table_5dc198[7], 
                    &lookup_table_5dc198[9], &lookup_table_5dc198[0xa], &lookup_table_5dc198[0xb], 
                    &lookup_table_5dc198[0xc], &lookup_table_5dc198[0xd], &lookup_table_5dc198[0xe], 
                    &lookup_table_5dc198[0xf], &lookup_table_5dc198[0x11], &lookup_table_5dc198[0x12], 
                    &lookup_table_5dc198[0x13], &lookup_table_5dc198[0x15], &lookup_table_5dc198[0x16], 
                    &lookup_table_5dc198[0x17], &lookup_table_5dc198[0x18], &lookup_table_5dc198[0x19], 
                    &lookup_table_5dc198[0x1a], &lookup_table_5dc198[0x1b], &lookup_table_5dc198[0x1c], 
                    &lookup_table_5dc198[0x1d], &lookup_table_5dc198[0x1e], &lookup_table_5dc198[0x1f], 
                    &lookup_table_5dc198[0x20], &lookup_table_5dc198[0x21], &lookup_table_5dc198[0x22], 
                    &lookup_table_5dc198[0x23], &lookup_table_5dc198[0x24], &lookup_table_5dc198[0x25], 
                    &lookup_table_5dc198[0x26], &lookup_table_5dc198[0x27], &lookup_table_5dc198[0x28], 
                    &lookup_table_5dc198[0x29], &lookup_table_5dc198[0x2a], &lookup_table_5dc198[0x2b], 
                    &lookup_table_5dc198[0x2c], &lookup_table_5dc198[0x2d], &lookup_table_5dc198[0x2e], 
                    &lookup_table_5dc198[0x2f], &lookup_table_5dc198[0x30], &lookup_table_5dc198[0x31], 
                    &lookup_table_5dc198[0x32], &lookup_table_5dc198[0x33], &lookup_table_5dc198[0x34], 
                    &lookup_table_5dc198[0x35], &lookup_table_5dc198[0x36], &lookup_table_5dc198[0x38], 
                    &lookup_table_5dc198[0x39], &lookup_table_5dc198[0x3a], &lookup_table_5dc198[0x3b], 
                    &lookup_table_5dc198[0x3c], &lookup_table_5dc198[0x3d], &lookup_table_5dc198[0x3e], 
                    &lookup_table_5dc198[0x3f], &lookup_table_5dc198[0x40], &lookup_table_5dc198[0x42], 
                    &lookup_table_5dc198[0x43], &lookup_table_5dc198[0x44], &lookup_table_5dc198[0x45], 
                    &lookup_table_5dc198[0x46], &lookup_table_5dc198[0x47], &lookup_table_5dc198[0x48], 
                    &lookup_table_5dc198[0x49], &lookup_table_5dc198[0x4a], &lookup_table_5dc198[0x4b], 
                    &lookup_table_5dc198[0x4c], &lookup_table_5dc198[0x4d], &lookup_table_5dc198[0x4e], 
                    &lookup_table_5dc198[0x4f], &lookup_table_5dc198[0x50], &lookup_table_5dc198[0x51], 
                    &lookup_table_5dc198[0x52], &lookup_table_5dc198[0x53], &lookup_table_5dc198[0x54], 
                    &lookup_table_5dc198[0x55], &lookup_table_5dc198[0x56], &lookup_table_5dc198[0x57], 
                    &lookup_table_5dc198[0x58], &lookup_table_5dc198[0x59], &lookup_table_5dc198[0x5a], 
                    &lookup_table_5dc198[0x5b], &lookup_table_5dc198[0x5c], &lookup_table_5dc198[0x5d], 
                    &lookup_table_5dc198[0x5e], &lookup_table_5dc198[0x5f], &lookup_table_5dc198[0x60], 
                    &lookup_table_5dc198[0x61], &lookup_table_5dc198[0x62], &lookup_table_5dc198[0x63], 
                    &lookup_table_5dc198[0x64], &lookup_table_5dc198[0x65], &lookup_table_5dc198[0x66], 
                    &lookup_table_5dc198[0x67], &lookup_table_5dc198[0x68], &lookup_table_5dc198[0x69], 
                    &lookup_table_5dc198[0x6a], &lookup_table_5dc198[0x6b], &lookup_table_5dc198[0x6c], 
                    &lookup_table_5dc198[0x6d], &lookup_table_5dc198[0x6e], &lookup_table_5dc198[0x6f], 
                    &lookup_table_5dc198[0x70], &lookup_table_5dc198[0x71], &lookup_table_5dc198[0x72], 
                    &lookup_table_5dc198[0x73], &lookup_table_5dc198[0x74], &lookup_table_5dc198[0x75], 
                    &lookup_table_5dc198[0x76], &lookup_table_5dc198[0x77], &lookup_table_5dc198[0x78], 
                    &lookup_table_5dc198[0x79], &lookup_table_5dc198[0x7a], &lookup_table_5dc198[0x7b], 
                    &lookup_table_5dc198[0x7c], &lookup_table_5dc198[0x7d], &lookup_table_5dc198[0x7e], 
                    &lookup_table_5dc198[0x7f], &lookup_table_5dc198[0x80], &lookup_table_5dc198[0x81], 
                    &lookup_table_5dc198[0x82], &lookup_table_5dc198[0x83], &lookup_table_5dc198[0x84], 
                    &lookup_table_5dc198[0x85], &lookup_table_5dc198[0x86], &lookup_table_5dc198[0x87], 
                    &lookup_table_5dc198[0x88], &lookup_table_5dc198[0x89], &lookup_table_5dc198[0x8a], 
                    &lookup_table_5dc198[0x8b], &lookup_table_5dc198[0x8c], &lookup_table_5dc198[0x8d], 
                    &lookup_table_5dc198[0x8e], &lookup_table_5dc198[0x8f], &lookup_table_5dc198[0x90], 
                    &lookup_table_5dc198[0x91], &lookup_table_5dc198[0x92], &lookup_table_5dc198[0x93], 
                    &lookup_table_5dc198[0x94], &lookup_table_5dc198[0x95], &lookup_table_5dc198[0x96], 
                    &lookup_table_5dc198[0x97], &lookup_table_5dc198[0x98], &lookup_table_5dc198[0x99], 
                    &lookup_table_5dc198[0x9a], &lookup_table_5dc198[0x9b], &lookup_table_5dc198[0x9c], 
                    &lookup_table_5dc198[0x9d], &lookup_table_5dc198[0x9e], &lookup_table_5dc198[0x9f], 
                    &lookup_table_5dc198[0xa0], &lookup_table_5dc198[0xa1], &lookup_table_5dc198[0xa2], 
                    &lookup_table_5dc198[0xa3], &lookup_table_5dc198[0xa4], &lookup_table_5dc198[0xa5], 
                    &lookup_table_5dc198[0xa6], &lookup_table_5dc198[0xa7], &lookup_table_5dc198[0xa8], 
                    &lookup_table_5dc198[0xa9], &lookup_table_5dc198[0xaa], &lookup_table_5dc198[0xab], 
                    &lookup_table_5dc198[0xac], &lookup_table_5dc198[0xad], &lookup_table_5dc198[0xae], 
                    &lookup_table_5dc198[0xaf], &lookup_table_5dc198[0xb0], &lookup_table_5dc198[0xb1], 
                    &lookup_table_5dc198[0xb2], &lookup_table_5dc198[0xb3], &lookup_table_5dc198[0xb4], 
                    &lookup_table_5dc198[0xb5], &lookup_table_5dc198[0xb6], &lookup_table_5dc198[0xb7], 
                    &lookup_table_5dc198[0xb8], &lookup_table_5dc198[0xb9], &lookup_table_5dc198[0xba], 
                    &lookup_table_5dc198[0xbb], &lookup_table_5dc198[0xbc], &lookup_table_5dc198[0xbd], 
                    &lookup_table_5dc198[0xbe], &lookup_table_5dc198[0xbf], &lookup_table_5dc198[0xc0], 
                    &lookup_table_5dc198[0xc1], &lookup_table_5dc198[0xc2], &lookup_table_5dc198[0xc3], 
                    &lookup_table_5dc198[0xc4], &lookup_table_5dc198[0xc5], &lookup_table_5dc198[0xc6], 
                    &lookup_table_5dc198[0xc7], &lookup_table_5dc198[0xc8], &lookup_table_5dc198[0xc9], 
                    &lookup_table_5dc198[0xca], &lookup_table_5dc198[0xcb], &lookup_table_5dc198[0xcc], 
                    &lookup_table_5dc198[0xcd], &lookup_table_5dc198[0xce], &lookup_table_5dc198[0xcf], 
                    &lookup_table_5dc198[0xd0], &lookup_table_5dc198[0xd1], &lookup_table_5dc198[0xd2], 
                    &lookup_table_5dc198[0xd3], &lookup_table_5dc198[0xd4], &lookup_table_5dc198[0xd5], 
                    &lookup_table_5dc198[0xd6], &lookup_table_5dc198[0xd7], &lookup_table_5dc198[0xd8], 
                    &lookup_table_5dc198[0xd9], &lookup_table_5dc198[0xda], &lookup_table_5dc198[0xdb], 
                    &lookup_table_5dc198[0xdc], &lookup_table_5dc198[0xdd], &lookup_table_5dc198[0xde], 
                    &lookup_table_5dc198[0xdf], &lookup_table_5dc198[0xe0], &lookup_table_5dc198[0xe1], 
                    &lookup_table_5dc198[0xe2], &lookup_table_5dc198[0xe3], &lookup_table_5dc198[0xe4], 
                    &lookup_table_5dc198[0xe5], &lookup_table_5dc198[0xe6], &lookup_table_5dc198[0xe7], 
                    &lookup_table_5dc198[0xe8], &lookup_table_5dc198[0xe9], &lookup_table_5dc198[0xea], 
                    &lookup_table_5dc198[0xeb], &lookup_table_5dc198[0xec], &lookup_table_5dc198[0xed], 
                    &lookup_table_5dc198[0xee], &lookup_table_5dc198[0xf3], &lookup_table_5dc198[0xf6], 
                    &lookup_table_5dc198[0xf7], &lookup_table_5dc198[0xf8]
                goto label_5db807
            case &lookup_table_5dc198[4]
                return 1
            case &lookup_table_5dc198[8]
                int32_t* var_174_11
                char var_170_9
                
                if (arg3 == 0)
                    var_170_9 = 2
                    var_174_11 = *eax_2
                else
                    var_170_9 = 1
                    var_174_11 = *eax_2
                
                sub_5d6e90(var_174_11, var_170_9, 0, 0)
                goto label_5db807
            case &lookup_table_5dc198[0x10]
                if (lParam.w == 1)
                    SetCursor(data_bf7ff8)
                    result_1 = 1
                
                goto label_5db807
            case &lookup_table_5dc198[0x14]
                if (sub_610ec0(*eax_2) != 0)
                    sub_603470(*eax_2)
                
                GetWindowRect(arg1, &rect)
                int32_t left = rect.left
                int32_t top_1 = rect.top
                int32_t var_20
                sub_5c9bb0(*eax_2, &result_1, &var_20)
                int32_t var_54
                sub_5c9c00(*eax_2, &var_54, &var_1c)
                int32_t var_28
                int32_t var_24
                sub_5c9c50(*eax_2, &var_28, &var_24)
                LRESULT result_2 = result_1
                int32_t ecx_35 = var_20
                var_54 -= result_2
                var_1c -= ecx_35
                
                if (var_28 == 0 || var_24 == 0)
                    edi = 0
                else
                    var_28 -= result_2
                    var_24 -= ecx_35
                
                rect.right = result_2
                rect.top = 0
                rect.left = 0
                rect.bottom = ecx_35
                enum WINDOW_STYLE dwStyle = GetWindowLongW(arg1, 0xfffffff0)
                int32_t bMenu
                
                if ((dwStyle & 0x40000000) == 0)
                    HMENU eax_57 = GetMenu(arg1)
                    int32_t eax_58 = neg.d(eax_57)
                    bMenu = neg.d(sbb.d(eax_58, eax_58, eax_57 != 0))
                else
                    bMenu = 0
                
                AdjustWindowRectEx(&rect, dwStyle, bMenu, WS_EX_LEFT)
                int32_t ecx_38 = rect.bottom - rect.top
                int32_t* edx_34 = *eax_2
                LPARAM lParam_4 = lParam
                result_1 = rect.right - rect.left
                var_20 = ecx_38
                
                if ((sub_5c9760(edx_34) & 0x20) == 0)
                    *(lParam_4 + 8) = result_1
                    *(lParam_4 + 0xc) = var_20
                    *(lParam_4 + 0x10) = left
                    *(lParam_4 + 0x14) = top_1
                    *(lParam_4 + 0x18) = result_1
                    *(lParam_4 + 0x1c) = var_20
                    *(lParam_4 + 0x20) = result_1
                    *(lParam_4 + 0x24) = var_20
                    result_1 = 0
                else
                    *(lParam_4 + 0x18) = var_54 + result_1
                    *(lParam_4 + 0x1c) = var_1c + var_20
                    
                    if (edi == 0)
                        result_1 = 0
                    else
                        *(lParam_4 + 0x20) = var_28 + result_1
                        *(lParam_4 + 0x24) = var_24 + var_20
                        result_1 = 0
                
                goto label_5db807
            case &lookup_table_5dc198[0x37]
                if (GetClientRect(arg1, &var_18) != 0 && (point != var_18 || var_c != var_14))
                    ClientToScreen(arg1, &var_18)
                    ClientToScreen(arg1, &point)
                    int32_t eax_70 = sub_5c9760(*eax_2)
                    
                    if ((eax_70 & 0x100) != 0 && (eax_70 & 0x200) != 0)
                        ClipCursor(&var_18)
                    
                    sub_5d6e90(*eax_2, 4, var_18, var_14)
                    sub_5d6e90(*eax_2, 5, point - var_18, var_c - var_14)
                
                goto label_5db807
            case &lookup_table_5dc198[0x41]
                sub_601630()
                result_1 = 1
                goto label_5db807
            case &lookup_table_5dc198[0xef]
                LPARAM hRawInput = lParam
                var_1c = 0x28
                
                if (data_bf7f98 != 0)
                    int32_t data
                    GetRawInputData(hRawInput, RID_INPUT, &data, &var_1c, 0x10)
                    
                    if (data == 0)
                        int32_t right = rect.right
                        int32_t top = rect.top
                        
                        if ((var_40.b & 1) != 0)
                            int32_t top_2 = data_bf7fd4
                            
                            if (top_2 == 0 && data_bf7fd8 == top_2)
                                top_2 = top
                                data_bf7fd4 = top_2
                                data_bf7fd8 = right
                            
                            sub_5d5910(*eax_2, 0, 1, top - top_2, right - data_bf7fd8)
                            int32_t right_1 = rect.right
                            data_bf7fd4 = rect.top
                            data_bf7fd8 = right_1
                        else
                            sub_5d5910(*eax_2, 0, 1, top, right)
                        
                        sub_5db3e0(zx.d(var_3c), eax_2)
                
                goto label_5db807
            case &lookup_table_5dc198[0xf0], &lookup_table_5dc198[0xf4]
                uint32_t eax_47 = sub_5dae30(arg2 - 0x10, edx_4, lParam, arg3)
                
                if (eax_47 != 0)
                    sub_5d0bb0(1, eax_47)
                
                if (arg2 == 0x100)
                    var_1c = 0
                    uint8_t keyState
                    GetKeyboardState(&keyState)
                    
                    if (ToUnicode(arg3, zx.d((lParam s>> 0x10).b), &keyState, &var_1c, 1, 0) s> 0)
                        int16_t lParam_1 = lParam.w
                        uint32_t lParam_5 = zx.d(lParam_1)
                        
                        if (lParam_1 u> 0)
                            do
                                uint32_t eax_50 = var_1c
                                
                                if (eax_50 u<= 0x7f)
                                    point.b = eax_50.b
                                    point:1.b = 0
                                else if (eax_50 u<= 0x7ff)
                                    uint8_t ecx_22 = ((eax_50 u>> 6).b & 0x1f) | 0xc0
                                    eax_50.b &= 0x3f
                                    eax_50.b |= 0x80
                                    point.b = ecx_22
                                    point:1.b = eax_50.b
                                    point:2.b = 0
                                else
                                    uint8_t ecx_24
                                    
                                    if (eax_50 u<= 0xffff)
                                        ecx_24 = (eax_50 u>> 6).b & 0x3f
                                        uint8_t edx_21 = ((eax_50 u>> 0xc).b & 0xf) | 0xe0
                                        eax_50.b &= 0x3f
                                        eax_50.b |= 0x80
                                        point.b = edx_21
                                        point:2.b = eax_50.b
                                        point:3.b = 0
                                        point:1.b = ecx_24 | 0x80
                                    else if (eax_50 u<= 0x10ffff)
                                        point.b = (eax_50 u>> 0x12).b | 0xf0
                                        ecx_24 = (eax_50 u>> 0xc).b & 0x3f
                                        uint8_t edx_25 = ((eax_50 u>> 6).b & 0x3f) | 0x80
                                        eax_50.b &= 0x3f
                                        eax_50.b |= 0x80
                                        point:2.b = edx_25
                                        point:3.b = eax_50.b
                                        var_c.b = 0
                                        point:1.b = ecx_24 | 0x80
                                
                                sub_5d0f40(&point)
                                lParam_5 += 0xffff
                            while (lParam_5.w u> 0)
                
                result_1 = 0
                goto label_5db807
            case &lookup_table_5dc198[0xf1], &lookup_table_5dc198[0xf5]
                uint32_t eax_51 = sub_5dae30(arg2 - 0x10, edx_4, lParam, arg3)
                
                if (eax_51 != 0)
                    if (eax_51 == 0x46)
                        sub_5d1040(nullptr)
                        
                        if (data_beddb4 == 0)
                            sub_5d0bb0(1, eax_51)
                    
                    sub_5d0bb0(0, eax_51)
                
                result_1 = 0
                goto label_5db807
            case &lookup_table_5dc198[0xf2]
            label_5dba6f:
                
                if (arg3 u<= 0x7f)
                    point.b = arg3.b
                    point:1.b = 0
                else
                    uint32_t eax_52
                    
                    if (arg3 u<= 0x7ff)
                        eax_52.b = arg3.b & 0x3f
                        eax_52.b |= 0x80
                        point.b = ((arg3 u>> 6).b & 0x1f) | 0xc0
                        point:1.b = eax_52.b
                        point:2.b = 0
                    else if (arg3 u<= 0xffff)
                        eax_52.b = arg3.b & 0x3f
                        eax_52.b |= 0x80
                        point.b = ((arg3 u>> 0xc).b & 0xf) | 0xe0
                        point:2.b = eax_52.b
                        point:3.b = 0
                        point:1.b = ((arg3 u>> 6).b & 0x3f) | 0x80
                    else if (arg3 u<= 0x10ffff)
                        point.b = (arg3 u>> 0x12).b | 0xf0
                        eax_52.b = arg3.b & 0x3f
                        eax_52.b |= 0x80
                        point:2.b = ((arg3 u>> 6).b & 0x3f) | 0x80
                        point:3.b = eax_52.b
                        var_c.b = 0
                        point:1.b = ((arg3 u>> 0xc).b & 0x3f) | 0x80
                
                sub_5d0f40(&point)
                result_1 = 0
                goto label_5db807
            case &lookup_table_5dc198[0xf9]
                if (arg3 != 0xffff)
                    goto label_5dba6f
                
                result_1 = 1
                goto label_5db807
    else if (arg2 == 0xf)
        if (GetUpdateRect(arg1, &rect, 0) != 0)
            ValidateRect(arg1, nullptr)
            sub_5d6e90(*eax_2, 3, 0, 0)
            result_1 = 0
        label_5db807:
            LRESULT (__stdcall* lpPrevWndFunc)(HWND hWnd, uint32_t Msg, WPARAM wParam, LPARAM lParam) =
                *(eax_2 + 0x14)
            
            if (lpPrevWndFunc != 0)
                return CallWindowProcW(lpPrevWndFunc, arg1, arg2, arg3, lParam)
            
            LRESULT result = result_1
            
            if (result s>= 0)
                return result
            
            return CallWindowProcW(DefWindowProcW, arg1, arg2, arg3, lParam)
    else
        if (arg2 != 6)
            goto label_5db807
        
        uint32_t esi_2 = arg3 u>> 0x10
        
        if (esi_2 == 0 && arg3.w != 0)
            sub_5d6e90(*eax_2, 1, esi_2, esi_2)
            sub_5d6e90(*eax_2, 9, esi_2, esi_2)
            
            if (IsZoomed(arg1) != 0)
                sub_5d6e90(*eax_2, 8, esi_2, esi_2)
            
            int32_t* esi_3 = *eax_2
            
            if (sub_5d0ba0() != esi_3)
                sub_5d1090(esi_3)
            
            int32_t eax_11 = sub_5d5680(nullptr, nullptr)
            sub_5db300(zx.d(GetAsyncKeyState(1)) & 0x8000, eax_11 & 1, eax_2, 1)
            sub_5db300(zx.d(GetAsyncKeyState(2)) & 0x8000, eax_11 & 4, eax_2, 3)
            sub_5db300(zx.d(GetAsyncKeyState(4)) & 0x8000, eax_11 & 2, eax_2, 2)
            sub_5db300(zx.d(GetAsyncKeyState(5)) & 0x8000, eax_11 & 8, eax_2, 4)
            sub_5db300(zx.d(GetAsyncKeyState(6)) & 0x8000, eax_11 & 0x10, eax_2, 5)
            *(eax_2 + 0x1c) = 0
            
            if (data_bf7f98 != 0)
                GetWindowRect(arg1, &rect)
                int32_t eax_29
                int32_t edx_10
                edx_10:eax_29 = sx.q(rect.left + rect.right)
                int32_t ecx_11 = (eax_29 - edx_10) s>> 1
                int32_t eax_33
                int32_t edx_11
                edx_11:eax_33 = sx.q(rect.bottom + rect.top)
                int32_t eax_35 = (eax_33 - edx_11) s>> 1
                rect.left = ecx_11 - 1
                rect.right = ecx_11 + 1
                rect.top = eax_35 - 1
                rect.bottom = eax_35 + 1
                ClipCursor(&rect)
            
            sub_603340(*(eax_2 + 0x20))
            result_1 = 0
            goto label_5db807
        
        if (sub_5d0ba0() == *eax_2)
            sub_5d1090(nullptr)
        
        if (esi_2 != 0)
            int32_t var_168_11 = 0
            int32_t var_16c_11 = 0
            sub_5d6e90(*eax_2, 7, 0, 0)
    
    result_1 = 0
    goto label_5db807
}
