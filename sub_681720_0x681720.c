// 函数名称: sub_681720
// 虚拟地址: 0x681720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_681720(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x1c4)
    void* result = *(arg1 + 0x1c4)
    *(result + 0x24) = 0
    *(result + 0x2c) = *(arg1 + 0x74)
    return result
}
