// 函数名称: sub_5db300
// 虚拟地址: 0x5db300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5db300(int32_t arg1, int32_t arg2, int32_t* arg3, char arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        if (arg2 != 0)
            sub_5d5960(*arg3, 0, 0, arg4)
    else if (arg2 == 0)
        sub_5d5960(*arg3, 0, 1, arg4)
}
