// 函数名称: sub_528f30
// 虚拟地址: 0x528f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_528f30(int32_t arg1)
{
    // 第一条实际指令: char const* const var_14
    char const* const var_14
    int32_t var_8
    
    if (arg1 s>= 0)
        if (arg1 s< data_30d94f0)
            return *((arg1 << 3) + &data_30d74f0)
        
        char const* const var_4_1 = "UI2GetIndex"
        var_8 = 0xeb8
        char const* const var_c_1 = "UI2.cpp"
        char* const var_10_1 = &data_83f3d3
        var_14 = "index < gUI2Editor.numDisplayEls"
    else
        char const* const var_4 = "UI2GetIndex"
        var_8 = 0xeb7
        char const* const var_c = "UI2.cpp"
        char* const var_10 = &data_83f3d3
        var_14 = "index >= 0"
    
    sub_4c5870(var_14, &data_83f3d3, "UI2.cpp", var_8, "UI2GetIndex")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
