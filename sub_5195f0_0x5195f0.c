// 函数名称: sub_5195f0
// 虚拟地址: 0x5195f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_5195f0(HINSTANCE arg1)
{
    // 第一条实际指令: void var_12c
    void var_12c
    int32_t eax_1 = __security_cookie ^ &var_12c
    HDC eax_3 = GetDC(nullptr)
    int32_t eax_4 = GetDeviceCaps(eax_3, 0x58)
    int32_t eax_5 = GetDeviceCaps(eax_3, 0x5a)
    ReleaseDC(nullptr, eax_3)
    void* esi_1 = data_27e7fd0
    RECT rect
    rect.left = 0
    rect.top = 0
    enum WINDOW_STYLE dwStyle
    
    if (*(esi_1 + 0x23) == 0)
        int32_t eax_18
        int32_t edx_3
        edx_3:eax_18 = muls.dp.d(0x2aaaaaab, *(esi_1 + 0x14) * eax_4)
        int32_t edx_4 = edx_3 s>> 4
        rect.right = (edx_4 u>> 0x1f) + edx_4
        int32_t eax_19
        int32_t edx_5
        edx_5:eax_19 = muls.dp.d(0x2aaaaaab, *(esi_1 + 0x18) * eax_5)
        int32_t edx_6 = edx_5 s>> 4
        rect.bottom = (edx_6 u>> 0x1f) + edx_6
        dwStyle = WS_TILEDWINDOW
        
        if (*(esi_1 + 0x34) != 0)
            dwStyle = 0xcb0000
    else
        dwStyle = WS_POPUP
        rect.right = GetSystemMetrics(SM_CXSCREEN)
        rect.bottom = GetSystemMetrics(SM_CYSCREEN)
        void* ecx = data_27e7fd0
        *(ecx + 0x14) = divs.dp.d(sx.q(rect.right * 0x60), eax_4)
        *(ecx + 0x18) = divs.dp.d(sx.q(rect.bottom * 0x60), eax_5)
    
    AdjustWindowRect(&rect, dwStyle, 0)
    wchar16 var_110[0x82]
    
    if (MultiByteToWideChar(0xfde9, 0, *(data_27e7fd0 + 0xc), 0xffffffff, &var_110, 0x80) == 0)
        sub_4c5870("result", &data_83f3d3, "Windows\WindowsApp.cpp", 0x83, "CreateMainWindow")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_25 = data_3078808
    
    if (eax_25 u> 3)
        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsApp.cpp", 0x94, "CreateMainWindow")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    var_114
    int16_t i
    
    switch (eax_25)
        case 0
            void* edi_1 = &var_114:2
            
            do
                eax_25.w = *(edi_1 + 2)
                edi_1 += 2
            while (eax_25.w != 0)
            
            int16_t* esi_2
            int16_t* edi_2
            edi_2, esi_2 = __builtin_memcpy(edi_1, u" (no graphics)", 0x1c)
            *edi_2 = *esi_2
        case 1
            void* eax_26 = &var_114:2
            
            do
                i = *(eax_26 + 2)
                eax_26 += 2
            while (i != 0)
            
            __builtin_memcpy(eax_26, u" (opengl)", 0x14)
        case 2
            void* eax_27 = &var_114:2
            
            do
                i = *(eax_27 + 2)
                eax_27 += 2
            while (i != 0)
            
            __builtin_wcscpy(eax_27, u" (dx9)")
    
    HWND hwnd = CreateWindowExW(WS_EX_LEFT, GameWindowClass", &var_110, dwStyle, 0x80000000, 
        data_30785e4, rect.right - rect.left, rect.bottom - rect.top, nullptr, nullptr, arg1, nullptr)
    
    if (RegisterTouchWindow(hwnd, 0) == 0)
        sub_4c5680("Error registering touch window")
    
    sub_5a6aba(eax_1 ^ &var_12c)
    return hwnd
}
