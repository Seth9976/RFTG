// 函数名称: sub_5dace0
// 虚拟地址: 0x5dace0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dace0(int32_t* arg1, uint32_t arg2)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_5cce60("Passed a NULL sem")
        return 0xffffffff
    
    enum WAIT_EVENT eax_2 = WaitForSingleObject(*arg1, arg2)
    
    if (eax_2 == WAIT_OBJECT_0)
        InterlockedDecrement(&arg1[1])
        return 0
    
    if (eax_2 == WAIT_TIMEOUT)
        return 1
    
    sub_5cce60("WaitForSingleObject() failed")
    return 0xffffffff
}
