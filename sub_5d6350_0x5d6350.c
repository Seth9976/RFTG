// 函数名称: sub_5d6350
// 虚拟地址: 0x5d6350
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5d6350(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[7] == 0 && (*arg1 & 2) != 0)
    if (arg1[7] == 0 && (*arg1 & 2) != 0)
        sub_6073a0(arg1, 1)
        *arg1 |= 2
    
    arg1[7] += 1
    return 0
}
