// 函数名称: sub_580db0
// 虚拟地址: 0x580db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __convention("regparm")sub_580db0(int32_t arg1, int32_t arg2, LPARAM arg3, HWND arg4 @ esi, WPARAM arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    RECT rect
    GetClientRect(arg4, &rect)
    void* eax_3 = data_26a6554
    RECT lprc
    lprc.left = 0
    lprc.top = *(eax_3 + 0x28) - 2
    lprc.right = rect.right - rect.left
    lprc.bottom = *(eax_3 + 0x28)
    HDC hDC = GetDC(arg4)
    HBRUSH eax_6 = CreateSolidBrush(GetSysColor(COLOR_BTNFACE))
    FillRect(hDC, &lprc, eax_6)
    DeleteObject(eax_6)
    ReleaseDC(arg4, hDC)
    LRESULT result = DefWindowProcA(arg4, 0x138, arg5, arg3)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
