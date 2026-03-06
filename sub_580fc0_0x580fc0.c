// 函数名称: sub_580fc0
// 虚拟地址: 0x580fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_580fc0(HWND arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    BOOL result = arg2 - 1
    
    if (arg2 == 1)
        SetFocus(arg1)
        LRESULT wParam = SendMessageA(arg1, 0x188, 0, 0)
        LRESULT eax_5 = SendMessageA(arg1, 0x199, *(data_26a6554 + 0x30), 0)
        
        if (eax_5 != 0xffffffff && eax_5 != 0 && *(eax_5 + 0x14) == 8
                && wParam != *(data_26a6554 + 0x30) && __Cnd_wait(*(eax_5 + 8), T") == 0)
            *(eax_5 + 8) = &data_8951dc
        
        LRESULT eax_8 = SendMessageA(arg1, 0x199, wParam, 0)
        int32_t ecx_3 = neg.d(eax_8 + 1)
        result = data_26a6554
        *(result + 4) = sbb.d(ecx_3, ecx_3, eax_8 != 0xffffffff) & eax_8
        void* ecx_6 = data_26a6554
        
        if (*(ecx_6 + 4) != 0)
            if (*(ecx_6 + 0x10) != 0)
                result = SetWindowTextA(*(ecx_6 + 0x10), *(*(ecx_6 + 4) + 0xc))
                ecx_6 = data_26a6554
            
            if (*(ecx_6 + 0x1c) != 0)
                DestroyWindow(*(ecx_6 + 0x1c))
                result = data_26a6554
                *(result + 0x1c) = 0
                ecx_6 = data_26a6554
            
            if (*(ecx_6 + 0x20) != 0)
                result = DestroyWindow(*(ecx_6 + 0x20))
                *(data_26a6554 + 0x20) = 0
                ecx_6 = data_26a6554
            
            if (wParam != *(ecx_6 + 0x30))
                RECT var_1c
                __builtin_memset(&var_1c, 0, 0x10)
                SendMessageA(arg1, 0x198, *(ecx_6 + 0x30), &var_1c)
                RedrawWindow(arg1, &var_1c, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                SendMessageA(arg1, 0x198, wParam, &var_1c)
                result =
                    RedrawWindow(arg1, &var_1c, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
                *(data_26a6554 + 0x30) = wParam
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
