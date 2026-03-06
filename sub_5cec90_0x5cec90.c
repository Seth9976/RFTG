// 函数名称: sub_5cec90
// 虚拟地址: 0x5cec90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cec90(PSTR arg1)
{
    // 第一条实际指令: int32_t result = sub_5d2340(arg1)
    int32_t result = sub_5d2340(arg1)
    
    for (char** i = data_bedd1c; i != 0; i = i[4])
        if (sub_5cd590(arg1, *i) == 0)
            if (result == 0 || i[2] == 2)
                return i[1]
            
            break
    
    return result
}
