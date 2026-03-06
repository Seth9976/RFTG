// 函数名称: sub_6ada80
// 虚拟地址: 0x6ada80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6ada80()
{
    // 第一条实际指令: if (data_be1f10 == 0)
    if (data_be1f10 == 0)
        return 
    
    sub_54c550()
    int32_t eax = data_be1f10
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(&data_be1f10, 0, 0x14)
    data_be1f28 = 0
}
