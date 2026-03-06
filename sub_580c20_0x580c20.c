// 函数名称: sub_580c20
// 虚拟地址: 0x580c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HCURSORsub_580c20(HWND arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = data_26a6554
    void* edx = data_26a6554
    int32_t eax = *(edx + 0x28)
    
    if (arg2 s>= eax - 5 && arg2 s<= eax + 5)
        return SetCursor(LoadCursorA(nullptr, 0x7f85))
    
    if (*(edx + 0x40) == 0)
        return SetCursor(LoadCursorA(nullptr, 0x7f00))
    
    HDC eax_5 = GetDC(arg1)
    HGDIOBJ h = SelectObject(eax_5, CreatePen(PS_COSMETIC, 3, 0))
    void* eax_7 = data_26a6554
    int32_t x_1 = *(eax_7 + 0x58)
    int32_t x_2 = *(eax_7 + 0x54)
    int32_t y = *(eax_7 + 0x48)
    int32_t rop2 = SetROP2(eax_5, R2_NOT)
    MoveToEx(eax_5, x_2, y, nullptr)
    LineTo(eax_5, x_1, y)
    SetROP2(eax_5, rop2)
    *(data_26a6554 + 0x48) = arg2
    void* eax_10 = data_26a6554
    int32_t x_3 = *(eax_10 + 0x58)
    int32_t y_1 = *(eax_10 + 0x48)
    int32_t x = *(eax_10 + 0x54)
    int32_t rop2_1 = SetROP2(eax_5, R2_NOT)
    MoveToEx(eax_5, x, y_1, nullptr)
    LineTo(eax_5, x_3, y_1)
    SetROP2(eax_5, rop2_1)
    DeleteObject(SelectObject(eax_5, h))
    return ReleaseDC(arg1, eax_5)
}
