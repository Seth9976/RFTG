// 函数名称: sub_67b640
// 虚拟地址: 0x67b640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67b640(void* arg1)
{
    // 第一条实际指令: void* result = (**(arg1 + 4))(arg1, 0, 0x84)
    void* result = (**(arg1 + 4))(arg1, 0, 0x84)
    *(result + 0x80) = 0
    return result
}
