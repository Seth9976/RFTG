// 函数名称: sub_47be30
// 虚拟地址: 0x47be30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_47be30(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: char const* const var_18
    char const* const var_18
    int32_t var_c
    
    if (arg1 s< 0x1d)
        if (arg1 s>= 0)
            arg1.b = arg3[arg1]
            return arg1
        
        char const* const var_8_2 = "ButtonSourceIsDown"
        var_c = 0xad2
        char const* const var_10_2 = "..\code\RftGVR.cpp"
        char* const var_14_2 = &data_83f3d3
        var_18 = "source >= 0"
    else if (arg1 - 0x1d s< 7)
        if (arg1 - 0x1d s>= 0)
            int32_t eax
            
            if (arg4 != 0)
                eax.b = arg3[arg1 + 7]
                return eax
            
            eax.b = arg3[arg1]
            return eax
        
        char const* const var_8_1 = "ButtonSourceIsDown"
        var_c = 0xacb
        char const* const var_10_1 = "..\code\RftGVR.cpp"
        char* const var_14_1 = &data_83f3d3
        var_18 = "idx >= 0"
    else
        char const* const var_8 = "ButtonSourceIsDown"
        var_c = 0xaca
        char const* const var_10 = "..\code\RftGVR.cpp"
        char* const var_14 = &data_83f3d3
        var_18 = "idx < NUM_BUTTONSOURCES_HANDED"
    
    sub_4c5870(var_18, &data_83f3d3, "..\code\RftGVR.cpp", var_c, "ButtonSourceIsDown")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
