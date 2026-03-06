// 函数名称: sub_5dea20
// 虚拟地址: 0x5dea20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5dea20(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* result = *(arg1 + 0x278)
    void* result = *(arg1 + 0x278)
    
    if (result == 0)
        return result
    
    return (*(result + 0x10))(arg2)
}
