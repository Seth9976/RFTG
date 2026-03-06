// 函数名称: sub_57cf10
// 虚拟地址: 0x57cf10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_57cf10(uint32_t arg1, WPARAM arg2, LPARAM arg3)
{
    // 第一条实际指令: void var_20
    void var_20
    int32_t eax_1 = __security_cookie ^ &var_20
    HWND entry_ebx
    HDC hDC = GetWindowDC(entry_ebx)
    CallWindowProcA(GetPropA(entry_ebx, "Wprc"), entry_ebx, arg1, arg2, arg3)
    int32_t var_1c
    GetWindowRect(entry_ebx, &var_1c)
    MapWindowPoints(nullptr, entry_ebx, &var_1c, 2)
    int32_t var_18
    int32_t var_18_1 = var_18 + 2
    var_1c += 2
    int32_t* esi = &var_1c
    sub_57cd50(esi, hDC, 0xf, GetSysColor(COLOR_WINDOW))
    int32_t var_18_2 = var_18_1 + 1
    var_1c += 1
    int32_t var_10
    int32_t var_10_1 = var_10 + 1
    int32_t var_14
    int32_t var_14_1 = var_14 + 1
    sub_57cd50(esi, hDC, 0xf, GetSysColor(COLOR_WINDOW))
    ReleaseDC(entry_ebx, hDC)
    sub_5a6aba(eax_1 ^ &var_20)
    return 1
}
