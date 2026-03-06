// 函数名称: sub_5ce6c0
// 虚拟地址: 0x5ce6c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ce6c0(int32_t arg1)
{
    // 第一条实际指令: int32_t* i = data_bedcf8
    for (int32_t* i = data_bedcf8; i != 0; i = i[2])
        if (*i == arg1)
            return i[1]
    
    if (arg1 == 8)
        return data_8b9758
    
    if (arg1 == 0)
        return data_8b9754
    
    if (arg1 == 2)
        return data_8b9750
    
    return data_8b974c
}
