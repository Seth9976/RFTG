// 函数名称: sub_6ada30
// 虚拟地址: 0x6ada30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_6ada30()
{
    // 第一条实际指令: if (data_be1ed8 == 0)
    if (data_be1ed8 == 0)
        return 
    
    sub_5307d0()
    int32_t eax = data_be1ed8
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(&data_be1ed8, 0, 0x14)
    data_be1ef0 = 0
}
