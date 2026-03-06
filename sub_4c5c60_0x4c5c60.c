// 函数名称: sub_4c5c60
// 虚拟地址: 0x4c5c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HINSTANCE __convention("regparm")sub_4c5c60(PSTR arg1)
{
    // 第一条实际指令: HINSTANCE result
    HINSTANCE result
    result.b = ShellExecuteA(nullptr, "open", arg1, nullptr, nullptr, SW_SHOWNORMAL) s>= 0x20
    return result
}
