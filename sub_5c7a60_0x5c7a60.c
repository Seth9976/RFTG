// 函数名称: sub_5c7a60
// 虚拟地址: 0x5c7a60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c7a60(int32_t* arg1)
{
    // 第一条实际指令: int32_t* i = data_bed774
    for (int32_t* i = data_bed774; i != 0; i = i[6])
        if (sub_5cd130(arg1, i, 0x10) == 0)
            return i
    
    return 0
}
