// 函数名称: sub_6ad920
// 虚拟地址: 0x6ad920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6ad920()
{
    // 第一条实际指令: if (data_be1e78 == 0)
    if (data_be1e78 == 0)
        return 
    
    sub_510bd0()
    int32_t eax = data_be1e78
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(&data_be1e78, 0, 0x14)
    data_be1e90 = 0
}
