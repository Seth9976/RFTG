// 函数名称: sub_406ba0
// 虚拟地址: 0x406ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_406ba0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x18)
            esi_2 = edx + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* lpParameter = *esi_2
    *esi_2 = *lpParameter
    *lpParameter = 0
    lpParameter[3] = 0
    lpParameter[4] = 0
    lpParameter[5] = 0
    lpParameter[1] = sub_472720
    lpParameter[2] = arg1
    lpParameter[4] = CreateSemaphoreA(nullptr, 1, 1, nullptr)
    lpParameter[3] = CreateSemaphoreA(nullptr, 1, 1, nullptr)
    HANDLE hHandle = lpParameter[4]
    *lpParameter = 0
    
    if (WaitForSingleObject(hHandle, 0xffffffff) != WAIT_OBJECT_0)
        sub_4c5870("Halt", &data_83f3d3, "..\code\Coroutine.cpp", 0x65, "mutex_lock")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (WaitForSingleObject(lpParameter[3], 0xffffffff) == WAIT_OBJECT_0)
        lpParameter[5] = CreateThread(nullptr, 0x100000, sub_406a30, lpParameter, 
            THREAD_CREATE_RUN_IMMEDIATELY, nullptr)
        return lpParameter
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\Coroutine.cpp", 0x65, "mutex_lock")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
