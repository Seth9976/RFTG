// 函数名称: sub_664090
// 虚拟地址: 0x664090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_664090(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg1 == 0 || arg3 != 0x40)
    if (arg1 == 0 || arg3 != 0x40)
        return 0
    
    *(arg1 + 0x40) = arg2
    return arg1
}
