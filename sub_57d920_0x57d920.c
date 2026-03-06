// 函数名称: sub_57d920
// 虚拟地址: 0x57d920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __stdcallsub_57d920(HWND arg1, uint32_t arg2, WPARAM arg3, LPARAM arg4)
{
    // 第一条实际指令: data_26a6554 = GetPropA(GetParent(GetParent(arg1)), "lpInsData")
    data_26a6554 = GetPropA(GetParent(GetParent(arg1)), "lpInsData")
    
    if (arg2 == 2)
        SetWindowLongA(arg1, 0xfffffffc, GetPropA(arg1, "Wprc"))
        RemovePropA(arg1, "Wprc")
        return 0
    
    if (arg2 == 8)
        ShowWindow(arg1, SW_HIDE)
        sub_57cc40(arg3)
    else if (arg2 != 0x20a)
        if (arg2 == 0x87)
            return 4
        
        if (arg2 != 0x101)
            if (arg2 == 0x100)
                if (arg3 == 9)
                    if ((0x8000 & GetKeyState(0x10)) != 0)
                        SendMessageA(arg1, 0x100, 0x1b, 0)
                        return 0
                    
                    ShowWindow(arg1, SW_HIDE)
                    sub_57cc30()
                    return 0
                
                if (arg3 == 0xd)
                    SendMessageA(arg1, 0x100, 0x20, 0)
                    return 1
                
                if (arg3 == 0x1b)
                    ShowWindow(arg1, SW_HIDE)
                    SetFocus(*(data_26a6554 + 0x14))
                    return 0
        else if (arg3 == 0xd)
            SendMessageA(arg1, arg2, 0x20, 0)
            return arg3 - 0xc
    else
        SendMessageA(arg1, 0x100, 0x1b, 0)
    
    return CallWindowProcA(GetPropA(arg1, "Wprc"), arg1, arg2, arg3, arg4)
}
