// 函数名称: sub_663760
// 虚拟地址: 0x663760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_663760(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return arg1
    
    int128_t* eax_1 = sub_6663c0(2, *(arg1 + 0x264), *(arg1 + 0x260))
    
    if (eax_1 != 0)
        sub_5abfc0(eax_1, 0, 0xec)
    
    return eax_1
}
