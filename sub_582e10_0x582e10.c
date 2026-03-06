// 函数名称: sub_582e10
// 虚拟地址: 0x582e10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_582e10(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: void var_54
    void var_54
    int32_t eax_1 = __security_cookie ^ &var_54
    HANDLE eax_2 = GetPropA(arg1, "lpInsData")
    data_26a6554 = eax_2
    
    if (arg2 u<= 0x18)
        if (arg2 == 0x18)
            sub_581aa0(arg3, arg1, arg4)
            sub_5a6aba(eax_1 ^ &var_54)
            return 0
        
        if (arg2 - 1 u<= 6)
            switch (arg2)
                case 1
                    BOOL eax_3 = sub_5826f0(arg4, arg1)
                    int32_t eax_4 = neg.d(eax_3)
                    sub_5a6aba(eax_1 ^ &var_54)
                    return neg.d(sbb.d(eax_4, eax_4, eax_3 != 0)) - 1
                case 2
                    sub_582840(arg1)
                    sub_5a6aba(eax_1 ^ &var_54)
                    return 0
                case 5
                    sub_580860(sx.d((arg4 u>> 0x10).w), sx.d(arg4.w))
                    sub_5a6aba(eax_1 ^ &var_54)
                    return 0
                case 7
                    SetFocus(*(eax_2 + 0x14))
                    sub_5a6aba(eax_1 ^ &var_54)
                    return 0
        
        goto label_583472
    
    if (arg2 u> 0x111)
        if (arg2 u> 0x401)
            if (arg2 - 0x402 u<= 3)
                switch (arg2)
                    case 0x402
                        if (arg4 != 0)
                            LPARAM ebx_3 = arg4
                            
                            if (*arg4 != 0)
                                bool cond:5_1
                                
                                do
                                    sub_580f10(ebx_3)
                                    LPARAM eax_50 = ebx_3
                                    int32_t edx_9 = eax_50 + 1
                                    char i
                                    
                                    do
                                        i = *eax_50
                                        eax_50 += 1
                                    while (i != 0)
                                    
                                    int32_t eax_51 = eax_50 - edx_9
                                    cond:5_1 = *(ebx_3 + eax_51 + 1) != i
                                    ebx_3 = ebx_3 + eax_51 + 1
                                while (cond:5_1)
                        else
                            sub_580f10(arg4)
                    case 0x403
                        if (arg3 == 0)
                            DestroyWindow(*(eax_2 + 0xc))
                            *(data_26a6554 + 0xc) = 0
                        else if (*(eax_2 + 0xc) == 0)
                            *eax_2
                            *(data_26a6554 + 0xc) = sub_57cfe0(*(eax_2 + 0x14))
                            void* ecx_78 = data_26a6554
                            
                            if (*(ecx_78 + 0xc) != 0)
                                int32_t var_3c_1 = 0
                                int32_t lParam_1 = 0x2c
                                int32_t var_44
                                __builtin_memset(&var_44, 0, 0x28)
                                int32_t var_40_1 = *(ecx_78 + 0x14)
                                RECT rect
                                GetClientRect(arg1, &rect)
                                SendMessageA(*(data_26a6554 + 0xc), 0x406, 0, &lParam_1)
                                ShowWindow(*(data_26a6554 + 0xc), SW_SHOW)
                    case 0x404
                        if (arg3 == 0)
                            DestroyWindow(*(eax_2 + 0x10))
                            *(data_26a6554 + 0x10) = 0
                        else
                            if (*(eax_2 + 0x10) == 0)
                                *(data_26a6554 + 0x10) = sub_57d0d0(*eax_2, arg2, arg1)
                                eax_2 = data_26a6554
                            
                            ShowWindow(*(eax_2 + 0x10), SW_SHOW)
                        
                        RECT rect_1
                        GetClientRect(arg1, &rect_1)
                        sub_580860(rect_1.bottom - rect_1.top, rect_1.right - rect_1.left)
                    case 0x405
                        int32_t eax_47 = GetWindowLongA(*(eax_2 + 0x14), 0xffffffeb)
                        int32_t dwNewLong
                        
                        if (arg3 == 0)
                            dwNewLong = eax_47 & 0xfffffffe
                        else
                            dwNewLong = eax_47 | 1
                        
                        int32_t eax_49 = SetWindowLongA(*(data_26a6554 + 0x14), 0xffffffeb, dwNewLong)
                        sub_5a6aba(eax_1 ^ &var_54)
                        return eax_49
            
            goto label_583472
        
        if (arg2 == 0x401)
            if (arg4 != 0)
                LPARAM ebx_2 = arg4
                
                if (*arg4 != 0)
                    bool cond:6_1
                    
                    do
                        sub_580e60(ebx_2)
                        LPARAM eax_45 = ebx_2
                        int32_t edx_7 = eax_45 + 1
                        char i_1
                        
                        do
                            i_1 = *eax_45
                            eax_45 += 1
                        while (i_1 != 0)
                        
                        int32_t eax_46 = eax_45 - edx_7
                        cond:6_1 = *(ebx_2 + eax_46 + 1) != i_1
                        ebx_2 = ebx_2 + eax_46 + 1
                    while (cond:6_1)
            else
                sub_580e60(arg4)
            
            goto label_583472
        
        if (arg2 - 0x134 u> 0xce)
            goto label_583472
        
        uint32_t Msg
        WPARAM wParam
        LPARAM lParam
        
        switch (arg2)
            case 0x134
                int32_t eax_21 = sub_580d60(arg3)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_21
            case 0x135, 0x136, 0x137, 0x139, 0x13a, 0x13b, 0x13c, 0x13d, 0x13e, 0x13f, 0x140, 0x141, 
                    0x142, 0x143, 0x144, 0x145, 0x146, 0x147, 0x148, 0x149, 0x14a, 0x14b, 0x14c, 0x14d, 
                    0x14e, 0x14f, 0x150, 0x151, 0x152, 0x153, 0x154, 0x155, 0x156, 0x157, 0x158, 0x159, 
                    0x15a, 0x15b, 0x15c, 0x15d, 0x15e, 0x15f, 0x160, 0x161, 0x162, 0x163, 0x164, 0x165, 
                    0x166, 0x167, 0x168, 0x169, 0x16a, 0x16b, 0x16c, 0x16d, 0x16e, 0x16f, 0x170, 0x171, 
                    0x172, 0x173, 0x174, 0x175, 0x176, 0x177, 0x178, 0x179, 0x17a, 0x17b, 0x17c, 0x17d, 
                    0x17e, 0x17f, 0x181, 0x183, 0x185, 0x189, 0x18a, 0x18c, 0x18d, 0x18e, 0x18f, 0x190, 
                    0x191, 0x192, 0x195, 0x196, 0x197, 0x19b, 0x19c, 0x19d, 0x19e, 0x19f, 0x1a2, 0x1a3, 
                    0x1a4, 0x1a5, 0x1a6, 0x1a7, 0x1a8, 0x1a9, 0x1aa, 0x1ab, 0x1ac, 0x1ad, 0x1ae, 0x1af, 
                    0x1b0, 0x1b1, 0x1b2, 0x1b3, 0x1b4, 0x1b5, 0x1b6, 0x1b7, 0x1b8, 0x1b9, 0x1ba, 0x1bb, 
                    0x1bc, 0x1bd, 0x1be, 0x1bf, 0x1c0, 0x1c1, 0x1c2, 0x1c3, 0x1c4, 0x1c5, 0x1c6, 0x1c7, 
                    0x1c8, 0x1c9, 0x1ca, 0x1cb, 0x1cc, 0x1cd, 0x1ce, 0x1cf, 0x1d0, 0x1d1, 0x1d2, 0x1d3, 
                    0x1d4, 0x1d5, 0x1d6, 0x1d7, 0x1d8, 0x1d9, 0x1da, 0x1db, 0x1dc, 0x1dd, 0x1de, 0x1df, 
                    0x1e0, 0x1e1, 0x1e2, 0x1e3, 0x1e4, 0x1e5, 0x1e6, 0x1e7, 0x1e8, 0x1e9, 0x1ea, 0x1eb, 
                    0x1ec, 0x1ed, 0x1ee, 0x1ef, 0x1f0, 0x1f1, 0x1f2, 0x1f3, 0x1f4, 0x1f5, 0x1f6, 0x1f7, 
                    0x1f8, 0x1f9, 0x1fa, 0x1fb, 0x1fc, 0x1fd, 0x1fe, 0x1ff
                goto label_583472
            case 0x138
                if (*(eax_2 + 0x10) != 0)
                    LRESULT eax_22 = sub_580db0(eax_2, arg2, arg4, arg1, arg3)
                    sub_5a6aba(eax_1 ^ &var_54)
                    return eax_22
                
                lParam = arg4
                wParam = arg3
                Msg = 0x138
            case 0x180
                LRESULT eax_28 = sub_581af0(arg4)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_28
            case 0x182
                LRESULT eax_29 = sub_581e20(arg3)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_29
            case 0x184
                sub_582290()
            label_583472:
                lParam = arg4
                wParam = arg3
                Msg = arg2
            case 0x186
                LRESULT eax_39 = sub_582320(arg3)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_39
            case 0x187
                LRESULT eax_38 = sub_582220(arg3)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_38
            case 0x188
                LRESULT eax_32 = sub_581e90()
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_32
            case 0x18b
                LRESULT eax_31 = SendMessageA(*(eax_2 + 0x18), 0x18b, 0, 0)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_31
            case 0x193
                LRESULT eax_33 = SendMessageA(*(eax_2 + 0x14), 0x193, 0, 0)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_33
            case 0x194
                SendMessageA(*(eax_2 + 0x14), 0x194, arg3, 0)
                goto label_583472
            case 0x198
                LRESULT eax_37 = SendMessageA(*(eax_2 + 0x14), 0x198, arg3, arg4)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_37
            case 0x199
                int32_t eax_34 = sub_581ef0(arg3)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_34
            case 0x19a
                LRESULT eax_40 = sub_5823f0(eax_2, arg2, arg4, arg3)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_40
            case 0x1a0
                if (0x14 u> arg4.w)
                    sub_5a6aba(eax_1 ^ &var_54)
                    return 0xffffffff
                
                LRESULT eax_42 = SendMessageA(*(eax_2 + 0x14), arg2, arg3, arg4)
                RedrawWindow(*(data_26a6554 + 0x14), nullptr, nullptr, 
                    RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_42
            case 0x1a1
                LRESULT eax_35 = SendMessageA(*(eax_2 + 0x14), 0x1a1, arg3, 0)
                sub_5a6aba(eax_1 ^ &var_54)
                return eax_35
            case 0x200
                sub_580c20(arg1, sx.d((arg4 u>> 0x10).w))
                sub_5a6aba(eax_1 ^ &var_54)
                return 0
            case 0x201
                int32_t ecx_33 = sx.d((arg4 u>> 0x10).w)
                
                if (ecx_33 s>= *(eax_2 + 0x28) - 5)
                    sub_5809e0(ecx_33, arg1)
                
                sub_5a6aba(eax_1 ^ &var_54)
                return 0
            case 0x202
                if (*(eax_2 + 0x40) == 0)
                    sub_5a6aba(eax_1 ^ &var_54)
                    return 0
                
                int32_t eax_24 = sx.d((arg4 u>> 0x10).w)
                sub_580b10(eax_24, arg2, arg1, eax_24)
                sub_5a6aba(eax_1 ^ &var_54)
                return 0
        
        LRESULT eax_56 = DefWindowProcA(arg1, Msg, wParam, lParam)
        sub_5a6aba(eax_1 ^ &var_54)
        return eax_56
    
    if (arg2 == 0x111)
        if (*(eax_2 + 0x14) == arg4)
            sub_580fc0(arg4, arg3 u>> 0x10)
        
        sub_5a6aba(eax_1 ^ &var_54)
        return 0
    
    if (arg2 - 0x20 u> 0xd)
        goto label_583472
    
    switch (arg2 + &jump_table_583514[4])
        case &lookup_table_583544
            if (*(eax_2 + 4) == 0)
                sub_5a6aba(eax_1 ^ &var_54)
                return 0
            
            sub_580990()
            sub_5a6aba(eax_1 ^ &var_54)
            return 0
        case &lookup_table_583544[1], &lookup_table_583544[2], &lookup_table_583544[3], 
                &lookup_table_583544[4], &lookup_table_583544[5], &lookup_table_583544[6], 
                &lookup_table_583544[7], &lookup_table_583544[8], &lookup_table_583544[9], 
                &lookup_table_583544[0xa]
            goto label_583472
        case &lookup_table_583544[0xb]
            sub_581150()
            sub_5a6aba(eax_1 ^ &var_54)
            return 0
        case &lookup_table_583544[0xc]
            *(arg4 + 0x10) = MulDiv(0x14, GetDeviceCaps(GetDC(arg1), 0x5a), 0x60)
            sub_5a6aba(eax_1 ^ &var_54)
            return 0
        case &lookup_table_583544[0xd]
            sub_57cbc0(arg4)
            sub_5a6aba(eax_1 ^ &var_54)
            return 0
}
