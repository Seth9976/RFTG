// 函数名称: sub_5bfce0
// 虚拟地址: 0x5bfce0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5bfce0(int32_t arg1)
{
    // 第一条实际指令: int32_t* result = sub_5a881a(0x50)
    int32_t* result = sub_5a881a(0x50)
    
    if (result == 0)
        return result
    
    if (arg1 == 0)
        sub_5bf810(result)
        *result = 0
        *(result + 5) = 1
        return result
    
    __builtin_memcpy(result, arg1, 0x50)
    *result = 0
    *(result + 5) = 1
    return result
}
