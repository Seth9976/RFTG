// 函数名称: sub_40abb0
// 虚拟地址: 0x40abb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_40abb0()
{
    // 第一条实际指令: if (data_307b5e0 == 0)
    if (data_307b5e0 == 0)
        return 
    
    sub_40ac60(&data_307b5e0)
    int32_t eax = data_307b5e0
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(&data_307b5e0, 0, 0x14)
    data_307b5f8 = 0
}
