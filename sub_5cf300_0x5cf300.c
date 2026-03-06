// 函数名称: sub_5cf300
// 虚拟地址: 0x5cf300
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cf300()
{
    // 第一条实际指令: void* i = data_bedd20
    void* i = data_bedd20
    int32_t result = 0
    
    while (i != 0)
        i = *(i + 0x470)
        result += 1
    
    return result
}
