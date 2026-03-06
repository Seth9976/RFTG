// 函数名称: sub_57cd00
// 虚拟地址: 0x57cd00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __convention("regparm")sub_57cd00(COLORREF arg1, HDC arg2, RECT* arg3)
{
    // 第一条实际指令: HBRUSH eax = CreateSolidBrush(arg1)
    HBRUSH eax = CreateSolidBrush(arg1)
    FillRect(arg2, arg3, eax)
    return DeleteObject(eax)
}
