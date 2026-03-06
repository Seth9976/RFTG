// 函数名称: sub_5dc410
// 虚拟地址: 0x5dc410
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dc410(char* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (data_bf7fdc != 0)
    if (data_bf7fdc != 0)
        data_bf7fdc += 1
        return 0
    
    char const* const esi = arg1
    
    if (esi != 0)
    label_5dc470:
        void* var_40_1 = sub_5cd1b0(esi) + 1
        char const* const var_44_1 = esi
        data_bf7fe0 = sub_5dd160("UTF-16LE", "UTF-8")
        data_bf7fe4 = arg2
        
        if (arg3 == 0)
            data_bf7fe8 = GetModuleHandleW(nullptr)
        else
            data_bf7fe8 = arg3
    else if (data_bf7fe0 == 0)
        esi = "SDL_app"
        data_bf7fe4 = 0x1020
        
        if (arg3 == 0)
            data_bf7fe8 = GetModuleHandleW(nullptr)
        else
            data_bf7fe8 = arg3
        
        goto label_5dc470
    
    WNDCLASSW wndClass
    wndClass.hCursor = 0
    wndClass.hIcon = LoadImageW(data_bf7fe8, data_bf7fe0, IMAGE_ICON, 0, 0, LR_DEFAULTCOLOR)
    wndClass.lpszClassName = data_bf7fe0
    wndClass.lpszMenuName = 0
    wndClass.hbrBackground = 0
    wndClass.hInstance = data_bf7fe8
    wndClass.style = data_bf7fe4
    wndClass.lpfnWndProc = sub_5db530
    wndClass.cbWndExtra = 0
    wndClass.cbClsExtra = 0
    
    if (RegisterClassW(&wndClass) != 0)
        data_bf7fdc = 1
        return 0
    
    sub_5cce60("Couldn't register application class")
    return 0xffffffff
}
