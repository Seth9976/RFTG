// 函数名称: sub_57a220
// 虚拟地址: 0x57a220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_57a220()
{
    // 第一条实际指令: if (data_273bc2c == 0)
    if (data_273bc2c == 0)
        return 
    
    int32_t esi_2 = *(sub_4f4890(data_273ac20) + 4)
    int32_t eax = sub_579840()
    
    if (eax != esi_2 - 1)
        sub_57c8a0(eax + 1)
        sub_5758a0(1)
        sub_540c30(data_273ac20)
        return sub_57c6a0() __tailcall
    
    if (data_273bc2c == 0)
        return 
    
    sub_57c8a0(0xffffffff)
    sub_5758a0(1)
    sub_540c30(data_273ac20)
    return sub_57c6a0() __tailcall
}
