// 函数名称: sub_5cca60
// 虚拟地址: 0x5cca60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cca60()
{
    // 第一条实际指令: HMODULE hInstance = GetModuleHandleW(nullptr)
    HMODULE hInstance = GetModuleHandleW(nullptr)
    
    if (data_bed8f0 == 0)
        int32_t var_34_1 = 0x28
        int32_t var_38_1 = 0
        WNDCLASSW wndClass
        WNDCLASSW* var_3c_1 = &wndClass
        sub_5cd100()
        wndClass.lpfnWndProc = DefWindowProcW
        wndClass.lpszClassName = data_8b9744
        wndClass.hInstance = hInstance
        uint16_t eax = RegisterClassW(&wndClass)
        data_bed8f4 = eax
        
        if (eax == 0)
            sub_5dc5a0("Unable to create Helper Window Class")
            return 0xffffffff
        
        HWND eax_1 = CreateWindowExW(WS_EX_LEFT, data_8b9744, data_8b9748, WS_OVERLAPPED, 0x80000000, 
            0x80000000, 0x80000000, 0x80000000, 0xfffffffd, nullptr, hInstance, nullptr)
        data_bed8f0 = eax_1
        
        if (eax_1 == 0)
            UnregisterClassW(data_8b9744, hInstance)
            sub_5dc5a0("Unable to create Helper Window")
            return 0xffffffff
    
    return 0
}
