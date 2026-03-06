// 函数名称: sub_53b250
// 虚拟地址: 0x53b250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOLsub_53b250(HDC arg1 @ edi)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    BOOL result = sub_537110()
    
    if (result != 0)
        int32_t var_2c
        GetWindowRect(GetDlgItem(data_3078830, 0x80), &var_2c)
        ScreenToClient(data_3078830, &var_2c)
        POINT point
        ScreenToClient(data_3078830, &point)
        RECT rect
        GetClientRect(data_3078830, &rect)
        HDC eax_5 = CreateCompatibleDC(arg1)
        HBITMAP eax_7 = CreateCompatibleBitmap(arg1, rect.right, rect.bottom)
        HGDIOBJ h = SelectObject(eax_5, eax_7)
        sub_53a1d0(eax_5)
        int32_t ecx_3 = var_2c
        int32_t var_28
        BitBlt(arg1, ecx_3, var_28, point.x - ecx_3, point.y - var_28, eax_5, ecx_3, var_28, SRCCOPY)
        SelectObject(eax_5, h)
        DeleteObject(eax_7)
        result = DeleteDC(eax_5)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
