// 函数名称: sub_5cf080
// 虚拟地址: 0x5cf080
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cf080()
{
    // 第一条实际指令: int32_t __saved_esi = 0x10
    int32_t __saved_esi = 0x10
    int32_t edi = 0
    int32_t __saved_ebx = 0
    void var_8c
    void* var_b0 = &var_8c
    sub_5cd100()
    sub_5dc630()
    int32_t var_b4 = 0x30
    int32_t var_b8 = 0
    WNDCLASSEXW param0
    WNDCLASSEXW* var_bc = &param0
    sub_5cd100()
    param0.hInstance = GetModuleHandleW(nullptr)
    param0.lpszClassName = u"Message"
    param0.lpfnWndProc = sub_5cf020
    param0.cbSize = 0x30
    
    if (RegisterClassExW(&param0) == 0)
        enum WIN32_ERROR __saved_esi_2 = GetLastError()
        sub_5cce60("Failed to create register class for joystick autodetect.")
        return 0xffffffff
    
    HWND esi = CreateWindowExW(WS_EX_LEFT, Message", nullptr, WS_OVERLAPPED, 0, 0, 0, 0, 0xfffffffd, 
        nullptr, nullptr, nullptr)
    HWND var_10 = esi
    
    if (esi == 0)
        enum WIN32_ERROR __saved_ebx_1 = GetLastError()
        sub_5cce60("Failed to create message window for joystick autodetect.")
        return 0xffffffff
    
    int32_t var_b0_1 = 0x20
    int32_t var_b4_1 = 0
    int32_t NotificationFilter
    int32_t* var_b8_1 = &NotificationFilter
    sub_5cd100()
    int32_t var_20 = 0x11cff16f
    int32_t var_24 = 0x4d1e55b2
    NotificationFilter = 0x20
    int32_t var_2c = 5
    int32_t var_1c = 0x1100cb88
    int32_t var_18 = 0x30000011
    HDEVNOTIFY Handle =
        RegisterDeviceNotificationW(esi, &NotificationFilter, DEVICE_NOTIFY_WINDOW_HANDLE)
    
    if (Handle == 0)
        enum WIN32_ERROR var_b0_2 = GetLastError()
        sub_5cce60("Failed to create notify device for joystick autodetect.")
        return 0xffffffff
    
    sub_5d1190(data_bedd38)
    
    while (data_bedd40 == 0)
        int32_t var_8_1 = 0
        sub_5dedf0(data_bedd34, data_bedd38, 0x12c)
        
        while (data_bedd40 == 0)
            MSG msg
            
            if (PeekMessageW(&msg, esi, 0, 0, PM_NOREMOVE) == 0)
                break
            
            if (GetMessageW(&msg, esi, 0, 0) != 0)
                TranslateMessage(&msg)
                DispatchMessageW(&msg)
        
        if (data_8b9784 != 0 && data_bedd4c != 0)
            void* esi_1 = &var_8c
            int32_t i_1 = 4
            int32_t i
            
            do
                void var_a0
                int32_t eax_10 = data_bedd4c(edi, 1, &var_a0)
                int32_t eax_11 = neg.d(eax_10)
                
                if (*esi_1 != sbb.d(eax_11, eax_11, eax_10 != 0) + 1)
                    var_8_1 = 1
                    *esi_1 = sbb.d(eax_11, eax_11, eax_10 != 0) + 1
                
                edi += 1
                esi_1 += 4
                i = i_1
                i_1 -= 1
            while (i != 1)
            esi = var_10
            edi = 0
        
        if (data_bedd64 != 0 || var_8_1 != 0)
            sub_5d11c0(data_bedd38)
            std::tr2::sys::_Close_dir(0x12c)
            sub_5d1190(data_bedd38)
            data_bedd30 = 1
            data_bedd2c = 1
            data_bedd64 = 0
    
    sub_5d11c0(data_bedd38)
    UnregisterDeviceNotification(Handle)
    DestroyWindow(esi)
    UnregisterClassW(param0.lpszClassName, param0.hInstance)
    CoUninitialize()
    return 1
}
