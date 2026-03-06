// 函数名称: sub_5aeedd
// 虚拟地址: 0x5aeedd
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5aeedd(int32_t arg1)
{
    // 第一条实际指令: if (*((arg1 << 3) + &data_8b8ca8) == 0 && sub_5aee1b(arg1) == 0)
    if (*((arg1 << 3) + &data_8b8ca8) == 0 && sub_5aee1b(arg1) == 0)
        __amsg_exit(0x11)
        noreturn
    
    return EnterCriticalSection(*((arg1 << 3) + &data_8b8ca8))
}
