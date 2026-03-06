// 函数名称: sub_4d1890
// 虚拟地址: 0x4d1890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4d1890(int32_t* arg1, int32_t arg2 @ esi)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    void* i = *arg1
    int32_t result = 0
    
    while (i != 0)
        bool cond:0_1 = arg2 == *i
        i = *(i + 0x10)
        
        if (cond:0_1)
            return result
        
        result += 1
    
    sub_4c5870("Halt", &data_83f3d3, "NetSync.cpp", 0x214, "LookupClientIndex")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
