// 函数名称: sub_5c7750
// 虚拟地址: 0x5c7750
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c7750(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* i = data_bed764
    int32_t* i = data_bed764
    int32_t* i_3 = nullptr
    
    if (i == 0)
        return i
    
    do
        if (*i == arg1 && i[1] == arg2)
            if (i_3 == 0)
                int32_t* i_2 = i
                data_bed764 = i[2]
                return sub_5d0af0()
            
            int32_t* i_1 = i
            i_3[2] = i[2]
            return sub_5d0af0()
        
        i_3 = i
        i = i[2]
    while (i != 0)
    
    return i
}
