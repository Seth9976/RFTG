// 函数名称: sub_5d6dc0
// 虚拟地址: 0x5d6dc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5d6dc0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: char* result = nullptr
    char* result = nullptr
    int32_t* eax_1 = sub_5d8610(arg2)
    
    if (eax_1 != 0)
        result = sub_5d6b20(arg1, eax_1, arg3)
        sub_5d86c0(eax_1)
    
    return result
}
