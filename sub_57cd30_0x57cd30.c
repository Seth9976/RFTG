// 函数名称: sub_57cd30
// 虚拟地址: 0x57cd30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

BOOL __convention("regparm")sub_57cd30(int32_t arg1, int32_t arg2, int32_t arg3, HDC arg4 @ esi, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: MoveToEx(arg4, arg3, arg1, nullptr)
    MoveToEx(arg4, arg3, arg1, nullptr)
    return LineTo(arg4, arg5, arg6)
}
