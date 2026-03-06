// 函数名称: sub_406d90
// 虚拟地址: 0x406d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_406d90(int32_t* arg1 @ esi)
{
    // 第一条实际指令: void** eax = *arg1
    void** eax = *arg1
    
    if (eax == 0)
        sub_4c5870("handle != NULL", &data_83f3d3, "..\code\Coroutine.cpp", 0x113, "co_destroy")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (data_27c05e0 == 0)
        int32_t result = sub_406ce0(eax)
        *arg1 = 0
        return result
    
    sub_4c5870("g_current_coroutine == NULL", &data_83f3d3, "..\code\Coroutine.cpp", 0x114, 
        "co_destroy")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
