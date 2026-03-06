// 函数名称: sub_66e950
// 虚拟地址: 0x66e950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_66e950(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0 && *(arg1 + 0x13c) u< 8)
    if (arg1 != 0 && *(arg1 + 0x13c) u< 8)
        *(arg1 + 0x74) |= 4
        *(arg1 + 0x13d) = 8
    
    return arg1
}
