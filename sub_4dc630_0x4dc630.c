// 函数名称: sub_4dc630
// 虚拟地址: 0x4dc630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4dc630(int32_t* arg1, int32_t arg2 @ esi, float arg3, float arg4, float arg5)
{
    // 第一条实际指令: sub_4dc540(arg3, arg4, arg5, arg2, data_30d739c, arg1)
    sub_4dc540(arg3, arg4, arg5, arg2, data_30d739c, arg1)
    int32_t ecx_2 = data_306856c
    data_306856c = ecx_2 + arg2
    return ecx_2 * 0xa0 + 0x2de856c
}
