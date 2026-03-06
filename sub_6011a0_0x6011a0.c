// 函数名称: sub_6011a0
// 虚拟地址: 0x6011a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_6011a0()
{
    // 第一条实际指令: int32_t var_8 = 8
    int32_t var_8 = 8
    int32_t var_c = 1
    void* result = sub_5d0ad0()
    
    if (result == 0)
        sub_5cd050(0)
        return result
    
    *(result + 4) = LoadCursorW(nullptr, 0x7f00)
    return result
}
