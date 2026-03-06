// 函数名称: sub_57d1b0
// 虚拟地址: 0x57d1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_57d1b0(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HANDLE eax_4 = GetPropA(GetParent(GetParent(arg1)), "lpInsData")
    data_26a6554 = eax_4
    
    if (arg2 == 2)
        SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
        RemovePropA(arg1, "Wprc")
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return 0
    
    if (arg2 != 8)
        if (arg2 == 0xf)
            sub_57cf10(arg2, arg3, arg4)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
        
        if (arg2 == 0x20a)
            SendMessageA(arg1, 0x102, 0xd, 0)
        else if (arg2 != 0x102)
            if (arg2 == 0x100)
                if (arg3 == 9)
                    if ((0x8000 & GetKeyState(0x10)) == 0)
                        sub_57cc30()
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return 1
                    
                    SendMessageA(arg1, 0x102, 0xd, 0)
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 1
                
                if (arg3 == 0x1b)
                    ShowWindow(arg1, SW_HIDE)
                    SetFocus(*(data_26a6554 + 0x14))
                    sub_5a6aba(eax_1 ^ &__saved_ebp)
                    return 0
        else if (arg3 == 0xd)
            if (*(eax_4 + 4) != 0)
                void string
                GetWindowTextA(arg1, &string, 0x104)
                __free_base(*(*(data_26a6554 + 4) + 0x10))
                *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&string)
            
            ShowWindow(arg1, SW_HIDE)
            SetFocus(*(data_26a6554 + 0x14))
            sub_582980()
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 1
    else
        SendMessageA(arg1, 0x102, 0xd, 0)
        sub_57cc40(arg3)
    
    LRESULT result = CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
