// 函数名称: sub_525980
// 虚拟地址: 0x525980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_525980(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: void* var_4 = arg3
    void* var_4 = arg3
    
    if (arg1 s>= *(arg3 + 0x19d0))
        sub_4c5870("i < ui.numChildren", &data_83f3d3, "UI2.cpp", 0x82f, "UI2GetChild")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 s>= 0)
        return sub_530500(arg3, *(arg3 + (arg1 << 2) + 0x15d0))
    
    sub_4c5870("i >= 0", &data_83f3d3, "UI2.cpp", 0x830, "UI2GetChild")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
