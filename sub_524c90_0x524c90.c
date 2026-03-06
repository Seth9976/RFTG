// 函数名称: sub_524c90
// 虚拟地址: 0x524c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_524c90(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t ecx = *(arg3 + 0x19d4)
    int32_t ecx = *(arg3 + 0x19d4)
    
    if (arg1 s< ecx)
        int32_t edx = *(arg3 + (arg1 << 2) + 0x15d0)
        
        if (arg1 s>= *(arg3 + 0x19d0))
            *(arg3 + 0x19d0) = arg1 + 1
        
        return sub_530500(ecx, edx) __tailcall
    
    int32_t edx_1 = *(arg3 + 0x19d0)
    
    if (arg1 != edx_1)
        sub_4c5870("idx == parent.numChildren", &data_83f3d3, "UI2.cpp", 0x717, "UI2GetOrAllocChild")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 != ecx)
        sub_4c5870("idx == parent.numTotalChildren", &data_83f3d3, "UI2.cpp", 0x718, 
            "UI2GetOrAllocChild")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (edx_1 s< 0x100)
        return sub_524bd0(arg3)
    
    sub_4c5870("parent.numChildren < MAX_CHILDREN", &data_83f3d3, "UI2.cpp", 0x719, 
        "UI2GetOrAllocChild")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
