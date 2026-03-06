// 函数名称: sub_4f6df0
// 虚拟地址: 0x4f6df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f6df0()
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    
    if (data_be1c9c != 0)
        sub_4fc4a0(&data_be1c9c)
        eax = data_be1c9c
        
        if (eax != 0)
            _aligned_free_base(eax)
        
        __builtin_memset(&data_be1c9c, 0, 0x14)
        data_be1cb4 = 0
    
    if (data_be1cb8 == 0)
        return 
    
    sub_4fc570(&data_be1cb8)
    eax = data_be1cb8
    
    if (eax != 0)
        _aligned_free_base(eax)
    
    __builtin_memset(&data_be1cb8, 0, 0x14)
    data_be1cd0 = 0
}
