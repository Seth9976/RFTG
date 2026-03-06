// 函数名称: sub_4cce80
// 虚拟地址: 0x4cce80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4cce80(int32_t arg1)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (arg1 s<= 0)
        char const* const var_4 = "XMalloc"
        var_8 = 0x3b
        char const* const var_c = "xMemory.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "size > 0"
    else if (arg1 s< 0x77359400)
        int32_t result = __execvp(arg1, 0x10)
        
        if (result != 0)
            return result
        
        char const* const var_4_2 = "XMalloc"
        var_8 = 0x4f
        char const* const var_c_2 = "xMemory.cpp"
        char* const var_10_2 = &data_83f3d3
        var_14 = "pBuffer"
    else
        char const* const var_4_1 = "XMalloc"
        var_8 = 0x3c
        char const* const var_c_1 = "xMemory.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "size < 2000000000"
    
    sub_4c5870(var_14, &data_83f3d3, "xMemory.cpp", var_8, "XMalloc")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
