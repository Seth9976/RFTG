// 函数名称: sub_5374d0
// 虚拟地址: 0x5374d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5374d0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t var_14
    int32_t var_14
    GetWindowRect(GetDlgItem(data_3078830, 0x80), &var_14)
    ScreenToClient(data_3078830, &var_14)
    POINT point
    ScreenToClient(data_3078830, &point)
    int32_t x = point.x
    *arg1 = var_14 + 0x16
    arg1[3] = point.y - 0x14
    arg1[2] = x - 8
    int32_t var_10
    arg1[1] = var_10 + 0xa
    return arg1
}
