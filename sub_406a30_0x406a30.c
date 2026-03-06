// 函数名称: sub_406a30
// 虚拟地址: 0x406a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_406a30(int32_t* arg1)
{
    // 第一条实际指令: if (WaitForSingleObject(arg1[3], 0xffffffff) != WAIT_OBJECT_0)
    if (WaitForSingleObject(arg1[3], 0xffffffff) != WAIT_OBJECT_0)
        sub_4c5870("Halt", &data_83f3d3, "..\code\Coroutine.cpp", 0x65, "mutex_lock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    arg1[1](arg1[2])
    *arg1 = 2
    
    if (ReleaseSemaphore(arg1[4], 1, nullptr) != 0)
        return 0
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\Coroutine.cpp", 0x6f, "mutex_release")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
