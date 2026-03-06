// 函数名称: sub_5427d0
// 虚拟地址: 0x5427d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HWNDsub_5427d0()
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    HWND eax_1 = CreateDialogParamA(GetModuleHandleA(nullptr), 0xaa, data_3078818, sub_5402a0, 0)
    data_3078830 = eax_1
    HWND hWnd = sub_5828f0(eax_1)
    HDC eax_2 = GetDC(nullptr)
    int32_t eax_3 = GetDeviceCaps(eax_2, 0x58)
    int32_t eax_4 = GetDeviceCaps(eax_2, 0x5a)
    ReleaseDC(nullptr, eax_2)
    MoveWindow(hWnd, eax_3 s/ 0x60, eax_4 * 0x15e s/ 0x60, eax_3 * 0x12c s/ 0x60, 
        eax_4 * 0x12c s/ 0x60, 1)
    ShowWindow(hWnd, SW_SHOW)
    sub_541ab0()
    sub_540c30(data_3079208)
    ShowWindow(data_3078830, SW_SHOW)
    return sub_536ca0()
}
