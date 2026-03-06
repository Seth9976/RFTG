// 函数名称: sub_5c1c70
// 虚拟地址: 0x5c1c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5c1c70(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = sub_5a881a(0x38)
    int32_t* result = sub_5a881a(0x38)
    
    if (result == 0)
        zip_error_set(arg1, 0xe, 0)
        return 0
    
    *result = 0
    result[1] = 0
    result[2] = 0
    result[8] = 0
    result[9] = 0
    result[0xa].b = 0
    result[0xb] = 0
    result[0xc] = 1
    zip_error_init(&result[3])
    return result
}
