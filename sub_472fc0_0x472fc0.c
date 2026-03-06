// 函数名称: sub_472fc0
// 虚拟地址: 0x472fc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_472fc0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: char const* const var_18
    char const* const var_18
    int32_t var_c
    
    if (arg1 s>= 0)
        if (arg4 s> arg3 || arg3 == 0xffffffff || arg2 s>= 0)
            return 
        
        char const* const var_8_1 = "CalcTimeUsed"
        var_c = 0x1548
        char const* const var_10_1 = "..\code\RFTGShared.cpp"
        char* const var_14_1 = &data_83f3d3
        var_18 = "timeDiff >= 0"
    else
        char const* const var_8 = "CalcTimeUsed"
        var_c = 0x1545
        char const* const var_10 = "..\code\RFTGShared.cpp"
        char* const var_14 = &data_83f3d3
        var_18 = "timeSpent >= 0"
    
    sub_4c5870(var_18, &data_83f3d3, "..\code\RFTGShared.cpp", var_c, "CalcTimeUsed")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
