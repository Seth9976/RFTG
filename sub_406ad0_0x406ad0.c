// 函数名称: sub_406ad0
// 虚拟地址: 0x406ad0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

enum WAIT_EVENTsub_406ad0()
{
    // 第一条实际指令: int32_t* esi = data_27c05e0
    int32_t* esi = data_27c05e0
    
    if (esi == 0)
        sub_4c5870("g_current_coroutine", &data_83f3d3, "..\code\Coroutine.cpp", 0xe8, "co_yield")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ReleaseSemaphore(esi[4], 1, nullptr) == 0)
        sub_4c5870("Halt", &data_83f3d3, "..\code\Coroutine.cpp", 0x6f, "mutex_release")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    enum WAIT_EVENT result = WaitForSingleObject(esi[3], 0xffffffff)
    
    if (result == WAIT_OBJECT_0)
        if (*esi != 3)
            return result
        
        ExitThread(0)
        noreturn
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\Coroutine.cpp", 0x65, "mutex_lock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
