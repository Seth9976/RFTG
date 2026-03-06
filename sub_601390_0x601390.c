// 函数名称: sub_601390
// 虚拟地址: 0x601390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_601390(int32_t arg1)
{
    // 第一条实际指令: if (arg1 u> 0xb)
    if (arg1 u> 0xb)
        return 0
    
    PWSTR lpCursorName
    
    switch (arg1)
        case 0
            lpCursorName = 0x7f00
        case 1
            lpCursorName = 0x7f01
        case 2, 4
            lpCursorName = 0x7f02
        case 3
            lpCursorName = 0x7f03
        case 5
            lpCursorName = 0x7f82
        case 6
            lpCursorName = 0x7f83
        case 7
            lpCursorName = 0x7f84
        case 8
            lpCursorName = 0x7f85
        case 9
            lpCursorName = 0x7f86
        case 0xa
            lpCursorName = 0x7f88
        case 0xb
            lpCursorName = 0x7f89
    
    int32_t var_10 = 8
    int32_t var_14 = 1
    void* result = sub_5d0ad0()
    
    if (result == 0)
        sub_5cd050(0)
        return result
    
    *(result + 4) = LoadCursorW(nullptr, lpCursorName)
    return result
}
