// 函数名称: sub_401470
// 虚拟地址: 0x401470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_401470()
{
    // 第一条实际指令: void* i_2 = nullptr
    void* i_2 = nullptr
    label_401480:
    char* i_1 = data_8c86e8
    void* i = i_1
    
    if (i_2 != 0)
        i = i_2 + 0x318b10
    
    int128_t* result
    
    for (result = data_8c86ec * 0x318b10 + i_1; i u< result; i += 0x318b10)
        if ((*(i + 0x318b08) & 0xffff0000) != 0)
            i_2 = i
            sub_407510(i + 8)
            sub_4035e0()
            sub_401310(i)
            sub_407670()
            goto label_401480
    
    while (data_8c86f8 u< 0x63)
        result, i_1 = sub_401000(i_1)
    
    return result
}
