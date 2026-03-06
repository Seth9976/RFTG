// 函数名称: sub_5a6a4f
// 虚拟地址: 0x5a6a4f
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5a6a4f()
{
    // 第一条实际指令: while (data_8b8008 u< 0xa)
    while (data_8b8008 u< 0xa)
        int32_t eax_2 = *((data_8b8008 << 2) + &data_bec4e0)
        data_8b8008 += 1
        int32_t eax = DecodePointer(eax_2)
        
        if (eax != 0)
            eax()
}
