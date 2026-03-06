// 函数名称: sub_477710
// 虚拟地址: 0x477710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_477710()
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    
    if (data_30d6f08 s<= 0)
        data_30d6f0c:1.b = 0
        return 
    
    int32_t var_8 = 0x3092d40
    
    do
        int128_t var_334
        sub_5abfc0(&var_334, 0, 0x32c)
        void var_324
        __builtin_memcpy(&var_324, &data_be1088, 0x100)
        void var_224
        __builtin_memcpy(&var_224, &data_be1088, 0x100)
        void var_124
        __builtin_memcpy(&var_124, &data_be1088, 0x100)
        i += 1
        __builtin_memcpy(var_8, &var_334, 0x32c)
        var_8 += 0x88a0
    while (i s< data_30d6f08)
    
    data_30d6f0c:1.b = 0
}
