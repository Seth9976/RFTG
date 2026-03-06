// 函数名称: sub_401550
// 虚拟地址: 0x401550
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_401550()
{
    // 第一条实际指令: if (data_8c86e4 == 0 || data_8c86e8 == 0)
    if (data_8c86e4 == 0 || data_8c86e8 == 0)
        return 
    
    sub_401ba0(&data_8c86e8)
    int32_t eax = data_8c86e8
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(&data_8c86e8, 0, 0x14)
    data_8c8700 = 0
}
