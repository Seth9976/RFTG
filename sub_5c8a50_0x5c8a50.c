// 函数名称: sub_5c8a50
// 虚拟地址: 0x5c8a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5c8a50()
{
    // 第一条实际指令: if (data_bed7c0 == 0)
    if (data_bed7c0 == 0)
        return 
    
    for (int32_t i = 0; i u< 0x10; i += 1)
        if (*((i << 2) + &data_bed780) != 0)
            sub_5c8a20(i + 1)
    
    data_bed7f0()
    sub_5c8950(0xbed808, 0xbed80c)
    sub_5c8950(0xbed810, 0xbed814)
    int32_t var_14_1 = 0x58
    int32_t var_18_1 = 0
    int32_t* var_1c_1 = &data_bed7c0
    sub_5cd100()
    int32_t var_20_1 = 0x40
    int32_t var_24_1 = 0
    void* var_28_1 = &data_bed780
    sub_5cd100()
}
