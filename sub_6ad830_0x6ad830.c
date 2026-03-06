// 函数名称: sub_6ad830
// 虚拟地址: 0x6ad830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6ad830()
{
    // 第一条实际指令: if (data_8c8ca4 == 0)
    if (data_8c8ca4 == 0)
        return 
    
    sub_401cc0(&data_8c8ca4)
    int32_t eax = data_8c8ca4
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(&data_8c8ca4, 0, 0x14)
    data_8c8cbc = 0
}
