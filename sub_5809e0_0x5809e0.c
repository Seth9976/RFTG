// 函数名称: sub_5809e0
// 虚拟地址: 0x5809e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWND __fastcallsub_5809e0(int32_t arg1, HWND arg2 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    HWND result = data_26a6554
    
    if (arg1 s<= result + 5)
        SetCursor(LoadCursorA(nullptr, 0x7f85))
        RECT rect
        GetWindowRect(arg2, &rect)
        rect.top += 0xa
        rect.bottom -= 0xa
        ClipCursor(&rect)
        *(data_26a6554 + 0x40) = 1
        *(data_26a6554 + 0x54) = 0
        *(data_26a6554 + 0x58) = rect.right - rect.left
        *(data_26a6554 + 0x48) = arg1
        HDC eax_5 = GetDC(arg2)
        HGDIOBJ h = SelectObject(eax_5, CreatePen(PS_COSMETIC, 3, 0))
        void* eax_7 = data_26a6554
        int32_t x = *(eax_7 + 0x58)
        int32_t x_1 = *(eax_7 + 0x54)
        int32_t y = *(eax_7 + 0x48)
        int32_t rop2 = SetROP2(eax_5, R2_NOT)
        MoveToEx(eax_5, x_1, y, nullptr)
        LineTo(eax_5, x, y)
        SetROP2(eax_5, rop2)
        DeleteObject(SelectObject(eax_5, h))
        ReleaseDC(arg2, eax_5)
        result = SetCapture(arg2)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
