// 函数名称: sub_5c38f0
// 虚拟地址: 0x5c38f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_5c38f0(int128_t* arg1, uint32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: if (arg2 == 0)
    if (arg2 == 0)
        return 0
    
    int128_t* result = sub_5a881a(arg2)
    
    if (result != 0)
        sub_5ab990(result, arg1, arg2)
        return result
    
    zip_error_set(arg3, 0xe, result)
    return 0
}
