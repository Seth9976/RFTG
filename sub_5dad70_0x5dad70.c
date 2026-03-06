// 函数名称: sub_5dad70
// 虚拟地址: 0x5dad70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dad70(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_5cce60("Passed a NULL sem")
        return 0xffffffff
    
    InterlockedIncrement(&arg1[1])
    
    if (ReleaseSemaphore(*arg1, 1, nullptr) != 0)
        return 0
    
    InterlockedDecrement(&arg1[1])
    sub_5cce60("ReleaseSemaphore() failed")
    return 0xffffffff
}
