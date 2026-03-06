// 函数名称: sub_5c6b50
// 虚拟地址: 0x5c6b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5c6b50(void* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    *(arg1 + 0x2c) -= 1
    
    if (*(arg1 + 0x2c) s> 0 || arg1 == data_bed358)
        return 
    
    sub_5d0030(arg1)
    void* i = data_bed354
    void* i_1 = nullptr
    
    for (; i != 0; i = *(i + 0x34))
        if (arg1 == i)
            if (i_1 == 0)
                data_bed354 = *(arg1 + 0x34)
            else
                *(i_1 + 0x34) = *(i + 0x34)
            
            break
        
        i_1 = i
    
    int32_t var_c_2 = *(arg1 + 4)
    sub_5d0af0()
    int32_t var_10_1 = *(arg1 + 0xc)
    sub_5d0af0()
    int32_t var_14_1 = *(arg1 + 0x14)
    sub_5d0af0()
    int32_t var_18_1 = *(arg1 + 0x1c)
    sub_5d0af0()
    int32_t var_1c_1 = *(arg1 + 0x24)
    sub_5d0af0()
    void* var_20_1 = arg1
    sub_5d0af0()
}
