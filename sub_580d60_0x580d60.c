// 函数名称: sub_580d60
// 虚拟地址: 0x580d60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_580d60(HDC arg1 @ edi)
{
    // 第一条实际指令: uint32_t color = GetSysColor(COLOR_BTNFACE)
    uint32_t color = GetSysColor(COLOR_BTNFACE)
    uint32_t color_1 = GetSysColor(COLOR_MENUTEXT)
    DeleteObject(data_31602cc)
    data_31602cc = CreateSolidBrush(color)
    SetTextColor(arg1, color_1)
    SetBkColor(arg1, color)
    return data_31602cc
}
