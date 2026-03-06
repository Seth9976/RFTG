// 函数名称: sub_57efd0
// 虚拟地址: 0x57efd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __convention("regparm")sub_57efd0(int32_t arg1, int32_t arg2, int32_t arg3, HWND arg4 @ edi, int32_t arg5, int16_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    LRESULT eax_3 = *(data_26a6554 + 0x24)
    
    if (arg3 s>= eax_3 - 5)
        eax_3 += 5
        
        if (arg3 s<= eax_3)
            SetCursor(LoadCursorA(nullptr, 0x7f84))
            RECT rect_1
            GetWindowRect(arg4, &rect_1)
            rect_1.left += 0x10
            rect_1.right -= 0xa
            ClipCursor(&rect_1)
            RECT rect
            GetClientRect(arg4, &rect)
            *(data_26a6554 + 0x40) = 1
            *(data_26a6554 + 0x4c) = rect.top
            *(data_26a6554 + 0x50) = rect.bottom
            *(data_26a6554 + 0x44) = arg3
            HDC eax_7 = GetDC(arg4)
            int32_t bottom = rect.bottom
            int32_t top = rect.top
            int32_t rop2 = SetROP2(eax_7, R2_NOT)
            MoveToEx(eax_7, arg3, top, nullptr)
            LineTo(eax_7, arg3, bottom)
            SetROP2(eax_7, rop2)
            ReleaseDC(arg4, eax_7)
            void* esi_1 = data_26a6554
            
            if (*(esi_1 + 4) != 0)
                char string = 0
                int128_t var_113[0x10]
                sub_5abfc0(&var_113, 0, 0x103)
                void* ecx_4 = *(esi_1 + 4)
                int32_t eax_10 = *(ecx_4 + 0x14) - 3
                
                if (eax_10 u> 0x60)
                    goto label_57f1c0
                
                switch (eax_10)
                    case 1, 2, 3, 4, 6, 7, 8, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 
                            0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                            0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 
                            0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                            0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 
                            0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
                            0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 
                            0x5c, 0x5d, 0x5e, 0x5f
                        goto label_57f1c0
                    case 5
                        *(ecx_4 + 8) = &data_8951dc
                        HWND eax_11 = SetCapture(arg4)
                        sub_5a6aba(eax_1 ^ &__saved_ebp)
                        return eax_11
                    case 9
                        GetWindowTextA(*(esi_1 + 0x20), &string, 0x104)
                        __free_base(*(*(data_26a6554 + 4) + 0x10))
                        *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&string)
                        ShowWindow(*(data_26a6554 + 0x20), SW_HIDE)
                        esi_1 = data_26a6554
                    label_57f1c0:
                        GetWindowTextA(*(esi_1 + 0x1c), &string, 0x104)
                        __free_base(*(*(data_26a6554 + 4) + 0x10))
                        *(*(data_26a6554 + 4) + 0x10) = sub_57ca20(&string)
                        ShowWindow(*(data_26a6554 + 0x1c), SW_HIDE)
            
            HWND eax_20 = SetCapture(arg4)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_20
    
    if (arg5 != 0)
        eax_3 = SendMessageA(arg4, 0x199, 
            zx.d(SendMessageA(arg4, 0x1a9, 0, zx.d(arg6) << 0x10 | zx.d(arg3.w))), 0)
        
        if (eax_3 != 0xffffffff && eax_3 != 0 && *(eax_3 + 0x14) == 0x63)
            eax_3 = sub_57ebb0(eax_3)
    
    *(data_26a6554 + 0x40) = 0
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_3
}
