// 函数名称: sub_5dac50
// 虚拟地址: 0x5dac50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void**sub_5dac50(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_edi = 8
    int32_t __saved_edi = 8
    void** result = sub_5d0ac0()
    
    if (result == 0)
        sub_5cd050(0)
    else
        HANDLE eax = CreateSemaphoreW(nullptr, arg1, 0x8000, nullptr)
        result[1] = arg1
        *result = eax
        
        if (eax == 0)
            sub_5cce60("Couldn't create semaphore")
            void** result_1 = result
            sub_5d0af0()
            return 0
    
    return result
}
