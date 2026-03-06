// 函数名称: sub_5c2c90
// 虚拟地址: 0x5c2c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void** __convention("regparm")sub_5c2c90(void* arg1)
{
    // 第一条实际指令: void** result = sub_5a881a(0x18)
    void** result = sub_5a881a(0x18)
    
    if (result == 0)
        zip_error_set(arg1 + 8, 0xe, result)
        return 0
    
    *result = arg1
    zip_error_init(&result[1])
    result[4].b = 0
    result[5] = 0
    return result
}
