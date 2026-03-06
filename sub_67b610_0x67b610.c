// 函数名称: sub_67b610
// 虚拟地址: 0x67b610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67b610(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 4)
    void* result = *(arg1 + 4)
    
    if (result != 0)
        result = (*(result + 0x28))(arg1)
    
    *(arg1 + 0x14) = 0
    *(arg1 + 4) = 0
    return result
}
