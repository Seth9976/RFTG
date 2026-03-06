// 函数名称: sub_57fef0
// 虚拟地址: 0x57fef0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_57fef0(HWND arg1 @ edi, int16_t arg2, int16_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_1c = 0
    BOOL eax_4
    WPARAM entry_wParam
    
    if (*(data_26a6554 + 4) == 0)
        eax_4 = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, 0x100, entry_wParam, 
            zx.d(arg3) << 0x10 | zx.d(arg2))
    else
        RECT var_18
        __builtin_memset(&var_18, 0, 0x10)
        SendMessageA(arg1, 0x198, SendMessageA(arg1, 0x188, 0, 0), &var_18)
        void* ecx_1 = data_26a6554
        int32_t* eax_3 = *(ecx_1 + 4)
        
        if (eax_3[5] == 0x63)
            if (entry_wParam != 0x27)
                if (entry_wParam == 0x25 && eax_3[6] == 0)
                    goto label_57ff66
            else if (eax_3[6] != 0)
            label_57ff66:
                sub_57ebb0(eax_3)
                ecx_1 = data_26a6554
                var_1c = 1
        
        void* edx_1 = *(ecx_1 + 4)
        eax_4 = *(edx_1 + 0x14)
        
        if (eax_4 != 8)
            goto label_580050
        
        if (entry_wParam == 0x20 || entry_wParam == 0xd)
            eax_4 = __Cnd_wait(*(edx_1 + 8), U"T")
            
            if (eax_4 == 0)
                void* const eax_8 = &data_8951dc
                
                if (__Cnd_wait(*(*(data_26a6554 + 4) + 0x10), U"T") != 0)
                    eax_8 = &data_8954cc
                
                *(*(data_26a6554 + 4) + 0x10) = eax_8
                RedrawWindow(arg1, &var_18, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                eax_4 = sub_582980()
            
            goto label_5800b6
        
        if (eax_4 != 8)
            goto label_580050
        
        if (entry_wParam != 0x1b)
            if (eax_4 != 8)
                goto label_580050
            
            eax_4 = entry_wParam - 0x25
            
            if (eax_4 u> 3)
                goto label_580050
            
            eax_4 = __Cnd_wait(*(edx_1 + 8), U"T")
            
            if (eax_4 != 0)
                ecx_1 = data_26a6554
            label_580050:
                
                if (entry_wParam != 9)
                    if (entry_wParam == 0x21)
                        LRESULT eax_31 =
                            SendMessageA(arg1, 0x100, 0x24, zx.d(arg3) << 0x10 | zx.d(arg2))
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return eax_31
                    
                    if (entry_wParam != 0x22)
                        goto label_5800b6
                    
                    LRESULT eax_35 = SendMessageA(arg1, 0x100, 0x23, zx.d(arg3) << 0x10 | zx.d(arg2))
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return eax_35
                
                int32_t eax_9 = *(ecx_1 + 0x24)
                int32_t eax_10
                
                if (*(*(ecx_1 + 4) + 0x14) != 4)
                    eax_10 = eax_9 + 1
                else
                    eax_10 = eax_9 + 0x15
                
                var_18.left = eax_10
                int32_t ecx_4 = *(ecx_1 + 4)
                
                switch (*(ecx_4 + 0x14))
                    case 0
                        eax_4 = sub_57f820(eax_10, var_18.top, var_18.right, var_18.bottom, ecx_4)
                    case 1, 2
                        int32_t var_28_5 = ecx_4
                        int32_t bottom_2 = var_18.bottom
                        int32_t bottom_3 = bottom_2
                        eax_4 = sub_57fdb0(arg1, bottom_2, ecx_4, eax_10, var_18.top, var_18.right)
                    case 3, 0x63
                        eax_4 = sub_57cc30()
                    case 4
                        eax_4 = sub_57f820(eax_10, var_18.top, var_18.right, var_18.bottom, ecx_4)
                    case 8
                        if ((0x8000 & GetKeyState(0x10)) == 0)
                            if (__Cnd_wait(*(*(data_26a6554 + 4) + 8), U"T") != 0)
                                *(*(data_26a6554 + 4) + 8) = &data_8954cc
                            else
                                *(*(data_26a6554 + 4) + 8) = &data_8951dc
                                sub_57cc30()
                        else
                            SendMessageA(arg1, 0x100, 0x1b, zx.d(arg3) << 0x10 | zx.d(arg2))
                        
                        eax_4 = RedrawWindow(arg1, &var_18, nullptr, 
                            RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                    case 9
                        int32_t bottom = var_18.bottom
                        eax_4 = sub_57f8c0(ecx_4, eax_10, var_18.top, var_18.right)
                    case 0xa, 0xb, 0xc
                        int32_t bottom_1 = var_18.bottom
                        eax_4 = sub_57fa50(bottom_1, arg1, ecx_4, eax_10, var_18.top, var_18.right, 
                            bottom_1)
                    default
                        eax_4 = sub_57f9b0(arg1, eax_10, var_18.top, var_18.right, var_18.bottom)
                
                goto label_5800b6
        else
            *(edx_1 + 8) = &data_8951dc
            eax_4 = RedrawWindow(arg1, &var_18, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
        label_5800b6:
            
            if (var_1c == 0)
                eax_4 = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, 0x100, entry_wParam, 
                    zx.d(arg3) << 0x10 | zx.d(arg2))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_4
}
