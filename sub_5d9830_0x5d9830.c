// 函数名称: sub_5d9830
// 虚拟地址: 0x5d9830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d9830(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0 || *arg1 != 0xbf7fc4)
    if (arg1 == 0 || *arg1 != 0xbf7fc4)
        return sub_5cce60("Invalid renderer")
    
    if (arg1[0x30] != 0)
        return arg1
    
    return arg1[0x15](arg1)
}
