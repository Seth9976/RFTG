// 函数名称: sub_5a79f4
// 虚拟地址: 0x5a79f4
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5a79f4() __noreturn
{
    // 第一条实际指令: if (sub_5af001() != 0)
    if (sub_5af001() != 0)
        sub_5af24e(0x16)
    
    if ((data_8b8088 & 2) != 0)
        sub_5ad225(3, 0x40000015, 1)
    
    _quick_exit(3)
    noreturn
}
