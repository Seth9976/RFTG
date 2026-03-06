// 函数名称: sub_57f2f0
// 虚拟地址: 0x57f2f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __convention("regparm")sub_57f2f0(int32_t arg1, HWND arg2 @ esi, int16_t arg3)
{
    // 第一条实际指令: void* eax = data_26a6554
    void* eax = data_26a6554
    
    if (*(eax + 0x40) == 0)
        WPARAM wParam_1 = zx.d(SendMessageA(arg2, 0x1a9, 0, zx.d(arg3) << 0x10 | zx.d(arg1.w)))
        
        if (SendMessageA(arg2, 0x188, 0, 0) != wParam_1)
            SendMessageA(arg2, 0x186, wParam_1, 0)
    else
        *(eax + 0x40) = 0
        
        if (arg2 == GetCapture())
            ReleaseCapture()
        
        ClipCursor(nullptr)
        HDC eax_2 = GetDC(arg2)
        void* eax_3 = data_26a6554
        int32_t y = *(eax_3 + 0x50)
        int32_t y_1 = *(eax_3 + 0x4c)
        int32_t rop2 = SetROP2(eax_2, R2_NOT)
        MoveToEx(eax_2, arg1, y_1, nullptr)
        LineTo(eax_2, arg1, y)
        SetROP2(eax_2, rop2)
        ReleaseDC(arg2, eax_2)
        *(data_26a6554 + 0x24) = arg1
        RedrawWindow(arg2, nullptr, nullptr, RDW_INVALIDATE | RDW_ERASE | RDW_UPDATENOW)
        void* ecx_1 = data_26a6554
        
        if (*(ecx_1 + 4) != 0)
            int32_t eax_7 = *(*(ecx_1 + 4) + 0x14) - 3
            
            if (eax_7 u> 0x60)
                ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
            else
                switch (eax_7)
                    case 1, 2, 3, 4, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                            0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                            0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 
                            0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                            0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 
                            0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
                            0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
                            0x5c, 0x5d, 0x5e, 0x5f
                        ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
                    case 9
                        ShowWindow(*(ecx_1 + 0x20), SW_SHOW)
                        ShowWindow(*(data_26a6554 + 0x1c), SW_SHOW)
    
    SendMessageA(*(data_26a6554 + 0x1c), 0x102, 0xd, 0)
    SendMessageA(*(data_26a6554 + 0x20), 0x102, 0xd, 0)
    WPARAM wParam = zx.d(GetDlgCtrlID(arg2)) | 0x10000
    SendMessageA(GetParent(arg2), 0x111, wParam, arg2)
    LRESULT result = data_26a6554
    
    if (*(result + 4) != 0)
        result = *(result + 4)
        int32_t ecx_5 = *(result + 0x14)
        
        if (ecx_5 != 3)
            if (ecx_5 == 8)
                LPARAM lParam = __Cnd_wait(*(result + 8), U"T")
                
                if (lParam == 0)
                    return SendMessageA(arg2, 0x100, 0x20, lParam)
                
                return SendMessageA(arg2, 0x100, 9, 0)
            
            if (ecx_5 != 0x63)
                return SendMessageA(arg2, 0x100, 9, 0)
    
    return result
}
