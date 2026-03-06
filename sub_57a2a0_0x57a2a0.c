// 函数名称: sub_57a2a0
// 虚拟地址: 0x57a2a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_57a2a0()
{
    // 第一条实际指令: if (data_273bc2c == 0)
    if (data_273bc2c == 0)
        return 
    
    LRESULT eax = sub_57a110()
    
    if (eax != 0)
        sub_57c8a0(eax - 1)
        sub_5758a0(1)
        sub_540c30(data_273ac20)
        sub_57c6a0()
    else if (data_273bc2c != eax)
        sub_57c8a0(eax)
        sub_5758a0(1)
        sub_540c30(data_273ac20)
        sub_57c6a0()
}
