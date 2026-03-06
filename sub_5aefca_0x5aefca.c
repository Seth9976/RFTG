// 函数名称: sub_5aefca
// 虚拟地址: 0x5aefca
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_5aefca(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* result = arg3
    void* result = arg3
    
    while (*(result + 4) != arg2)
        result += 0xc
        
        if (result u>= 0x90 + arg3)
            break
    
    if (result u< 0x90 + arg3 && *(result + 4) == arg2)
        return result
    
    return nullptr
}
