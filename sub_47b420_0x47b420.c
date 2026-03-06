// 函数名称: sub_47b420
// 虚拟地址: 0x47b420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_47b420(int32_t arg1, char arg2, void* arg3, int32_t arg4, char arg5)
{
    // 第一条实际指令: char const* const var_18
    char const* const var_18
    int32_t var_c
    
    if (arg1 - 0x1d s< 7)
        if (arg1 - 0x1d s>= 0)
            if (arg4 != 0)
                *(arg3 + 0x24 + arg1 - 0x1d) = arg5
                return arg1 - 0x1d
            
            (arg3 + 0x1d)[arg1 - 0x1d] = arg5
            return arg1 - 0x1d
        
        char const* const var_8_1 = "ButtonSourceCacheSetHand"
        var_c = 0x8e9
        char const* const var_10_1 = "..\code\RftGVR.cpp"
        char* const var_14_1 = &data_83f3d3
        var_18 = "idx >= 0"
    else
        char const* const var_8 = "ButtonSourceCacheSetHand"
        var_c = 0x8e8
        char const* const var_10 = "..\code\RftGVR.cpp"
        char* const var_14 = &data_83f3d3
        var_18 = "idx < NUM_BUTTONSOURCES_HANDED"
    
    sub_4c5870(var_18, &data_83f3d3, "..\code\RftGVR.cpp", var_c, "ButtonSourceCacheSetHand")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
