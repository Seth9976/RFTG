// 函数名称: sub_66e930
// 虚拟地址: 0x66e930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_66e930(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0 && *(arg1 + 0x13c) == 0x10)
    if (arg1 != 0 && *(arg1 + 0x13c) == 0x10)
        *(arg1 + 0x74) |= 0x10
    
    return arg1
}
