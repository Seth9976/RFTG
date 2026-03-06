// 函数名称: sub_580b10
// 虚拟地址: 0x580b10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __convention("regparm")sub_580b10(int32_t arg1, int32_t arg2, HWND arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    *(data_26a6554 + 0x40) = 0
    
    if (arg3 == GetCapture())
        ReleaseCapture()
    
    ClipCursor(nullptr)
    *(data_26a6554 + 0x48) = arg4
    HDC eax_4 = GetDC(arg3)
    HGDIOBJ h = SelectObject(eax_4, CreatePen(PS_COSMETIC, 3, 0))
    void* eax_6 = data_26a6554
    int32_t x = *(eax_6 + 0x58)
    int32_t x_1 = *(eax_6 + 0x54)
    int32_t y = *(eax_6 + 0x48)
    int32_t rop2 = SetROP2(eax_4, R2_NOT)
    MoveToEx(eax_4, x_1, y, nullptr)
    LineTo(eax_4, x, y)
    SetROP2(eax_4, rop2)
    DeleteObject(SelectObject(eax_4, h))
    ReleaseDC(arg3, eax_4)
    RECT rect
    GetClientRect(arg3, &rect)
    *(data_26a6554 + 0x2c) = rect.bottom - rect.top - arg4
    LRESULT result = sub_580860(rect.bottom - rect.top, rect.right - rect.left)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
