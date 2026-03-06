// 函数名称: sub_4d11f0
// 虚拟地址: 0x4d11f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_4d11f0(int32_t* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: void* i = *arg1
    void* i = *arg1
    void* result = i
    
    while (i != 0)
        bool cond:0_1 = *i == arg2
        i = *(i + 0x10)
        
        if (cond:0_1)
            return result
        
        result = i
    
    sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x155, "FindClientData")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
