// 函数名称: sub_4fc010
// 虚拟地址: 0x4fc010
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4fc010()
{
    // 第一条实际指令: if (data_be1c9c == 0)
    if (data_be1c9c == 0)
        return 
    
    sub_4fc4a0(&data_be1c9c)
    int32_t eax = data_be1c9c
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(&data_be1c9c, 0, 0x14)
    data_be1cb4 = 0
}
