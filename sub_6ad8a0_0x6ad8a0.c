// 函数名称: sub_6ad8a0
// 虚拟地址: 0x6ad8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6ad8a0()
{
    // 第一条实际指令: if (data_be1a60 == 0)
    if (data_be1a60 == 0)
        return 
    
    sub_4d30e0()
    int32_t eax = data_be1a60
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(&data_be1a60, 0, 0x14)
    data_be1a78 = 0
}
