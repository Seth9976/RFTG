// 函数名称: sub_5a877d
// 虚拟地址: 0x5a877d
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5a877d(int32_t arg1, void* arg2)
{
    // 第一条实际指令: if (arg1 s>= 0x14)
    if (arg1 s>= 0x14)
        return EnterCriticalSection(arg2 + 0x20)
    
    sub_5aeedd(arg1 + 0x10)
    *(arg2 + 0xc) |= 0x8000
    return arg2
}
