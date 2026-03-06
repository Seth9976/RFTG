// 函数名称: sub_406e20
// 虚拟地址: 0x406e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

enum WAIT_EVENTsub_406e20(int32_t* arg1 @ edi)
{
    // 第一条实际指令: if (data_27c05e0 != 0)
    if (data_27c05e0 != 0)
        sub_4c5870("g_current_coroutine == NULL", &data_83f3d3, "..\code\Coroutine.cpp", 0x122, 
            "co_resume")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void** esi = *arg1
    HANDLE hSemaphore = esi[3]
    data_27c05e0 = esi
    
    if (ReleaseSemaphore(hSemaphore, 1, nullptr) == 0)
        sub_4c5870("Halt", &data_83f3d3, "..\code\Coroutine.cpp", 0x6f, "mutex_release")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (WaitForSingleObject(esi[4], 0xffffffff) != WAIT_OBJECT_0)
        sub_4c5870("Halt", &data_83f3d3, "..\code\Coroutine.cpp", 0x65, "mutex_lock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    bool cond:1 = *esi != 2
    data_27c05e0 = 0
    
    if (cond:1)
        enum WAIT_EVENT eax_4
        eax_4.b = 1
        return eax_4
    
    sub_406ce0(esi)
    *arg1 = 0
    int32_t eax_7
    eax_7.b = 0
    return eax_7
}
