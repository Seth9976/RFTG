// 函数名称: sub_6462e0
// 虚拟地址: 0x6462e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6462e0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 == 0)
    if (arg1 == 0 || *arg1 == 0)
        return 0xffffffff
    
    sub_646280(arg1)
    arg1[0x54] = arg2
    return 0
}
