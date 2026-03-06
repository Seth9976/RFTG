// 函数名称: sub_5d5830
// 虚拟地址: 0x5d5830
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5d5830(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = data_bf7f78
    int32_t* result = data_bf7f78
    
    if (result == arg1)
        return result
    
    if (result != 0)
        sub_5d6e90(result, 0xb, 0, 0)
    
    data_bf7f78 = arg1
    
    if (arg1 != 0)
        sub_5d6e90(arg1, 0xa, 0, 0)
    
    return sub_5d56c0(0)
}
