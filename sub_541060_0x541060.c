// 函数名称: sub_541060
// 虚拟地址: 0x541060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __convention("regparm")sub_541060(int32_t arg1, int32_t arg2, int32_t arg3, HWND arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t var_1c = arg2
    int32_t var_1c = arg2
    int32_t var_c = arg1
    int32_t var_10 = arg5
    int32_t lParam = arg3
    char* const var_14 = &data_83f3d3
    int32_t var_18 = arg6
    return SendMessageA(arg4, 0x180, 0, &lParam)
}
